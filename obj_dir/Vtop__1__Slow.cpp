// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_reset_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(544, i_col_val);
    VL_RAND_RESET_W(170, i_row_val);
    o_val = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048, top__DOT__sum_out);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__0__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__1__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__2__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__4__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__5__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__6__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__7__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__8__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__9__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__10__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__11__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__12__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__13__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__14__KET____DOT__example__DOT__flops_next);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops);
    VL_RAND_RESET_W(136, top__DOT__gen1__BRA__3__KET____DOT__gen2__BRA__15__KET____DOT__example__DOT__flops_next);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
