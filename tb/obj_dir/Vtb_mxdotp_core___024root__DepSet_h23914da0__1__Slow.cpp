// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core__Syms.h"
#include "Vtb_mxdotp_core___024root.h"

extern const VlUnpacked<CData/*2:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h3733eb11_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h94534fc6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h03bd2042_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_hce00444f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_h32bd3245_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_mxdotp_core__ConstPool__TABLE_hed580991_0;

VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_comb__TOP__19(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___stl_comb__TOP__19\n"); );
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
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__req_q) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp 
        = (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__instr_rdata)) 
            << 3U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    vlSelf->tb_mxdotp_core__DOT__instr_gnt = ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.s_req) 
                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__rst_ni));
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
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
            if (vlSelf->tb_mxdotp_core__DOT__instr_gnt) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        if (((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__m_c_obi_instr_if.s_req) 
             & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__instr_gnt)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        }
    }
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_comb__TOP__39(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___stl_comb__TOP__39\n"); );
    // Init
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h425e2112__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h425e2112__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h438c4d66__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h438c4d66__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4388fe14__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4388fe14__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4276cb5f__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4276cb5f__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h439090bf__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h439090bf__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78fc91e1__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78fc91e1__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78f971a1__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78f971a1__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h43a70ed2__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h43a70ed2__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h42437cf3__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h42437cf3__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432eb24d__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432eb24d__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432b1de0__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432b1de0__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4395b2db__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4395b2db__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h748ca3be__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h748ca3be__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74a9600d__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74a9600d__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74820575__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74820575__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7521e32b__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7521e32b__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74bd6a28__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74bd6a28__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b600403__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b600403__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7be8547b__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7be8547b__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749036a5__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749036a5__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7befc574__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7befc574__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b10404f__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b10404f__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b14324f__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b14324f__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7481c221__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7481c221__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749d90d5__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749d90d5__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b799153__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b799153__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b54b003__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b54b003__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bebd560__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bebd560__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bf14f23__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bf14f23__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bcdc240__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bcdc240__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74c6da75__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74c6da75__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74eac233__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74eac233__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h65ea3011__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h65ea3011__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h68edffba__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h68edffba__0 = 0;
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4871c085__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4871c085__0 = 0;
    // Body
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events_raw 
        = (1U | ((0x8000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                             << 6U)) | ((0x4000U & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                          << 4U)) | 
                                        ((0x2000U & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                           << 2U)) 
                                         | ((0x1000U 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]) 
                                            | ((0x800U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                   >> 2U)) 
                                               | ((0x400U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                      >> 4U)) 
                                                  | ((0x200U 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                         >> 6U)) 
                                                     | ((0x100U 
                                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                            >> 8U)) 
                                                        | ((0x80U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                               >> 0xaU)) 
                                                           | ((0x40U 
                                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                  >> 0xcU)) 
                                                              | ((0x20U 
                                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                     >> 0xeU)) 
                                                                 | ((0x10U 
                                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                        >> 0x10U)) 
                                                                    | ((8U 
                                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                           >> 0x12U)) 
                                                                       | ((4U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                              >> 0x14U)) 
                                                                          | (2U 
                                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                                >> 0x16U)))))))))))))))));
    if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__clk_i)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                   >> 0x1bU) | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit_valid 
        = (IData)((((0x30U == (0x30U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U])) 
                    & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))) 
                   & (0x40U != (0x44U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U]))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if 
        = (IData)((0x800000U == (0xf80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events 
        = ((0xffc0U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events)) 
           | (1U | ((0x20U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                              >> 0xeU)) | ((0x10U & 
                                            (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                             >> 0x10U)) 
                                           | ((8U & 
                                               (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                >> 0x12U)) 
                                              | ((4U 
                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                     >> 0x14U)) 
                                                 | (2U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                       >> 0x16U))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                  ? 0U : ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))))
                : ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                            : ((0x40U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x200U 
                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q
                                                         : 
                                                        ((0xfffffff0U 
                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                                                         | ((8U 
                                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                                >> 0x15U)) 
                                                            | (7U 
                                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 4U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q
                                                         : 0U)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                          ? ((0x100U 
                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(10,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x3ffU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (0x1fU 
                                                         & (VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                      | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (0x1fU 
                                                          & (VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x3ffU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                       | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                          (0x1fU 
                                                           & (VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                           ? 0U
                                                           : 
                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                            (0x1fU 
                                                             & (VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0x40001104U
                                                         : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                              : 0U)
                                          : 0U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                  >> 2U) & ((~ (IData)((0U != (0x22U 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])))) 
                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                               >> 0xdU))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__clk 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__clk_i) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_en_gated) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((2U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U])
                ? ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U])
                    ? ((~ ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                            << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                        >> 0x14U))) 
                       & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                           << 0x1aU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                        >> 6U))) : 
                   (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                      << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                  >> 0x14U)) | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                                                 << 0x1aU) 
                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                                   >> 6U))))
                : ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U])
                    ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                        << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                    >> 0x14U)) : ((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                   << 0xcU) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                                                     >> 0x14U))));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
        if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                      >> 1U)))) {
            if ((1U & (~ vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U]))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            }
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                << 0xcU) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                            >> 0x14U));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = (0x800000ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_n 
        = (0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = (0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = (0x1800U | (0x88U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = (3U | ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                 | ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int) 
                    | ((0x800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int) 
                       | ((0x1c0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                          | (4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = ((3U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n) 
           | ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if)
                 ? 0U : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 8U)) << 8U) | (0xfcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = ((0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n) 
           | (3U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if)
                     ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q
                     : (1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_we = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_we = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_we = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_we = 0U;
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0 
            = (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                     >> 4U));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_we 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we = 0U;
        if ((1U & (~ ((((((((0x17U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                       >> 0x14U)) | 
                            (0x300U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                        >> 0x14U))) 
                           | (0x310U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                         >> 0x14U))) 
                          | (0x304U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                        >> 0x14U))) 
                         | (0x305U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                       >> 0x14U))) 
                        | (0x307U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                      >> 0x14U))) | 
                       (0x340U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                   >> 0x14U))) | (0x341U 
                                                  == 
                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                   >> 0x14U)))))) {
            if ((1U & (~ ((((((((0x342U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                            >> 0x14U)) 
                                | (0x345U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                              >> 0x14U))) 
                               | (0x346U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                             >> 0x14U))) 
                              | (0x347U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                            >> 0x14U))) 
                             | (0x348U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                           >> 0x14U))) 
                            | (0x349U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U))) 
                           | (0x7b0U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                         >> 0x14U))) 
                          | (0x7b1U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                        >> 0x14U)))))) {
                if ((0x7b2U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) {
                    if ((0x7b3U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                    >> 0x14U))) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_we = 1U;
                    }
                }
                if ((0x7b2U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_we = 1U;
                }
            }
            if (((((((((0x342U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                   >> 0x14U)) | (0x345U 
                                                 == 
                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                  >> 0x14U))) 
                      | (0x346U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                    >> 0x14U))) | (0x347U 
                                                   == 
                                                   (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                    >> 0x14U))) 
                    | (0x348U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                  >> 0x14U))) | (0x349U 
                                                 == 
                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                  >> 0x14U))) 
                  | (0x7b0U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) | (0x7b1U 
                                               == (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                   >> 0x14U)))) {
                if ((0x342U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) {
                    if ((0x345U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                    >> 0x14U))) {
                        if ((0x346U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                        >> 0x14U))) {
                            if ((0x347U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                            >> 0x14U))) {
                                if ((0x348U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                >> 0x14U))) {
                                    if ((0x349U != 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U))) {
                                        if ((0x7b0U 
                                             != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                 >> 0x14U))) {
                                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we = 1U;
                                        }
                                        if ((0x7b0U 
                                             == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                 >> 0x14U))) {
                                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x342U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we = 1U;
                }
            }
        }
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we = 0U;
        if (((((((((0x17U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                              >> 0x14U)) | (0x300U 
                                            == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                >> 0x14U))) 
                  | (0x310U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) | (0x304U 
                                               == (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                   >> 0x14U))) 
                | (0x305U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                              >> 0x14U))) | (0x307U 
                                             == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                 >> 0x14U))) 
              | (0x340U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                            >> 0x14U))) | (0x341U == 
                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                            >> 0x14U)))) {
            if ((0x17U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                           >> 0x14U))) {
                if ((0x300U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) {
                    if ((0x310U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                    >> 0x14U))) {
                        if ((0x304U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                        >> 0x14U))) {
                            if ((0x305U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                            >> 0x14U))) {
                                if ((0x307U != (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                >> 0x14U))) {
                                    if ((0x340U == 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U))) {
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_we = 1U;
                                    }
                                    if ((0x340U != 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U))) {
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we = 1U;
                                    }
                                }
                            }
                            if ((0x305U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                            >> 0x14U))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_we = 1U;
                            }
                        }
                        if ((0x304U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                        >> 0x14U))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_we = 1U;
                        }
                    }
                }
                if ((0x300U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                >> 0x14U))) {
                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we = 1U;
                }
            }
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0 = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_we 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we = 0U;
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we = 0U;
    }
    if ((0x2000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])) {
        if ((1U & (~ vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U]))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                    << 5U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                              >> 0x1bU));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                    << 5U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                              >> 0x1bU));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (0x80U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                               << 4U)));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x1800U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we = 1U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we = 1U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we = 1U;
        }
        if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U])) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                    << 5U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                              >> 0x1bU));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                         | ((0x8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                            | ((0x800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                               | ((0x1c0U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                             << 5U)) 
                                  | (4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q))))));
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we = 1U;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we = 1U;
        }
    } else if ((0x4000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n) 
               | (8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                        >> 4U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x80U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x1800U | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                       >> 0x14U)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = (0xdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((0x323U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                          >> 0x14U)) | ((0x324U == 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                          >> 0x14U)) 
                                        | ((0x325U 
                                            == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                >> 0x14U)) 
                                           | ((0x326U 
                                               == (
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                   >> 0x14U)) 
                                              | ((0x327U 
                                                  == 
                                                  (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                   >> 0x14U)) 
                                                 | ((0x328U 
                                                     == 
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                      >> 0x14U)) 
                                                    | ((0x329U 
                                                        == 
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                         >> 0x14U)) 
                                                       | ((0x32aU 
                                                           == 
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                            >> 0x14U)) 
                                                          | ((0x32bU 
                                                              == 
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                               >> 0x14U)) 
                                                             | ((0x32cU 
                                                                 == 
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                  >> 0x14U)) 
                                                                | ((0x32dU 
                                                                    == 
                                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                     >> 0x14U)) 
                                                                   | ((0x32eU 
                                                                       == 
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                        >> 0x14U)) 
                                                                      | ((0x32fU 
                                                                          == 
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                           >> 0x14U)) 
                                                                         | ((0x330U 
                                                                             == 
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                              >> 0x14U)) 
                                                                            | ((0x331U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                               | ((0x332U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x333U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x334U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x335U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x336U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x337U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x338U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x339U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x33aU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x33bU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x33cU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x33dU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x33eU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)) 
                                                                                | (0x33fU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))))))))))))))))))))))))))))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h425e2112__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1fU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h438c4d66__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1eU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4388fe14__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1dU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4276cb5f__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1cU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h439090bf__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1bU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78fc91e1__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1aU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78f971a1__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb19U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h43a70ed2__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb18U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h42437cf3__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb17U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432eb24d__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb16U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432b1de0__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb15U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4395b2db__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb14U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h748ca3be__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb13U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74a9600d__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb12U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74820575__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb11U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7521e32b__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb10U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74bd6a28__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0fU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b600403__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0eU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7be8547b__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0dU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749036a5__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0cU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7befc574__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0bU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b10404f__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0aU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b14324f__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb09U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7481c221__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb08U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749d90d5__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb07U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b799153__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb06U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b54b003__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb05U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bebd560__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb04U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74c6da75__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb01U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bf14f23__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb03U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bcdc240__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb02U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74eac233__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb00U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                         >> 0x14U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                            >> 0x14U)), 5U)), vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h65ea3011__0 
        = ((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bf14f23__0)) 
           & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb83U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                            >> 0x14U))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h68edffba__0 
        = ((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bcdc240__0)) 
           & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb82U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                            >> 0x14U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h425e2112__0) 
            << 0x1fU) | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h438c4d66__0) 
                          << 0x1eU) | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4388fe14__0) 
                                        << 0x1dU) | 
                                       (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4276cb5f__0) 
                                         << 0x1cU) 
                                        | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h439090bf__0) 
                                            << 0x1bU) 
                                           | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78fc91e1__0) 
                                               << 0x1aU) 
                                              | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78f971a1__0) 
                                                  << 0x19U) 
                                                 | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h43a70ed2__0) 
                                                     << 0x18U) 
                                                    | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h42437cf3__0) 
                                                        << 0x17U) 
                                                       | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432eb24d__0) 
                                                           << 0x16U) 
                                                          | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432b1de0__0) 
                                                              << 0x15U) 
                                                             | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4395b2db__0) 
                                                                 << 0x14U) 
                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h748ca3be__0) 
                                                                    << 0x13U) 
                                                                   | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74a9600d__0) 
                                                                       << 0x12U) 
                                                                      | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74820575__0) 
                                                                          << 0x11U) 
                                                                         | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7521e32b__0) 
                                                                             << 0x10U) 
                                                                            | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74bd6a28__0) 
                                                                                << 0xfU) 
                                                                               | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b600403__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7be8547b__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749036a5__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7befc574__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b10404f__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b14324f__0) 
                                                                                << 9U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7481c221__0) 
                                                                                << 8U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749d90d5__0) 
                                                                                << 7U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b799153__0) 
                                                                                << 6U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b54b003__0) 
                                                                                << 5U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bebd560__0) 
                                                                                << 4U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bf14f23__0) 
                                                                                << 3U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bcdc240__0) 
                                                                                << 2U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74c6da75__0) 
                                                                                << 1U) 
                                                                                | (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74eac233__0))))))))))))))))))))))))))))))));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4871c085__0 
        = ((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74eac233__0)) 
           & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb80U == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                            >> 0x14U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bf14f23__0)) 
             & ((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h65ea3011__0)) 
                & ((~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                       >> 3U)) & (0U != ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                         & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))))) 
            << 3U) | ((4U & (((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bcdc240__0)) 
                              << 2U) & (((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h68edffba__0)) 
                                         << 2U) & (
                                                   ((~ 
                                                     (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                      >> 2U)) 
                                                    << 2U) 
                                                   & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                                      << 1U))))) 
                      | (1U & ((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74eac233__0)) 
                               & (~ ((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4871c085__0) 
                                     | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h425e2112__0)) 
             & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                & (0xb9fU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                              >> 0x14U)))) << 0x1fU) 
           | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h438c4d66__0)) 
                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & (0xb9eU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                 >> 0x14U)))) << 0x1eU) 
              | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4388fe14__0)) 
                   & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                      & (0xb9dU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                    >> 0x14U)))) << 0x1dU) 
                 | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4276cb5f__0)) 
                      & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                         & (0xb9cU == (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                       >> 0x14U)))) 
                     << 0x1cU) | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h439090bf__0)) 
                                    & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & (0xb9bU == 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                           >> 0x14U)))) 
                                   << 0x1bU) | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78fc91e1__0)) 
                                                  & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & (0xb9aU 
                                                        == 
                                                        (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                         >> 0x14U)))) 
                                                 << 0x1aU) 
                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h78f971a1__0)) 
                                                     & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                        & (0xb99U 
                                                           == 
                                                           (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                            >> 0x14U)))) 
                                                    << 0x19U) 
                                                   | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h43a70ed2__0)) 
                                                        & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & (0xb98U 
                                                              == 
                                                              (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                               >> 0x14U)))) 
                                                       << 0x18U) 
                                                      | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h42437cf3__0)) 
                                                           & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                              & (0xb97U 
                                                                 == 
                                                                 (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                  >> 0x14U)))) 
                                                          << 0x17U) 
                                                         | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432eb24d__0)) 
                                                              & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                 & (0xb96U 
                                                                    == 
                                                                    (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                     >> 0x14U)))) 
                                                             << 0x16U) 
                                                            | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h432b1de0__0)) 
                                                                 & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                    & (0xb95U 
                                                                       == 
                                                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                        >> 0x14U)))) 
                                                                << 0x15U) 
                                                               | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4395b2db__0)) 
                                                                    & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                       & (0xb94U 
                                                                          == 
                                                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                           >> 0x14U)))) 
                                                                   << 0x14U) 
                                                                  | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h748ca3be__0)) 
                                                                       & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                          & (0xb93U 
                                                                             == 
                                                                             (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                              >> 0x14U)))) 
                                                                      << 0x13U) 
                                                                     | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74a9600d__0)) 
                                                                          & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                             & (0xb92U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                         << 0x12U) 
                                                                        | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74820575__0)) 
                                                                             & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb91U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                            << 0x11U) 
                                                                           | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7521e32b__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb90U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                               << 0x10U) 
                                                                              | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74bd6a28__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8fU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 0xfU) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b600403__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8eU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 0xeU) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7be8547b__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8dU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 0xdU) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749036a5__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8cU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 0xcU) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7befc574__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8bU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 0xbU) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b10404f__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8aU 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 0xaU) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b14324f__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb89U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 9U) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7481c221__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb88U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 8U) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h749d90d5__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb87U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 7U) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b799153__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb86U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 6U) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7b54b003__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb85U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 5U) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7bebd560__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb84U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 4U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h65ea3011__0) 
                                                                                << 3U) 
                                                                                | (((IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h68edffba__0) 
                                                                                << 2U) 
                                                                                | ((((~ (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h74c6da75__0)) 
                                                                                & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb81U 
                                                                                == 
                                                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[4U] 
                                                                                >> 0x14U)))) 
                                                                                << 1U) 
                                                                                | (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h4871c085__0))))))))))))))))))))))))))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (2ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (3ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x20ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x30ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffff3fULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))) 
                   >> 0x20U));
    if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = (IData)((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = (IData)(((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                       >> 0x20U));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))) 
                   >> 0x20U));
    if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = (IData)((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = (IData)(((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                       >> 0x20U));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
        = (IData)((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
        = (IData)(((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))) 
                   >> 0x20U));
    if ((8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x40ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x80ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0xc0ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = (IData)((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = (IData)(((((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                       >> 0x20U));
    }
}
