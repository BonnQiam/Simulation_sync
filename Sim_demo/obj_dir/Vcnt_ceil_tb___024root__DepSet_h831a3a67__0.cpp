// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnt_ceil_tb.h for the primary calling header

#include "verilated.h"

#include "Vcnt_ceil_tb__Syms.h"
#include "Vcnt_ceil_tb___024root.h"

VL_ATTR_COLD void Vcnt_ceil_tb___024root___eval_initial__TOP(Vcnt_ceil_tb___024root* vlSelf);
VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__0(Vcnt_ceil_tb___024root* vlSelf);
VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__1(Vcnt_ceil_tb___024root* vlSelf);
VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__2(Vcnt_ceil_tb___024root* vlSelf);
VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__3(Vcnt_ceil_tb___024root* vlSelf);
VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__4(Vcnt_ceil_tb___024root* vlSelf);

void Vcnt_ceil_tb___024root___eval_initial(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial\n"); );
    // Body
    Vcnt_ceil_tb___024root___eval_initial__TOP(vlSelf);
    Vcnt_ceil_tb___024root___eval_initial__TOP__0(vlSelf);
    Vcnt_ceil_tb___024root___eval_initial__TOP__1(vlSelf);
    Vcnt_ceil_tb___024root___eval_initial__TOP__2(vlSelf);
    Vcnt_ceil_tb___024root___eval_initial__TOP__3(vlSelf);
    Vcnt_ceil_tb___024root___eval_initial__TOP__4(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__clk__0 
        = vlSelf->cnt_ceil_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__cnt_ceil_tb__DOT__rst_n__0 
        = vlSelf->cnt_ceil_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__0(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, "cnt_ceil_tb.v", 
                                           28);
        vlSelf->cnt_ceil_tb__DOT__clk = (1U & (~ (IData)(vlSelf->cnt_ceil_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__1(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, "cnt_ceil_tb.v", 
                                       31);
    vlSelf->cnt_ceil_tb__DOT__en = 1U;
    co_await vlSelf->__VdlySched.delay(0x63ULL, "cnt_ceil_tb.v", 
                                       32);
    vlSelf->cnt_ceil_tb__DOT__en = 0U;
}

VL_INLINE_OPT VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__2(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, "cnt_ceil_tb.v", 
                                       35);
    vlSelf->cnt_ceil_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, "cnt_ceil_tb.v", 
                                       36);
    vlSelf->cnt_ceil_tb__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__3(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial__TOP__3\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x28ULL, "cnt_ceil_tb.v", 
                                       39);
    vlSelf->cnt_ceil_tb__DOT__ceil = 6U;
}

VL_INLINE_OPT VlCoroutine Vcnt_ceil_tb___024root___eval_initial__TOP__4(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_initial__TOP__4\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x6eULL, "cnt_ceil_tb.v", 
                                       43);
    VL_FINISH_MT("cnt_ceil_tb.v", 43, "");
}

void Vcnt_ceil_tb___024root___eval_act(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcnt_ceil_tb___024root___nba_sequent__TOP__0(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->cnt_ceil_tb__DOT__rst_n) {
        if (vlSelf->cnt_ceil_tb__DOT__en) {
            vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg 
                = (((IData)(vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg) 
                    >= (IData)(vlSelf->cnt_ceil_tb__DOT__ceil))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg))));
        }
    } else {
        vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg = 0U;
    }
}

void Vcnt_ceil_tb___024root___eval_nba(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcnt_ceil_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcnt_ceil_tb___024root___eval_triggers__act(Vcnt_ceil_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnt_ceil_tb___024root___dump_triggers__act(Vcnt_ceil_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcnt_ceil_tb___024root___timing_resume(Vcnt_ceil_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcnt_ceil_tb___024root___dump_triggers__nba(Vcnt_ceil_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcnt_ceil_tb___024root___eval(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcnt_ceil_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcnt_ceil_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cnt_ceil_tb.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcnt_ceil_tb___024root___timing_resume(vlSelf);
                Vcnt_ceil_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcnt_ceil_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cnt_ceil_tb.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcnt_ceil_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vcnt_ceil_tb___024root___timing_resume(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vcnt_ceil_tb___024root___eval_debug_assertions(Vcnt_ceil_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
