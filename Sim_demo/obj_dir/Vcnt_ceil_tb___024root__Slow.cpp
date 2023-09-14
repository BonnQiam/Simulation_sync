// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcnt_ceil_tb.h for the primary calling header

#include "verilated.h"

#include "Vcnt_ceil_tb__Syms.h"
#include "Vcnt_ceil_tb__Syms.h"
#include "Vcnt_ceil_tb___024root.h"

void Vcnt_ceil_tb___024root___ctor_var_reset(Vcnt_ceil_tb___024root* vlSelf);

Vcnt_ceil_tb___024root::Vcnt_ceil_tb___024root(Vcnt_ceil_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcnt_ceil_tb___024root___ctor_var_reset(this);
}

void Vcnt_ceil_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcnt_ceil_tb___024root::~Vcnt_ceil_tb___024root() {
}
