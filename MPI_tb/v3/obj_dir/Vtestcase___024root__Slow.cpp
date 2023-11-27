// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcase.h for the primary calling header

#include "verilated.h"

#include "Vtestcase__Syms.h"
#include "Vtestcase__Syms.h"
#include "Vtestcase___024root.h"

void Vtestcase___024root___ctor_var_reset(Vtestcase___024root* vlSelf);

Vtestcase___024root::Vtestcase___024root(Vtestcase__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestcase___024root___ctor_var_reset(this);
}

void Vtestcase___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestcase___024root::~Vtestcase___024root() {
}
