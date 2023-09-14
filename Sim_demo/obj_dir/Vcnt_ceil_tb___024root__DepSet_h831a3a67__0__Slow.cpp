// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnt_ceil_tb.h for the primary calling header

#include "verilated.h"

#include "Vcnt_ceil_tb__Syms.h"
#include "Vcnt_ceil_tb___024root.h"

VL_ATTR_COLD void Vcnt_ceil_tb___024root___eval_static(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root___eval_initial__TOP(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->cnt_ceil_tb__DOT__clk = 0U;
    vlSelf->cnt_ceil_tb__DOT__en = 0U;
    vlSelf->cnt_ceil_tb__DOT__rst_n = 1U;
    vlSelf->cnt_ceil_tb__DOT__ceil = 0xcU;
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root___eval_final(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root___eval_settle(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnt_ceil_tb___024root___dump_triggers__act(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cnt_ceil_tb.clk or negedge cnt_ceil_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnt_ceil_tb___024root___dump_triggers__nba(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cnt_ceil_tb.clk or negedge cnt_ceil_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcnt_ceil_tb___024root___ctor_var_reset(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->cnt_ceil_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cnt_ceil_tb__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->cnt_ceil_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cnt_ceil_tb__DOT__ceil = VL_RAND_RESET_I(4);
    vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
