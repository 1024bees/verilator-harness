module top(
  input i_clk,
  input i_reset_n,
  input [15:0] [33:0] i_col_val,
  input [4:0] [33:0] i_row_val,
  output [31:0] o_val
);


  localparam NUM_ROWS = 4;
  localparam NUM_COLS = 16;


wire [63:0] [31:0] sum_out;

genvar rr, cc;
generate
  for (rr=0; rr<4; rr=rr+1) begin : gen1
    for (cc=0; cc<16; cc=cc+1) begin : gen2
      example_module example(
        .i_clk      (i_clk),
        .i_reset_n  (i_reset_n),
        .i_a          (i_row_val[rr]),
        .i_b          (i_col_val[cc]),
        .o_sum        (sum_out[rr * 16 + cc])
      );
      end
    end
endgenerate
endmodule


module example_module(
  input i_clk,
  input i_reset_n,
  input [33:0] i_a,
  input [33:0] i_b,
  output [31:0] o_sum
);


  wire [33:0] sum, mult;
  logic [3:0] [33:0] flops, flops_next;

  assign o_sum = flops[3];


  assign sum = i_a + i_b;
  assign mult = i_a * i_b;
  always_ff @(posedge i_clk) begin
    if (~i_reset_n) begin
      flops <= 0;
    end else begin
      flops <= flops_next;
    end
  end

  always_comb begin
    flops_next[0] = sum;
    flops_next[1] = mult;
    flops_next[2] = flops[0] ^ flops[1];
    flops_next[3] = flops[3] + flops[2];
  end
endmodule



