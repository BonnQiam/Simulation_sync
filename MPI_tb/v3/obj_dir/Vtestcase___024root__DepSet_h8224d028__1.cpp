// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcase.h for the primary calling header

#include "verilated.h"

#include "Vtestcase__Syms.h"
#include "Vtestcase___024root.h"

VlCoroutine Vtestcase___024root___eval_initial__TOP__0__1(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_initial__TOP__0__1\n"); );
    // Init
    CData/*7:0*/ __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data = 0;
    CData/*7:0*/ __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data = 0;
    CData/*5:0*/ __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr = 0;
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       42);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       44);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       46);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       48);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       52);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("case2, Addr: 00000003 -> DataWrite: %x\n",
              8,vlSelf->testcase__DOT__Data_out);
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr = 3U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       62);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       65);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       66);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       68);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data 
        = vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       71);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       74);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__Data_in = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data;
    VL_WRITEF("case2, Addr: 00000003 -> DataRead: %x\n------------------------\n",
              8,vlSelf->testcase__DOT__Data_in);
    VL_FWRITEF(vlSelf->testcase__DOT__Write_Out_File,"@00000003\n%x\n",
               8,vlSelf->testcase__DOT__Data_in);
    vlSelf->testcase__DOT__MYCASE__DOT__i = 2U;
    vlSelf->testcase__DOT__Data_out = vlSelf->testcase__DOT__DataSource
        [2U];
    vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr = 2U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data 
        = vlSelf->testcase__DOT__Data_out;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       38);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_out 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       42);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       44);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       46);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       48);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       52);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("case2, Addr: 00000002 -> DataWrite: %x\n",
              8,vlSelf->testcase__DOT__Data_out);
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr = 2U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       62);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       65);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       66);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       68);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data 
        = vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       71);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       74);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__Data_in = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data;
    VL_WRITEF("case2, Addr: 00000002 -> DataRead: %x\n------------------------\n",
              8,vlSelf->testcase__DOT__Data_in);
    VL_FWRITEF(vlSelf->testcase__DOT__Write_Out_File,"@00000002\n%x\n",
               8,vlSelf->testcase__DOT__Data_in);
    vlSelf->testcase__DOT__MYCASE__DOT__i = 1U;
    vlSelf->testcase__DOT__Data_out = vlSelf->testcase__DOT__DataSource
        [1U];
    vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr = 1U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data 
        = vlSelf->testcase__DOT__Data_out;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       38);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_out 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       42);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       44);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       46);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       48);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       52);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("case2, Addr: 00000001 -> DataWrite: %x\n",
              8,vlSelf->testcase__DOT__Data_out);
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       62);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       65);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       66);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       68);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data 
        = vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       71);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       74);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__Data_in = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data;
    VL_WRITEF("case2, Addr: 00000001 -> DataRead: %x\n------------------------\n",
              8,vlSelf->testcase__DOT__Data_in);
    VL_FWRITEF(vlSelf->testcase__DOT__Write_Out_File,"@00000001\n%x\n",
               8,vlSelf->testcase__DOT__Data_in);
    vlSelf->testcase__DOT__MYCASE__DOT__i = 0U;
    vlSelf->testcase__DOT__Data_out = vlSelf->testcase__DOT__DataSource
        [0U];
    vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr = 0U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data 
        = vlSelf->testcase__DOT__Data_out;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       38);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_out 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Data;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = vlSelf->__Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Write__2__Wtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       42);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       44);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       46);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       48);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       52);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("case2, Addr: 00000000 -> DataWrite: %x\n",
              8,vlSelf->testcase__DOT__Data_out);
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       62);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr 
        = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Addr;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 1U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       65);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       66);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xea60ULL, nullptr, 
                                       "uP_BFM.v", 
                                       68);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n = 1U;
    __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data 
        = vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data;
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "uP_BFM.v", 
                                       71);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr = 0U;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw = 0U;
    co_await vlSelf->__VdlySched.delay(0x5dc0ULL, nullptr, 
                                       "uP_BFM.v", 
                                       74);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->testcase__DOT__Data_in = __Vtask_testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Read__3__Rtask_Data;
    VL_WRITEF("case2, Addr: 00000000 -> DataRead: %x\n------------------------\n",
              8,vlSelf->testcase__DOT__Data_in);
    VL_FWRITEF(vlSelf->testcase__DOT__Write_Out_File,"@00000000\n%x\n",
               8,vlSelf->testcase__DOT__Data_in);
    vlSelf->testcase__DOT__MYCASE__DOT__i = 0xffffffffU;
    VL_FCLOSE_I(vlSelf->testcase__DOT__Write_Out_File); VL_WRITEF("Simulation Finished!\n");
    VL_STOP_MT("testcase.v", 46, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestcase___024root___eval_initial__TOP__1(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__Clock = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "harness.v", 
                                           15);
        vlSelf->testcase__DOT__inst_harness__DOT__Clock 
            = (1U & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Clock)));
    }
}

VL_INLINE_OPT VlCoroutine Vtestcase___024root___eval_initial__TOP__2(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__Rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "harness.v", 
                                       24);
    vlSelf->testcase__DOT__inst_harness__DOT__Rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "harness.v", 
                                       25);
    vlSelf->testcase__DOT__inst_harness__DOT__Rst_n = 1U;
}

VlCoroutine Vtestcase___024root___act_sequent__TOP__0____Vfork_1__0(Vtestcase___024root* vlSelf, CData/*0:0*/ __Vintraval_h123ab2af__0);

