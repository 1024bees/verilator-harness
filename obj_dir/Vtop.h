// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset_n,0,0);
    VL_OUT(o_val,31,0);
    VL_INW(i_col_val,543,0,17);
    VL_INW(i_row_val,169,0,6);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        WData/*2047:0*/ top__DOT__sum_out[64];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops[5];
    };
    struct {
        WData/*135:0*/ top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next[5];
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops[5];
    };
    struct {
        WData/*135:0*/ top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next[5];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
