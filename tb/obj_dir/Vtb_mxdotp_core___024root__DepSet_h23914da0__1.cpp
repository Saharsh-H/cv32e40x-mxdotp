// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core__Syms.h"
#include "Vtb_mxdotp_core___024root.h"

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_sequent__TOP__4(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__rst_ni)
            ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_d)
            : 0U);
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result = 0ULL;
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid = 0U;
    if ((2U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q))) {
        vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
            = ((0xffffULL & vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result) 
               | (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_id)) 
                   << 0x36U) | (((QData)((IData)(((0U 
                                                   == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation))
                                                   ? 
                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                                   [0U] 
                                                   + 
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                                   [1U])
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation))
                                                    ? 
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs
                                                   [0U]
                                                    : 0U)))) 
                                 << 0x16U) | ((QData)((IData)(
                                                              (1U 
                                                               | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rd) 
                                                                  << 1U)))) 
                                              << 0x10U))));
        vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid = 1U;
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__7(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
            >> 0x18U) & ((2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                         & ((0U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0) 
                            | (((1U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0) 
                                & (0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                  >> 0x17U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
            >> 0xdU) & (0U == (0x22U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__instr_valid 
        = (IData)(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                    >> 0x16U) & (0U == (0x88U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = (0x1fffffffffffbfULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
    if ((0x10000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
        if ((0x8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            if ((0x4000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                } else if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                } else if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                        if ((0U == (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U)))) {
                            if ((0U == ((0x3e0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U]) 
                                        | (0x1fU & 
                                           ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                             << 3U) 
                                            | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                               >> 0x1dU)))))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x80ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = ((0U == (0xfffU 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0xaU)))
                                        ? (8ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                        : ((1U == (0xfffU 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 0xaU)))
                                            ? (0x10ULL 
                                               | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    >> 0xaU)))
                                                ? (2ULL 
                                                   | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                                : (
                                                   (0x7b2U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                        >> 0xaU)))
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U])
                                                     ? 
                                                    (0x20ULL 
                                                     | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                                     : 0x9f5100000040ULL)
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                         >> 0xaU)))
                                                     ? 
                                                    ((0x1ffffffffffffeULL 
                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                                     | (IData)((IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                                                            >> 0x1fU))))))
                                                     : 0x9f5100000040ULL)))));
                            } else {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                            }
                        } else {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x600000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            if ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x40000000000ULL 
                                       | (0x1ff9ffffffffffULL 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            } else {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x800000ULL 
                                       | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x1ff9ffffffffffULL 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            }
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x8000000000ULL 
                                   | (0x1ffe7fffffffffULL 
                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1fffe3ffffffffULL 
                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = ((1U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                 >> 2U)))
                                    ? (0x80000ULL | 
                                       (0x1fffffffe7ffffULL 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                    : ((2U == (3U & 
                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                >> 2U)))
                                        ? ((0x1fffffffe7ffffULL 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                    >> 5U)))
                                                                ? 0U
                                                                : 2U))) 
                                              << 0x13U))
                                        : ((3U == (3U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 2U)))
                                            ? ((0x1fffffffe7ffffULL 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                        >> 5U)))
                                                                    ? 0U
                                                                    : 3U))) 
                                                  << 0x13U))
                                            : 0x9f5100000040ULL)));
                        }
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                        if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x10000000000000ULL 
                                   | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x4000000000000ULL 
                                   | (0x19ffffffffffffULL 
                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x28000000000ULL 
                                   | (0x1ff87fffffffffULL 
                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1e07ffffffffffULL 
                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x400000ULL | (0x1ffffffe3fffffULL 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x100000000ULL | 
                                   (0x1ffffcffffffffULL 
                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        } else {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                        }
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                        if ((0U != (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U)))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                        } else {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x10000000000000ULL 
                                   | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x6000000000000ULL 
                                   | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x28000000000ULL 
                                   | (0x1ff87fffffffffULL 
                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1e07ffffffffffULL 
                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000ULL | (0x1ffffffe3fffffULL 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x200000000ULL | 
                                   (0x1ffffcffffffffULL 
                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        }
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x18000000000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x2000000000ULL | (0x1ff81fffffffffULL 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1800000ULL | (0x1ffffffe3fffffULL 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x300000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                            ? ((0x1e07ffffffffffULL 
                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                               | ((QData)((IData)((
                                                   (8U 
                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                     ? 0x1dU
                                                     : 0x1cU)))) 
                                  << 0x2bU)) : ((8U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                 ? 0x9f5100000040ULL
                                                 : 
                                                ((0x1e07ffffffffffULL 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                                 | ((QData)((IData)(
                                                                    ((4U 
                                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                                      ? 0x11U
                                                                      : 0x10U))) 
                                                    << 0x2bU))));
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        }
    } else if ((0x8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
        if ((0x4000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            } else if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x10000000000000ULL 
                               | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x48000000000ULL | (0x1ff87fffffffffULL 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1800000000ULL | (0x1fffe3ffffffffULL 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1e07ffffffffffULL 
                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x400000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    if (((3U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                       >> 0x14U))) 
                         | (2U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                         >> 0x14U))))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x10000000000000ULL 
                               | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1ff87fffffffffULL 
                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0xc00000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                      >> 0x12U)))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        }
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (((((((((0U == ((0x1f8U 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0xcU)) 
                                              | (7U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    >> 2U)))) 
                                      | (0x100U == 
                                         ((0x1f8U & 
                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                          | (7U & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 2U))))) 
                                     | (2U == ((0x1f8U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 0xcU)) 
                                               | (7U 
                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                     >> 2U))))) 
                                    | (3U == ((0x1f8U 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0xcU)) 
                                              | (7U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    >> 2U))))) 
                                   | (4U == ((0x1f8U 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                 >> 0xcU)) 
                                             | (7U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 2U))))) 
                                  | (6U == ((0x1f8U 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                >> 0xcU)) 
                                            | (7U & 
                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                >> 2U))))) 
                                 | (7U == ((0x1f8U 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                               >> 0xcU)) 
                                           | (7U & 
                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                               >> 2U))))) 
                                | (1U == ((0x1f8U & 
                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                          | (7U & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 2U)))))
                                ? ((0x1e07ffffffffffULL 
                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                   | ((QData)((IData)(
                                                      ((0U 
                                                        == 
                                                        ((0x1f8U 
                                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                             >> 0xcU)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                               >> 2U))))
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         == 
                                                         ((0x1f8U 
                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                              >> 0xcU)) 
                                                          | (7U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                >> 2U))))
                                                         ? 8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          ((0x1f8U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                               >> 0xcU)) 
                                                           | (7U 
                                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                 >> 2U))))
                                                          ? 0x1aU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           ((0x1f8U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                >> 0xcU)) 
                                                            | (7U 
                                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                  >> 2U))))
                                                           ? 0x13U
                                                           : 
                                                          ((4U 
                                                            == 
                                                            ((0x1f8U 
                                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                 >> 0xcU)) 
                                                             | (7U 
                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                   >> 2U))))
                                                            ? 4U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             ((0x1f8U 
                                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                  >> 0xcU)) 
                                                              | (7U 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                    >> 2U))))
                                                             ? 6U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              ((0x1f8U 
                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                   >> 0xcU)) 
                                                               | (7U 
                                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                     >> 2U))))
                                                              ? 7U
                                                              : 1U))))))))) 
                                      << 0x2bU)) : 
                               ((5U == ((0x1f8U & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 0xcU)) 
                                        | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                 >> 2U))))
                                 ? (0x280000000000ULL 
                                    | (0x1e07ffffffffffULL 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                 : ((0x105U == ((0x1f8U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    >> 0xcU)) 
                                                | (7U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 2U))))
                                     ? (0x680000000000ULL 
                                        | (0x1e07ffffffffffULL 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                     : 0x9f5100000040ULL)));
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        } else if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        } else if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x60000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x1800000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x8000000000ULL | (0x1ff81fffffffffULL 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x400000000ULL | (0x1ffff3ffffffffULL 
                                         & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = ((0x1ffffffffe7fffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                       | ((QData)((IData)((3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                 >> 2U)))) 
                          << 0xfU));
                if ((1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                            >> 4U) | (3U == (3U & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 2U)))))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        }
    } else if ((0x4000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
        if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        } else if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x10000000000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x28000000000ULL | (0x1ff87fffffffffULL 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x800000000ULL | (0x1ffff3ffffffffULL 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1e07ffffffffffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x400000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x10000000000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x8000000000ULL | (0x1ff87fffffffffULL 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x1ffff3ffffffffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0xc00000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                if ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                            ? ((0x1e07ffffffffffULL 
                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                               | ((QData)((IData)((
                                                   (4U 
                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                    ? 7U
                                                    : 6U))) 
                                  << 0x2bU)) : ((4U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 0xfU)))
                                                  ? 
                                                 (0x280000000000ULL 
                                                  | (0x1e07ffffffffffULL 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                       >> 0xfU)))
                                                   ? 
                                                  (0x680000000000ULL 
                                                   | (0x1e07ffffffffffULL 
                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                                   : 0x9f5100000040ULL))
                                                 : 
                                                (0x200000000000ULL 
                                                 | (0x1e07ffffffffffULL 
                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))));
                } else if ((8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x1e07ffffffffffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                           | ((QData)((IData)(((4U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                                ? 0x13U
                                                : 0x1aU))) 
                              << 0x2bU));
                } else if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x80000000000ULL | (0x1e07ffffffffffULL 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    if ((0U != (0x7fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                         >> 0xfU)))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1e07ffffffffffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        }
    } else if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
        if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x80ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0U == (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                         >> 2U))) ? 
                           (4ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                            : ((1U == (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                             >> 2U)))
                                ? (4ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                : 0x9f5100000040ULL));
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        }
    } else if ((0x1000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
    } else if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
        if ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U])) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x40000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0xc00000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0xc000000000ULL | (0x1ff81fffffffffULL 
                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x1ffff3ffffffffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = ((0x1ffffffffe3fffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                   | ((QData)((IData)(((6U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                              >> 1U)) 
                                       | (1U & (~ (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 4U)))))) 
                      << 0xeU));
            if ((((7U == (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                >> 2U))) | (6U == (7U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 2U)))) 
                 | (3U == (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                 >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x9f5100000040ULL;
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
            >> 5U) & (0U == (0x44U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
        = (IData)((((QData)((IData)((3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U]))) 
                    << 0x2bU) | (((QData)((IData)((0x3fU 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                      >> 0x19U)))) 
                                  << 0x25U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                    >> 2U)))) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                                    >> 0x1fU))) 
                                                   << 0x23U) 
                                                  | (((QData)((IData)(
                                                                      ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                                        << 0x12U) 
                                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                                          >> 0xeU)))) 
                                                      << 3U) 
                                                     | (QData)((IData)(
                                                                       (6U 
                                                                        | (1U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                                              >> 4U)))))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0 
            << 0xdU) | (IData)(((((QData)((IData)((3U 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U]))) 
                                  << 0x2bU) | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                                    >> 0x19U)))) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                       >> 2U)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                                       >> 0x1fU))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                                           << 0x12U) 
                                                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                                             >> 0xeU)))) 
                                                         << 3U) 
                                                        | (QData)((IData)(
                                                                          (6U 
                                                                           | (1U 
                                                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                                                >> 4U)))))))))) 
                                >> 0x20U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[2U] 
        = (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0 
           >> 0x13U);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 0U;
    if ((0x800U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x400U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read 
                                = ((1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 3U)) || 
                                   ((1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                           >> 2U)) 
                                    || (1U & ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                    >> 4U))
                                                   : 
                                                  (~ 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                    >> 4U)))
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                    >> 4U))
                                                   : 
                                                  (~ 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                    >> 4U)))))));
                        } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
        = ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 6U)))
                                       ? 0x9f5100000040ULL
                                       : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
            >> 0xdU) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
            >> 3U) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans[0U] 
        = (IData)((((QData)((IData)((0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                              >> 0x19U)))) 
                    << 0x2bU) | (((QData)((IData)((1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                      >> 2U)))) 
                                  << 0x2aU) | (((QData)((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                      >> 0xbU)))
                                                                  ? 
                                                                 ((0x4000U 
                                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                   ? 
                                                                  ((0x2000U 
                                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                    ? 8U
                                                                    : 4U)
                                                                   : 
                                                                  ((0x2000U 
                                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                    ? 2U
                                                                    : 1U))
                                                                  : 
                                                                 ((1U 
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
                                                                      : 0xfU))))))) 
                                                << 0x26U) 
                                               | (((QData)((IData)(
                                                                   ((0x4000U 
                                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                     ? 
                                                                    ((0x2000U 
                                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                      ? 
                                                                     ((0xff000000U 
                                                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          << 0x15U)) 
                                                                      | (0xffffffU 
                                                                         & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                             << 0x15U) 
                                                                            | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                               >> 0xbU))))
                                                                      : 
                                                                     ((0xffff0000U 
                                                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          << 0xdU)) 
                                                                      | (0xffffU 
                                                                         & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                             << 0xdU) 
                                                                            | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                               >> 0x13U)))))
                                                                     : 
                                                                    ((0x2000U 
                                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                      ? 
                                                                     ((0xffffff00U 
                                                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          << 5U)) 
                                                                      | (0xffU 
                                                                         & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                             << 5U) 
                                                                            | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                               >> 0x1bU))))
                                                                      : 
                                                                     ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                       << 0x1dU) 
                                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         >> 3U)))))) 
                                                   << 6U) 
                                                  | (QData)((IData)(
                                                                    (0xeU 
                                                                     | (1U 
                                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                                           >> 4U))))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans[1U] 
        = ((((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])
              ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0
              : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                  ? ((IData)(4U) + (0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))
                  : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0)) 
            << 0x11U) | (IData)(((((QData)((IData)(
                                                   (0x3fU 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                       >> 0x19U)))) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                     >> 2U)))) 
                                                 << 0x2aU) 
                                                | (((QData)((IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                          >> 0xbU)))
                                                                      ? 
                                                                     ((0x4000U 
                                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                       ? 
                                                                      ((0x2000U 
                                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                        ? 8U
                                                                        : 4U)
                                                                       : 
                                                                      ((0x2000U 
                                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                        ? 2U
                                                                        : 1U))
                                                                      : 
                                                                     ((1U 
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
                                                                          : 0xfU))))))) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(
                                                                       ((0x4000U 
                                                                         & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                         ? 
                                                                        ((0x2000U 
                                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                          ? 
                                                                         ((0xff000000U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              << 0x15U)) 
                                                                          | (0xffffffU 
                                                                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                                << 0x15U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0xbU))))
                                                                          : 
                                                                         ((0xffff0000U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              << 0xdU)) 
                                                                          | (0xffffU 
                                                                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x13U)))))
                                                                         : 
                                                                        ((0x2000U 
                                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])
                                                                          ? 
                                                                         ((0xffffff00U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              << 5U)) 
                                                                          | (0xffU 
                                                                             & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                                << 5U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x1bU))))
                                                                          : 
                                                                         ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                           << 0x1dU) 
                                                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                             >> 3U)))))) 
                                                       << 6U) 
                                                      | (QData)((IData)(
                                                                        (0xeU 
                                                                         | (1U 
                                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                                               >> 4U))))))))) 
                                 >> 0x20U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans[2U] 
        = (((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])
             ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0
             : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)
                 ? ((IData)(4U) + (0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0))
                 : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0)) 
           >> 0xfU);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_illegal 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
            >> 5U) & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                       >> 6U) & (((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                >> 4U))) 
                                  & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                      >> 6U) & (3U 
                                                == 
                                                ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf91f4e7e__0)
                                                  ? 
                                                 (3U 
                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                     >> 0x18U))
                                                  : 0U)))) 
                                 | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read))));
    if ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U])) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel = 2U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel = 1U;
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x29U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x22U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
            = (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x27U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel 
            = (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x25U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel 
            = (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x20U)));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn 
        = (1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                     >> 1U)) & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 1U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                  >> 1U) | (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                    >> 0x24U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp 
        = (1U & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                     >> 1U)) & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 0x32U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw 
        = ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
               >> 1U)) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                          >> 0x34U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid = 0U;
    if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                      >> 0xcU)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid = 0U;
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex = 0U;
    if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex) 
         & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 0xbU)))) {
            if ((1U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xbU)))) {
                if ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword = 1U;
                }
            }
        }
        if ((2U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 0xbU)))) {
            if ((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex = 1U;
            }
        } else if ((1U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                                 >> 0xbU)))) {
            if ((3U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex = 1U;
            }
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex) 
           & (2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans[0U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans[1U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans[2U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = (0xffffffcfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__xif_csr_error_ex 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid) 
           & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_ha8492856__0) 
              & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_illegal)) 
                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                    >> 6U))));
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) {
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a = 0U;
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a 
            = (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                        >> 5U));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__csr_is_illegal 
        = ((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_ha8492856__0)) 
             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_illegal)) 
            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__xif_csr_error_ex)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit 
        = ((0x1eU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[0U]) 
           | (1U & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__xif_csr_error_ex) 
                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        >> 2U)) | (IData)(((0x30U == 
                                            (0x30U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                                           & (~ vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[0U]))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__19(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb 
        = ((0x80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U])
            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_ext
            : ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                ? (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                           >> 0x16U)) : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                                          << 0x1aU) 
                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                            >> 6U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception 
        = (((IData)((0x2010U == (0x2010U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U]))) 
            & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid)) 
           & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                      >> 6U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting 
        = (IData)(((0x2010U == (0x2010U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])) 
                   & (~ (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb;
}

extern const VlUnpacked<CData/*2:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h3733eb11_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h94534fc6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h03bd2042_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_hce00444f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h32bd3245_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_hed580991_0;

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__20(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__20\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                  & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready))
                  ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
    __Vtableidx1 = (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                     << 5U) | (((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)) 
                                << 3U) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_n 
        = Vtb_mxdotp_core__ConstPool__TABLE_h3733eb11_0
        [__Vtableidx1];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status 
        = Vtb_mxdotp_core__ConstPool__TABLE_h94534fc6_0
        [__Vtableidx1];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vtb_mxdotp_core__ConstPool__TABLE_h03bd2042_0
        [__Vtableidx1];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vtb_mxdotp_core__ConstPool__TABLE_hce00444f_0
        [__Vtableidx1];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vtb_mxdotp_core__ConstPool__TABLE_h32bd3245_0
        [__Vtableidx1];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vtb_mxdotp_core__ConstPool__TABLE_hed580991_0
        [__Vtableidx1];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = (1U & (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core)) 
                  & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q))) 
                 | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.s_req 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) 
           || ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)) 
               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__22(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__22\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en 
        = (1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                     >> 1U)) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 1U)) & (IData)(
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                       >> 7U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn 
        = (1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                     >> 1U)) & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                 >> 1U) | (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                   >> 6U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                     >> 1U)) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 1U)) & (IData)(
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                       >> 0x15U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0 
        = ((0U != (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                            >> 0x11U))) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0 
        = ((0U != (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                            >> 0xaU))) & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn) 
                                          | ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                                 >> 1U)) 
                                             & (IData)(
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                        >> 0x18U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0 
        = (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn) 
                 | ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                        >> 1U)) & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 0x17U)))));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid 
        = (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__instr_valid) 
            & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn) 
               | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en))) 
           & (~ (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q) 
                  | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)) 
                 | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                    >> 1U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__xif_id 
        = (0xfU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[0U] 
                   + (((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
                       | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                      | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__36(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__36\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_waiting 
        = ((((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_valid) 
             & (0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q))) 
            & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q))) 
           & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_valid 
        = ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_waiting)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__instr_valid));
}