VL_INLINE_OPT void Vtestcase___024root___act_sequent__TOP__0(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb 
        = ((~ ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr) 
               >> 5U)) & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Mpi_enb));
    Vtestcase___024root___act_sequent__TOP__0____Vfork_1__0(vlSelf, vlSelf->__Vintraval_h123ab2af__0);
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb 
        = vlSelf->__VassignWtmp_testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb__0;
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data 
        = (((((IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe)
               ? (IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_out)
               : 0U) & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe)
                         ? 0xffU : 0U)) & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe)
                                            ? 0xffU
                                            : 0U)) 
           | (((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb)
                ? 0xffU : 0U) & (((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb)
                                   ? ((0x20U & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr))
                                       ? vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister
                                      [(0xfU & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr))]
                                       : (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_a))
                                   : 0U) & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb)
                                             ? 0xffU
                                             : 0U))));
}

VL_INLINE_OPT VlCoroutine Vtestcase___024root___act_sequent__TOP__0____Vfork_1__0(Vtestcase___024root* vlSelf, CData/*0:0*/ __Vintraval_h123ab2af__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___act_sequent__TOP__0____Vfork_1__0\n"); );
    // Body
    __Vintraval_h123ab2af__0 = ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n)) 
                                & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw));
    co_await vlSelf->__VdlySched.delay(0x1770ULL, nullptr, 
                                       "MPI.v", 52);
    vlSelf->__VassignWtmp_testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb__0 
        = __Vintraval_h123ab2af__0;
}

VL_INLINE_OPT void Vtestcase___024root___act_sequent__TOP__1(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a 
        = ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__good_to_go_a)
            ? vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data
           [vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a]
            : 0U);
}

void Vtestcase___024root___eval_act(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_act\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestcase___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestcase___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__0(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0;
    __Vdlyvdim0__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 = 0;
    CData/*7:0*/ __Vdlyvval__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0;
    __Vdlyvval__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 = 0;
    CData/*0:0*/ __Vdlyvset__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0;
    __Vdlyvset__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 = 0;
    // Body
    __Vdlyvset__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 = 0U;
    if ((((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Mpi_enb) 
          & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr) 
             >> 5U)) & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw)))) {
        __Vdlyvval__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 
            = vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data;
        __Vdlyvset__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 = 1U;
        __Vdlyvdim0__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0 
            = (0xfU & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr));
    }
    if ((1U & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb)))) {
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_a = 0U;
    }
    if (vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb) {
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a 
            = (1U & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_read_flag_a)));
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__good_to_go_a = 1U;
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_a = 1U;
    }
    if (__Vdlyvset__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0) {
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister[__Vdlyvdim0__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0] 
            = __Vdlyvval__testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister__v0;
    }
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__1(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_nmram_write_a) {
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a 
            = (1U & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__2(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__2\n"); );
    // Body
    Vtestcase___024root___act_sequent__TOP__0____Vfork_1__0(vlSelf, vlSelf->__Vintraval_h123ab2af__0);
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb 
        = vlSelf->__VassignWtmp_testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb__0;
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__3(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample_pipe 
        = (1U & ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Rst_n)) 
                 | (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample)));
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample 
        = (1U & ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Rst_n)) 
                 | (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample_sync)));
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Mpi_enb 
        = ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample)) 
           & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample_pipe));
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Cs_sample_sync 
        = (1U & ((~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Rst_n)) 
                 | (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_cs_n)));
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__4(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_a 
        = ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a)
            ? ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a) 
               ^ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out))
            : (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp2_a));
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__5(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a) {
        if ((0U == vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_aclr_flag_a)) {
            vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data[vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a] 
                = ((((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a) 
                     & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
                    | (vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__mem_data
                       [vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a] 
                       & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)))) 
                   ^ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x));
        }
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0U;
    }
}

VL_INLINE_OPT void Vtestcase___024root___nba_sequent__TOP__6(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb) {
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0U;
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffU;
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0U;
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_address_reg_a 
            = (0x1fU & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr));
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_wren_reg_a 
            = (1U & (~ (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_rw)));
        vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_data_reg_a 
            = vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data;
    }
}

VL_INLINE_OPT void Vtestcase___024root___nba_comb__TOP__0(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__Mpi_data 
        = (((((IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe)
               ? (IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_out)
               : 0U) & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe)
                         ? 0xffU : 0U)) & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__inst_BFM__DOT__Data_oe)
                                            ? 0xffU
                                            : 0U)) 
           | (((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb)
                ? 0xffU : 0U) & (((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb)
                                   ? ((0x20U & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr))
                                       ? vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__MyRegister
                                      [(0xfU & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr))]
                                       : (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__u_SPRAM__DOT__altsyncram_component__DOT__i_q_tmp_a))
                                   : 0U) & ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Dataout_enb)
                                             ? 0xffU
                                             : 0U))));
}

VL_INLINE_OPT void Vtestcase___024root___nba_comb__TOP__1(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__u_STM__DOT__Ram_enb 
        = ((~ ((IData)(vlSelf->testcase__DOT__inst_harness__DOT__Mpi_addr) 
               >> 5U)) & (IData)(vlSelf->testcase__DOT__inst_harness__DOT__u_MPI__DOT__Mpi_enb));
}

void Vtestcase___024root___eval_nba(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x64ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x42ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestcase___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtestcase___024root___eval_triggers__act(Vtestcase___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcase___024root___dump_triggers__act(Vtestcase___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestcase___024root___timing_resume(Vtestcase___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcase___024root___dump_triggers__nba(Vtestcase___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestcase___024root___eval(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
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
            Vtestcase___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtestcase___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testcase.v", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtestcase___024root___timing_resume(vlSelf);
                Vtestcase___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtestcase___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testcase.v", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestcase___024root___eval_nba(vlSelf);
        }
    }
}

void Vtestcase___024root___timing_resume(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___timing_resume\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtestcase___024root___eval_debug_assertions(Vtestcase___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestcase__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcase___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
