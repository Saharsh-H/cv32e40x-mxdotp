// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_mxdotp_core___024root___eval_initial__TOP__Vtiming__0(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__rst_ni = 0U;
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    co_await vlSelf->__VtrigSched_hc90f137b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mxdotp_core.clk_i)", 
                                                       "tb_mxdotp_core.sv", 
                                                       47);
    vlSelf->tb_mxdotp_core__DOT__rst_ni = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_mxdotp_core___024root___eval_initial__TOP__Vtiming__2(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_mxdotp_core.sv", 
                                           43);
        vlSelf->tb_mxdotp_core__DOT__clk_i = (1U & 
                                              (~ (IData)(vlSelf->tb_mxdotp_core__DOT__clk_i)));
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__0(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h4f7da6f5__0 
        = ((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
            ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
            : ((1U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
               | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__1(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__1\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_21;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                      >> 0x17U)))))) 
                              << 0x36U) | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                  << 0x16U) 
                                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                    >> 0xaU)) 
                                                                + 
                                                                (1U 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                    >> 0x16U)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 4U)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                       >> 0x15U)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 2U) 
                                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           << 8U) 
                                                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                             >> 0x18U)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                             >> 0x13U)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                              << 0xeU) 
                                                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x12U)) 
                                                                            + 
                                                                            (1U 
                                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x12U))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0xcU)) 
                                                                               + 
                                                                               (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x11U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x10U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0xfU))) 
                                                                                << 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0xeU))))))))))))));
    __Vtemp_2[1U] = (((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                         << 0xaU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                     >> 0x16U)) + (1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                      >> 0x18U))) 
                      << 0x1cU) | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                     >> 0x10U)) 
                                                                 + 
                                                                 (1U 
                                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                     >> 0x17U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                      << 0x16U) 
                                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        >> 0xaU)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                        >> 0x16U)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                           >> 4U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                           >> 0x15U)))))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            << 2U) 
                                                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                              >> 0x1eU)) 
                                                                          + 
                                                                          (1U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                               << 8U) 
                                                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x18U)) 
                                                                             + 
                                                                             (1U 
                                                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x13U)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x12U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x12U))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0xcU)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x11U))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0x10U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0xfU))) 
                                                                                << 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                                >> 0xeU))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = ((0xfc000U & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                     << 0x18U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                  >> 8U)) 
                                   + (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                            >> 0x1bU))) 
                                  << 0xeU)) | ((0x3f00U 
                                                & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                        >> 2U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                        >> 0x1aU))) 
                                                   << 8U)) 
                                               | ((0xfcU 
                                                   & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 4U) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                           >> 0x1cU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                           >> 0x19U))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                           << 0xaU) 
                                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                             >> 0x16U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                             >> 0x18U))) 
                                                        >> 4U)))));
    __Vtemp_12[3U] = ((0x3f000000U & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                         << 0xeU) | 
                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                         >> 0x12U)) 
                                       + (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                >> 2U))) 
                                      << 0x18U)) | 
                      ((0xfc0000U & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                        << 0x14U) | 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                        >> 0xcU)) + 
                                      (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                             >> 1U))) 
                                     << 0x12U)) | (
                                                   (0x3f000U 
                                                    & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                          << 0x1aU) 
                                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                            >> 6U)) 
                                                        + 
                                                        (1U 
                                                         & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) 
                                                       << 0xcU)) 
                                                   | ((0xfc0U 
                                                       & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           + 
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                            >> 0x1fU)) 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                              << 6U) 
                                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                >> 0x1aU)) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                >> 0x1eU))))))));
    __Vtemp_16[4U] = ((0x3f0000U & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                       << 0x16U) | 
                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                       >> 0xaU)) + 
                                     (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                            >> 6U))) 
                                    << 0x10U)) | ((0xfc00U 
                                                   & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                           >> 4U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                           >> 5U))) 
                                                      << 0xaU)) 
                                                  | ((0x3f0U 
                                                      & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            << 2U) 
                                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                              >> 4U))) 
                                                         << 4U)) 
                                                     | (0xfU 
                                                        & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                              << 8U) 
                                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                >> 0x18U)) 
                                                            + 
                                                            (1U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                >> 3U))) 
                                                           >> 2U)))));
    __Vtemp_21[5U] = ((0xfc000U & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                      << 0x18U) | (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                   >> 8U)) 
                                    + (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                             >> 0xbU))) 
                                   << 0xeU)) | ((0x3f00U 
                                                 & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         >> 2U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                         >> 0xaU))) 
                                                    << 8U)) 
                                                | ((0xfcU 
                                                    & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                          << 4U) 
                                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            >> 0x1cU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                            >> 9U))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            << 0xaU) 
                                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                              >> 0x16U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                              >> 8U))) 
                                                         >> 4U)))));
    __Vtemp_1[2U] = (((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                         << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                     >> 0x14U)) + (1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                      >> 0x1dU))) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                       >> 0x1cU))) 
                                                  << 0x14U)) 
                                   | __Vtemp_5[2U]));
    __Vtemp_1[3U] = (((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                         << 8U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                   >> 0x18U)) + (1U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                    >> 3U))) 
                      << 0x1eU) | __Vtemp_12[3U]);
    __Vtemp_1[4U] = (((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                         << 0xaU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                     >> 0x16U)) + (1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                      >> 8U))) 
                      << 0x1cU) | ((0xfc00000U & ((
                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                     << 0x10U) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                       >> 7U))) 
                                                  << 0x16U)) 
                                   | __Vtemp_16[4U]));
    __Vtemp_1[5U] = (((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                         << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                     >> 0x14U)) + (1U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                      >> 0xdU))) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                       >> 0xcU))) 
                                                  << 0x14U)) 
                                   | __Vtemp_21[5U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = __Vtemp_2[0U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = __Vtemp_2[1U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = __Vtemp_1[2U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = __Vtemp_1[3U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = __Vtemp_1[4U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = __Vtemp_1[5U];
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__3(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q;
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
            = ((2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))
                : 0U);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h915de7d2__0 = 1U;
        if ((2U >= (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
                = (((~ ((IData)(1U) << (3U & ((IData)(2U) 
                                              - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) 
                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int)) 
                   | (7U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h915de7d2__0) 
                            << (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))));
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__4(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)
                      ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)
                      ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__6(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__0(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__data_gnt = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__rst_ni));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__7(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__7\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = (((((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                        >> 6U)) == (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                             >> 0x11U))) 
             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0)) 
            << 2U) | (((((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                                   >> 6U)) == (0x1fU 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  >> 0xaU))) 
                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0)) 
                       << 1U) | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) 
                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = (((((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                               >> 0x11U))) 
             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0)) 
            << 2U) | (((((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                   >> 0xaU)) == (0x1fU 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    >> 0xaU))) 
                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0)) 
                       << 1U) | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match) 
                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__8(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__8\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__last_q) 
           & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__9(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__9\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
             & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
            & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
           & (0U == (0x22U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__10(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__10\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & ((IData)(((((0U != (0x39000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])) 
                            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24798bc0__0)) 
                           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24bab915__0)) 
                          | (0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)))) 
                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                    >> 0xdU)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__11(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__11\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                  >> 1U) | (((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
                             | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)) 
                            & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting)) 
                               & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                     >> 5U))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__12(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__12\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step 
        = (1U & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                 & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                     >> 2U) & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug)) 
                               & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid) 
                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                     >> 0xcU))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__13(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__13\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                            << 3U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                  ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                 ? 0x1eU : 0x1fU) << 0x16U) | ((((0x10000000U 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                  ? 0x1cU
                                                  : 0x1dU) 
                                                << 0x11U) 
                                               | ((((0x4000000U 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0x1aU
                                                     : 0x1bU) 
                                                   << 0xcU) 
                                                  | ((((0x1000000U 
                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0x18U
                                                        : 0x19U) 
                                                      << 7U) 
                                                     | ((((0x400000U 
                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                           ? 0x16U
                                                           : 0x17U) 
                                                         << 2U) 
                                                        | (((0x100000U 
                                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                             ? 0x14U
                                                             : 0x15U) 
                                                           >> 3U)))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__14(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__14\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                  << 0x1eU) | (((IData)((0U != (0x30000000U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__15(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__15\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q;
    if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                    = ((4U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))
                        ? ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                            ? 3U : ((0x20U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])
                                     ? 2U : ((0x400000U 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                              ? 1U : 0U)))
                        : 0U);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                    = ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                        ? 3U : ((0x20U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])
                                 ? 2U : ((0x400000U 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                          ? 1U : 0U)));
            } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0)))) {
                if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                        = ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                            ? 3U : ((0x20U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])
                                     ? 2U : ((0x400000U 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                              ? 1U : 0U)));
                } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
                } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) {
                        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                = ((0x20U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])
                                    ? 2U : ((0x400000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U])
                                             ? 1U : 0U));
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0)))) {
                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)))) {
                                    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
        = (0x18000000U | (0x7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
        = (0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
        = ((0x7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]) 
           | (((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                        << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[2U] 
                                    >> 0x12U)) : ((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[2U] 
                                                     >> 0xaU)))
                : ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                        << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 0x12U)) : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              << 0x1bU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
        = ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U]) 
           | (((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                        << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[2U] 
                                    >> 0x12U)) : ((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[2U] 
                                                     >> 0xaU)))
                : ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                        << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 0x12U)) : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              >> 5U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
        = ((0x3ffffc1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]) 
           | (0x3fffffeU & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                             << 5U) | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                        << 4U) | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
                                                  << 1U)))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_sequent__TOP__16(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_sequent__TOP__16\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
        = (0x3000000U | (0x7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
        = (0x3ffe03fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q) 
              << 8U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | (0x80U & (((((IData)((0U != (0x78U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)))) 
                          | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt) 
                             & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed)))) 
                         | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
                            & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed)))) 
                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi) 
                           & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed)))) 
                       << 7U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xffffff9fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | (0xffffffe0U & ((IData)((0U != (5U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)))) 
                             << 6U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = (0xffffffe1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = (0x1ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
        = (0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
        = (0x3fffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
        = (0x3fbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q;
    if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                = (0x2ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                = (0x2ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 0U;
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                = (0x40U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                = (0xd00000U | (0x307ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                   | (0x2000000U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                                    << 0x19U)));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                = (1U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
            if ((4U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x1cU | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                       | (2U & ((~ (((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)) 
                                     | (2U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) 
                                    | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb)))) 
                                << 1U)));
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x10U | (0xffffffe1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]));
            }
        }
    } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                = (0xffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                = (0x20U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
            if ((0x8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U])) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                    = (0x2000000U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
            }
        } else {
            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x1eU | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                    = (0xe00000U | (0x307ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x2000000U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                    = (0x4000000U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = ((0x7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                       | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                            ? 0x81U : 0x80U) << 0x1bU));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                    = ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]) 
                       | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                            ? 0x81U : 0x80U) >> 5U));
            } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x1e0U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 4U;
            } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x1eU | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                    = (0xc80000U | (0x307ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                    = ((0x3ffe07fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]) 
                       | (0x3ffff80U & (0x1000U | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl) 
                                                   << 7U))));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = (0x2000000U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                    = (0x4000000U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                    = ((0x7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl) 
                          << 0x1bU));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                    = ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]) 
                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl) 
                          >> 5U));
            } else {
                if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = (0x1cU | (0xffffffe1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                        = ((0x307ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]) 
                           | (0x3f80000U & (0x800000U 
                                            | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                                                 ? 0xbU
                                                 : 8U) 
                                               << 0x13U))));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                           | (0x2000000U & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                            << 0x19U)));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = ((0x7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                           | (((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
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
                                                     : 5U)))))) 
                              << 0x1bU));
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                        = ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U]) 
                           | (((0U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
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
                                                     : 5U)))))) 
                              >> 5U));
                } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = (0x180U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                        = (0x2ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
                } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = (0x1e0U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                            = (0x1cU | (0xffffffc3U 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]));
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                            = (0xb00000U | (0x307ffffU 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
                    }
                } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = (0x1cU | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                        = (0x900000U | (0x307ffffU 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
                } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = (0x18U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                        = (0xa80000U | (0x307ffffU 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
                } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = (0x10U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]);
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                        = ((0x307ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]) 
                           | (0x3ffffffU & ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn))
                                              ? (0x10U 
                                                 | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                                                     ? 0xbU
                                                     : 1U))
                                              : 0x14U) 
                                            << 0x13U)));
                }
                if ((IData)(((0x2840U == (0x2840U & 
                                          vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])) 
                             & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                   >> 1U))))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                           | (0x4000000U & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                            << 0x1aU)));
                }
            }
            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 4U;
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
            = (0x1800000U | (0x207ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
            = (0x2ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]);
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    if (((((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
               >> 4U)) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                          >> 2U)) & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q))) 
         & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid) 
            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_ha2a5257a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_he5af6708_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h3c034bbc_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h14326f57_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_hf3da0886_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_haa457fee_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h253bc907_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_he28595f8_0;

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__1(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((0xfffffe0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                    >> 4U) & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid) 
                                              << 5U))) 
                    | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out) 
                        << 4U) | ((8U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))) 
                                         << 3U)) | 
                                  (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) 
                                    << 2U) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
        = Vtb_mxdotp_core__ConstPool__TABLE_ha2a5257a_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_valid 
        = Vtb_mxdotp_core__ConstPool__TABLE_he5af6708_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_ready 
        = Vtb_mxdotp_core__ConstPool__TABLE_h3c034bbc_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en 
        = Vtb_mxdotp_core__ConstPool__TABLE_h14326f57_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt 
        = Vtb_mxdotp_core__ConstPool__TABLE_hf3da0886_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en 
        = Vtb_mxdotp_core__ConstPool__TABLE_haa457fee_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en 
        = Vtb_mxdotp_core__ConstPool__TABLE_h253bc907_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en 
        = Vtb_mxdotp_core__ConstPool__TABLE_he28595f8_0
        [__Vtableidx3];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                      >> 0xcU)))) {
            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready = 1U;
    }
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                             >> 7U));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = (((0U != ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                         << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                      >> 7U))) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0));
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d 
            = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                    << 1U) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q;
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
            ? (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0)) 
                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   - vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q);
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__4(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0 
        = (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex)) 
            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h4f7da6f5__0)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid 
        = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
             >> 0x16U) | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                           >> 6U) | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                                      >> 0x18U) | (
                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                     >> 0xdU) 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid)) 
                                                   | (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                        >> 9U) 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_valid)) 
                                                      | (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h4f7da6f5__0) 
                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex))) 
                                                         | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                                             >> 4U) 
                                                            | ((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x380U 
                                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                                                                        | (0U 
                                                                           != 
                                                                           (0x30000U 
                                                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])))) 
                                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                                                                  >> 5U))))))))) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__5(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
           & ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp) 
                & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                       >> 6U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw))) 
               | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                  & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                         >> 4U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn)))) 
              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                 >> 0x16U)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__6(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_valid 
        = ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                     >> 4U))) && ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                                   ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                      && ((3U != (3U 
                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                     >> 0x10U)))
                                           ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                           : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0) 
                                              | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
                                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))))
                                   : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_valid) 
           & (IData)((0U == (0x110U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]))));
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_h1780a55c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_h0692e5a4_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_h77c91a6a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_he4e42b2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_h5e4815b1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_h3f38541e_0;

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__7(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__7\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = ((0x40U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                              << 4U)) | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                          << 5U) | 
                                         (((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt)) 
                                           << 3U) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = Vtb_mxdotp_core__ConstPool__TABLE_h1780a55c_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = Vtb_mxdotp_core__ConstPool__TABLE_h0692e5a4_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vtb_mxdotp_core__ConstPool__TABLE_h77c91a6a_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vtb_mxdotp_core__ConstPool__TABLE_he4e42b2b_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vtb_mxdotp_core__ConstPool__TABLE_h5e4815b1_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vtb_mxdotp_core__ConstPool__TABLE_h3f38541e_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid 
        = ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[0U] 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
            >> 0xbU) & ((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                        & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting)) 
                           & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception)) 
                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy 
        = (((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid)) 
           | ((0U < (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
              | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid) 
           & (2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                      [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                     [0U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | ((0U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                      [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                     [1U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 1U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((1U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 1U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 2U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((2U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 2U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 3U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((3U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 3U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 4U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((4U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 4U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 5U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((5U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 5U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 6U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((6U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 6U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 7U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((7U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 7U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 8U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((8U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 8U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 9U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((9U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 9U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xaU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xaU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xaU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xbU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xbU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xbU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xcU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xcU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xcU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xdU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xdU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xdU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xeU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xeU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xeU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xfU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xfU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xfU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x10U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x11U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x11U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x11U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x12U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x12U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x12U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x13U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x13U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x13U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x14U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x14U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x14U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x15U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x15U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x15U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x16U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x16U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x16U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x17U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x17U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x17U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x18U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x18U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x18U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x19U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x19U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x19U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1aU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1aU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1aU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1bU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1bU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1bU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1cU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1cU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1cU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1dU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1dU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1dU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1eU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1eU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1eU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1fU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1fU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1fU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__8(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready 
        = (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state)
                  ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) & (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt))
                  : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) | (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xfffcffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | (0xffff0000U & (((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt)) 
                               & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                     >> 0xaU))) << 0x11U) 
                             | (0xffff0000U & ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt)) 
                                                << 0x10U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                  << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__9(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__9\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = (0x7fU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
                = (0x800U | (0x3ffU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
                = (0x200U | (0xcffU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)));
        }
    }
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
                = (0x400U | (0x3ffU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
                = (0x100U | (0xcffU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)));
        }
    }
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
                = (0x80U | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
        }
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__10(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid 
        = ((((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                 >> 0x13U)) & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting))) 
            | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                >> 0x13U) & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1) 
                             | (0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))))) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__11(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__11\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xffff01ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | (0xfffffe00U & ((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid)) 
                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready)) 
                              << 0xfU) | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0) 
                                           << 0xeU) 
                                          | ((((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid)) 
                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready)) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid)) 
                                                    << 0xcU)) 
                                                | ((0xfffff800U 
                                                    & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0) 
                                                          << 0xbU))) 
                                                   | ((0xfffffc00U 
                                                       & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                                           << 4U) 
                                                          & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0) 
                                                             << 0xaU))) 
                                                      | (0x3ffe00U 
                                                         & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                                             >> 0xaU) 
                                                            & (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1)) 
                                                                & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid)) 
                                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid))) 
                                                               << 9U)))))))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__12(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xfe03ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
               << 0x18U) | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                             << 0x17U) | ((0xffc00000U 
                                           & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                               << 0x16U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                                                 << 8U))) 
                                          | ((0xffe00000U 
                                              & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                  << 0x15U) 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                                    << 0x10U))) 
                                             | ((0xfff00000U 
                                                 & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                     << 0x14U) 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                                       << 0x10U))) 
                                                | ((0xfff80000U 
                                                    & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                        << 0x13U) 
                                                       & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                                          << 0x10U))) 
                                                   | (0x40000U 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                         << 6U)))))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__13(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__13\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc;
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 3U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc;
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 2U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        } else if ((0x1000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 1U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__14(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__14\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                         ? (- (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                        >> 0xeU))) : 
                        (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                  >> 0xeU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x30U))))))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                           >> 0x38U))))))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                          >> 0x3cU))))))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 2U) | (QData)((IData)((3U & (IData)(
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3eU))))))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3fU))))))
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
        = (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    if ((0x80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        if ((0x40000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                  >> 0xfU)))) {
                        if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                                = (1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp));
                        }
                    }
                } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                     >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                            = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                 << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)) 
                               ^ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp));
                    }
                }
            } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                 >> 0x10U)))) {
                if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                              >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                            = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                 << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)) 
                               | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp));
                    }
                }
            }
        } else if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0x10U)))) {
                if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                              >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                            = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                 << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)) 
                               & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)));
                    }
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_mxdotp_core__ConstPool__TABLE_hfe10e701_0;

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__15(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__15\n"); );
    // Init
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = Vtb_mxdotp_core__ConstPool__TABLE_hfe10e701_0
        [__Vtableidx6];
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__17(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__17\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
        = ((0x68U >= (0x7fU & ((IData)(0x23U) * ((IData)(2U) 
                                                 - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))
            ? (0x7ffffffffULL & (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(0x22U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x23U) 
                                                 * 
                                                 ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x23U) 
                                                                      * 
                                                                      ((IData)(2U) 
                                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x23U) 
                                                            * 
                                                            ((IData)(2U) 
                                                             - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))))))
            : 0ULL);
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp;
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__18(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__18\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = (0xfdfU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = (0xffdU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = (0xfefU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = (0xffbU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    if ((1U & ((IData)((0U != (0x380000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U]))) 
               | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U]))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
            = (2U | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    }
    if ((((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
             >> 3U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                       >> 4U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex)) 
          & (0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) 
         | (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready)) 
             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb)) 
            & (0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
            = (0x20U | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = ((0xfbfU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)) 
           | (((((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                     >> 1U)) & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 0x31U))) 
                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw)) 
               & ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb)) 
                  | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) 
                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match)))) 
              << 6U));
    if (((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en) 
           | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn))) 
          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
             >> 0x16U)) & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                             >> 5U) & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                        >> 6U) | (IData)(
                                                         (0x1080000U 
                                                          == 
                                                          (0x1080000U 
                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U]))))) 
                           | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                               >> 0xdU) & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                            >> 2U) 
                                           | (IData)(
                                                     (0x840U 
                                                      == 
                                                      (0x840U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])))))))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
            = (0x10U | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    }
    if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read) 
         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
            >> 0xdU))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
            = (4U | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp));
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__19(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__19\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_ready 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                  >> 2U) | ((((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready)) 
                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_ready)) 
                              & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex))) 
                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0)) 
                            & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                  >> 6U)))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__20(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__20\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0)))) {
                        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) {
                                        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy)))) {
                                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = 1U;
                                        }
                                        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) {
                                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_mxdotp_core__ConstPool__TABLE_hbf0d27cb_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_mxdotp_core__ConstPool__TABLE_h78093d4f_0;

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__21(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__21\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid) 
                     << 3U) | ((4U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                      >> 2U)) | (((IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
        = Vtb_mxdotp_core__ConstPool__TABLE_hbf0d27cb_0
        [__Vtableidx5];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push 
        = Vtb_mxdotp_core__ConstPool__TABLE_h78093d4f_0
        [__Vtableidx5];
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__22(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__22\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
           & (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready)) 
              | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q;
    if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready) 
         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt)));
    }
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt) 
                     - (IData)(1U)));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q;
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((3U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | (0x3cU & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                           << 2U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((0x30U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | ((8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                         >> 1U)) | (4U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                          >> 8U))));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt)));
    }
    if (vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__24(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__24\n"); );
    // Init
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0 = 0;
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0 = 0;
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0 = 0;
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0 = 0;
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0 = 0;
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0 = 0;
    IData/*31:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0 = 0;
    // Body
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
        if ((1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                    >> 0x17U) & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready)))))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    if ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])) {
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
        = (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
            << 3U) | (QData)((IData)(((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0) 
                                        && ((0x68U 
                                             >= ((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                            && (1U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x23U) 
                                                         * 
                                                         ((IData)(2U) 
                                                          - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x23U) 
                                                           * 
                                                           ((IData)(2U) 
                                                            - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))))) 
                                       << 2U) | (3U 
                                                 & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0)
                                                     ? 
                                                    ((0x68U 
                                                      >= 
                                                      (0x7fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          ((IData)(2U) 
                                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x23U) 
                                                            * 
                                                            ((IData)(2U) 
                                                             - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
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
                                                      : 0U)
                                                     : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)))))));
    if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                  >> 4U)))) {
        if ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                = (((QData)((IData)(((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0)
                                      ? ((((0x68U >= 
                                            ((IData)(3U) 
                                             + (0x7fU 
                                                & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                            ? (0xffffU 
                                               & (((0U 
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
                                            >> 0x10U))
                                      : ((vlSelf->tb_mxdotp_core__DOT__instr_rdata 
                                          << 0x10U) 
                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))))) 
                    << 3U) | (QData)((IData)((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned) 
                                               << 2U) 
                                              | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned)))));
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q;
    if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U])) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    } else if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                & (0U < (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q) 
                     - (IData)(1U)));
    }
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0 
        = (0x42403U | ((0x4000000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 8U)) 
                                      << 0x1aU)) | 
                       ((0x3800000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xdU)) 
                                       << 0x17U)) | 
                        ((0x400000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 9U)) 
                                       << 0x16U)) | 
                         ((0x38000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xaU)) 
                                       << 0xfU)) | 
                          (0x380U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 5U)) 
                                     << 7U)))))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0 
        = (0x6fU | (((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                              >> 0xfU)) << 0x1fU) | 
                    ((0x40000000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xbU)) 
                                     << 0x1eU)) | (
                                                   (0x30000000U 
                                                    & ((IData)(
                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xcU)) 
                                                       << 0x1cU)) 
                                                   | ((0x8000000U 
                                                       & ((IData)(
                                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 9U)) 
                                                          << 0x1bU)) 
                                                      | ((0x4000000U 
                                                          & ((IData)(
                                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xaU)) 
                                                             << 0x1aU)) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x19U)) 
                                                            | ((0x1000000U 
                                                                & ((IData)(
                                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xeU)) 
                                                                   << 0x18U)) 
                                                               | ((0xe00000U 
                                                                   & ((IData)(
                                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 6U)) 
                                                                      << 0x15U)) 
                                                                  | ((0x1ff000U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                                         << 0xcU)) 
                                                                     | (0x80U 
                                                                        & ((~ (IData)(
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x12U))) 
                                                                           << 7U))))))))))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0 
        = (0x37U | (((- (IData)((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xfU))))) 
                     << 0x11U) | ((0x1f000U & ((IData)(
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 5U)) 
                                               << 0xcU)) 
                                  | (0xf80U & ((IData)(
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 0xaU)) 
                                               << 7U)))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0 
        = (0x45413U | ((0x40000000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xdU)) 
                                       << 0x1eU)) | 
                       ((0x1f00000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 5U)) 
                                       << 0x14U)) | 
                        ((0x38000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xaU)) 
                                      << 0xfU)) | (0x380U 
                                                   & ((IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xaU)) 
                                                      << 7U))))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0 
        = (0x847433U | ((0x700000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 5U)) 
                                      << 0x14U)) | 
                        ((0x38000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xaU)) 
                                      << 0xfU)) | (0x380U 
                                                   & ((IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xaU)) 
                                                      << 7U)))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0 
        = (0x1013U | ((0x1f00000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 5U)) 
                                     << 0x14U)) | (
                                                   (0xf8000U 
                                                    & ((IData)(
                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xaU)) 
                                                       << 0xfU)) 
                                                   | (0xf80U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xaU)) 
                                                         << 7U)))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0 
        = (0x12003U | ((0xc000000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 5U)) 
                                      << 0x1aU)) | 
                       ((0x2000000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xfU)) 
                                       << 0x19U)) | 
                        ((0x1c00000U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 7U)) 
                                        << 0x16U)) 
                         | (0xf80U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xaU)) 
                                      << 7U))))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0 
        = (0U == ((0x20U & ((IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 0xfU)) << 5U)) 
                  | (0x1fU & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 5U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((0U == (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                              >> 3U))))) {
        if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                           >> 0x12U)))) {
            if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x10U)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0xffU & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                            >> 8U))))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((1U == (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 3U))))) {
        if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                           >> 0x12U)))) {
            if ((1U & (~ (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U))))) {
                if ((1U & (~ (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                    if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xfU)))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xfU)))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                if (tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((2U == (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 3U))))) {
        if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                           >> 0x12U)))) {
            if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((1U & (~ (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 0xfU))))) {
                if ((0U == (0x1fU & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 5U))))) {
                    if ((0U == (0x1fU & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 0xaU))))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x1fU & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xaU))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x10U)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0xfU)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
        = ((7ULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed) 
           | ((QData)((IData)(((0U == (3U & (IData)(
                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 3U))))
                                ? ((1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0x12U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x11U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x10U)))
                                            ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                            : (0x842023U 
                                               | ((0x4000000U 
                                                   & ((IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 8U)) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xfU)) 
                                                         << 0x19U)) 
                                                     | ((0x700000U 
                                                         & ((IData)(
                                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x14U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 0xfU)) 
                                                           | ((0xc00U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xdU)) 
                                                                  << 0xaU)) 
                                                              | (0x200U 
                                                                 & ((IData)(
                                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 9U)) 
                                                                    << 9U)))))))))
                                        : tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0)
                                    : ((1U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x11U)))
                                        ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                        : ((1U & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x10U)))
                                            ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_haa892527__0
                                            : (0x10413U 
                                               | ((0x3c000000U 
                                                   & ((IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xaU)) 
                                                      << 0x1aU)) 
                                                  | ((0x3000000U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xeU)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((IData)(
                                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 8U)) 
                                                            << 0x17U)) 
                                                        | ((0x400000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 9U)) 
                                                               << 0x16U)) 
                                                           | (0x380U 
                                                              & ((IData)(
                                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 7U))))))))))
                                : ((1U == (3U & (IData)(
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 3U))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x11U)))
                                            ? (0x40063U 
                                               | (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xfU))))) 
                                                   << 0x1cU) 
                                                  | ((0xc000000U 
                                                      & ((IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 8U)) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & ((IData)(
                                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x19U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 0xfU)) 
                                                           | ((0x1000U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0x10U)) 
                                                                  << 0xcU)) 
                                                              | ((0xc00U 
                                                                  & ((IData)(
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xdU)) 
                                                                     << 0xaU)) 
                                                                 | ((0x300U 
                                                                     & ((IData)(
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                        << 8U)) 
                                                                    | (0x80U 
                                                                       & ((IData)(
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU)) 
                                                                          << 7U))))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xeU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xdU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 9U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)))
                                                        ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h0e395027__0
                                                        : 
                                                       (0x846433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)))
                                                        ? 
                                                       (0x844433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))
                                                        : 
                                                       (0x40840433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))))
                                                     : 
                                                    (0x47413U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | ((0x38000U 
                                                                  & ((IData)(
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 0xfU)) 
                                                                 | (0x380U 
                                                                    & ((IData)(
                                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 7U))))))))
                                                    : tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hef8eb534__0)))
                                        : ((1U & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x11U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? ((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5eb68885__0)
                                                    ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xaU))))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 6U)) 
                                                               << 0x1bU)) 
                                                           | ((0x4000000U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 8U)) 
                                                                  << 0x1aU)) 
                                                              | ((0x2000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 0x19U)) 
                                                                 | (0x1000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 9U)) 
                                                                       << 0x18U)))))))
                                                     : tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_ha7721890__0))
                                                : (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xfU))))) 
                                                       << 0x1aU) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x19U)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | (0xf80U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 7U)))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h5dbf9ec3__0
                                                : (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xfU))))) 
                                                       << 0x1aU) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x19U)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0xf8000U 
                                                                & ((IData)(
                                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0xf80U 
                                                                  & ((IData)(
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))))))
                                    : ((2U == (3U & (IData)(
                                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 3U))))
                                        ? ((1U & (IData)(
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x11U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0
                                                    : 
                                                   (0x12023U 
                                                    | ((0xc000000U 
                                                        & ((IData)(
                                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xfU)) 
                                                              << 0x19U)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | (0xe00U 
                                                                & ((IData)(
                                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xcU)) 
                                                                   << 9U)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xfU)))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 5U))))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xaU))))
                                                       ? 0x100073U
                                                       : 
                                                      (0xe7U 
                                                       | (0xf8000U 
                                                          & ((IData)(
                                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xaU)) 
                                                             << 0xfU))))
                                                      : 
                                                     (0x33U 
                                                      | ((0x1f00000U 
                                                          & ((IData)(
                                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0xf8000U 
                                                             & ((IData)(
                                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | (0xf80U 
                                                               & ((IData)(
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 7U))))))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 5U))))
                                                      ? 
                                                     (0x67U 
                                                      | (0xf8000U 
                                                         & ((IData)(
                                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xaU)) 
                                                            << 0xfU)))
                                                      : 
                                                     (0x33U 
                                                      | ((0x1f00000U 
                                                          & ((IData)(
                                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | (0xf80U 
                                                            & ((IData)(
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 7U))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x11U)))
                                                ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_he9b81d5c__0
                                                    : tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h6713170a__0)))
                                        : (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 3U))))))) 
              << 3U));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__25(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__25\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__clk_i)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                   >> 0x1bU) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__clk 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__clk_i) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__26(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__26\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                  >> 0x17U)))) {
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                             >> 3U))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                      >> 0x13U))))
                                 ? 1U : 2U)) : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
        = ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])
            ? 0U : (7U & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                           + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                          - ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                              ? 1U : 0U))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__27(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__27\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
        = (0x3fU & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                     ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)
                     : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt)
                         ? (((IData)(0x20U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)) 
                            - (IData)(1U)) : ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                                              - (0U 
                                                 != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                 >> 1U))) : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q);
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__28(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__28\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        if ((0x40000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    if ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                      >> 0xeU)))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                                : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                     >> 0xfU)))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (((- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                  >> 0x1dU)))) 
                                << 0x10U) | (0xffffU 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                >> 0xeU))));
                }
            } else if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                if ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : ((0xff000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                               << 0xaU)) 
                               | ((0xff0000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                >> 6U)) 
                                  | ((0xff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                  << 0xaU) 
                                                 | (0x300U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                       >> 0x16U)))) 
                                     | (0xffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                 >> 6U))))));
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                        ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? (0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                          >> 0xeU))
                            : (((- (IData)((0U != (0xffU 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                      >> 6U))))) 
                                << 0x18U) | ((0xff0000U 
                                              & ((- (IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                                  << 2U) 
                                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                    >> 0x1eU)))))) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0xffU 
                                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                    >> 0x16U))))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xffU 
                                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                                     >> 0xeU))))))))))
                        : ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (((- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                  >> 0x15U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                   >> 0xeU)))));
            }
        } else if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                if ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                 << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)) 
                               & (~ ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                      << 0x12U) | (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                   >> 0xeU))))
                            : (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                 << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)) 
                               | (~ ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                      << 0x12U) | (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                   >> 0xeU)))));
                } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                     >> 0xeU)))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                             << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                          >> 0xeU)) 
                           ^ (~ ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                  << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                               >> 0xeU))));
                }
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                        ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? VL_SHIFTR_III(32,32,32, VL_STREAML_FAST_III(32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0), 1U)
                            : VL_STREAML_FAST_III(32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0))
                        : ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                    ? ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                        ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result
                            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                        ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x40000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0x10U)))) {
                if ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                  >> 0xeU)))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0)));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                             >> 0x10U)))) {
            if ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = (1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0)));
                }
            }
        }
    } else if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result;
                }
            }
        } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                             >> 0xfU)))) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0xeU)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)((0x1ffffffffULL & (((1ULL 
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
                                                                         >> 0x11U)))))) 
                                                 >> 1U)));
            }
        }
    } else if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                ? ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                    ? (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                         << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                      >> 0xeU)) & (
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0xeU)))
                    : (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                         << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                      >> 0xeU)) | (
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0xeU))))
                : ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                    ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                    : (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                         << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                      >> 0xeU)) ^ (
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                      >> 0xeU)))));
    } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                         >> 0xfU)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                : (IData)((0x1ffffffffULL & (((1ULL 
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
                                             >> 1U))));
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__29(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__29\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
               >> 1U)) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                     >> 1U)) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 1U)) & (IData)(
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                       >> 0x1bU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                     >> 1U)) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 1U)) & (IData)(
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                       >> 0x1fU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                     >> 1U)) & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                    >> 1U)) & (IData)(
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                       >> 0x12U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__jalr_fw 
        = ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp))
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                << 0x1aU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                             >> 6U)) : ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp))
                                         ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id
                                        [0U] : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id
                                        [0U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target 
        = ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
            ? (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                 << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                             >> 0x12U)) + (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                           >> 0x15U)))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                  << 0xaU)) 
                                              | ((0x800U 
                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                     << 1U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                       >> 0xaU))))))
            : ((3U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
                ? (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                     << 0xeU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[1U] 
                                 >> 0x12U)) + (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                               >> 0x15U)))) 
                                                << 0xdU) 
                                               | ((0x1000U 
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
                                                                    >> 0x1dU)))))))))
                : ((2U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
                    ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__jalr_fw 
                       + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__jalr_fw 
                       + vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__30(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__30\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                  >> 3U) | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_ready) 
                            & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                   >> 7U)) & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_waiting))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0 
        = ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_valid)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_ready));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__31(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__31\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_ex 
        = ((0x400000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])
            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result
            : ((0x2000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                ? (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)
                : ((0x200U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
                    ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                        ? (- vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                        : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                    : ((0x40U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U])
                        ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int
                        : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__33(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__33\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0)))) {
                        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)))) {
                                        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                            } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q) 
          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid)) 
         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__34(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__34\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__if_ready 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                  >> 4U) | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready) 
                            & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                  >> 8U)))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__36(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__36\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((0x800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U])) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                      >> 3U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
            }
        } else if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = (3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = (3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = (3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = (3U != (3U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
        }
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___act_comb__TOP__37(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___act_comb__TOP__37\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__if_ready))) {
        if ((1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (3U == 
                                             (3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)))))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h9292a97e__0 = 0U;
            if ((2U >= (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (3U & ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | (7U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h9292a97e__0) 
                                << (3U & ((IData)(2U) 
                                          - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))));
            }
        }
    }
}

void Vtb_mxdotp_core___024root___act_sequent__TOP__2(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__5(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__2(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__3(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__16(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__23(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__32(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__35(Vtb_mxdotp_core___024root* vlSelf);

void Vtb_mxdotp_core___024root___eval_act(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_act\n"); );
    // Body
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x10100000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((0x1001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x21ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x81ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x9001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x401ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x4001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x10180000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x4800000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x30000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x10200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__11(vlSelf);
    }
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__12(vlSelf);
    }
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x3000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x200100ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x10000021ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x61ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x4002081ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x9003ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x44001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x10104001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x10184001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x10790309ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x10790329ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x50790309ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x10790369ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x3001001ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x3000800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x4802081ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x9083ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x13790b09ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x14f92389ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x494c3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x1079938bULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x17f92b89ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x14f923e9ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x107993cbULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__37(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__0(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) & (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) | (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__4(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down 
        = (((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))) 
            && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                      >> ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))))
            ? ((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U)))) 
               && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                         >> ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U))))))
            : (IData)(vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0)
            ? ((0x68U >= ((IData)(3U) + (0x7fU & ((IData)(0x23U) 
                                                  * 
                                                  ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                ? (((0U == (0x1fU & ((IData)(3U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                     ? 0U : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (((IData)(0x22U) + (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    ((IData)(2U) 
                                                     - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(3U) 
                                                + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))) 
                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (((IData)(3U) + (0x7fU & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                       >> 5U)] >> (0x1fU & ((IData)(3U) 
                                            + (0x7fU 
                                               & ((IData)(0x23U) 
                                                  * 
                                                  ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))
                : 0U) : vlSelf->tb_mxdotp_core__DOT__instr_rdata);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q)) 
              | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd2f5c7e0__0) 
                 | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((3U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                             >> 0x10U))) ? (0xfffffffcU 
                                            & ((IData)(4U) 
                                               + (0xfffffffcU 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((3U != (3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr))
                ? (2U | (0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))));
        if ((3U == (3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
                = ((2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                    ? (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                    : 0U);
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
        = ((0x7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U]) 
           | (0xf8000000U & ((0x80000000U & (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                              << 0x1fU) 
                                             | ((0x80000000U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                                                    << 0x1dU)) 
                                                | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
                                                   << 0x1fU)))) 
                             | ((0x40000000U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                                << 0x1eU)) 
                                | ((0x20000000U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                                   << 0x1cU)) 
                                   | ((0x10000000U 
                                       & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                          << 0x1aU)) 
                                      | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
                                          | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                         << 0x1bU)))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0)))) {
                        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                                = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
        = ((0x3fc1fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]) 
           | (0x3ffffffU & (((0U == (3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q))
                              ? 0U : (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause)) 
                            << 0xdU)));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__6(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
        = ((0xfffcffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
           | (0xffff0000U & (((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                & (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt)) 
                               & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                     >> 0xaU))) << 0x11U) 
                             | (0xffff0000U & ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt)) 
                                                << 0x10U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                  << 6U))))));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__25(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__25\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx4 = ((0x40U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                              << 4U)) | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                          << 5U) | 
                                         (((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt)) 
                                           << 3U) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = Vtb_mxdotp_core__ConstPool__TABLE_h1780a55c_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = Vtb_mxdotp_core__ConstPool__TABLE_h0692e5a4_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vtb_mxdotp_core__ConstPool__TABLE_h77c91a6a_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vtb_mxdotp_core__ConstPool__TABLE_he4e42b2b_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vtb_mxdotp_core__ConstPool__TABLE_h5e4815b1_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vtb_mxdotp_core__ConstPool__TABLE_h3f38541e_0
        [__Vtableidx4];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid 
        = ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy 
        = (((0U != (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
            | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid)) 
           | ((0U < (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
              | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid) 
           & (2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    __Vtableidx5 = (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid) 
                     << 3U) | ((4U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                      >> 2U)) | (((IData)(vlSelf->tb_mxdotp_core__DOT__data_gnt) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
        = Vtb_mxdotp_core__ConstPool__TABLE_hbf0d27cb_0
        [__Vtableidx5];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push 
        = Vtb_mxdotp_core__ConstPool__TABLE_h78093d4f_0
        [__Vtableidx5];
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__33(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__33\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__req_q) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
        = (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__instr_rdata)) 
            << 3U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0U;
    if (((2U >= (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
         && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                   >> (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) {
        if ((3U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                          >> 0x10U)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * ((IData)(2U) 
                                          - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                               ? 0U : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * ((IData)(2U) 
                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * ((IData)(2U) 
                                             - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                    : 0U);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & ((0x68U >= ((IData)(2U) + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                         && (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                   (((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))));
        } else {
            if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                     ? 0U : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             (((IData)(1U) 
                                               + (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (3U & (((IData)(0x23U) 
                                              * ((IData)(2U) 
                                                 - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                          : 0U)) | (0U != ((0x68U >= 
                                            (0x7fU 
                                             & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                            ? (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
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
                                                        - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                                            : 0U)))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & (((0x68U >= ((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                          && (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(2U) + 
                                      (0x7fU & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))))) 
                         | ((0x68U >= ((IData)(2U) 
                                       + (0x7fU & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                            && (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (((IData)(2U) 
                                        + (0x7fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          ((IData)(2U) 
                                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))))));
        }
    } else if (((2U >= (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                          >> (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) {
        if ((3U != (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                          >> 0x10U)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * ((IData)(2U) 
                                          - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                               ? 0U : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * ((IData)(2U) 
                                           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * ((IData)(2U) 
                                             - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                    : 0U);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & ((0x68U >= ((IData)(2U) + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                         && (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                   (((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))));
        } else {
            if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                     ? 0U : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
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
                                      (3U & (((IData)(0x23U) 
                                              * ((IData)(2U) 
                                                 - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                          : 0U)) | (0U != (3U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & (((0x68U >= ((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                          && (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(2U) + 
                                      (0x7fU & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))) 
                         | (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                    >> 2U))));
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
            = (3U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
            = (1U & (IData)((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
                             >> 2U)));
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__38(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__38\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[0U] 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
            >> 0xbU) & ((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                        & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting)) 
                           & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception)) 
                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                      [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                     [0U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | ((0U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                      [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                     [1U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 1U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((1U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 1U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 2U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((2U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 2U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 3U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((3U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 3U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 4U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((4U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 4U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 5U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((5U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 5U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 6U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((6U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 6U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 7U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((7U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 7U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 8U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((8U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 8U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 9U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((9U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 9U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xaU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xaU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xaU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xbU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xbU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xbU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xcU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xcU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xcU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xdU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xdU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xdU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xeU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xeU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xeU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0xfU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0xfU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0xfU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x10U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x11U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x11U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x11U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x12U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x12U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x12U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x13U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x13U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x13U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x14U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x14U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x14U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x15U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x15U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x15U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x16U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x16U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x16U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x17U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x17U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x17U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x18U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x18U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x18U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x19U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x19U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x19U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1aU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1aU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1aU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1bU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1bU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1bU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1cU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1cU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1cU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1dU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1dU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1dU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1eU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1eU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1eU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [0U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [0U]) << 0x1fU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[1U] 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [1U]) | (((0x1fU == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr
                       [1U]) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we
                      [1U]) << 0x1fU));
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__39(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__39\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
           & (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready)) 
              | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q;
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((3U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | (0x3cU & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                           << 2U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((0x30U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | ((8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                         >> 1U)) | (4U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                          >> 8U))));
    }
}

VL_INLINE_OPT void Vtb_mxdotp_core___024root___nba_comb__TOP__40(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___nba_comb__TOP__40\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q;
    if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready) 
         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt)));
    }
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt) 
                     - (IData)(1U)));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q;
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt)));
    }
    if (vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt) 
                     - (IData)(1U)));
    }
}

void Vtb_mxdotp_core___024root___nba_sequent__TOP__0(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_sequent__TOP__1(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_sequent__TOP__2(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_sequent__TOP__3(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_sequent__TOP__4(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_comb__TOP__7(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_comb__TOP__19(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_comb__TOP__20(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_comb__TOP__22(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___nba_comb__TOP__36(Vtb_mxdotp_core___024root* vlSelf);

void Vtb_mxdotp_core___024root___eval_nba(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_nba\n"); );
    // Body
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20080000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x20008000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x20004000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20000040ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x28000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x20400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x20180000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x20000001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x20010000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x20000008ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x20040000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x20000800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x24000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x21000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x22000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x28000041ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x28000010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x28200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x28000100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((0x28000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((0x20000021ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x20001001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((0x20000081ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x20009001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x20000401ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x20004001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0x20010200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x20000009ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x24800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x23000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x28200100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x28000004ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x28030000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x28000021ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__33(vlSelf);
    }
    if ((0x30000021ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x24002081ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x28000081ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__36(vlSelf);
    }
    if ((0x20009003ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x28004001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((0x20084001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__39(vlSelf);
    }
    if ((0x28084001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___nba_comb__TOP__40(vlSelf);
    }
    if ((0x28044001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x28790309ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((0x28790329ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((0x68790309ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x23001001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x23000800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x28000005ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x28000061ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x28790369ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x24802081ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((0x28009083ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x2b790b09ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x2cf92389ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((0x2879938bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x280494c3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x2ff92b89ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((0x2cf923e9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0x287993cbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__37(vlSelf);
    }
}

void Vtb_mxdotp_core___024root___timing_resume(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___timing_resume\n"); );
    // Body
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc90f137b__0.resume("@(posedge tb_mxdotp_core.clk_i)");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_mxdotp_core___024root___timing_commit(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___timing_commit\n"); );
    // Body
    if ((! (0x10000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc90f137b__0.commit("@(posedge tb_mxdotp_core.clk_i)");
    }
}

void Vtb_mxdotp_core___024root___eval_triggers__act(Vtb_mxdotp_core___024root* vlSelf);

bool Vtb_mxdotp_core___024root___eval_phase__act(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<31> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mxdotp_core___024root___eval_triggers__act(vlSelf);
    Vtb_mxdotp_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_mxdotp_core___024root___timing_resume(vlSelf);
        Vtb_mxdotp_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mxdotp_core___024root___eval_phase__nba(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_mxdotp_core___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__nba(Vtb_mxdotp_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__act(Vtb_mxdotp_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mxdotp_core___024root___eval(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_mxdotp_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_mxdotp_core.sv", 30, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_mxdotp_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_mxdotp_core.sv", 30, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_mxdotp_core___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_mxdotp_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_mxdotp_core___024root___eval_debug_assertions(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
