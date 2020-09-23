use std::io::{BufReader,BufRead,BufWriter,Write};
use std::path::PathBuf;
use std::fs::File;
use std::process::Command;
use clap::Clap;
use regex::Regex;
use lazy_static::lazy_static;
lazy_static! {
    static ref re : Regex = Regex::new("DOT__([a-zA-Z0-9]*)__BRA__([0-9]*)__KET").unwrap();
    static ref re_l : Regex = Regex::new(r"\[([0-9A-Z]*)\]").unwrap();
    static ref re_endl : Regex = Regex::new(r"DOT__([a-zA-Z0-9_]*)").unwrap();
    static ref EXAMPLE: u8 = 42;
}




fn to_rolled(line: &str) -> Option<String> {
    let mut rstr : String = String::new();
    rstr.reserve(300);
    let mut indices : String = String::new();
    indices.reserve(10);
    let mut start_idx = 0;
    for cap in re.captures_iter(line){
        let (start, end)  = (cap.get(0).unwrap().start(), cap.get(0).unwrap().end());
        rstr.push_str(&line[start_idx..start]);
        rstr = format!("{}DOT__{}",rstr,cap.get(1).unwrap().as_str());
        indices = format!("{}[{}]",indices,cap.get(2).unwrap().as_str(),);
        start_idx = end;
    }
    

    rstr.push_str(&line[start_idx..line.len()]);
    let insert_pos = if let Some(cap) = re_endl.captures(rstr.as_str()) {
        cap.get(0).unwrap().end()
    } else {
        0
    };

    if let Some(innermost_idx) = re_l.captures_iter(line)
        .collect::<Vec<regex::Captures<>>>()
        .last()
    {
        let a = innermost_idx.get(0)
        .unwrap()
        .as_str();
        let loc = rstr.rfind(a).unwrap() -1;
        rstr.replace_range(loc..loc+a.len()+2,format!("{}{}",indices.as_str(),a).as_str());
        Some(rstr)
    } else {
        if start_idx != 0 {
            rstr.insert_str(insert_pos,indices.as_str());
            Some(rstr) 
        }
        else {
            None
        }
    }
        
    
}


#[derive(Clap)]
#[clap(version = "1.0", author = "Jimmy <jimmy@1024bees.com>")]
struct Opts {
    /// path to output verilator files
    #[clap(short,long,default_value = "../../mod_dir")]
    input: PathBuf,
   
    /// module name
    #[clap(short,long,default_value = "top")]
    mod_name : String,
}



fn file_valid(line : &str) -> bool {
    line.contains(".h")  || line.contains(".cpp") || line.contains(".mk")
}


fn main()  -> std::io::Result<()> {
    let opts= Opts::parse();
    let mod_name = opts.mod_name;
    let verilated_srcs = opts.input;
    let mut top_path : PathBuf = verilated_srcs.clone();
    let mut files = Command::new("ls")
        .arg("../../mod_dir/")
        .output()
        .expect("failed ls");

    
    let fileout = String::from_utf8(files.stdout).unwrap();
    

    std::fs::create_dir("output");
    for file in fileout.lines() {
        
        if file_valid(file) {
            let top_content = BufReader::new(File::open(format!("{}/{}",top_path.to_str().unwrap(),file))?);

            let mut br = BufWriter::new(File::create(format!("output/{}",file))?);

            for line in top_content.lines() {
                let fline = line?;
                match to_rolled(fline.as_str()) {
                    Some(payload) => {
                        br.write(payload.as_ref())?;
                        br.write("\n".as_bytes());
                    }
                    None => { 
                        br.write(fline.as_ref())?;
                        br.write("\n".as_bytes());

                    }
                };
            }
        }
    }

    Ok(())
}



