// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNorTestBench.h for the primary calling header

#include "verilated.h"

#include "VNorTestBench__Syms.h"
#include "VNorTestBench__Syms.h"
#include "VNorTestBench___024root.h"

void VNorTestBench___024root___ctor_var_reset(VNorTestBench___024root* vlSelf);

VNorTestBench___024root::VNorTestBench___024root(VNorTestBench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNorTestBench___024root___ctor_var_reset(this);
}

void VNorTestBench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VNorTestBench___024root::~VNorTestBench___024root() {
}
