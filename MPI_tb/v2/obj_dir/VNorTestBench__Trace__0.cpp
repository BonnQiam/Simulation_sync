// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNorTestBench__Syms.h"


void VNorTestBench___024root__trace_chg_sub_0(VNorTestBench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VNorTestBench___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNorTestBench___024root__trace_chg_top_0\n"); );
    // Init
    VNorTestBench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNorTestBench___024root*>(voidSelf);
    VNorTestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VNorTestBench___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VNorTestBench___024root__trace_chg_sub_0(VNorTestBench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VNorTestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNorTestBench___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_b));
        bufp->chgCData(oldp+1,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_reg_a),8);
        bufp->chgBit(oldp+2,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_reg_b));
        bufp->chgBit(oldp+3,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_b));
        bufp->chgBit(oldp+4,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_b));
        bufp->chgBit(oldp+5,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b));
        bufp->chgBit(oldp+6,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_b));
        bufp->chgBit(oldp+7,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x));
        bufp->chgBit(oldp+8,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_b));
        bufp->chgBit(oldp+9,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_rden_reg_b));
        bufp->chgBit(oldp+10,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_b));
        bufp->chgBit(oldp+11,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_b));
        bufp->chgBit(oldp+12,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__good_to_go_b));
        bufp->chgBit(oldp+13,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_b));
        bufp->chgCData(oldp+14,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__wa_mult_x),8);
        bufp->chgIData(oldp+15,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_numwords_a),32);
        bufp->chgIData(oldp+16,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_numwords_b),32);
        bufp->chgIData(oldp+17,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
        bufp->chgIData(oldp+18,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i),32);
        bufp->chgBit(oldp+19,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIX__Vstatic__is_stratix));
        bufp->chgBit(oldp+20,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx));
        bufp->chgBit(oldp+21,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_HARDCOPYSTRATIX__Vstatic__is_hardcopystratix));
        bufp->chgBit(oldp+22,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii));
        bufp->chgBit(oldp+23,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx));
        bufp->chgBit(oldp+24,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii));
        bufp->chgBit(oldp+25,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii));
        bufp->chgBit(oldp+26,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii));
        bufp->chgBit(oldp+27,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc));
        bufp->chgBit(oldp+28,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii));
        bufp->chgBit(oldp+29,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_MEGARAM__Vstatic__var_family_has_megaram));
        bufp->chgBit(oldp+30,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_M512__Vstatic__var_family_has_m512));
        bufp->chgBit(oldp+31,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+32,(vlSelf->NorTestBench__DOT__Mpi_addr),6);
        bufp->chgBit(oldp+33,(vlSelf->NorTestBench__DOT__Mpi_cs_n));
        bufp->chgBit(oldp+34,(vlSelf->NorTestBench__DOT__Mpi_rw));
        bufp->chgBit(oldp+35,(vlSelf->NorTestBench__DOT__Mpi_oe));
        bufp->chgCData(oldp+36,(vlSelf->NorTestBench__DOT__Data_out),8);
        bufp->chgCData(oldp+37,(vlSelf->NorTestBench__DOT__Data_in),8);
        bufp->chgIData(oldp+38,(vlSelf->NorTestBench__DOT__Write_Out_File),32);
        bufp->chgIData(oldp+39,(vlSelf->NorTestBench__DOT__ACCESS__DOT__i),32);
        bufp->chgCData(oldp+40,((0x1fU & (IData)(vlSelf->NorTestBench__DOT__Mpi_addr))),5);
        bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSelf->NorTestBench__DOT__Mpi_rw)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+42,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[0]),8);
        bufp->chgCData(oldp+43,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[1]),8);
        bufp->chgCData(oldp+44,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[2]),8);
        bufp->chgCData(oldp+45,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[3]),8);
        bufp->chgCData(oldp+46,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[4]),8);
        bufp->chgCData(oldp+47,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[5]),8);
        bufp->chgCData(oldp+48,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[6]),8);
        bufp->chgCData(oldp+49,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[7]),8);
        bufp->chgCData(oldp+50,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[8]),8);
        bufp->chgCData(oldp+51,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[9]),8);
        bufp->chgCData(oldp+52,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[10]),8);
        bufp->chgCData(oldp+53,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[11]),8);
        bufp->chgCData(oldp+54,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[12]),8);
        bufp->chgCData(oldp+55,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[13]),8);
        bufp->chgCData(oldp+56,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[14]),8);
        bufp->chgCData(oldp+57,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[15]),8);
        bufp->chgCData(oldp+58,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[16]),8);
        bufp->chgCData(oldp+59,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[17]),8);
        bufp->chgCData(oldp+60,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[18]),8);
        bufp->chgCData(oldp+61,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[19]),8);
        bufp->chgCData(oldp+62,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[20]),8);
        bufp->chgCData(oldp+63,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[21]),8);
        bufp->chgCData(oldp+64,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[22]),8);
        bufp->chgCData(oldp+65,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[23]),8);
        bufp->chgCData(oldp+66,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[24]),8);
        bufp->chgCData(oldp+67,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[25]),8);
        bufp->chgCData(oldp+68,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[26]),8);
        bufp->chgCData(oldp+69,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[27]),8);
        bufp->chgCData(oldp+70,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[28]),8);
        bufp->chgCData(oldp+71,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[29]),8);
        bufp->chgCData(oldp+72,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[30]),8);
        bufp->chgCData(oldp+73,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[31]),8);
        bufp->chgIData(oldp+74,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+75,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a),8);
        bufp->chgCData(oldp+76,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),8);
        bufp->chgCData(oldp+77,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a),5);
        bufp->chgCData(oldp+78,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),8);
        bufp->chgBit(oldp+79,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+80,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[0]),8);
        bufp->chgCData(oldp+81,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[1]),8);
        bufp->chgCData(oldp+82,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[2]),8);
        bufp->chgCData(oldp+83,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[3]),8);
        bufp->chgCData(oldp+84,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[4]),8);
        bufp->chgCData(oldp+85,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[5]),8);
        bufp->chgCData(oldp+86,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[6]),8);
        bufp->chgCData(oldp+87,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[7]),8);
        bufp->chgCData(oldp+88,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[8]),8);
        bufp->chgCData(oldp+89,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[9]),8);
        bufp->chgCData(oldp+90,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[10]),8);
        bufp->chgCData(oldp+91,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[11]),8);
        bufp->chgCData(oldp+92,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[12]),8);
        bufp->chgCData(oldp+93,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[13]),8);
        bufp->chgCData(oldp+94,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[14]),8);
        bufp->chgCData(oldp+95,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[15]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+96,(vlSelf->NorTestBench__DOT__u_MPI__DOT__Cs_sample_sync));
        bufp->chgBit(oldp+97,(vlSelf->NorTestBench__DOT__u_MPI__DOT__Cs_sample));
        bufp->chgBit(oldp+98,(vlSelf->NorTestBench__DOT__u_MPI__DOT__Cs_sample_pipe));
        bufp->chgBit(oldp+99,(vlSelf->NorTestBench__DOT__u_MPI__DOT__Mpi_enb));
    }
    bufp->chgBit(oldp+100,(vlSelf->NorTestBench__DOT__Clock));
    bufp->chgBit(oldp+101,(vlSelf->NorTestBench__DOT__Rst_n));
    bufp->chgCData(oldp+102,(vlSelf->NorTestBench__DOT__Mpi_data),8);
    bufp->chgBit(oldp+103,(vlSelf->NorTestBench__DOT__u_MPI__DOT__Dataout_enb));
    bufp->chgCData(oldp+104,(((0x20U & (IData)(vlSelf->NorTestBench__DOT__Mpi_addr))
                               ? vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__MyRegister
                              [(0xfU & (IData)(vlSelf->NorTestBench__DOT__Mpi_addr))]
                               : (IData)(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_a))),8);
    bufp->chgBit(oldp+105,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb));
    bufp->chgCData(oldp+106,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_a),8);
    bufp->chgCData(oldp+107,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a),8);
    bufp->chgCData(oldp+108,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),8);
    bufp->chgBit(oldp+109,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a));
    bufp->chgBit(oldp+110,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a));
    bufp->chgBit(oldp+111,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__good_to_go_a));
    bufp->chgBit(oldp+112,(vlSelf->NorTestBench__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_a));
}

void VNorTestBench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNorTestBench___024root__trace_cleanup\n"); );
    // Init
    VNorTestBench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNorTestBench___024root*>(voidSelf);
    VNorTestBench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
