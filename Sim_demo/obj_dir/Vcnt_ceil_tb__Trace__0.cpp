// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcnt_ceil_tb__Syms.h"


void Vcnt_ceil_tb___024root__trace_chg_sub_0(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcnt_ceil_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vcnt_ceil_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnt_ceil_tb___024root*>(voidSelf);
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcnt_ceil_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcnt_ceil_tb___024root__trace_chg_sub_0(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->cnt_ceil_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelf->cnt_ceil_tb__DOT__en));
    bufp->chgBit(oldp+2,(vlSelf->cnt_ceil_tb__DOT__rst_n));
    bufp->chgCData(oldp+3,(vlSelf->cnt_ceil_tb__DOT__ceil),4);
    bufp->chgCData(oldp+4,(vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg),4);
    bufp->chgBit(oldp+5,(((IData)(vlSelf->cnt_ceil_tb__DOT__en) 
                          & ((IData)(vlSelf->cnt_ceil_tb__DOT__ceil) 
                             == (IData)(vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg)))));
}

void Vcnt_ceil_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_cleanup\n"); );
    // Init
    Vcnt_ceil_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnt_ceil_tb___024root*>(voidSelf);
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
