// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnt_ceil_tb.h for the primary calling header

#include "verilated.h"

#include "Vcnt_ceil_tb__Syms.h"
#include "Vcnt_ceil_tb__Syms.h"
#include "Vcnt_ceil_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnt_ceil_tb___024root___dump_triggers__act(Vcnt_ceil_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcnt_ceil_tb___024root___eval_triggers__act(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->cnt_ceil_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->cnt_ceil_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__clk__0 
        = vlSelf->cnt_ceil_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__rst_n__0 
        = vlSelf->cnt_ceil_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcnt_ceil_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
