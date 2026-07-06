// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_mxdotp_core__Syms.h"


VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__cv32e40x_pkg__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__mxdotp_pkg__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_pkg__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cv32e40x_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__cv32e40x_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mxdotp_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__mxdotp_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_mxdotp_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1008,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::TIME, false,-1, 63,0);
    tracep->declBus(c+1010,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"instr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"instr_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"instr_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"instr_memtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"instr_prot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+439,0,"instr_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"instr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"instr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"data_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"data_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"data_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"data_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"data_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"data_memtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"data_prot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+298,0,"data_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"data_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"data_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"data_atop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1013,0,"data_exokay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+118,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1014,0,"clic_irq_id_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1011,0,"clic_irq_mode_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"clic_irq_exit_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"debug_havereset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"debug_running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"debug_halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"core_sleep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"xif_issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"xif_issue_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"xif_issue_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"xif_issue_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"xif_issue_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"xif_issue_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+102,0,"xif_issue_rs0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"xif_issue_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"xif_issue_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+357,0,"xif_commit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"xif_commit_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+252,0,"xif_commit_kill",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"xif_result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"xif_result_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+853,0,"xif_result_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+854,0,"xif_result_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+855,0,"xif_result_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+856,0,"xif_result_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"rf_we_wb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+708,0,"rf_waddr_wb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+860,0,"rf_wdata_wb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"exp_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1016,0,"exp_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1017,0,"exp_rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1018,0,"exp_rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"exp_rs3_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"exp_result_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"sb_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+876,0,"expected_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+877,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+878,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+879,0,"sb_fail_this_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mtvec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"dm_halt_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mhartid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mimpid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"dm_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"nmi_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"instr_memtype_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"instr_prot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+439,0,"instr_dbg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"data_memtype_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"data_prot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+298,0,"data_dbg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"data_atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1013,0,"data_exokay_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+118,0,"mcycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1012,0,"irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"clic_irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"clic_irq_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1025,0,"clic_irq_il_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1026,0,"clic_irq_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1011,0,"clic_irq_hv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"clic_irq_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1011,0,"clic_irq_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"clic_irq_exit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"debug_havereset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"debug_running_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"debug_halted_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1027,0,"X_NUM_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1028,0,"X_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1012,0,"X_MISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"X_ECS_XS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("xif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("core_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1030,0,"LIB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1031,0,"RV32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1033,0,"B_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1034,0,"M_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1027,0,"X_NUM_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1028,0,"X_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1012,0,"X_MISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"X_ECS_XS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1032,0,"ZC_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1036,0,"NUM_MHPMCOUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SMCLIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1036,0,"DBG_NUM_TRIGGERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mtvec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"dm_halt_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mhartid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mimpid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"dm_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"nmi_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"instr_memtype_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"instr_prot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+439,0,"instr_dbg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"data_memtype_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"data_prot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+298,0,"data_dbg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"data_atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1013,0,"data_exokay_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+118,0,"mcycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("xif_compressed_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_issue_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_commit_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_mem_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_mem_result_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_result_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1012,0,"irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"clic_irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"clic_irq_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1025,0,"clic_irq_il_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1026,0,"clic_irq_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1011,0,"clic_irq_hv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"clic_irq_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1011,0,"clic_irq_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"clic_irq_exit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"debug_havereset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"debug_running_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"debug_halted_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1037,0,"REGFILE_NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+460,0,"pc_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"jump_target_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"branch_target_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+710,0,"branch_decision_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"if_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"lsu_interruptible",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+711,0,"id_ex_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declArray(c+721,0,"ex_wb_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declArray(c+728,0,"if_id_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 118,0);
    tracep->declBus(c+880,0,"ctrl_byp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declArray(c+881,0,"ctrl_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+874,0,"rf_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+708,0,"rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+860,0,"rf_wdata_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"rf_wdata_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"rf_re_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rf_raddr_id", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rf_rdata_id", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+735+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rf_waddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+738+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rf_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+861+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rf_we", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+462,0,"mtvec_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+463,0,"mtvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+740,0,"csr_counter_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"lsu_split_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"lsu_mpu_status_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+464,0,"lsu_rdata_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"lsu_err_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+887,0,"lsu_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"lsu_ready_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"lsu_valid_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"lsu_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"lsu_valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"lsu_ready_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"lsu_valid_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"lsu_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"data_stall_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"id_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"wb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"if_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"m_irq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"dpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+359,0,"csr_mtvec_init_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"dcsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+899,0,"trigger_match_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"alu_en_raw_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"alu_jmp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"alu_jmpr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"sys_en_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"csr_en_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"csr_op_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+258,0,"csr_illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"xif_csr_error_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"irq_req_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"irq_id_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1011,0,"irq_wu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"irq_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+903,0,"irq_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+904,0,"dbg_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"xif_offloading_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m_c_obi_instr_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("m_c_obi_data_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"fetch_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("controller_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1037,0,"REGFILE_NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"if_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"pc_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+728,0,"if_id_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 118,0);
    tracep->declBit(c+255,0,"alu_en_raw_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"alu_jmp_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"alu_jmpr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"sys_en_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"csr_en_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"csr_op_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+711,0,"id_ex_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declArray(c+721,0,"ex_wb_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declBit(c+253,0,"lsu_split_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"lsu_mpu_status_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+892,0,"data_stall_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"lsu_err_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+332,0,"lsu_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"lsu_interruptible_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"branch_decision_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"irq_req_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"irq_id_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1011,0,"irq_wu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"mtvec_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1011,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"dcsr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+740,0,"csr_counter_read_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+886,0,"rf_re_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rf_raddr_id_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+893,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"id_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"wb_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m_c_obi_data_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+880,0,"ctrl_byp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declArray(c+881,0,"ctrl_fsm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+459,0,"fencei_flush_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("xif_commit_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+259,0,"xif_csr_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bypass_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1037,0,"REGFILE_NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+886,0,"rf_re_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rf_raddr_id_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+728,0,"if_id_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 118,0);
    tracep->declArray(c+711,0,"id_ex_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declArray(c+721,0,"ex_wb_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declBit(c+255,0,"alu_en_raw_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"alu_jmpr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"sys_en_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"csr_en_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"csr_op_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+740,0,"csr_counter_read_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"ctrl_byp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+907,0,"rf_rd_ex_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+742,0,"rf_rd_ex_jalr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+908,0,"rf_rd_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+743,0,"rf_rd_wb_jalr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+907,0,"rf_rd_ex_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+908,0,"rf_rd_wb_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+909,0,"csr_read_in_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"csr_write_in_ex_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"rf_we_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"rf_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"lsu_en_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"rf_waddr_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+708,0,"rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("controller_fsm_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"ctrl_byp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+460,0,"pc_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+728,0,"if_id_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 118,0);
    tracep->declBit(c+255,0,"alu_en_raw_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"alu_jmp_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"sys_en_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+711,0,"id_ex_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declBit(c+710,0,"branch_decision_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"lsu_split_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+721,0,"ex_wb_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declBus(c+465,0,"lsu_err_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+333,0,"lsu_mpu_status_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+892,0,"data_stall_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"lsu_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"lsu_interruptible_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"irq_req_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"irq_id_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1011,0,"irq_wu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"mtvec_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+471,0,"dcsr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+881,0,"ctrl_fsm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+895,0,"if_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"id_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"wb_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"fencei_flush_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m_c_obi_data_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_commit_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+259,0,"xif_csr_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"ctrl_fsm_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+910,0,"ctrl_fsm_ns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+475,0,"debug_fsm_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+911,0,"debug_fsm_ns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+689,0,"debug_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"nmi_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"nmi_is_store_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"debug_mode_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"debug_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"single_step_halt_if_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"single_step_halt_if_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"jump_in_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"jump_taken_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"branch_in_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"branch_taken_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"branch_taken_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"branch_taken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"exception_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+918,0,"exception_cause_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+751,0,"wfi_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"fencei_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"mret_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"dret_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"ebreak_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"trigger_match_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"xif_in_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"pending_nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"pending_nmi_early",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"pending_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"pending_single_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"pending_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"exception_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"interrupt_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"debug_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"single_step_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+920,0,"debug_cause_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+480,0,"debug_cause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+844,0,"exc_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+334,0,"fencei_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"fencei_flush_req_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"fencei_req_and_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"fencei_ongoing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+922,0,"pipe_pc_mux_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+483,0,"wb_counter_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"wb_counter_event_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"nmi_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("x_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+484,0,"commit_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"commit_kill_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"kill_rejected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cs_registers_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1034,0,"M_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1012,0,"X_MISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"X_ECS_XS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1032,0,"ZC_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1032,0,"SMCLIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1036,0,"NUM_MHPMCOUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1036,0,"DBG_NUM_TRIGGERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mhartid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mimpid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"mtvec_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+463,0,"mtvec_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+118,0,"mcycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1012,0,"mtvec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+359,0,"csr_mtvec_init_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+711,0,"id_ex_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declArray(c+721,0,"ex_wb_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+740,0,"csr_counter_read_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+258,0,"csr_illegal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"mie_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"mip_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+466,0,"m_irq_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"dpc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"dcsr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+899,0,"trigger_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"pc_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1038,0,"CORE_MISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1038,0,"MISA_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"csr_wdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"csr_rdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+361,0,"csr_we_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"mepc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"mepc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mepc_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1039,0,"tinfo_types",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+486,0,"tmatch_control_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"tmatch_control_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"tmatch_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"tmatch_value_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+924,0,"tmatch_control_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"tmatch_value_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"tmatch_control_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"tmatch_value_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"dcsr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"dcsr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+366,0,"dcsr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"dcsr_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+926,0,"dcsr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"dpc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"dpc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+368,0,"dpc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"dpc_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"dscratch0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"dscratch0_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"dscratch0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"dscratch1_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"dscratch0_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"dscratch1_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"dscratch1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"dscratch1_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"mscratch_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+371,0,"mscratch_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mscratch_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"jvt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"jvt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"jvt_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"jvt_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"mstatus_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"mstatus_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"mstatus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mstatus_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"mcause_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"mcause_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mcause_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"mtvec_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+377,0,"mtvec_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mtvec_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1040,0,"mtvt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mtvt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"mtvt_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mtvt_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mnxti_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mnxti_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"mnxti_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mintstatus_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"mintstatus_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"mintstatus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mintstatus_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mintthresh_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mintthresh_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"mintthresh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mintthresh_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mscratchcsw_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mscratchcsw_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"mscratchcsw_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mscratchcswl_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"mscratchcswl_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"mscratchcswl_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"mclicbase_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"mclicbase_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1043,0,"mclicbase_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+470,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"mie_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"mie_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mie_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+120,0,"mhpmcounter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+34,0,"mhpmcounter_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declQuad(c+98,0,"mhpmcounter_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+184,0,"mhpmevent_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+380,0,"mhpmevent_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+495,0,"mcountinhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"mcountinhibit_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"hpm_events",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+496,0,"mhpmcounter_increment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+413,0,"mhpmcounter_write_lower",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"mhpmcounter_write_upper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"mhpmcounter_write_increment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+928,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+762,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+763,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+764,0,"csr_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+765,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+416,0,"csr_en_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"illegal_csr_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"illegal_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1044,0,"mscratchcsw_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"mscratchcswl_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1046,0,"mclicbase_rd_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1047,0,"HPM_EVENT_FLOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 15,0);
    tracep->declBus(c+1048,0,"MCOUNTINHIBIT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+417,0,"hpm_events_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+418,0,"all_counters_disabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"mcountinhibit_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"mhpmevent_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dcsr_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1050,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+365,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+366,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dpc_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+368,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dscratch0_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dscratch1_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("jvt_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mcause_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mepc_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mie_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mscratch_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+371,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mstatus_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1052,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mtvec_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1053,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+377,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("tmatch_control_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1054,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+924,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+486,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+486,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("tmatch_value_csr_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1032,0,"SHADOWCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1051,0,"RESETVALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+925,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ex_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1034,0,"M_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+711,0,"id_ex_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declBus(c+358,0,"csr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+258,0,"csr_illegal_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+721,0,"ex_wb_pipe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBus(c+885,0,"rf_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+710,0,"branch_decision_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+709,0,"branch_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+259,0,"xif_csr_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"lsu_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"lsu_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"lsu_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"lsu_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"lsu_split_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ex_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ex_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"alu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"csr_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"csr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"sys_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"sys_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"mul_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"div_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"xif_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"xif_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+710,0,"alu_cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+767,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"div_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+263,0,"mul_en_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"div_en_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"lsu_en_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"div_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"div_clz_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"div_clz_data_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"div_clz_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+768,0,"div_shift_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"div_shift_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+351,0,"div_op_b_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+770,0,"previous_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"csr_is_illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+771,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+772,0,"operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,0,"muldiv_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+930,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+710,0,"cmp_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"div_clz_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"div_clz_data_rev_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"div_clz_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+768,0,"div_shift_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"div_shift_amt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+351,0,"div_op_b_shifted_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+775,0,"operand_a_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"operand_b_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+777,0,"adder_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+779,0,"adder_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+781,0,"adder_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+782,0,"adder_result_expanded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+784,0,"adder_subtract",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"shifter_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+785,0,"shifter_rshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"shifter_aa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"shifter_bb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+353,0,"shifter_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+355,0,"shifter_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"result_shnadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+789,0,"is_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"is_greater",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"is_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+791,0,"min_minu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"max_maxu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"clz_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"ff1_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+931,0,"ff_no_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"cpop_result_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+794,0,"clmul_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"clmul_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"clmul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"clmulr_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+798,0,"clmulh_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_b_cpop_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+772,0,"operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+217,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->popPrefix();
    tracep->pushPrefix("ff_one_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1055,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"first_one_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+931,0,"no_ones_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1056,0,"NUM_LEVELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1057,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+932,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+305,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1062,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1062,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("div", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("div_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1011,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+800,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+768,0,"alu_clz_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"alu_clz_data_rev_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"alu_clz_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+768,0,"alu_shift_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"alu_shift_amt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+351,0,"alu_op_b_shifted_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+768,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+560,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"alu_clz_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"quotient_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"remainder_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"remainder_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"divisor_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"divisor_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"div_rem_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"div_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"comp_inv_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"comp_inv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"res_inv_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"res_inv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"add_a_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+939,0,"add_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"add_b_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+940,0,"divisor_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"res_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+802,0,"op_b_alt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+568,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+941,0,"cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+356,0,"cnt_d_dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+569,0,"cnt_q_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"init_dummy_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"remainder_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"divisor_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"quotient_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"comp_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"init_remainder_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"init_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+570,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+805,0,"div_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"div_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"op_b_is_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"op_b_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+809,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+810,0,"signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+800,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+310,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+811,0,"op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+813,0,"int_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+815,0,"mulh_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+571,0,"mulh_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+943,0,"mulh_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+816,0,"mulh_al",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+817,0,"mulh_bl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+818,0,"mulh_ah",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+819,0,"mulh_bh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+820,0,"mulh_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+821,0,"mulh_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+572,0,"mulh_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+944,0,"mulh_acc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+822,0,"mulh_acc_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+824,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+826,0,"result_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("id_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1033,0,"B_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1034,0,"M_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1063,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1037,0,"REGFILE_NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"jmp_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+728,0,"if_id_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 118,0);
    tracep->declArray(c+711,0,"id_ex_pipe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declArray(c+721,0,"ex_wb_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declBus(c+880,0,"ctrl_byp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBus(c+860,0,"rf_wdata_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"rf_wdata_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+255,0,"alu_en_raw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"alu_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"alu_jmpr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"sys_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"csr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"csr_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+886,0,"rf_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rf_raddr_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rf_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+735+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+893,0,"id_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"id_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("xif_issue_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+905,0,"xif_offloading_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1064,0,"REG_S1_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"REG_S1_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"REG_S2_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"REG_S2_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"REG_S3_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"REG_S3_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"REG_D_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,0,"REG_D_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"rf_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+451,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"rf_we_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+829,0,"rf_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+431,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"alu_en_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"alu_bch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"alu_jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"alu_jmpr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"alu_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+432,0,"mul_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"mul_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+231,0,"mul_signed_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+433,0,"div_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"div_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+434,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"lsu_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+235,0,"lsu_sext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"lsu_atop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+901,0,"csr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+900,0,"sys_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"sys_fencei_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"sys_ecall_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"sys_ebrk_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"sys_dret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"sys_wfi_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+948,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"operand_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"operand_a_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"operand_b_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"jalr_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"alu_op_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"alu_op_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"op_c_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+268,0,"imm_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"imm_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"bch_jmp_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+271,0,"imm_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+830,0,"imm_i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+831,0,"imm_s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"imm_sb_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"imm_u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"imm_uj_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"imm_z_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"bch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"multi_cycle_id_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"illegal_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"xif_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"xif_waiting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"xif_insn_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"xif_insn_reject",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"xif_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"xif_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+954,0,"xif_dualwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"xif_loadstore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cv32e40x_pc_target_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+270,0,"bch_jmp_mux_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+836,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"imm_uj_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"imm_sb_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+830,0,"imm_i_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"jalr_fw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"bch_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"jmp_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"pc_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1033,0,"B_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1034,0,"M_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1063,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+956,0,"deassert_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"sys_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"illegal_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"sys_ebrk_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"sys_mret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"sys_dret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"sys_ecall_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"sys_wfi_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"sys_fencei_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+837,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"alu_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"alu_en_raw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"alu_bch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"alu_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"alu_jmpr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"alu_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+265,0,"alu_op_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"alu_op_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+230,0,"mul_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+432,0,"mul_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"mul_signed_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+232,0,"div_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+433,0,"div_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"csr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"csr_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+434,0,"lsu_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"lsu_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"lsu_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+235,0,"lsu_sext_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"lsu_atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+946,0,"rf_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"rf_re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"op_c_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+268,0,"imm_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"imm_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"bch_jmp_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+243,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"csr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"mul_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"div_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"sys_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+273,0,"decoder_i_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+838,0,"decoder_m_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1072,0,"decoder_a_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1072,0,"decoder_b_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+275,0,"decoder_ctrl_mux_subdec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+249,0,"decoder_ctrl_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->pushPrefix("i_decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1063,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declQuad(c+273,0,"decoder_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->popPrefix();
    tracep->pushPrefix("m_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("m_decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1034,0,"M_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+828,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+838,0,"decoder_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("x_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+574,0,"xif_accepted_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"xif_rejected_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1074,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("if_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1035,0,"X_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1028,0,"X_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"branch_target_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"dm_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"dm_halt_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"dpc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"jump_target_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"mepc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"mtvec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1012,0,"nmi_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+899,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m_c_obi_instr_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declArray(c+728,0,"if_id_pipe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 118,0);
    tracep->declBus(c+460,0,"pc_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+359,0,"csr_mtvec_init_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"if_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"if_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("xif_compressed_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+905,0,"xif_offloading_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"if_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"prefetch_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"branch_addr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+958,0,"prefetch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+420,0,"prefetch_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+422,0,"illegal_c_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+423,0,"instr_decompressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+425,0,"instr_compressed_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"prefetch_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"prefetch_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"prefetch_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+441,0,"prefetch_trans_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+960,0,"prefetch_inst_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+323,0,"prefetch_one_txn_pend_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"bus_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+690,0,"bus_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+962,0,"bus_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"bus_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+442,0,"bus_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+963,0,"core_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+895,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+965,0,"xif_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+425,0,"instr_meta_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("compressed_decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+420,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+423,0,"instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+425,0,"is_compressed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"illegal_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_obi_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"trans_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"trans_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+442,0,"trans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+685,0,"resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+690,0,"resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("m_c_obi_instr_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+577,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+966,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+578,0,"obi_a_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->popPrefix();
    tracep->pushPrefix("mpu_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1035,0,"IF_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"atomic_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"misaligned_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"bus_trans_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"bus_trans_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+442,0,"bus_trans_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+685,0,"bus_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+690,0,"bus_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+277,0,"core_trans_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"core_trans_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+963,0,"core_trans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+959,0,"core_resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+960,0,"core_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+323,0,"core_one_txn_pend_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mpu_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"mpu_block_core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"mpu_block_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"mpu_err_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"mpu_err_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"mpu_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+580,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+329,0,"state_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1011,0,"bus_trans_cacheable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"bus_trans_bufferable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"core_trans_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"instr_fetch_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"load_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pma_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBus(c+441,0,"trans_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1013,0,"instr_fetch_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"atomic_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"misaligned_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"load_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_bufferable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1030,0,"PMA_ADDR_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1075,0,"pma_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+444,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"pma_cfg_atomic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("prefetch_unit_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBus(c+445,0,"branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+957,0,"prefetch_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"prefetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+420,0,"prefetch_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+460,0,"prefetch_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"trans_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"trans_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+441,0,"trans_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+959,0,"resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+960,0,"resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+323,0,"one_txn_pend_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"prefetch_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"fetch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"fetch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"fetch_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"fetch_branch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alignment_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBus(c+445,0,"branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+223,0,"prefetch_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"one_txn_pend_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"fetch_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"fetch_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"fetch_branch_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+959,0,"resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+960,0,"resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+958,0,"instr_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"instr_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+420,0,"instr_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+460,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1078,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1079,0,"FIFO_ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+969,0,"instr_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+581,0,"instr_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+330,0,"outstanding_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+840,0,"outstanding_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+967,0,"outstanding_count_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"outstanding_count_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+970,0,"n_incoming_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+582,0,"pop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+970,0,"n_pushed_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+971,0,"aligned_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"aligned_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"complete_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"complete_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"n_flush_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+585,0,"n_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"n_flush_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+973,0,"bus_err_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"mpu_status_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+975,0,"mpu_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+976,0,"resp_valid_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+587,0,"resp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declBus(c+977,0,"valid_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,2);
    tracep->declBus(c+978,0,"valid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,2);
    tracep->declBus(c+591,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,2);
    tracep->declQuad(c+979,0,"resp_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+592,0,"rptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+845,0,"rptr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"rptr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+594,0,"wptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+981,0,"wptr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+846,0,"addr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"addr_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+847,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"instr_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+983,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+984,0,"valid_unaligned_uncompressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"aligned_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"unaligned_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("prefetcher_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"fetch_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"fetch_branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"fetch_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"fetch_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"trans_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"trans_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+441,0,"trans_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+596,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+597,0,"trans_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"trans_addr_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("int_controller_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+472,0,"irq_req_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"irq_id_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1011,0,"irq_wu_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"mie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"mip_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+466,0,"m_ie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"global_irq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+599,0,"irq_local_qual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"irq_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("load_store_unit_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->pushPrefix("m_c_obi_data_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declArray(c+711,0,"id_ex_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 310,0);
    tracep->declBit(c+332,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"interruptible_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"lsu_split_0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"lsu_err_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+464,0,"lsu_rdata_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"lsu_mpu_status_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+254,0,"valid_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"ready_0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"valid_0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ready_0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"valid_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"ready_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"valid_1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"ready_1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("xif_mem_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("xif_mem_result_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1080,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+278,0,"trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+281,0,"trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+985,0,"trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+282,0,"align_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+347,0,"resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"resp_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+335,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+337,0,"buffer_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"buffer_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+285,0,"buffer_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+338,0,"filter_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"filter_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+285,0,"filter_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+850,0,"filter_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1081,0,"filter_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+465,0,"filter_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+331,0,"bus_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"bus_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+301,0,"bus_trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+687,0,"bus_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1081,0,"bus_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+600,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+988,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+989,0,"count_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"count_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"cnt_is_one_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"ctrl_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+601,0,"lsu_size_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+602,0,"lsu_sext_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"lsu_we_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"rdata_offset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+605,0,"last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+606,0,"split_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"misaligned_halfword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"misaligned_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+994,0,"filter_resp_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+995,0,"done_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"trans_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"rdata_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"rdata_w_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"rdata_h_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"rdata_b_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_obi_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"trans_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"trans_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+301,0,"trans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+687,0,"resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1081,0,"resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("m_c_obi_data_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mpu_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"IF_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"atomic_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"misaligned_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"bus_trans_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"bus_trans_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+285,0,"bus_trans_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+850,0,"bus_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1081,0,"bus_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+281,0,"core_trans_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+985,0,"core_trans_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+282,0,"core_trans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+347,0,"core_resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+335,0,"core_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+990,0,"core_one_txn_pend_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mpu_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"mpu_block_core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"mpu_block_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"mpu_err_trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"mpu_err_trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"mpu_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+611,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"state_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1011,0,"bus_trans_cacheable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"bus_trans_bufferable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"core_trans_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"instr_fetch_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"load_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pma_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1032,0,"A_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBus(c+996,0,"trans_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"instr_fetch_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"atomic_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"misaligned_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"load_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_bufferable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"pma_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1030,0,"PMA_ADDR_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1075,0,"pma_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+997,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"pma_cfg_atomic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("response_filter_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1080,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+285,0,"trans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+986,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1081,0,"resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+337,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+285,0,"trans_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+987,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+994,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1081,0,"resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+465,0,"err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1080,0,"CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"bus_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+998,0,"bus_next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+999,0,"bus_count_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"bus_count_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"core_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1000,0,"core_next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1001,0,"core_count_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"core_count_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"core_trans_accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+999,0,"bus_trans_accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"bus_resp_is_bufferable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"core_resp_is_bufferable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+616,0,"outstanding_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1002,0,"outstanding_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("write_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1021,0,"PMA_NUM_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMA_CFG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1022,0,"[-1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1022,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+285,0,"trans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+868,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+301,0,"trans_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+986,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+618,0,"trans_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+1004,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"bufferable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("register_file_wrapper_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1037,0,"REGFILE_NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("raddr_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+735+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("waddr_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+738+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("wdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+861+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("we_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("register_file_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1037,0,"REGFILE_NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("raddr_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rdata_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+735+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("waddr_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+738+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("wdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+861+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("we_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+621+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("we_dec", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+348+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+653,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+654,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+655,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+656,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+657,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+658,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+659,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+660,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+661,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+662,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+663,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+664,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+665,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+666,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+667,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+668,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+669,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+670,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+671,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+672,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+673,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+674,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+675,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+677,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+678,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+679,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+680,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+681,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+682,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_rf[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_write_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+683,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sleep_unit_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1030,0,"LIB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+865,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"clk_gated_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"fetch_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"if_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"lsu_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBit(c+688,0,"fetch_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"fetch_enable_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"core_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"core_busy_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"clock_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_clock_gate_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1030,0,"LIB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"clk_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+906,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+721,0,"ex_wb_pipe_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 203,0);
    tracep->declArray(c+881,0,"ctrl_fsm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 121,0);
    tracep->declBus(c+464,0,"lsu_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"lsu_mpu_status_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+874,0,"rf_we_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+708,0,"rf_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+860,0,"rf_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+890,0,"lsu_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"lsu_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"lsu_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"lsu_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"data_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"wb_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"wb_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("xif_result_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+291,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"lsu_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"xif_waiting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"xif_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mxdotp_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1028,0,"X_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("issue_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("commit_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("result_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mem_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mem_result_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+105,0,"is_mx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"mx_operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"mx_format",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+108,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+694,0,"saved_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+695,0,"saved_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+696,0,"saved_format",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+697,0,"saved_operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("saved_rs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+698+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+857,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+457,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+701,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+702,0,"exec_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"is_mx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"mx_operation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"mx_format",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+108,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"rs3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("execute_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1029,0,"X_RFR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+703,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+704,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"rs3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"mx_operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+696,0,"mx_format",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+702,0,"result_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"unused_rs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"unused_mx_format",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"data_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"data_gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"data_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"data_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"data_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"data_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"data_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"data_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"data_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"data_exokay_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"unused_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"unused_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"unused_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"unused_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+687,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_instr_rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1049,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+865,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"instr_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"instr_gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"instr_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"instr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+686,0,"instr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"instr_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1016,0,"MXDOTP_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1083,0,"MXDOTP_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1084,0,"MXDOTP_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1085,0,"MXDOTP_RS3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1017,0,"MXDOTP_RS1_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1018,0,"MXDOTP_RS2_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"MXDOTP_RS3_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"INSTR_ADDI_X1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"INSTR_ADDI_X2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"INSTR_ADDI_X3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"INSTR_MXDOTP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"INSTR_JAL_SELF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"INSTR_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+685,0,"req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+706,0,"addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_pkg__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1091,0,"OPCODE_OPIMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1092,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__mxdotp_pkg__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__mxdotp_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1093,0,"MX_OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1094,0,"MX_FUNCT3_DOTP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1095,0,"MX_FUNCT3_FINAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1026,0,"MX_FMT_MXFP4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1096,0,"MX_FMT_M2FP4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1097,0,"MX_FMT_NVFP4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1098,0,"MX_FMT_MXFP4_RESIDUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1027,0,"MX_NUM_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+321,0,"s_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+867,0,"s_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+447,0,"req_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+685,0,"s_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+690,0,"resp_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__xif__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1027,0,"X_NUM_RS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1028,0,"X_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"X_RFW_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1012,0,"X_MISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"X_ECS_XS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1029,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1029,0,"FLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1011,0,"compressed_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"compressed_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"compressed_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declQuad(c+1101,0,"compressed_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+873,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"issue_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+113,0,"issue_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBus(c+458,0,"issue_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+357,0,"commit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1011,0,"mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1103,0,"mem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBus(c+1025,0,"mem_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1011,0,"mem_result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1106,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+852,0,"result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"result_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+858,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_data_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+331,0,"s_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+868,0,"s_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+301,0,"req_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBus(c+687,0,"s_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+1081,0,"resp_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_sub__TOP__cv32e40x_pkg__0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_sub__TOP__cv32e40x_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1108,0,"ALU_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"MUL_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"DIV_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"HAVERESET_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"RUNNING_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"HALTED_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"CSR_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1037,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1109,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1110,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1111,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1112,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1113,0,"MVENDORID_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1114,0,"MVENDORID_BANK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1115,0,"MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1096,0,"MTVEC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1116,0,"NUM_HPM_EVENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"MSTATUS_UIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"MSTATUS_SIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1078,0,"MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1117,0,"MSTATUS_UPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"MSTATUS_SPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,0,"MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1118,0,"MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1119,0,"MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1096,0,"MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1120,0,"MHPMCOUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"DBG_CAUSE_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1095,0,"DBG_CAUSE_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1121,0,"DBG_CAUSE_TRIGGER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1122,0,"DBG_CAUSE_HALTREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1123,0,"DBG_CAUSE_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1124,0,"DBG_CAUSE_RSTHALTREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1125,0,"DCSR_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"MTVEC_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1040,0,"MTVT_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"MINTSTATUS_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1127,0,"MSTATUS_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1128,0,"TMATCH_CONTROL_RST_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"REGFILE_NUM_WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"REGFILE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"REGFILE_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"REGFILE_WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"REGFILE_NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1084,0,"AMO_LR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1085,0,"AMO_SC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1083,0,"AMO_SWAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1129,0,"AMO_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1130,0,"AMO_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1131,0,"AMO_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1132,0,"AMO_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1133,0,"AMO_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1134,0,"AMO_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1135,0,"AMO_MINU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1136,0,"AMO_MAXU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+1072,0,"DECODER_CTRL_ILLEGAL_INSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1137,0,"EXC_CAUSE_INSTR_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1138,0,"EXC_CAUSE_ILLEGAL_INSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1139,0,"EXC_CAUSE_BREAKPOINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1140,0,"EXC_CAUSE_LOAD_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1141,0,"EXC_CAUSE_STORE_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1142,0,"EXC_CAUSE_ECALL_MMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1143,0,"EXC_CAUSE_INSTR_BUS_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1144,0,"INT_CAUSE_LSU_LOAD_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1145,0,"INT_CAUSE_LSU_STORE_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1146,0,"IRQ_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1075,0,"NO_PMA_R_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+1147,0,"PMA_R_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+1055,0,"INSTR_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"INSTR_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"DATA_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"DATA_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1150,0,"INST_RESP_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+1152,0,"OBI_INST_REQ_RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_init_top(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_init_top\n"); );
    // Body
    Vtb_mxdotp_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mxdotp_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mxdotp_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_register(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_mxdotp_core___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_mxdotp_core___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_mxdotp_core___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_mxdotp_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_const_0_sub_0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_const_0\n"); );
    // Init
    Vtb_mxdotp_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mxdotp_core___024root*>(voidSelf);
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_mxdotp_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_const_0_sub_0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    bufp->fullQData(oldp+1008,(0xaULL),64);
    bufp->fullIData(oldp+1010,(0x1f4U),32);
    bufp->fullBit(oldp+1011,(0U));
    bufp->fullIData(oldp+1012,(0U),32);
    bufp->fullBit(oldp+1013,(1U));
    bufp->fullSData(oldp+1014,(0U),12);
    bufp->fullIData(oldp+1015,(0x1820828bU),32);
    bufp->fullCData(oldp+1016,(5U),5);
    bufp->fullIData(oldp+1017,(5U),32);
    bufp->fullIData(oldp+1018,(7U),32);
    bufp->fullIData(oldp+1019,(9U),32);
    bufp->fullIData(oldp+1020,(0xcU),32);
    bufp->fullIData(oldp+1021,(0U),32);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+1022,(__Vtemp_1),68);
    bufp->fullCData(oldp+1025,(0U),8);
    bufp->fullCData(oldp+1026,(0U),2);
    bufp->fullIData(oldp+1027,(3U),32);
    bufp->fullIData(oldp+1028,(4U),32);
    bufp->fullIData(oldp+1029,(0x20U),32);
    bufp->fullIData(oldp+1030,(0U),32);
    bufp->fullBit(oldp+1031,(0U));
    bufp->fullBit(oldp+1032,(0U));
    bufp->fullCData(oldp+1033,(0U),2);
    bufp->fullCData(oldp+1034,(1U),2);
    bufp->fullBit(oldp+1035,(1U));
    bufp->fullIData(oldp+1036,(1U),32);
    bufp->fullIData(oldp+1037,(3U),32);
    bufp->fullIData(oldp+1038,(0x40001104U),32);
    bufp->fullSData(oldp+1039,(4U),16);
    bufp->fullIData(oldp+1040,(0U),32);
    bufp->fullIData(oldp+1041,(0U),32);
    bufp->fullIData(oldp+1042,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mclicbase_n),32);
    bufp->fullBit(oldp+1043,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mclicbase_we));
    bufp->fullBit(oldp+1044,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratchcsw_rd_error));
    bufp->fullBit(oldp+1045,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratchcswl_rd_error));
    bufp->fullBit(oldp+1046,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mclicbase_rd_error));
    bufp->fullSData(oldp+1047,(0xffc0U),16);
    bufp->fullIData(oldp+1048,(0xdU),32);
    bufp->fullIData(oldp+1049,(0x20U),32);
    bufp->fullIData(oldp+1050,(0x40000003U),32);
    bufp->fullIData(oldp+1051,(0U),32);
    bufp->fullIData(oldp+1052,(0x1800U),32);
    bufp->fullIData(oldp+1053,(1U),32);
    bufp->fullIData(oldp+1054,(0x28001040U),32);
    bufp->fullIData(oldp+1055,(0x20U),32);
    bufp->fullIData(oldp+1056,(5U),32);
    __Vtemp_2[0U] = 0x8a418820U;
    __Vtemp_2[1U] = 0xc5a92839U;
    __Vtemp_2[2U] = 0xca307b9aU;
    __Vtemp_2[3U] = 0x38bdab49U;
    __Vtemp_2[4U] = 0xffbbcdebU;
    bufp->fullWData(oldp+1057,(__Vtemp_2),160);
    bufp->fullIData(oldp+1062,(0x20U),32);
    bufp->fullIData(oldp+1063,(1U),32);
    bufp->fullIData(oldp+1064,(0x13U),32);
    bufp->fullIData(oldp+1065,(0xfU),32);
    bufp->fullIData(oldp+1066,(0x18U),32);
    bufp->fullIData(oldp+1067,(0x14U),32);
    bufp->fullIData(oldp+1068,(0x1fU),32);
    bufp->fullIData(oldp+1069,(0x1bU),32);
    bufp->fullIData(oldp+1070,(0xbU),32);
    bufp->fullIData(oldp+1071,(7U),32);
    bufp->fullQData(oldp+1072,(0x9f5100000040ULL),53);
    bufp->fullIData(oldp+1074,(3U),32);
    __Vtemp_3[0U] = 9U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    bufp->fullWData(oldp+1075,(__Vtemp_3),68);
    bufp->fullIData(oldp+1078,(3U),32);
    bufp->fullIData(oldp+1079,(2U),32);
    bufp->fullIData(oldp+1080,(2U),32);
    bufp->fullQData(oldp+1081,(1ULL),34);
    bufp->fullCData(oldp+1083,(1U),5);
    bufp->fullCData(oldp+1084,(2U),5);
    bufp->fullCData(oldp+1085,(3U),5);
    bufp->fullIData(oldp+1086,(0x500093U),32);
    bufp->fullIData(oldp+1087,(0x700113U),32);
    bufp->fullIData(oldp+1088,(0x900193U),32);
    bufp->fullIData(oldp+1089,(0x6fU),32);
    bufp->fullIData(oldp+1090,(0x13U),32);
    bufp->fullCData(oldp+1091,(0x13U),7);
    bufp->fullCData(oldp+1092,(0x6fU),7);
    bufp->fullCData(oldp+1093,(0xbU),7);
    bufp->fullCData(oldp+1094,(0U),3);
    bufp->fullCData(oldp+1095,(1U),3);
    bufp->fullCData(oldp+1096,(1U),2);
    bufp->fullCData(oldp+1097,(2U),2);
    bufp->fullCData(oldp+1098,(3U),2);
    bufp->fullBit(oldp+1099,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.__PVT__compressed_ready));
    bufp->fullIData(oldp+1100,(0U),22);
    bufp->fullQData(oldp+1101,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.__PVT__compressed_resp),33);
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    bufp->fullWData(oldp+1103,(__Vtemp_4),75);
    bufp->fullQData(oldp+1106,(0ULL),38);
    bufp->fullIData(oldp+1108,(6U),32);
    bufp->fullIData(oldp+1109,(7U),32);
    bufp->fullIData(oldp+1110,(0xbU),32);
    bufp->fullIData(oldp+1111,(0x10U),32);
    bufp->fullIData(oldp+1112,(0x1fU),32);
    bufp->fullCData(oldp+1113,(2U),7);
    bufp->fullIData(oldp+1114,(0xcU),25);
    bufp->fullIData(oldp+1115,(0x14U),32);
    bufp->fullIData(oldp+1116,(0x10U),32);
    bufp->fullIData(oldp+1117,(4U),32);
    bufp->fullIData(oldp+1118,(0xcU),32);
    bufp->fullIData(oldp+1119,(0x11U),32);
    bufp->fullIData(oldp+1120,(0x40U),32);
    bufp->fullCData(oldp+1121,(2U),3);
    bufp->fullCData(oldp+1122,(3U),3);
    bufp->fullCData(oldp+1123,(4U),3);
    bufp->fullCData(oldp+1124,(5U),3);
    bufp->fullIData(oldp+1125,(0x40000003U),32);
    bufp->fullIData(oldp+1126,(1U),32);
    bufp->fullIData(oldp+1127,(0x1800U),32);
    bufp->fullIData(oldp+1128,(0x28001040U),32);
    bufp->fullCData(oldp+1129,(0U),5);
    bufp->fullCData(oldp+1130,(4U),5);
    bufp->fullCData(oldp+1131,(0xcU),5);
    bufp->fullCData(oldp+1132,(8U),5);
    bufp->fullCData(oldp+1133,(0x10U),5);
    bufp->fullCData(oldp+1134,(0x14U),5);
    bufp->fullCData(oldp+1135,(0x18U),5);
    bufp->fullCData(oldp+1136,(0x1cU),5);
    bufp->fullCData(oldp+1137,(1U),8);
    bufp->fullCData(oldp+1138,(2U),8);
    bufp->fullCData(oldp+1139,(3U),8);
    bufp->fullCData(oldp+1140,(5U),8);
    bufp->fullCData(oldp+1141,(7U),8);
    bufp->fullCData(oldp+1142,(0xbU),8);
    bufp->fullCData(oldp+1143,(0x30U),8);
    bufp->fullCData(oldp+1144,(0x80U),8);
    bufp->fullCData(oldp+1145,(0x81U),8);
    bufp->fullIData(oldp+1146,(0xffff0888U),32);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    bufp->fullWData(oldp+1147,(__Vtemp_5),68);
    bufp->fullQData(oldp+1150,(0x18ULL),35);
    bufp->fullQData(oldp+1152,(0xcULL),38);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_full_0_sub_0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_full_0\n"); );
    // Init
    Vtb_mxdotp_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mxdotp_core___024root*>(voidSelf);
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_mxdotp_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root__trace_full_0_sub_0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__unnamedblk1__DOT__i),32);
    bufp->fullWData(oldp+34,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n),2048);
    bufp->fullQData(oldp+98,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we),64);
    bufp->fullIData(oldp+100,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                << 0x10U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                             >> 0x10U))),32);
    bufp->fullCData(oldp+101,((0xfU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                       >> 0xaU))),4);
    bufp->fullIData(oldp+102,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[1U] 
                                << 0x16U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[0U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+103,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[2U] 
                                << 0x16U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[1U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+104,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                << 0x16U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[2U] 
                                             >> 0xaU))),32);
    bufp->fullBit(oldp+105,((0xbU == (0x7fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                               >> 0x10U)))));
    bufp->fullCData(oldp+106,((7U & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                     >> 0x1cU))),3);
    bufp->fullCData(oldp+107,((3U & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                     >> 9U))),2);
    bufp->fullCData(oldp+108,((0x1fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                        >> 0x17U))),5);
    bufp->fullCData(oldp+109,((0x1fU & ((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                         << 1U) | (
                                                   vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                                   >> 0x1fU)))),5);
    bufp->fullCData(oldp+110,((0x1fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                        >> 4U))),5);
    bufp->fullCData(oldp+111,((0x1fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+112,((0x7fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                        >> 0x10U))),7);
    bufp->fullWData(oldp+113,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req),144);
    bufp->fullQData(oldp+118,((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))),64);
    bufp->fullWData(oldp+120,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q),2048);
    bufp->fullWData(oldp+184,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
    bufp->fullCData(oldp+216,((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU)),6);
    bufp->fullWData(oldp+217,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum),192);
    bufp->fullBit(oldp+223,(((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid))));
    bufp->fullBit(oldp+224,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x31U))))));
    bufp->fullCData(oldp+225,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                      >> 0x13U))))),2);
    bufp->fullBit(oldp+226,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                              >> 9U) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid))));
    bufp->fullCData(oldp+227,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                      >> 0x17U))))),2);
    bufp->fullBit(oldp+228,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x33U))))));
    bufp->fullCData(oldp+229,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0x13U : (0x3fU & (IData)(
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                            >> 0x2bU))))),6);
    bufp->fullBit(oldp+230,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x1eU))))));
    bufp->fullCData(oldp+231,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                      >> 0x1cU))))),2);
    bufp->fullCData(oldp+232,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                      >> 0x19U))))),2);
    bufp->fullBit(oldp+233,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x11U))))));
    bufp->fullCData(oldp+234,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0U : (3U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                      >> 0xfU))))),2);
    bufp->fullBit(oldp+235,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0xeU))))));
    bufp->fullCData(oldp+236,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0U : (0x3fU & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 8U))))),6);
    bufp->fullBit(oldp+237,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 2U))))));
    bufp->fullBit(oldp+238,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 3U))))));
    bufp->fullBit(oldp+239,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 4U))))));
    bufp->fullBit(oldp+240,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 5U))))));
    bufp->fullBit(oldp+241,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec)))));
    bufp->fullIData(oldp+242,(((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? ((0x40000U & 
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])
                                        ? 2U : 4U) : 
                                   (0xfffff000U & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   << 0xaU)))
                                : ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                       >> 0x15U)))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                             << 3U) 
                                            | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                               >> 0x1dU)))))
                                    : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))),32);
    bufp->fullBit(oldp+243,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x16U))))));
    bufp->fullBit(oldp+244,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x12U))))));
    bufp->fullBit(oldp+245,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x15U))))));
    bufp->fullBit(oldp+246,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x1fU))))));
    bufp->fullBit(oldp+247,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 0x1bU))))));
    bufp->fullBit(oldp+248,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                          >> 7U))))));
    bufp->fullQData(oldp+249,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                ? 0x9f5100000040ULL
                                : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec)),53);
    bufp->fullCData(oldp+251,((0xfU & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit) 
                                       >> 1U))),4);
    bufp->fullBit(oldp+252,((1U & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit))));
    bufp->fullBit(oldp+253,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex));
    bufp->fullBit(oldp+254,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex));
    bufp->fullBit(oldp+255,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw));
    bufp->fullBit(oldp+256,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp));
    bufp->fullBit(oldp+257,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn));
    bufp->fullBit(oldp+258,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_illegal));
    bufp->fullBit(oldp+259,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__xif_csr_error_ex));
    bufp->fullBit(oldp+260,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read));
    bufp->fullBit(oldp+261,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid));
    bufp->fullBit(oldp+262,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid));
    bufp->fullBit(oldp+263,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated));
    bufp->fullBit(oldp+264,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__csr_is_illegal));
    bufp->fullCData(oldp+265,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
    bufp->fullCData(oldp+266,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel),2);
    bufp->fullCData(oldp+267,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel),2);
    bufp->fullBit(oldp+268,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
    bufp->fullCData(oldp+269,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel),2);
    bufp->fullCData(oldp+270,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel),2);
    bufp->fullIData(oldp+271,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a),32);
    bufp->fullBit(oldp+272,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__instr_valid));
    bufp->fullQData(oldp+273,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl),53);
    bufp->fullQData(oldp+275,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec),53);
    bufp->fullBit(oldp+277,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid));
    bufp->fullWData(oldp+278,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans),77);
    bufp->fullBit(oldp+281,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid));
    bufp->fullWData(oldp+282,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans),81);
    bufp->fullWData(oldp+285,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o),81);
    bufp->fullIData(oldp+288,(((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                ? ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                    ? ((0xff000000U 
                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                           << 0x15U)) 
                                       | (0xffffffU 
                                          & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                              << 0x15U) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                >> 0xbU))))
                                    : ((0xffff0000U 
                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                           << 0xdU)) 
                                       | (0xffffU & 
                                          ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                            << 0xdU) 
                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                              >> 0x13U)))))
                                : ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                    ? ((0xffffff00U 
                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                           << 5U)) 
                                       | (0xffU & (
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                      >> 0x1bU))))
                                    : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                        << 0x1dU) | 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                        >> 3U))))),32);
    bufp->fullBit(oldp+289,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword));
    bufp->fullBit(oldp+290,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+291,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid));
    bufp->fullCData(oldp+292,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit),5);
    bufp->fullBit(oldp+293,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                   >> 0xaU))));
    bufp->fullCData(oldp+294,((0xfU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                       >> 6U))),4);
    bufp->fullIData(oldp+295,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                << 0xfU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                            >> 0x11U))),32);
    bufp->fullCData(oldp+296,((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                     >> 4U))),2);
    bufp->fullCData(oldp+297,((7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+298,((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U])));
    bufp->fullIData(oldp+299,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                << 0x1aU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                             >> 6U))),32);
    bufp->fullCData(oldp+300,((0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                        >> 0xbU))),6);
    bufp->fullWData(oldp+301,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans),81);
    bufp->fullCData(oldp+304,((0x1fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])),5);
    bufp->fullWData(oldp+305,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes),160);
    bufp->fullBit(oldp+310,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready));
    bufp->fullBit(oldp+311,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_ready));
    bufp->fullBit(oldp+312,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_valid));
    bufp->fullIData(oldp+313,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux),32);
    bufp->fullIData(oldp+314,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux),32);
    bufp->fullBit(oldp+315,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt));
    bufp->fullBit(oldp+316,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en));
    bufp->fullBit(oldp+317,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en));
    bufp->fullBit(oldp+318,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en));
    bufp->fullBit(oldp+319,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en));
    bufp->fullCData(oldp+320,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state),2);
    bufp->fullBit(oldp+321,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.s_req));
    bufp->fullBit(oldp+322,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready));
    bufp->fullBit(oldp+323,((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n))));
    bufp->fullBit(oldp+324,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core));
    bufp->fullBit(oldp+325,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus));
    bufp->fullBit(oldp+326,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    bufp->fullBit(oldp+327,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
    bufp->fullCData(oldp+328,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status),2);
    bufp->fullCData(oldp+329,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_n),3);
    bufp->fullCData(oldp+330,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n),2);
    bufp->fullBit(oldp+331,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid));
    bufp->fullBit(oldp+332,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy));
    bufp->fullCData(oldp+333,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status),2);
    bufp->fullBit(oldp+334,((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy)))));
    bufp->fullQData(oldp+335,((4ULL | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)))),36);
    bufp->fullBit(oldp+337,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    bufp->fullBit(oldp+338,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid));
    bufp->fullBit(oldp+339,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core));
    bufp->fullBit(oldp+340,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus));
    bufp->fullBit(oldp+341,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    bufp->fullBit(oldp+342,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
    bufp->fullCData(oldp+343,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n),3);
    bufp->fullBit(oldp+344,((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))));
    bufp->fullBit(oldp+345,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[0]));
    bufp->fullBit(oldp+346,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[1]));
    bufp->fullBit(oldp+347,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid));
    bufp->fullIData(oldp+348,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0]),32);
    bufp->fullIData(oldp+349,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1]),32);
    bufp->fullCData(oldp+350,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result),6);
    bufp->fullIData(oldp+351,((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)),32);
    bufp->fullCData(oldp+352,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt),6);
    bufp->fullQData(oldp+353,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp),64);
    bufp->fullIData(oldp+355,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result),32);
    bufp->fullCData(oldp+356,((0x3fU & ((IData)(0x20U) 
                                        - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)))),6);
    bufp->fullBit(oldp+357,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit_valid));
    bufp->fullIData(oldp+358,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
    bufp->fullBit(oldp+359,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if));
    bufp->fullIData(oldp+360,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
    bufp->fullBit(oldp+361,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    bufp->fullIData(oldp+362,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n),32);
    bufp->fullBit(oldp+363,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we));
    bufp->fullIData(oldp+364,((0x28001040U | (4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int))),32);
    bufp->fullIData(oldp+365,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n),32);
    bufp->fullBit(oldp+366,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we));
    bufp->fullIData(oldp+367,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_n),32);
    bufp->fullBit(oldp+368,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we));
    bufp->fullBit(oldp+369,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_we));
    bufp->fullBit(oldp+370,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_we));
    bufp->fullBit(oldp+371,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_we));
    bufp->fullIData(oldp+372,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n),32);
    bufp->fullBit(oldp+373,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we));
    bufp->fullIData(oldp+374,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n),32);
    bufp->fullBit(oldp+375,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we));
    bufp->fullIData(oldp+376,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n),32);
    bufp->fullBit(oldp+377,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_we));
    bufp->fullIData(oldp+378,((0xffff0888U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)),32);
    bufp->fullBit(oldp+379,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_we));
    bufp->fullWData(oldp+380,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
    bufp->fullIData(oldp+412,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
    bufp->fullIData(oldp+413,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower),32);
    bufp->fullIData(oldp+414,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper),32);
    bufp->fullIData(oldp+415,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment),32);
    bufp->fullBit(oldp+416,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_en_gated));
    bufp->fullSData(oldp+417,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events_raw),16);
    bufp->fullBit(oldp+418,((0xffffffffU == (0xfffffff2U 
                                             | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    bufp->fullBit(oldp+419,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we));
    bufp->fullQData(oldp+420,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr),35);
    bufp->fullBit(oldp+422,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn));
    bufp->fullQData(oldp+423,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed),35);
    bufp->fullBit(oldp+425,((3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 3U))))));
    bufp->fullIData(oldp+426,((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 3U))),32);
    bufp->fullCData(oldp+427,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n),2);
    bufp->fullCData(oldp+428,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch),2);
    bufp->fullBit(oldp+429,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
    bufp->fullIData(oldp+430,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target),32);
    bufp->fullBit(oldp+431,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en));
    bufp->fullBit(oldp+432,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__mul_en));
    bufp->fullBit(oldp+433,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__div_en));
    bufp->fullBit(oldp+434,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__lsu_en));
    bufp->fullIData(oldp+435,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__jalr_fw),32);
    bufp->fullIData(oldp+436,((IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload 
                                       >> 6U))),32);
    bufp->fullCData(oldp+437,((3U & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload 
                                             >> 4U)))),2);
    bufp->fullCData(oldp+438,((7U & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload 
                                             >> 1U)))),3);
    bufp->fullBit(oldp+439,((1U & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload))));
    bufp->fullIData(oldp+440,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n),32);
    bufp->fullIData(oldp+441,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr),32);
    bufp->fullQData(oldp+442,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o),38);
    bufp->fullIData(oldp+444,(VL_SHIFTR_III(32,32,32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr, 2U)),32);
    bufp->fullIData(oldp+445,((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)),32);
    bufp->fullIData(oldp+446,((0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)),32);
    bufp->fullQData(oldp+447,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload),38);
    bufp->fullBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                   >> 6U))));
    bufp->fullBit(oldp+450,((1U & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                   >> 5U))));
    bufp->fullBit(oldp+451,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__rf_we));
    bufp->fullIData(oldp+452,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw),32);
    bufp->fullIData(oldp+453,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw),32);
    bufp->fullBit(oldp+454,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_accept) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_reject))));
    bufp->fullBit(oldp+455,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_accept));
    bufp->fullBit(oldp+456,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_reject));
    bufp->fullCData(oldp+457,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_d),2);
    bufp->fullCData(oldp+458,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp),7);
    bufp->fullBit(oldp+459,(vlSelf->tb_mxdotp_core__DOT__fencei_flush_req));
    bufp->fullIData(oldp+460,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q),32);
    bufp->fullBit(oldp+461,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid_q)) 
                             & (0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))));
    bufp->fullIData(oldp+462,((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q 
                               >> 8U)),24);
    bufp->fullCData(oldp+463,((3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)),2);
    bufp->fullIData(oldp+464,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_ext),32);
    bufp->fullCData(oldp+465,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_err),2);
    bufp->fullBit(oldp+466,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                   >> 3U))));
    bufp->fullIData(oldp+467,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+468,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+469,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+470,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_q),32);
    bufp->fullIData(oldp+471,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q),32);
    bufp->fullBit(oldp+472,(((0U != vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual) 
                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                >> 3U))));
    bufp->fullCData(oldp+473,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl),5);
    bufp->fullCData(oldp+474,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs),3);
    bufp->fullCData(oldp+475,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs),3);
    bufp->fullBit(oldp+476,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q));
    bufp->fullBit(oldp+477,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q));
    bufp->fullBit(oldp+478,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q));
    bufp->fullBit(oldp+479,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q));
    bufp->fullCData(oldp+480,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q),3);
    bufp->fullBit(oldp+481,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q));
    bufp->fullBit(oldp+482,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__fencei_flush_req))));
    bufp->fullBit(oldp+483,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event));
    bufp->fullBit(oldp+484,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q));
    bufp->fullBit(oldp+485,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q));
    bufp->fullIData(oldp+486,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+487,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+488,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+489,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+490,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+491,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+492,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+493,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+494,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q),32);
    bufp->fullIData(oldp+495,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
    bufp->fullWData(oldp+496,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment),2048);
    bufp->fullIData(oldp+560,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                                ? (- vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                                : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)),32);
    bufp->fullIData(oldp+561,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q),32);
    bufp->fullIData(oldp+562,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q),32);
    bufp->fullIData(oldp+563,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q),32);
    bufp->fullBit(oldp+564,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q));
    bufp->fullBit(oldp+565,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q));
    bufp->fullBit(oldp+566,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q));
    bufp->fullIData(oldp+567,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux),32);
    bufp->fullCData(oldp+568,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q),6);
    bufp->fullBit(oldp+569,((1U & (~ (IData)((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))));
    bufp->fullCData(oldp+570,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state),2);
    bufp->fullCData(oldp+571,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state),2);
    bufp->fullQData(oldp+572,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc),33);
    bufp->fullBit(oldp+574,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q));
    bufp->fullBit(oldp+575,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)))));
    bufp->fullBit(oldp+577,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q));
    bufp->fullQData(oldp+578,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q),38);
    bufp->fullCData(oldp+580,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_q),3);
    bufp->fullCData(oldp+581,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q),3);
    bufp->fullBit(oldp+582,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
    bufp->fullBit(oldp+583,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q));
    bufp->fullBit(oldp+584,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q));
    bufp->fullCData(oldp+585,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q),2);
    bufp->fullBit(oldp+586,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
                             && ((0x68U >= ((IData)(2U) 
                                            + (0x7fU 
                                               & ((IData)(0x23U) 
                                                  * 
                                                  ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                 && (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                           (((IData)(2U) 
                                             + (0x7fU 
                                                & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))))));
    bufp->fullWData(oldp+587,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q),105);
    bufp->fullCData(oldp+591,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q),3);
    bufp->fullCData(oldp+592,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr),2);
    bufp->fullCData(oldp+593,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2),2);
    bufp->fullCData(oldp+594,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr),2);
    bufp->fullIData(oldp+595,(((IData)(4U) + (0xfffffffcU 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))),32);
    bufp->fullBit(oldp+596,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q));
    bufp->fullIData(oldp+597,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q),32);
    bufp->fullIData(oldp+598,(((IData)(4U) + (0xfffffffcU 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q))),32);
    bufp->fullIData(oldp+599,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual),32);
    bufp->fullCData(oldp+600,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q),2);
    bufp->fullCData(oldp+601,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_size_q),2);
    bufp->fullBit(oldp+602,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_sext_q));
    bufp->fullBit(oldp+603,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_we_q));
    bufp->fullCData(oldp+604,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
    bufp->fullBit(oldp+605,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__last_q));
    bufp->fullBit(oldp+606,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q));
    bufp->fullIData(oldp+607,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q),32);
    bufp->fullBit(oldp+608,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid_q));
    bufp->fullIData(oldp+609,(((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x18U) : 
                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                    >> 0x10U)) : ((1U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                   ? 
                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 8U)
                                                   : 0U))),32);
    bufp->fullIData(oldp+610,(((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_sext_q)
                                        ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x18U)
                                        : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x18U))
                                    : 0U) : 0U)),32);
    bufp->fullCData(oldp+611,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q),3);
    bufp->fullCData(oldp+612,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q),2);
    bufp->fullCData(oldp+613,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q),2);
    bufp->fullBit(oldp+614,(((5U >= ((IData)(1U) + 
                                     (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))) 
                             && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                       >> ((IData)(1U) 
                                           + (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))))));
    bufp->fullBit(oldp+615,(((5U >= ((IData)(1U) + 
                                     (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U)))) 
                             && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                       >> ((IData)(1U) 
                                           + (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U))))))));
    bufp->fullCData(oldp+616,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q),6);
    bufp->fullBit(oldp+617,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state));
    bufp->fullWData(oldp+618,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q),81);
    bufp->fullIData(oldp+621,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0]),32);
    bufp->fullIData(oldp+622,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1]),32);
    bufp->fullIData(oldp+623,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2]),32);
    bufp->fullIData(oldp+624,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3]),32);
    bufp->fullIData(oldp+625,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4]),32);
    bufp->fullIData(oldp+626,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5]),32);
    bufp->fullIData(oldp+627,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6]),32);
    bufp->fullIData(oldp+628,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7]),32);
    bufp->fullIData(oldp+629,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8]),32);
    bufp->fullIData(oldp+630,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9]),32);
    bufp->fullIData(oldp+631,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[10]),32);
    bufp->fullIData(oldp+632,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[11]),32);
    bufp->fullIData(oldp+633,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[12]),32);
    bufp->fullIData(oldp+634,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[13]),32);
    bufp->fullIData(oldp+635,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[14]),32);
    bufp->fullIData(oldp+636,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[15]),32);
    bufp->fullIData(oldp+637,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[16]),32);
    bufp->fullIData(oldp+638,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[17]),32);
    bufp->fullIData(oldp+639,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[18]),32);
    bufp->fullIData(oldp+640,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[19]),32);
    bufp->fullIData(oldp+641,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[20]),32);
    bufp->fullIData(oldp+642,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[21]),32);
    bufp->fullIData(oldp+643,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[22]),32);
    bufp->fullIData(oldp+644,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[23]),32);
    bufp->fullIData(oldp+645,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[24]),32);
    bufp->fullIData(oldp+646,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[25]),32);
    bufp->fullIData(oldp+647,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[26]),32);
    bufp->fullIData(oldp+648,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[27]),32);
    bufp->fullIData(oldp+649,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[28]),32);
    bufp->fullIData(oldp+650,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[29]),32);
    bufp->fullIData(oldp+651,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[30]),32);
    bufp->fullIData(oldp+652,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[31]),32);
    bufp->fullIData(oldp+653,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+654,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+655,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+656,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+657,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+658,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+659,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+660,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+661,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+662,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+663,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+664,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+665,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+666,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+667,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+668,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+669,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+670,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+671,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+672,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+673,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+674,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+675,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+676,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+677,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+678,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+679,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+680,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+681,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+682,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+683,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    bufp->fullBit(oldp+684,(vlSelf->tb_mxdotp_core__DOT__fetch_enable_q));
    bufp->fullBit(oldp+685,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__req_q));
    bufp->fullIData(oldp+686,(vlSelf->tb_mxdotp_core__DOT__instr_rdata),32);
    bufp->fullBit(oldp+687,(vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q));
    bufp->fullBit(oldp+688,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
    bufp->fullBit(oldp+689,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q));
    bufp->fullQData(oldp+690,(((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__instr_rdata)) 
                               << 1U)),33);
    bufp->fullBit(oldp+692,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__fetch_enable_q))));
    bufp->fullBit(oldp+693,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q));
    bufp->fullCData(oldp+694,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_id),4);
    bufp->fullCData(oldp+695,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rd),5);
    bufp->fullCData(oldp+696,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_format),2);
    bufp->fullCData(oldp+697,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation),3);
    bufp->fullIData(oldp+698,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[0]),32);
    bufp->fullIData(oldp+699,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[1]),32);
    bufp->fullIData(oldp+700,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[2]),32);
    bufp->fullIData(oldp+701,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__i),32);
    bufp->fullIData(oldp+702,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation))
                                ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                   [0U] + vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                   [1U]) : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation))
                                             ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                            [0U] : 0U))),32);
    bufp->fullIData(oldp+703,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                              [0U]),32);
    bufp->fullIData(oldp+704,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                              [1U]),32);
    bufp->fullIData(oldp+705,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                              [2U]),32);
    bufp->fullIData(oldp+706,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__addr_q),32);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_ready));
    bufp->fullCData(oldp+708,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+709,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+710,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result));
    bufp->fullWData(oldp+711,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe),311);
    bufp->fullWData(oldp+721,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe),204);
    bufp->fullWData(oldp+728,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe),119);
    bufp->fullCData(oldp+732,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[0]),5);
    bufp->fullCData(oldp+733,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[1]),5);
    bufp->fullCData(oldp+734,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[2]),5);
    bufp->fullIData(oldp+735,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[0]),32);
    bufp->fullIData(oldp+736,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[1]),32);
    bufp->fullIData(oldp+737,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[2]),32);
    bufp->fullCData(oldp+738,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr[0]),5);
    bufp->fullCData(oldp+739,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr[1]),5);
    bufp->fullBit(oldp+740,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read));
    bufp->fullBit(oldp+741,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb));
    bufp->fullBit(oldp+742,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match));
    bufp->fullBit(oldp+743,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match));
    bufp->fullBit(oldp+744,((1U & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                     >> 5U) & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                >> 6U) 
                                               | (IData)(
                                                         (0x1080000U 
                                                          == 
                                                          (0x1080000U 
                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U]))))) 
                                   | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                       >> 0xdU) & (
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                                    >> 2U) 
                                                   | (IData)(
                                                             (0x840U 
                                                              == 
                                                              (0x840U 
                                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))))))));
    bufp->fullBit(oldp+745,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex));
    bufp->fullBit(oldp+746,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb));
    bufp->fullCData(oldp+747,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                        >> 0xaU))),5);
    bufp->fullBit(oldp+748,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q));
    bufp->fullBit(oldp+749,((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                               >> 5U) & (0x600000U 
                                         == (0x600000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U]))) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result))));
    bufp->fullBit(oldp+750,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex));
    bufp->fullBit(oldp+751,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb));
    bufp->fullBit(oldp+752,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb));
    bufp->fullBit(oldp+753,((IData)((0x2840U == (0x2840U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))));
    bufp->fullBit(oldp+754,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb));
    bufp->fullBit(oldp+755,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb));
    bufp->fullBit(oldp+756,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb));
    bufp->fullBit(oldp+757,((IData)((0x2010U == (0x2010U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))));
    bufp->fullBit(oldp+758,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi));
    bufp->fullBit(oldp+759,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt));
    bufp->fullBit(oldp+760,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    bufp->fullBit(oldp+761,((1U & (IData)(((0x30U == 
                                            (0x30U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                                           & (~ vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[0U]))))));
    bufp->fullCData(oldp+762,((3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U])),2);
    bufp->fullSData(oldp+763,((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+764,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr),12);
    bufp->fullIData(oldp+765,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                            >> 0x14U))),32);
    bufp->fullBit(oldp+766,(((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                           >> 4U))) 
                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                 >> 6U) & (3U == ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf91f4e7e__0)
                                                   ? 
                                                  (3U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0x18U))
                                                   : 0U))))));
    bufp->fullIData(oldp+767,((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)),32);
    bufp->fullBit(oldp+768,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en));
    bufp->fullIData(oldp+769,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_data_rev),32);
    bufp->fullBit(oldp+770,((1U & ((IData)(((0U != 
                                             (0x380U 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                                            | (0U != 
                                               (0x30000U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])))) 
                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                      >> 5U)))));
    bufp->fullCData(oldp+771,((0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                        >> 0xeU))),6);
    bufp->fullIData(oldp+772,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+773,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+774,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+775,(VL_STREAML_FAST_III(32, 
                                                  ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                      >> 0xeU)), 0)),32);
    bufp->fullIData(oldp+776,(VL_STREAML_FAST_III(32, 
                                                  ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0xeU)), 0)),32);
    bufp->fullQData(oldp+777,((1ULL | ((QData)((IData)(
                                                       ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                         << 0x12U) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                           >> 0xeU)))) 
                                       << 1U))),33);
    bufp->fullQData(oldp+779,((((QData)((IData)(((0x20000U 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                                                  ? 
                                                 (~ 
                                                  ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0xeU)))
                                                  : 
                                                 ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                   << 0x12U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                     >> 0xeU))))) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                             >> 0x11U)))))),33);
    bufp->fullIData(oldp+781,((IData)((0x1ffffffffULL 
                                       & (((1ULL | 
                                            ((QData)((IData)(
                                                             ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                               << 0x12U) 
                                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                 >> 0xeU)))) 
                                             << 1U)) 
                                           + (((QData)((IData)(
                                                               ((0x20000U 
                                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                                                                 ? 
                                                                (~ 
                                                                 ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                                     >> 0xeU)))
                                                                 : 
                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                                    >> 0xeU))))) 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                    >> 0x11U)))))) 
                                          >> 1U)))),32);
    bufp->fullQData(oldp+782,((0x3ffffffffULL & ((1ULL 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                         >> 0xeU)))) 
                                                     << 1U)) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   ((0x20000U 
                                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                                                                     ? 
                                                                    (~ 
                                                                     ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                                         >> 0xeU)))
                                                                     : 
                                                                    ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                                        >> 0xeU))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                        >> 0x11U)))))))),34);
    bufp->fullBit(oldp+784,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+785,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+786,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa),32);
    bufp->fullIData(oldp+787,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb),32);
    bufp->fullIData(oldp+788,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd),32);
    bufp->fullBit(oldp+789,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
    bufp->fullBit(oldp+790,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
    bufp->fullIData(oldp+791,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result),32);
    bufp->fullIData(oldp+792,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result),32);
    bufp->fullIData(oldp+793,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in),32);
    bufp->fullIData(oldp+794,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a),32);
    bufp->fullIData(oldp+795,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b),32);
    bufp->fullIData(oldp+796,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result),32);
    bufp->fullIData(oldp+797,(VL_STREAML_FAST_III(32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0)),32);
    bufp->fullIData(oldp+798,(VL_SHIFTR_III(32,32,32, VL_STREAML_FAST_III(32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0), 1U)),32);
    bufp->fullCData(oldp+799,((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                     >> 7U))),2);
    bufp->fullIData(oldp+800,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+801,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data),32);
    bufp->fullQData(oldp+802,((0x1ffffffffULL & VL_SHIFTL_QQI(33,33,32, 
                                                              (~ (QData)((IData)(
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                                >> 7U))))), 1U))),33);
    bufp->fullBit(oldp+804,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out));
    bufp->fullBit(oldp+805,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
    bufp->fullBit(oldp+806,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem));
    bufp->fullBit(oldp+807,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg));
    bufp->fullBit(oldp+808,((1U & (~ (IData)((0U != 
                                              ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                << 0x19U) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                  >> 7U))))))));
    bufp->fullBit(oldp+809,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+810,((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+811,(((0x1000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                                ? (((- (IData)((1U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                   >> 0x10U)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                    << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                 >> 7U)))),32);
    bufp->fullIData(oldp+812,(((0x1000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                                ? (((- (IData)((1U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                   >> 0x10U)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                    << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                 >> 7U)))),32);
    bufp->fullQData(oldp+813,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,32, 
                                                                             ((0x1000U 
                                                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                                                                               ? 
                                                                              (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U) 
                                                                               | (0xffffU 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                                               : 
                                                                              ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                                                << 0x19U) 
                                                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                                                >> 7U))))), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,32, 
                                                                             ((0x1000U 
                                                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                                                                               ? 
                                                                              (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U) 
                                                                               | (0xffffU 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                                               : 
                                                                              ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                                                << 0x19U) 
                                                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                                >> 7U)))))))),34);
    bufp->fullBit(oldp+815,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift));
    bufp->fullIData(oldp+816,((0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                          >> 7U))),17);
    bufp->fullIData(oldp+817,((0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                          >> 7U))),17);
    bufp->fullIData(oldp+818,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah),17);
    bufp->fullIData(oldp+819,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh),17);
    bufp->fullIData(oldp+820,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a),17);
    bufp->fullIData(oldp+821,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b),17);
    bufp->fullQData(oldp+822,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res),33);
    bufp->fullQData(oldp+824,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result),34);
    bufp->fullQData(oldp+826,((0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))),34);
    bufp->fullIData(oldp+828,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                << 0xaU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                            >> 0x16U))),32);
    bufp->fullCData(oldp+829,((0x1fU & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                         << 3U) | (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                   >> 0x1dU)))),5);
    bufp->fullIData(oldp+830,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type),32);
    bufp->fullIData(oldp+831,((((- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0x15U)))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                >> 0xaU)) 
                                            | (0x1fU 
                                               & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   << 3U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                     >> 0x1dU)))))),32);
    bufp->fullIData(oldp+832,((((- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0x15U)))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                >> 9U)) 
                                            | ((0x800U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                   >> 0x12U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 0xaU)) 
                                                  | (0x1eU 
                                                     & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                         << 3U) 
                                                        | (6U 
                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                              >> 0x1dU))))))))),32);
    bufp->fullIData(oldp+833,((0xfffff000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                              << 0xaU))),32);
    bufp->fullIData(oldp+834,((((- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0x15U)))) 
                                << 0x14U) | ((0xff000U 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                 << 0xaU)) 
                                             | ((0x800U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    << 1U)) 
                                                | (0x7feU 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 0xaU)))))),32);
    bufp->fullIData(oldp+835,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                        >> 5U))),32);
    bufp->fullIData(oldp+836,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                            >> 0x12U))),32);
    bufp->fullBit(oldp+837,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                   >> 1U))));
    bufp->fullQData(oldp+838,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl),53);
    bufp->fullCData(oldp+840,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q),2);
    bufp->fullBit(oldp+841,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                   >> 2U))));
    bufp->fullBit(oldp+842,((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                      >> 2U)))));
    bufp->fullBit(oldp+843,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug));
    bufp->fullCData(oldp+844,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause),5);
    bufp->fullCData(oldp+845,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n),2);
    bufp->fullIData(oldp+846,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n),32);
    bufp->fullIData(oldp+847,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr),32);
    bufp->fullBit(oldp+848,((3U != (3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr))));
    bufp->fullBit(oldp+849,((3U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+850,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down));
    bufp->fullBit(oldp+851,((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q))));
    bufp->fullBit(oldp+852,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid));
    bufp->fullCData(oldp+853,((0xfU & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                               >> 0x36U)))),4);
    bufp->fullCData(oldp+854,((0x1fU & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                                >> 0x11U)))),5);
    bufp->fullIData(oldp+855,((IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                       >> 0x16U))),32);
    bufp->fullBit(oldp+856,((1U & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                           >> 0x10U)))));
    bufp->fullCData(oldp+857,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q),2);
    bufp->fullQData(oldp+858,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result),58);
    bufp->fullIData(oldp+860,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb),32);
    bufp->fullIData(oldp+861,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[0]),32);
    bufp->fullIData(oldp+862,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[1]),32);
    bufp->fullBit(oldp+863,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting));
    bufp->fullBit(oldp+864,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception));
    bufp->fullBit(oldp+865,(vlSelf->tb_mxdotp_core__DOT__clk_i));
    bufp->fullBit(oldp+866,(vlSelf->tb_mxdotp_core__DOT__rst_ni));
    bufp->fullBit(oldp+867,(vlSelf->tb_mxdotp_core__DOT__instr_gnt));
    bufp->fullBit(oldp+868,(vlSelf->tb_mxdotp_core__DOT__data_gnt));
    bufp->fullBit(oldp+869,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+870,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+871,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+872,(((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                 & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                     >> 0x1bU) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)))) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q))));
    bufp->fullBit(oldp+873,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid));
    bufp->fullBit(oldp+874,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                              >> 0xbU) & ((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                                          & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting)) 
                                             & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception)) 
                                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid)))))));
    bufp->fullCData(oldp+875,(vlSelf->tb_mxdotp_core__DOT__sb_state),3);
    bufp->fullCData(oldp+876,(vlSelf->tb_mxdotp_core__DOT__expected_id),4);
    bufp->fullIData(oldp+877,(vlSelf->tb_mxdotp_core__DOT__pass_count),32);
    bufp->fullIData(oldp+878,(vlSelf->tb_mxdotp_core__DOT__fail_count),32);
    bufp->fullBit(oldp+879,(vlSelf->tb_mxdotp_core__DOT__sb_fail_this_cycle));
    bufp->fullSData(oldp+880,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp),12);
    bufp->fullWData(oldp+881,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm),122);
    bufp->fullIData(oldp+885,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_ex),32);
    bufp->fullCData(oldp+886,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn)
                                ? 7U : ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                         ? 0U : (3U 
                                                 & (IData)(
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                            >> 0x17U)))))),3);
    bufp->fullBit(oldp+887,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h4f7da6f5__0) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex))));
    bufp->fullBit(oldp+888,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready));
    bufp->fullBit(oldp+889,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex)) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0))));
    bufp->fullBit(oldp+890,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1));
    bufp->fullBit(oldp+891,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid))));
    bufp->fullBit(oldp+892,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                              >> 0x13U) & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1)) 
                                           & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid)) 
                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid))))));
    bufp->fullBit(oldp+893,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready));
    bufp->fullBit(oldp+894,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_ready));
    bufp->fullBit(oldp+895,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid));
    bufp->fullBit(oldp+896,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_valid));
    bufp->fullBit(oldp+897,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid));
    bufp->fullBit(oldp+898,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid));
    bufp->fullBit(oldp+899,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q 
                              >> 2U) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                            >> 4U)) 
                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q 
                                           == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    bufp->fullBit(oldp+900,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en));
    bufp->fullBit(oldp+901,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en));
    bufp->fullBit(oldp+902,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+903,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+904,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                   >> 6U))));
    bufp->fullBit(oldp+905,((((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                              | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))));
    bufp->fullBit(oldp+906,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__clk));
    bufp->fullCData(oldp+907,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match),3);
    bufp->fullCData(oldp+908,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match),3);
    bufp->fullBit(oldp+909,((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en) 
                              | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn))) 
                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                >> 0x16U))));
    bufp->fullCData(oldp+910,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns),3);
    bufp->fullCData(oldp+911,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns),3);
    bufp->fullBit(oldp+912,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
    bufp->fullBit(oldp+913,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
    bufp->fullBit(oldp+914,(((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp) 
                               & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                      >> 6U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw))) 
                              | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                 & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                        >> 4U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn)))) 
                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                >> 0x16U))));
    bufp->fullBit(oldp+915,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id));
    bufp->fullBit(oldp+916,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
    bufp->fullBit(oldp+917,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb));
    bufp->fullCData(oldp+918,(((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                             >> 0xfU)))
                                ? 1U : ((0x20000U & 
                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                                         ? 0x30U : 
                                        ((0x1000U & 
                                          vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                                          ? 2U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24798bc0__0)
                                                   ? 0xbU
                                                   : 
                                                  ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24bab915__0)
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))
                                                     ? 7U
                                                     : 5U))))))),8);
    bufp->fullBit(oldp+919,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step));
    bufp->fullCData(oldp+920,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step)
                                ? 4U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                         ? 2U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd2f5c7e0__0)
                                                  ? 1U
                                                  : 3U)))),3);
    bufp->fullBit(oldp+921,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set));
    bufp->fullCData(oldp+922,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl),2);
    bufp->fullBit(oldp+923,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated));
    bufp->fullBit(oldp+924,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0) 
                             & (0x7a1U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+925,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0) 
                             & (0x7a2U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+926,(((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                               | ((8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                         >> 0x15U)) 
                                  | (7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))),32);
    bufp->fullSData(oldp+927,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events),16);
    bufp->fullBit(oldp+928,((1U & ((~ (IData)((0U != 
                                               (0x22U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])))) 
                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & (0x320U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+930,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result),32);
    bufp->fullBit(oldp+931,((1U & (~ vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
    bufp->fullIData(oldp+932,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes),32);
    bufp->fullIData(oldp+933,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                ? 0U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                                         ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                                             << 1U) 
                                            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q))),32);
    bufp->fullIData(oldp+934,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
                                ? (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                                    ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                       + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                    : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                       - vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
                                : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)),32);
    bufp->fullIData(oldp+935,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
                                ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                    ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                    : (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                        << 0x1fU) | 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                        >> 1U))) : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q)),32);
    bufp->fullBit(oldp+936,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                              ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)
                              : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                              ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                              : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                              ? (((0U != ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                           << 0x19U) 
                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                             >> 7U))) 
                                  | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0))
                              : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q))));
    bufp->fullIData(oldp+939,((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                                ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                   + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                   - vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))),32);
    bufp->fullIData(oldp+940,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                    << 0x1fU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                 >> 1U)))),32);
    bufp->fullCData(oldp+941,((0x3fU & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                         ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)
                                         : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt)
                                             ? (((IData)(0x20U) 
                                                 - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)) 
                                                - (IData)(1U))
                                             : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                                                - (0U 
                                                   != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))))))),6);
    bufp->fullBit(oldp+942,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))));
    bufp->fullCData(oldp+943,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next),2);
    bufp->fullQData(oldp+944,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next),33);
    bufp->fullBit(oldp+946,((1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                       >> 1U)) & ((~ 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                                    >> 1U)) 
                                                  & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x16U)))))));
    bufp->fullIData(oldp+947,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw
                                : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                                    ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                        << 0xeU) | 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                        >> 0x12U)) : 
                                   ((2U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                                     ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a
                                     : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw)))),32);
    bufp->fullIData(oldp+948,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw
                                : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                                    ? ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                        ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                            ? ((0x40000U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])
                                                ? 2U
                                                : 4U)
                                            : (0xfffff000U 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  << 0xaU)))
                                        : ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                               >> 0x15U)))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 0xaU)) 
                                                  | (0x1fU 
                                                     & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                         << 3U) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                           >> 0x1dU)))))
                                            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))
                                    : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw))),32);
    bufp->fullIData(oldp+949,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel))
                                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw
                                : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel))
                                    ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                    : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw))),32);
    bufp->fullBit(oldp+950,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn));
    bufp->fullBit(oldp+951,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_waiting));
    bufp->fullBit(oldp+952,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                             & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                >> 5U))));
    bufp->fullBit(oldp+953,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                             & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp))));
    bufp->fullBit(oldp+954,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                             & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                >> 4U))));
    bufp->fullBit(oldp+955,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                             & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                >> 2U))));
    bufp->fullBit(oldp+956,((1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                   >> 1U))));
    bufp->fullBit(oldp+957,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
    bufp->fullBit(oldp+958,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_valid));
    bufp->fullBit(oldp+959,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid));
    bufp->fullQData(oldp+960,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp),35);
    bufp->fullBit(oldp+962,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid))));
    bufp->fullQData(oldp+963,((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                                << 6U) | (QData)((IData)(
                                                         (0xcU 
                                                          | (1U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                                >> 5U))))))),38);
    bufp->fullCData(oldp+965,((0xfU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[0U] 
                                       + (((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                                           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                                          | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))))),4);
    bufp->fullBit(oldp+966,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready))));
    bufp->fullBit(oldp+968,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                   >> 0x17U))));
    bufp->fullCData(oldp+969,(((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])
                                ? 0U : (7U & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                               + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                                              - ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->fullCData(oldp+970,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins),2);
    bufp->fullBit(oldp+971,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
    bufp->fullBit(oldp+972,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
    bufp->fullBit(oldp+973,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned));
    bufp->fullCData(oldp+974,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned),2);
    bufp->fullCData(oldp+975,((3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0)
                                      ? ((0x68U >= 
                                          (0x7fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                               ? 0U
                                               : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                (3U 
                                                 & (((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    ((IData)(2U) 
                                                     - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                          : 0U) : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)))),2);
    bufp->fullBit(oldp+976,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
    bufp->fullCData(oldp+977,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n),3);
    bufp->fullCData(oldp+978,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int),3);
    bufp->fullQData(oldp+979,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n),35);
    bufp->fullCData(oldp+981,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n),2);
    bufp->fullIData(oldp+982,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0)
                                ? ((((0x68U >= ((IData)(3U) 
                                                + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          ((IData)(2U) 
                                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                            ? 0U : 
                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                            (((IData)(0x12U) 
                                              + (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    ((IData)(2U) 
                                                     - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          ((IData)(2U) 
                                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))))) 
                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             (((IData)(3U) 
                                               + (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))))
                                      : 0U) << 0x10U) 
                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                      >> 0x10U)) : 
                               ((vlSelf->tb_mxdotp_core__DOT__instr_rdata 
                                 << 0x10U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                              >> 0x10U)))),32);
    bufp->fullBit(oldp+983,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0) 
                             | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))));
    bufp->fullBit(oldp+985,((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready)) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready))));
    bufp->fullBit(oldp+986,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready));
    bufp->fullBit(oldp+987,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready));
    bufp->fullCData(oldp+988,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt),2);
    bufp->fullBit(oldp+989,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up));
    bufp->fullBit(oldp+990,((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt))));
    bufp->fullBit(oldp+991,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update));
    bufp->fullCData(oldp+992,(((0U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                             >> 0xbU)))
                                ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                    ? ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                        ? 8U : 4U) : 
                                   ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                     ? 2U : 1U)) : 
                               ((1U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                              >> 0xbU)))
                                 ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                     ? 1U : ((0x4000U 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                              ? ((0x2000U 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                  ? 8U
                                                  : 0xcU)
                                              : ((0x2000U 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                  ? 6U
                                                  : 3U)))
                                 : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                     ? ((0x4000U & 
                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                         ? ((0x2000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 7U : 3U)
                                         : ((0x2000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 1U : 0U))
                                     : ((0x4000U & 
                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                         ? ((0x2000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 8U : 0xcU)
                                         : ((0x2000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 0xeU
                                             : 0xfU)))))),4);
    bufp->fullBit(oldp+993,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q) 
                             | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword) 
                                | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex)))));
    bufp->fullBit(oldp+994,(((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid))));
    bufp->fullBit(oldp+995,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0));
    bufp->fullIData(oldp+996,(((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])
                                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0
                                : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                    ? ((IData)(4U) 
                                       + (0xfffffffcU 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))
                                    : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))),32);
    bufp->fullIData(oldp+997,(VL_SHIFTR_III(32,32,32, 
                                            ((0x40000000U 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])
                                              ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0
                                              : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + 
                                                  (0xfffffffcU 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))
                                                  : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0)), 2U)),32);
    bufp->fullCData(oldp+998,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt),2);
    bufp->fullBit(oldp+999,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up));
    bufp->fullCData(oldp+1000,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt),2);
    bufp->fullBit(oldp+1001,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid))));
    bufp->fullCData(oldp+1002,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next),6);
    bufp->fullBit(oldp+1003,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
    bufp->fullBit(oldp+1004,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push));
    bufp->fullBit(oldp+1005,((IData)(((((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                        | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid)) 
                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                          >> 0x19U)) 
                                      | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy)))));
    bufp->fullBit(oldp+1006,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                              & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                  >> 0x1bU) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)))));
    bufp->fullBit(oldp+1007,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}
