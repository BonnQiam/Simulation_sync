// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcase.h for the primary calling header

#include "verilated.h"

#include "Vtestcase__Syms.h"
#include "Vtestcase__Syms.h"
#include "Vtestcase___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcase___024root___dump_triggers__act(Vtestcase___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestcase___024root___eval_triggers__act(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->testcase__DOT__inst_harness__DOT__Clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__Clock__0))) 
                                     | ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__Rst_n__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__Clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__Clock__0))));
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Clock)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__Clock__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a__0)));
    vlSelf->__VactTriggered.set(5U, ((((((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a__0)) 
                                        | ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out__0))) 
                                       | ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a__0))) 
                                      | ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a__0))) 
                                     | ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a__0))));
    vlSelf->__VactTriggered.set(6U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__Clock__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__Clock;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__Rst_n__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__Rst_n;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a;
    vlSelf->__Vtrigprevexpr___TOP__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a__0 
        = vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestcase___024root___dump_triggers__act(vlSelf);
    }
#endif
}
