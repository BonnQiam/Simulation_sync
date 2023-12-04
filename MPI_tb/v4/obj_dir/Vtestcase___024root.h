// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestcase.h for the primary calling header

#ifndef VERILATED_VTESTCASE___024ROOT_H_
#define VERILATED_VTESTCASE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestcase__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestcase___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ harness__DOT__Clock;
        CData/*0:0*/ harness__DOT__Rst_n;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a;
        CData/*7:0*/ testcase__DOT__Data_out;
        CData/*7:0*/ testcase__DOT__Data_in;
        CData/*7:0*/ harness__DOT__Mpi_data;
        CData/*5:0*/ harness__DOT__Mpi_addr;
        CData/*0:0*/ harness__DOT__Mpi_cs_n;
        CData/*0:0*/ harness__DOT__Mpi_rw;
        CData/*7:0*/ harness__DOT__inst_BFM__DOT__Data_out;
        CData/*0:0*/ harness__DOT__inst_BFM__DOT__Data_oe;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__Cs_sample_sync;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__Cs_sample;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__Cs_sample_pipe;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__Mpi_enb;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__Dataout_enb;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__temp_wa;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__temp_wa2;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__temp_wa2b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__temp_wb;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__temp_wb2;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__temp;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_reg_a;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_a;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_reg_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_b;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b;
        CData/*4:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_b;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_rden_reg_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__good_to_go_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__good_to_go_b;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__init_file_b_port;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_a;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_b;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__wa_mult_x;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__wa_mult_x_ii;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__wa_mult_x_iii;
        CData/*1:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__add_reg_b_mult_wb;
        CData/*1:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_ACEX1K__Vstatic__is_acex1k;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_APEX20K__Vstatic__is_apex20k;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_APEX20KC__Vstatic__is_apex20kc;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_APEX20KE__Vstatic__is_apex20ke;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_APEXII__Vstatic__is_apexii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_EXCALIBUR_ARM__Vstatic__is_excalibur_arm;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_FLEX10KE__Vstatic__is_flex10ke;
    };
    struct {
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_MERCURY__Vstatic__is_mercury;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIX__Vstatic__is_stratix;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIXGX__Vstatic__is_stratixgx;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_CYCLONE__Vstatic__is_cyclone;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_MAXII__Vstatic__is_maxii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_HARDCOPYSTRATIX__Vstatic__is_hardcopystratix;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIXII__Vstatic__is_stratixii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_STRATIXIIGX__Vstatic__is_stratixiigx;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_CYCLONEII__Vstatic__is_cycloneii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_FAMILY_HARDCOPYII__Vstatic__is_hardcopyii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_STRATIXGX__Vstatic__var_family_stratixgx;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_CYCLONE__Vstatic__var_family_cyclone;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_STRATIXII__Vstatic__var_family_stratixii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_STRATIX_HC__Vstatic__var_family_stratix_hc;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_STRATIX__Vstatic__var_family_stratix;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_MAXII__Vstatic__var_family_maxii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_CYCLONEII__Vstatic__var_family_cycloneii;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_MEGARAM__Vstatic__var_family_has_megaram;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_M512__Vstatic__var_family_has_m512;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM__Vstatic__var_family_has_stratixii_style_ram;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO__Vstatic__var_family_has_inverted_output_ddio;
        CData/*0:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__dev__DOT__IS_VALID_FAMILY__Vstatic__is_valid;
        CData/*7:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__c;
        CData/*3:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__hex;
        CData/*3:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__tmp_char;
        CData/*5:0*/ __Vtask_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr;
        CData/*0:0*/ __VassignWtmp_harness__DOT__u_MPI__DOT__Dataout_enb__0;
        CData/*0:0*/ __Vintraval_hb17babca__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__harness__DOT__Clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__harness__DOT__Rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__add_reg_a_mult_wa;
        SData/*12:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa;
        IData/*31:0*/ testcase__DOT__Write_Out_File;
        IData/*31:0*/ testcase__DOT__MYCASE__DOT__i;
        VlWide<64>/*2047:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__ram_initf;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__file_desc;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_numwords_a;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_numwords_b;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_aclr_flag_a;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_aclr_flag_b;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i2;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i3;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i4;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i5;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__j;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__j2;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__k;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__k2;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__k3;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__k4;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_div_wa;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__j_plus_i2;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__j2_plus_i5;
    };
    struct {
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__j_plus_i2_div_a;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__j2_plus_i5_div_a;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__ifp;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__ofp;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__r;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__r2;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__i;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__j;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__k;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__m;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__n;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__done;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__error_status;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__first_rec;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__last_rec;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__off_addr;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__nn;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__aaaa;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__tt;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__cc;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__aah;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__aal;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__dd;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__sum;
        IData/*31:0*/ harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem__DOT__convert_hex2ver__Vstatic__line_no;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 48> testcase__DOT__DataSource;
        VlUnpacked<CData/*7:0*/, 16> harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister;
        VlUnpacked<CData/*7:0*/, 32> harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data;
        VlUnpacked<CData/*0:0*/, 2> harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data_b;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestcase__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestcase___024root(Vtestcase__Syms* symsp, const char* v__name);
    ~Vtestcase___024root();
    VL_UNCOPYABLE(Vtestcase___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
