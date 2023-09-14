// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcnt_ceil_tb__Syms.h"


VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_init_sub__TOP__0(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("cnt_ceil_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"rst_n", false,-1);
    tracep->declBus(c+4,"ceil", false,-1, 3,0);
    tracep->declBus(c+5,"cnt", false,-1, 3,0);
    tracep->declBit(c+6,"co", false,-1);
    tracep->pushNamePrefix("cnt_ceil_0 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"rst_n", false,-1);
    tracep->declBus(c+4,"ceil", false,-1, 3,0);
    tracep->declBus(c+5,"cnt", false,-1, 3,0);
    tracep->declBit(c+6,"co", false,-1);
    tracep->declBus(c+5,"cnt_reg", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_init_top(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_init_top\n"); );
    // Body
    Vcnt_ceil_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcnt_ceil_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcnt_ceil_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_register(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcnt_ceil_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcnt_ceil_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcnt_ceil_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_full_sub_0(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_full_top_0\n"); );
    // Init
    Vcnt_ceil_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcnt_ceil_tb___024root*>(voidSelf);
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcnt_ceil_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcnt_ceil_tb___024root__trace_full_sub_0(Vcnt_ceil_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcnt_ceil_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcnt_ceil_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->cnt_ceil_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->cnt_ceil_tb__DOT__en));
    bufp->fullBit(oldp+3,(vlSelf->cnt_ceil_tb__DOT__rst_n));
    bufp->fullCData(oldp+4,(vlSelf->cnt_ceil_tb__DOT__ceil),4);
    bufp->fullCData(oldp+5,(vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg),4);
    bufp->fullBit(oldp+6,(((IData)(vlSelf->cnt_ceil_tb__DOT__en) 
                           & ((IData)(vlSelf->cnt_ceil_tb__DOT__ceil) 
                              == (IData)(vlSelf->cnt_ceil_tb__DOT__cnt_ceil_0__DOT__cnt_reg)))));
}
