// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_mxdotp_core__Syms.h"


void Vtb_mxdotp_core___024root__trace_chg_0_sub_0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_mxdotp_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_chg_0\n"); );
    // Init
    Vtb_mxdotp_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mxdotp_core___024root*>(voidSelf);
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_mxdotp_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_mxdotp_core___024root__trace_chg_0_sub_0(Vtb_mxdotp_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xaU]) 
                     | vlSelf->__Vm_traceActivity[0x1eU]))) {
        bufp->chgWData(oldp+33,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n),2048);
        bufp->chgQData(oldp+97,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we),64);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [0xeU]) | vlSelf->__Vm_traceActivity
                      [0x12U]) | vlSelf->__Vm_traceActivity
                     [0x22U]))) {
        bufp->chgIData(oldp+99,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                  << 0x10U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                               >> 0x10U))),32);
        bufp->chgCData(oldp+100,((0xfU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                          >> 0xaU))),4);
        bufp->chgIData(oldp+101,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[1U] 
                                   << 0x16U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[0U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+102,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[2U] 
                                   << 0x16U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[1U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+103,(((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                   << 0x16U) | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[2U] 
                                                >> 0xaU))),32);
        bufp->chgBit(oldp+104,((0xbU == (0x7fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                                  >> 0x10U)))));
        bufp->chgCData(oldp+105,((7U & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                        >> 0x1cU))),3);
        bufp->chgCData(oldp+106,((3U & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                        >> 9U))),2);
        bufp->chgCData(oldp+107,((0x1fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                           >> 0x17U))),5);
        bufp->chgCData(oldp+108,((0x1fU & ((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                            << 1U) 
                                           | (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                              >> 0x1fU)))),5);
        bufp->chgCData(oldp+109,((0x1fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                           >> 4U))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+111,((0x7fU & (vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
                                           >> 0x10U))),7);
        bufp->chgWData(oldp+112,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req),144);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgQData(oldp+117,((((QData)((IData)(
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))),64);
        bufp->chgWData(oldp+119,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q),2048);
        bufp->chgWData(oldp+183,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x16U]))) {
        bufp->chgCData(oldp+215,((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                  >> 0x1aU)),6);
        bufp->chgWData(oldp+216,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum),192);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[0x12U]) 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+222,(((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid))));
        bufp->chgBit(oldp+223,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x31U))))));
        bufp->chgCData(oldp+224,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0U : (3U & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x13U))))),2);
        bufp->chgBit(oldp+225,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                 >> 9U) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid))));
        bufp->chgCData(oldp+226,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0U : (3U & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x17U))))),2);
        bufp->chgBit(oldp+227,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x33U))))));
        bufp->chgCData(oldp+228,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0x13U : (0x3fU 
                                              & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x2bU))))),6);
        bufp->chgBit(oldp+229,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x1eU))))));
        bufp->chgCData(oldp+230,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0U : (3U & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x1cU))))),2);
        bufp->chgCData(oldp+231,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0U : (3U & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x19U))))),2);
        bufp->chgBit(oldp+232,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x11U))))));
        bufp->chgCData(oldp+233,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0U : (3U & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0xfU))))),2);
        bufp->chgBit(oldp+234,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0xeU))))));
        bufp->chgCData(oldp+235,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0U : (0x3fU & (IData)(
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                            >> 8U))))),6);
        bufp->chgBit(oldp+236,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 2U))))));
        bufp->chgBit(oldp+237,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 3U))))));
        bufp->chgBit(oldp+238,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 4U))))));
        bufp->chgBit(oldp+239,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 5U))))));
        bufp->chgBit(oldp+240,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec)))));
        bufp->chgIData(oldp+241,(((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                   ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                       ? ((0x40000U 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])
                                           ? 2U : 4U)
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
                                       : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))),32);
        bufp->chgBit(oldp+242,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x16U))))));
        bufp->chgBit(oldp+243,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x12U))))));
        bufp->chgBit(oldp+244,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x15U))))));
        bufp->chgBit(oldp+245,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x1fU))))));
        bufp->chgBit(oldp+246,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 0x1bU))))));
        bufp->chgBit(oldp+247,((1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 7U))))));
        bufp->chgQData(oldp+248,(((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                   ? 0x9f5100000040ULL
                                   : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec)),53);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgCData(oldp+250,((0xfU & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit) 
                                          >> 1U))),4);
        bufp->chgBit(oldp+251,((1U & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit))));
        bufp->chgBit(oldp+252,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex));
        bufp->chgBit(oldp+253,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex));
        bufp->chgBit(oldp+254,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw));
        bufp->chgBit(oldp+255,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp));
        bufp->chgBit(oldp+256,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn));
        bufp->chgBit(oldp+257,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_illegal));
        bufp->chgBit(oldp+258,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__xif_csr_error_ex));
        bufp->chgBit(oldp+259,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read));
        bufp->chgBit(oldp+260,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid));
        bufp->chgBit(oldp+261,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid));
        bufp->chgBit(oldp+262,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated));
        bufp->chgBit(oldp+263,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__csr_is_illegal));
        bufp->chgCData(oldp+264,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        bufp->chgCData(oldp+265,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel),2);
        bufp->chgCData(oldp+266,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel),2);
        bufp->chgBit(oldp+267,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+268,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel),2);
        bufp->chgCData(oldp+269,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel),2);
        bufp->chgIData(oldp+270,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a),32);
        bufp->chgBit(oldp+271,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__instr_valid));
        bufp->chgQData(oldp+272,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl),53);
        bufp->chgQData(oldp+274,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec),53);
        bufp->chgBit(oldp+276,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid));
        bufp->chgWData(oldp+277,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans),77);
        bufp->chgBit(oldp+280,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid));
        bufp->chgWData(oldp+281,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans),81);
        bufp->chgWData(oldp+284,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o),81);
        bufp->chgIData(oldp+287,(((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
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
                                          | (0xffffU 
                                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                 << 0xdU) 
                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   >> 0x13U)))))
                                   : ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                       ? ((0xffffff00U 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                              << 5U)) 
                                          | (0xffU 
                                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                 << 5U) 
                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   >> 0x1bU))))
                                       : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                           << 0x1dU) 
                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                             >> 3U))))),32);
        bufp->chgBit(oldp+288,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword));
        bufp->chgBit(oldp+289,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+290,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid));
        bufp->chgCData(oldp+291,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+292,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                      >> 0xaU))));
        bufp->chgCData(oldp+293,((0xfU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                          >> 6U))),4);
        bufp->chgIData(oldp+294,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                   << 0xfU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x11U))),32);
        bufp->chgCData(oldp+295,((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+296,((7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 1U))),3);
        bufp->chgBit(oldp+297,((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U])));
        bufp->chgIData(oldp+298,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                   << 0x1aU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                >> 6U))),32);
        bufp->chgCData(oldp+299,((0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                           >> 0xbU))),6);
        bufp->chgWData(oldp+300,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans),81);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgCData(oldp+303,((0x1fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])),5);
        bufp->chgWData(oldp+304,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes),160);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x1aU]))) {
        bufp->chgBit(oldp+309,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready));
        bufp->chgBit(oldp+310,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_ready));
        bufp->chgBit(oldp+311,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_valid));
        bufp->chgIData(oldp+312,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux),32);
        bufp->chgIData(oldp+313,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux),32);
        bufp->chgBit(oldp+314,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt));
        bufp->chgBit(oldp+315,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en));
        bufp->chgBit(oldp+316,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en));
        bufp->chgBit(oldp+317,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en));
        bufp->chgBit(oldp+318,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en));
        bufp->chgCData(oldp+319,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+320,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.s_req));
        bufp->chgBit(oldp+321,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready));
        bufp->chgBit(oldp+322,((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n))));
        bufp->chgBit(oldp+323,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core));
        bufp->chgBit(oldp+324,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus));
        bufp->chgBit(oldp+325,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
        bufp->chgBit(oldp+326,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
        bufp->chgCData(oldp+327,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status),2);
        bufp->chgCData(oldp+328,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_n),3);
        bufp->chgCData(oldp+329,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+330,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid));
        bufp->chgBit(oldp+331,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy));
        bufp->chgCData(oldp+332,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status),2);
        bufp->chgBit(oldp+333,((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy)))));
        bufp->chgQData(oldp+334,((4ULL | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)))),36);
        bufp->chgBit(oldp+336,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid));
        bufp->chgBit(oldp+337,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid));
        bufp->chgBit(oldp+338,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core));
        bufp->chgBit(oldp+339,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus));
        bufp->chgBit(oldp+340,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
        bufp->chgBit(oldp+341,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
        bufp->chgCData(oldp+342,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n),3);
        bufp->chgBit(oldp+343,((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x1dU]))) {
        bufp->chgBit(oldp+344,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[0]));
        bufp->chgBit(oldp+345,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[1]));
        bufp->chgBit(oldp+346,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid));
        bufp->chgIData(oldp+347,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0]),32);
        bufp->chgIData(oldp+348,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgCData(oldp+349,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result),6);
        bufp->chgIData(oldp+350,((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)),32);
        bufp->chgCData(oldp+351,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt),6);
        bufp->chgQData(oldp+352,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp),64);
        bufp->chgIData(oldp+354,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result),32);
        bufp->chgCData(oldp+355,((0x3fU & ((IData)(0x20U) 
                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)))),6);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+356,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit_valid));
        bufp->chgIData(oldp+357,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        bufp->chgBit(oldp+358,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if));
        bufp->chgIData(oldp+359,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+360,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+361,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n),32);
        bufp->chgBit(oldp+362,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we));
        bufp->chgIData(oldp+363,((0x28001040U | (4U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int))),32);
        bufp->chgIData(oldp+364,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n),32);
        bufp->chgBit(oldp+365,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we));
        bufp->chgIData(oldp+366,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_n),32);
        bufp->chgBit(oldp+367,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we));
        bufp->chgBit(oldp+368,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_we));
        bufp->chgBit(oldp+369,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_we));
        bufp->chgBit(oldp+370,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_we));
        bufp->chgIData(oldp+371,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n),32);
        bufp->chgBit(oldp+372,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we));
        bufp->chgIData(oldp+373,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n),32);
        bufp->chgBit(oldp+374,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we));
        bufp->chgIData(oldp+375,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n),32);
        bufp->chgBit(oldp+376,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_we));
        bufp->chgIData(oldp+377,((0xffff0888U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)),32);
        bufp->chgBit(oldp+378,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_we));
        bufp->chgWData(oldp+379,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
        bufp->chgIData(oldp+411,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
        bufp->chgIData(oldp+412,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower),32);
        bufp->chgIData(oldp+413,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper),32);
        bufp->chgIData(oldp+414,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment),32);
        bufp->chgBit(oldp+415,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_en_gated));
        bufp->chgSData(oldp+416,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events_raw),16);
        bufp->chgBit(oldp+417,((0xffffffffU == (0xfffffff2U 
                                                | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
        bufp->chgBit(oldp+418,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xbU] 
                     | vlSelf->__Vm_traceActivity[0x1fU]))) {
        bufp->chgQData(oldp+419,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr),35);
        bufp->chgBit(oldp+421,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgQData(oldp+422,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed),35);
        bufp->chgBit(oldp+424,((3U != (3U & (IData)(
                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 3U))))));
        bufp->chgIData(oldp+425,((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 3U))),32);
        bufp->chgCData(oldp+426,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n),2);
        bufp->chgCData(oldp+427,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch),2);
        bufp->chgBit(oldp+428,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xcU] 
                     | vlSelf->__Vm_traceActivity[0x20U]))) {
        bufp->chgIData(oldp+429,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target),32);
        bufp->chgBit(oldp+430,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en));
        bufp->chgBit(oldp+431,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__mul_en));
        bufp->chgBit(oldp+432,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__div_en));
        bufp->chgBit(oldp+433,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__lsu_en));
        bufp->chgIData(oldp+434,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__jalr_fw),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xdU] 
                     | vlSelf->__Vm_traceActivity[0x21U]))) {
        bufp->chgIData(oldp+435,((IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload 
                                          >> 6U))),32);
        bufp->chgCData(oldp+436,((3U & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+437,((7U & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload 
                                                >> 1U)))),3);
        bufp->chgBit(oldp+438,((1U & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload))));
        bufp->chgIData(oldp+439,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n),32);
        bufp->chgIData(oldp+440,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr),32);
        bufp->chgQData(oldp+441,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o),38);
        bufp->chgIData(oldp+443,(VL_SHIFTR_III(32,32,32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr, 2U)),32);
        bufp->chgIData(oldp+444,((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)),32);
        bufp->chgIData(oldp+445,((0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)),32);
        bufp->chgQData(oldp+446,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.req_payload),38);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xeU] 
                     | vlSelf->__Vm_traceActivity[0x22U]))) {
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                      >> 6U))));
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                                      >> 5U))));
        bufp->chgBit(oldp+450,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__rf_we));
        bufp->chgIData(oldp+451,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw),32);
        bufp->chgIData(oldp+452,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw),32);
        bufp->chgBit(oldp+453,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_accept) 
                                | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_reject))));
        bufp->chgBit(oldp+454,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_accept));
        bufp->chgBit(oldp+455,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_reject));
        bufp->chgCData(oldp+456,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_d),2);
        bufp->chgCData(oldp+457,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+458,(vlSelf->tb_mxdotp_core__DOT__fencei_flush_req));
        bufp->chgIData(oldp+459,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q),32);
        bufp->chgBit(oldp+460,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid_q)) 
                                & (0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))));
        bufp->chgIData(oldp+461,((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q 
                                  >> 8U)),24);
        bufp->chgCData(oldp+462,((3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)),2);
        bufp->chgIData(oldp+463,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_ext),32);
        bufp->chgCData(oldp+464,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_err),2);
        bufp->chgBit(oldp+465,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                      >> 3U))));
        bufp->chgIData(oldp+466,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+467,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+468,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+469,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_q),32);
        bufp->chgIData(oldp+470,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q),32);
        bufp->chgBit(oldp+471,(((0U != vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual) 
                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                   >> 3U))));
        bufp->chgCData(oldp+472,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl),5);
        bufp->chgCData(oldp+473,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs),3);
        bufp->chgCData(oldp+474,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs),3);
        bufp->chgBit(oldp+475,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q));
        bufp->chgBit(oldp+476,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q));
        bufp->chgBit(oldp+477,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q));
        bufp->chgBit(oldp+478,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q));
        bufp->chgCData(oldp+479,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q),3);
        bufp->chgBit(oldp+480,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q));
        bufp->chgBit(oldp+481,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) 
                                | (IData)(vlSelf->tb_mxdotp_core__DOT__fencei_flush_req))));
        bufp->chgBit(oldp+482,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event));
        bufp->chgBit(oldp+483,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q));
        bufp->chgBit(oldp+484,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q));
        bufp->chgIData(oldp+485,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+486,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+487,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+488,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+489,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+490,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+491,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+492,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+493,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+494,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        bufp->chgWData(oldp+495,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment),2048);
        bufp->chgIData(oldp+559,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                                   ? (- vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                                   : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)),32);
        bufp->chgIData(oldp+560,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q),32);
        bufp->chgIData(oldp+561,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q),32);
        bufp->chgIData(oldp+562,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q),32);
        bufp->chgBit(oldp+563,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q));
        bufp->chgBit(oldp+564,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q));
        bufp->chgBit(oldp+565,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q));
        bufp->chgIData(oldp+566,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux),32);
        bufp->chgCData(oldp+567,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q),6);
        bufp->chgBit(oldp+568,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))));
        bufp->chgCData(oldp+569,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state),2);
        bufp->chgCData(oldp+570,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state),2);
        bufp->chgQData(oldp+571,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc),33);
        bufp->chgBit(oldp+573,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q));
        bufp->chgBit(oldp+574,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q));
        bufp->chgBit(oldp+575,((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)))));
        bufp->chgBit(oldp+576,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q));
        bufp->chgQData(oldp+577,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q),38);
        bufp->chgCData(oldp+579,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_q),3);
        bufp->chgCData(oldp+580,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q),3);
        bufp->chgBit(oldp+581,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
        bufp->chgBit(oldp+582,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q));
        bufp->chgBit(oldp+583,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q));
        bufp->chgCData(oldp+584,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q),2);
        bufp->chgBit(oldp+585,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
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
        bufp->chgWData(oldp+586,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q),105);
        bufp->chgCData(oldp+590,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q),3);
        bufp->chgCData(oldp+591,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr),2);
        bufp->chgCData(oldp+592,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2),2);
        bufp->chgCData(oldp+593,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr),2);
        bufp->chgIData(oldp+594,(((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))),32);
        bufp->chgBit(oldp+595,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q));
        bufp->chgIData(oldp+596,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q),32);
        bufp->chgIData(oldp+597,(((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q))),32);
        bufp->chgIData(oldp+598,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual),32);
        bufp->chgCData(oldp+599,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q),2);
        bufp->chgCData(oldp+600,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_size_q),2);
        bufp->chgBit(oldp+601,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_sext_q));
        bufp->chgBit(oldp+602,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_we_q));
        bufp->chgCData(oldp+603,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgBit(oldp+604,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__last_q));
        bufp->chgBit(oldp+605,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q));
        bufp->chgIData(oldp+606,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q),32);
        bufp->chgBit(oldp+607,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid_q));
        bufp->chgIData(oldp+608,(((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x18U)
                                       : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x10U))
                                   : ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 8U) : 0U))),32);
        bufp->chgIData(oldp+609,(((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_sext_q)
                                           ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 0x18U)
                                           : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 0x18U))
                                       : 0U) : 0U)),32);
        bufp->chgCData(oldp+610,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q),3);
        bufp->chgCData(oldp+611,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q),2);
        bufp->chgCData(oldp+612,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q),2);
        bufp->chgBit(oldp+613,(((5U >= ((IData)(1U) 
                                        + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))) 
                                && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                          >> ((IData)(1U) 
                                              + (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))))));
        bufp->chgBit(oldp+614,(((5U >= ((IData)(1U) 
                                        + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U)))) 
                                && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                          >> ((IData)(1U) 
                                              + (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U))))))));
        bufp->chgCData(oldp+615,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q),6);
        bufp->chgBit(oldp+616,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state));
        bufp->chgWData(oldp+617,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q),81);
        bufp->chgIData(oldp+620,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0]),32);
        bufp->chgIData(oldp+621,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1]),32);
        bufp->chgIData(oldp+622,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2]),32);
        bufp->chgIData(oldp+623,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3]),32);
        bufp->chgIData(oldp+624,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4]),32);
        bufp->chgIData(oldp+625,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5]),32);
        bufp->chgIData(oldp+626,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6]),32);
        bufp->chgIData(oldp+627,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7]),32);
        bufp->chgIData(oldp+628,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8]),32);
        bufp->chgIData(oldp+629,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9]),32);
        bufp->chgIData(oldp+630,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[10]),32);
        bufp->chgIData(oldp+631,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[11]),32);
        bufp->chgIData(oldp+632,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[12]),32);
        bufp->chgIData(oldp+633,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[13]),32);
        bufp->chgIData(oldp+634,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[14]),32);
        bufp->chgIData(oldp+635,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[15]),32);
        bufp->chgIData(oldp+636,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[16]),32);
        bufp->chgIData(oldp+637,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[17]),32);
        bufp->chgIData(oldp+638,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[18]),32);
        bufp->chgIData(oldp+639,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[19]),32);
        bufp->chgIData(oldp+640,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[20]),32);
        bufp->chgIData(oldp+641,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[21]),32);
        bufp->chgIData(oldp+642,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[22]),32);
        bufp->chgIData(oldp+643,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[23]),32);
        bufp->chgIData(oldp+644,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[24]),32);
        bufp->chgIData(oldp+645,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[25]),32);
        bufp->chgIData(oldp+646,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[26]),32);
        bufp->chgIData(oldp+647,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[27]),32);
        bufp->chgIData(oldp+648,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[28]),32);
        bufp->chgIData(oldp+649,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[29]),32);
        bufp->chgIData(oldp+650,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[30]),32);
        bufp->chgIData(oldp+651,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[31]),32);
        bufp->chgIData(oldp+652,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+653,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+654,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+655,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+656,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+657,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+658,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+659,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+660,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+661,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+662,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+663,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+664,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+665,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+666,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+667,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+668,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+669,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+670,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+671,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+672,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+673,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+674,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+675,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+676,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+677,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+678,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+679,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+680,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+681,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+682,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgBit(oldp+683,(vlSelf->tb_mxdotp_core__DOT__fetch_enable_q));
        bufp->chgBit(oldp+684,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__req_q));
        bufp->chgIData(oldp+685,(vlSelf->tb_mxdotp_core__DOT__instr_rdata),32);
        bufp->chgBit(oldp+686,(vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q));
        bufp->chgBit(oldp+687,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
        bufp->chgBit(oldp+688,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q));
        bufp->chgQData(oldp+689,(((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__instr_rdata)) 
                                  << 1U)),33);
        bufp->chgBit(oldp+691,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                | (IData)(vlSelf->tb_mxdotp_core__DOT__fetch_enable_q))));
        bufp->chgBit(oldp+692,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q));
        bufp->chgCData(oldp+693,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_id),4);
        bufp->chgCData(oldp+694,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rd),5);
        bufp->chgCData(oldp+695,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_format),2);
        bufp->chgCData(oldp+696,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation),3);
        bufp->chgIData(oldp+697,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[0]),32);
        bufp->chgIData(oldp+698,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[1]),32);
        bufp->chgIData(oldp+699,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[2]),32);
        bufp->chgIData(oldp+700,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__i),32);
        bufp->chgIData(oldp+701,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation))
                                   ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                      [0U] + vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                      [1U]) : ((1U 
                                                == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation))
                                                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                               [0U]
                                                : 0U))),32);
        bufp->chgIData(oldp+702,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                 [0U]),32);
        bufp->chgIData(oldp+703,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                 [1U]),32);
        bufp->chgIData(oldp+704,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                 [2U]),32);
        bufp->chgIData(oldp+705,(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__addr_q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+706,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_ready));
        bufp->chgCData(oldp+707,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                                           >> 6U))),5);
        bufp->chgIData(oldp+708,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                   << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+709,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result));
        bufp->chgWData(oldp+710,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe),311);
        bufp->chgWData(oldp+720,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe),204);
        bufp->chgWData(oldp+727,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe),119);
        bufp->chgCData(oldp+731,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[0]),5);
        bufp->chgCData(oldp+732,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[1]),5);
        bufp->chgCData(oldp+733,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[2]),5);
        bufp->chgIData(oldp+734,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[0]),32);
        bufp->chgIData(oldp+735,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[1]),32);
        bufp->chgIData(oldp+736,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[2]),32);
        bufp->chgCData(oldp+737,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr[0]),5);
        bufp->chgCData(oldp+738,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr[1]),5);
        bufp->chgBit(oldp+739,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read));
        bufp->chgBit(oldp+740,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb));
        bufp->chgBit(oldp+741,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match));
        bufp->chgBit(oldp+742,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match));
        bufp->chgBit(oldp+743,((1U & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                        >> 5U) & ((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                   >> 6U) 
                                                  | (IData)(
                                                            (0x1080000U 
                                                             == 
                                                             (0x1080000U 
                                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U]))))) 
                                      | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                          >> 0xdU) 
                                         & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                             >> 2U) 
                                            | (IData)(
                                                      (0x840U 
                                                       == 
                                                       (0x840U 
                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))))))));
        bufp->chgBit(oldp+744,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex));
        bufp->chgBit(oldp+745,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb));
        bufp->chgCData(oldp+746,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                           >> 0xaU))),5);
        bufp->chgBit(oldp+747,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q));
        bufp->chgBit(oldp+748,((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                  >> 5U) & (0x600000U 
                                            == (0x600000U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U]))) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result))));
        bufp->chgBit(oldp+749,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex));
        bufp->chgBit(oldp+750,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb));
        bufp->chgBit(oldp+751,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb));
        bufp->chgBit(oldp+752,((IData)((0x2840U == 
                                        (0x2840U & 
                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))));
        bufp->chgBit(oldp+753,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb));
        bufp->chgBit(oldp+754,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb));
        bufp->chgBit(oldp+755,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb));
        bufp->chgBit(oldp+756,((IData)((0x2010U == 
                                        (0x2010U & 
                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))));
        bufp->chgBit(oldp+757,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi));
        bufp->chgBit(oldp+758,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt));
        bufp->chgBit(oldp+759,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
        bufp->chgBit(oldp+760,((1U & (IData)(((0x30U 
                                               == (0x30U 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                                              & (~ 
                                                 vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[0U]))))));
        bufp->chgCData(oldp+761,((3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U])),2);
        bufp->chgSData(oldp+762,((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+763,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr),12);
        bufp->chgIData(oldp+764,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                   << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                               >> 0x14U))),32);
        bufp->chgBit(oldp+765,(((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                              >> 4U))) 
                                & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                    >> 6U) & (3U == 
                                              ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf91f4e7e__0)
                                                ? (3U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0x18U))
                                                : 0U))))));
        bufp->chgIData(oldp+766,((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)),32);
        bufp->chgBit(oldp+767,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en));
        bufp->chgIData(oldp+768,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_data_rev),32);
        bufp->chgBit(oldp+769,((1U & ((IData)(((0U 
                                                != 
                                                (0x380U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                                               | (0U 
                                                  != 
                                                  (0x30000U 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])))) 
                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                         >> 5U)))));
        bufp->chgCData(oldp+770,((0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                           >> 0xeU))),6);
        bufp->chgIData(oldp+771,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                   << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+772,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                   << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+773,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                   << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+774,(VL_STREAML_FAST_III(32, 
                                                     ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                       << 0x12U) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                         >> 0xeU)), 0)),32);
        bufp->chgIData(oldp+775,(VL_STREAML_FAST_III(32, 
                                                     ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                       << 0x12U) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                         >> 0xeU)), 0)),32);
        bufp->chgQData(oldp+776,((1ULL | ((QData)((IData)(
                                                          ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                            << 0x12U) 
                                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                              >> 0xeU)))) 
                                          << 1U))),33);
        bufp->chgQData(oldp+778,((((QData)((IData)(
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
                                   << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                >> 0x11U)))))),33);
        bufp->chgIData(oldp+780,((IData)((0x1ffffffffULL 
                                          & (((1ULL 
                                               | ((QData)((IData)(
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
        bufp->chgQData(oldp+781,((0x3ffffffffULL & 
                                  ((1ULL | ((QData)((IData)(
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
                                       << 1U) | (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                    >> 0x11U)))))))),34);
        bufp->chgBit(oldp+783,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+784,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+785,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa),32);
        bufp->chgIData(oldp+786,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb),32);
        bufp->chgIData(oldp+787,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd),32);
        bufp->chgBit(oldp+788,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
        bufp->chgBit(oldp+789,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
        bufp->chgIData(oldp+790,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result),32);
        bufp->chgIData(oldp+791,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result),32);
        bufp->chgIData(oldp+792,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in),32);
        bufp->chgIData(oldp+793,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a),32);
        bufp->chgIData(oldp+794,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b),32);
        bufp->chgIData(oldp+795,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result),32);
        bufp->chgIData(oldp+796,(VL_STREAML_FAST_III(32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0)),32);
        bufp->chgIData(oldp+797,(VL_SHIFTR_III(32,32,32, VL_STREAML_FAST_III(32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0), 1U)),32);
        bufp->chgCData(oldp+798,((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                        >> 7U))),2);
        bufp->chgIData(oldp+799,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                   << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                >> 7U))),32);
        bufp->chgIData(oldp+800,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data),32);
        bufp->chgQData(oldp+801,((0x1ffffffffULL & 
                                  VL_SHIFTL_QQI(33,33,32, 
                                                (~ (QData)((IData)(
                                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                                     << 0x19U) 
                                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                       >> 7U))))), 1U))),33);
        bufp->chgBit(oldp+803,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out));
        bufp->chgBit(oldp+804,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
        bufp->chgBit(oldp+805,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem));
        bufp->chgBit(oldp+806,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg));
        bufp->chgBit(oldp+807,((1U & (~ (IData)((0U 
                                                 != 
                                                 ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                   << 0x19U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                     >> 7U))))))));
        bufp->chgBit(oldp+808,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+809,((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                        >> 0xaU))),2);
        bufp->chgIData(oldp+810,(((0x1000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                      >> 0x10U)))) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                   : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                       << 0x19U) | 
                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                       >> 7U)))),32);
        bufp->chgIData(oldp+811,(((0x1000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                      >> 0x10U)))) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                   : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                       << 0x19U) | 
                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                       >> 7U)))),32);
        bufp->chgQData(oldp+812,((0x3ffffffffULL & 
                                  VL_MULS_QQQ(34, (0x3ffffffffULL 
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
        bufp->chgBit(oldp+814,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift));
        bufp->chgIData(oldp+815,((0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                             >> 7U))),17);
        bufp->chgIData(oldp+816,((0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                             >> 7U))),17);
        bufp->chgIData(oldp+817,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah),17);
        bufp->chgIData(oldp+818,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh),17);
        bufp->chgIData(oldp+819,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a),17);
        bufp->chgIData(oldp+820,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b),17);
        bufp->chgQData(oldp+821,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res),33);
        bufp->chgQData(oldp+823,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result),34);
        bufp->chgQData(oldp+825,((0x3ffffffffULL & 
                                  VL_SHIFTRS_QQI(34,34,32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))),34);
        bufp->chgIData(oldp+827,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                   << 0xaU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                               >> 0x16U))),32);
        bufp->chgCData(oldp+828,((0x1fU & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            << 3U) 
                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                              >> 0x1dU)))),5);
        bufp->chgIData(oldp+829,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type),32);
        bufp->chgIData(oldp+830,((((- (IData)((1U & 
                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                >> 0x15U)))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 0xaU)) 
                                               | (0x1fU 
                                                  & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      << 3U) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                        >> 0x1dU)))))),32);
        bufp->chgIData(oldp+831,((((- (IData)((1U & 
                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
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
        bufp->chgIData(oldp+832,((0xfffff000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                 << 0xaU))),32);
        bufp->chgIData(oldp+833,((((- (IData)((1U & 
                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
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
        bufp->chgIData(oldp+834,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                           >> 5U))),32);
        bufp->chgIData(oldp+835,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                   << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                               >> 0x12U))),32);
        bufp->chgBit(oldp+836,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                      >> 1U))));
        bufp->chgQData(oldp+837,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl),53);
        bufp->chgCData(oldp+839,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q),2);
        bufp->chgBit(oldp+840,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                      >> 2U))));
        bufp->chgBit(oldp+841,((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                         >> 2U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgBit(oldp+842,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug));
        bufp->chgCData(oldp+843,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause),5);
        bufp->chgCData(oldp+844,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n),2);
        bufp->chgIData(oldp+845,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n),32);
        bufp->chgIData(oldp+846,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr),32);
        bufp->chgBit(oldp+847,((3U != (3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr))));
        bufp->chgBit(oldp+848,((3U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+849,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+850,((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q))));
        bufp->chgBit(oldp+851,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid));
        bufp->chgCData(oldp+852,((0xfU & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                                  >> 0x36U)))),4);
        bufp->chgCData(oldp+853,((0x1fU & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                                   >> 0x11U)))),5);
        bufp->chgIData(oldp+854,((IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                          >> 0x16U))),32);
        bufp->chgBit(oldp+855,((1U & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                                              >> 0x10U)))));
        bufp->chgCData(oldp+856,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q),2);
        bufp->chgQData(oldp+857,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result),58);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
        bufp->chgIData(oldp+859,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb),32);
        bufp->chgIData(oldp+860,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[0]),32);
        bufp->chgIData(oldp+861,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[1]),32);
        bufp->chgBit(oldp+862,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting));
        bufp->chgBit(oldp+863,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception));
    }
    bufp->chgBit(oldp+864,(vlSelf->tb_mxdotp_core__DOT__clk_i));
    bufp->chgBit(oldp+865,(vlSelf->tb_mxdotp_core__DOT__rst_ni));
    bufp->chgBit(oldp+866,(vlSelf->tb_mxdotp_core__DOT__instr_gnt));
    bufp->chgBit(oldp+867,(vlSelf->tb_mxdotp_core__DOT__data_gnt));
    bufp->chgBit(oldp+868,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                  >> 0x1eU))));
    bufp->chgBit(oldp+869,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                  >> 0x1dU))));
    bufp->chgBit(oldp+870,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+871,(((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                    >> 0x1bU) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)))) 
                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q))));
    bufp->chgBit(oldp+872,(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid));
    bufp->chgBit(oldp+873,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                             >> 0xbU) & ((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                                         & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting)) 
                                            & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception)) 
                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid)))))));
    bufp->chgCData(oldp+874,(vlSelf->tb_mxdotp_core__DOT__sb_state),3);
    bufp->chgCData(oldp+875,(vlSelf->tb_mxdotp_core__DOT__expected_id),4);
    bufp->chgIData(oldp+876,(vlSelf->tb_mxdotp_core__DOT__pass_count),32);
    bufp->chgIData(oldp+877,(vlSelf->tb_mxdotp_core__DOT__fail_count),32);
    bufp->chgBit(oldp+878,(vlSelf->tb_mxdotp_core__DOT__sb_fail_this_cycle));
    bufp->chgSData(oldp+879,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp),12);
    bufp->chgWData(oldp+880,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm),122);
    bufp->chgIData(oldp+884,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_ex),32);
    bufp->chgCData(oldp+885,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn)
                               ? 7U : ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])
                                        ? 0U : (3U 
                                                & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                           >> 0x17U)))))),3);
    bufp->chgBit(oldp+886,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h4f7da6f5__0) 
                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex))));
    bufp->chgBit(oldp+887,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready));
    bufp->chgBit(oldp+888,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex)) 
                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0))));
    bufp->chgBit(oldp+889,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1));
    bufp->chgBit(oldp+890,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
                            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid))));
    bufp->chgBit(oldp+891,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                             >> 0x13U) & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1)) 
                                          & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid)) 
                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid))))));
    bufp->chgBit(oldp+892,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready));
    bufp->chgBit(oldp+893,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_ready));
    bufp->chgBit(oldp+894,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid));
    bufp->chgBit(oldp+895,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_valid));
    bufp->chgBit(oldp+896,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid));
    bufp->chgBit(oldp+897,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid));
    bufp->chgBit(oldp+898,(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q 
                             >> 2U) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                           >> 4U)) 
                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q 
                                          == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    bufp->chgBit(oldp+899,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en));
    bufp->chgBit(oldp+900,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en));
    bufp->chgBit(oldp+901,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                  >> 0xcU))));
    bufp->chgCData(oldp+902,((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                       >> 7U))),5);
    bufp->chgBit(oldp+903,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                  >> 6U))));
    bufp->chgBit(oldp+904,((((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))));
    bufp->chgBit(oldp+905,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__clk));
    bufp->chgCData(oldp+906,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match),3);
    bufp->chgCData(oldp+907,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match),3);
    bufp->chgBit(oldp+908,((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en) 
                             | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn))) 
                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                               >> 0x16U))));
    bufp->chgCData(oldp+909,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns),3);
    bufp->chgCData(oldp+910,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns),3);
    bufp->chgBit(oldp+911,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
    bufp->chgBit(oldp+912,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
    bufp->chgBit(oldp+913,(((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp) 
                              & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                     >> 6U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw))) 
                             | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                       >> 4U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn)))) 
                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                               >> 0x16U))));
    bufp->chgBit(oldp+914,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id));
    bufp->chgBit(oldp+915,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
    bufp->chgBit(oldp+916,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb));
    bufp->chgCData(oldp+917,(((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                            >> 0xfU)))
                               ? 1U : ((0x20000U & 
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                                        ? 0x30U : (
                                                   (0x1000U 
                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24798bc0__0)
                                                     ? 0xbU
                                                     : 
                                                    ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24bab915__0)
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))
                                                       ? 7U
                                                       : 5U))))))),8);
    bufp->chgBit(oldp+918,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step));
    bufp->chgCData(oldp+919,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step)
                               ? 4U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                        ? 2U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd2f5c7e0__0)
                                                 ? 1U
                                                 : 3U)))),3);
    bufp->chgBit(oldp+920,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set));
    bufp->chgCData(oldp+921,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl),2);
    bufp->chgBit(oldp+922,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated));
    bufp->chgBit(oldp+923,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0) 
                            & (0x7a1U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+924,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0) 
                            & (0x7a2U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U)))));
    bufp->chgIData(oldp+925,(((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                              | ((8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                        >> 0x15U)) 
                                 | (7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))),32);
    bufp->chgSData(oldp+926,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events),16);
    bufp->chgBit(oldp+927,((1U & ((~ (IData)((0U != 
                                              (0x22U 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])))) 
                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                     >> 0xdU)))));
    bufp->chgBit(oldp+928,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                            & (0x320U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U)))));
    bufp->chgIData(oldp+929,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result),32);
    bufp->chgBit(oldp+930,((1U & (~ vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
    bufp->chgIData(oldp+931,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes),32);
    bufp->chgIData(oldp+932,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                               ? 0U : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                                        ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                                        : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q))),32);
    bufp->chgIData(oldp+933,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
                               ? (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                                   ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                      + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                   : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                      - vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
                               : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)),32);
    bufp->chgIData(oldp+934,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
                               ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                   ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                   : (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                       << 0x1fU) | 
                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                       >> 1U))) : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q)),32);
    bufp->chgBit(oldp+935,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                             ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)
                             : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q))));
    bufp->chgBit(oldp+936,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                             ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                             : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))));
    bufp->chgBit(oldp+937,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                             ? (((0U != ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                          << 0x19U) 
                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                            >> 7U))) 
                                 | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0))
                             : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q))));
    bufp->chgIData(oldp+938,((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                               ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                  + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                               : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                  - vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))),32);
    bufp->chgIData(oldp+939,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                               ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                               : (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                   << 0x1fU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                >> 1U)))),32);
    bufp->chgCData(oldp+940,((0x3fU & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                        ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)
                                        : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt)
                                            ? (((IData)(0x20U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)) 
                                               - (IData)(1U))
                                            : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                                               - (0U 
                                                  != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))))))),6);
    bufp->chgBit(oldp+941,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))));
    bufp->chgCData(oldp+942,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next),2);
    bufp->chgQData(oldp+943,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next),33);
    bufp->chgBit(oldp+945,((1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                      >> 1U)) & ((~ 
                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                                   >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                            >> 0x16U)))))));
    bufp->chgIData(oldp+946,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                               ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw
                               : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                                   ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                       << 0xeU) | (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                                   >> 0x12U))
                                   : ((2U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                                       ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a
                                       : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw)))),32);
    bufp->chgIData(oldp+947,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
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
    bufp->chgIData(oldp+948,(((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel))
                               ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw
                               : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel))
                                   ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                   : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw))),32);
    bufp->chgBit(oldp+949,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn));
    bufp->chgBit(oldp+950,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_waiting));
    bufp->chgBit(oldp+951,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                            & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                               >> 5U))));
    bufp->chgBit(oldp+952,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                            & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp))));
    bufp->chgBit(oldp+953,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                            & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                               >> 4U))));
    bufp->chgBit(oldp+954,(((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                            & ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_resp) 
                               >> 2U))));
    bufp->chgBit(oldp+955,((1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                  >> 1U))));
    bufp->chgBit(oldp+956,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
    bufp->chgBit(oldp+957,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_valid));
    bufp->chgBit(oldp+958,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid));
    bufp->chgQData(oldp+959,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp),35);
    bufp->chgBit(oldp+961,(((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)) 
                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid))));
    bufp->chgQData(oldp+962,((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                               << 6U) | (QData)((IData)(
                                                        (0xcU 
                                                         | (1U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                               >> 5U))))))),38);
    bufp->chgCData(oldp+964,((0xfU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[0U] 
                                      + (((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                                          | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                                         | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))))),4);
    bufp->chgBit(oldp+965,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
    bufp->chgBit(oldp+966,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready))));
    bufp->chgBit(oldp+967,((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                  >> 0x17U))));
    bufp->chgCData(oldp+968,(((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])
                               ? 0U : (7U & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                              + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                                             - ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                                                 ? 1U
                                                 : 0U))))),3);
    bufp->chgCData(oldp+969,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins),2);
    bufp->chgBit(oldp+970,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
    bufp->chgBit(oldp+971,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
    bufp->chgBit(oldp+972,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned));
    bufp->chgCData(oldp+973,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned),2);
    bufp->chgCData(oldp+974,((3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0)
                                     ? ((0x68U >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x23U) 
                                                  * 
                                                  ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                              ? 0U : 
                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                              (((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
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
                                               >> (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                         : 0U) : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)))),2);
    bufp->chgBit(oldp+975,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
    bufp->chgCData(oldp+976,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n),3);
    bufp->chgCData(oldp+977,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int),3);
    bufp->chgQData(oldp+978,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n),35);
    bufp->chgCData(oldp+980,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n),2);
    bufp->chgIData(oldp+981,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0)
                               ? ((((0x68U >= ((IData)(3U) 
                                               + (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                     ? (0xffffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x23U) 
                                                             * 
                                                             ((IData)(2U) 
                                                              - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (((IData)(0x12U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x23U) 
                                                           * 
                                                           ((IData)(2U) 
                                                            - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x23U) 
                                                              * 
                                                              ((IData)(2U) 
                                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))))) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      (((IData)(3U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x23U) 
                                                            * 
                                                            ((IData)(2U) 
                                                             - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(0x23U) 
                                                              * 
                                                              ((IData)(2U) 
                                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))))
                                     : 0U) << 0x10U) 
                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                     >> 0x10U)) : (
                                                   (vlSelf->tb_mxdotp_core__DOT__instr_rdata 
                                                    << 0x10U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                      >> 0x10U)))),32);
    bufp->chgBit(oldp+982,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid));
    bufp->chgBit(oldp+983,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0) 
                            | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))));
    bufp->chgBit(oldp+984,((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready)) 
                            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready))));
    bufp->chgBit(oldp+985,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready));
    bufp->chgBit(oldp+986,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready));
    bufp->chgCData(oldp+987,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt),2);
    bufp->chgBit(oldp+988,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up));
    bufp->chgBit(oldp+989,((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt))));
    bufp->chgBit(oldp+990,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update));
    bufp->chgCData(oldp+991,(((0U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                            >> 0xbU)))
                               ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                   ? ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                       ? 8U : 4U) : 
                                  ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                    ? 2U : 1U)) : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                        >> 0xbU)))
                                                    ? 
                                                   ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                                     ? 1U
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                       ? 8U
                                                       : 0xcU)
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                       ? 6U
                                                       : 3U)))
                                                    : 
                                                   ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                       ? 7U
                                                       : 3U)
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                       ? 8U
                                                       : 0xcU)
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                       ? 0xeU
                                                       : 0xfU)))))),4);
    bufp->chgBit(oldp+992,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q) 
                            | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword) 
                               | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex)))));
    bufp->chgBit(oldp+993,(((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
                            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid))));
    bufp->chgBit(oldp+994,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0));
    bufp->chgIData(oldp+995,(((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])
                               ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0
                               : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                                   ? ((IData)(4U) + 
                                      (0xfffffffcU 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))
                                   : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))),32);
    bufp->chgIData(oldp+996,(VL_SHIFTR_III(32,32,32, 
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
    bufp->chgCData(oldp+997,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt),2);
    bufp->chgBit(oldp+998,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up));
    bufp->chgCData(oldp+999,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt),2);
    bufp->chgBit(oldp+1000,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid))));
    bufp->chgCData(oldp+1001,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next),6);
    bufp->chgBit(oldp+1002,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
    bufp->chgBit(oldp+1003,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push));
    bufp->chgBit(oldp+1004,((IData)(((((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                       | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid)) 
                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                         >> 0x19U)) 
                                     | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy)))));
    bufp->chgBit(oldp+1005,(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                 >> 0x1bU) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)))));
    bufp->chgBit(oldp+1006,(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}

void Vtb_mxdotp_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root__trace_cleanup\n"); );
    // Init
    Vtb_mxdotp_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mxdotp_core___024root*>(voidSelf);
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
}
