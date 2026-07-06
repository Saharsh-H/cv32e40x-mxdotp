// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core___024root.h"

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_static(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_final(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__stl(Vtb_mxdotp_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_mxdotp_core___024root___eval_phase__stl(Vtb_mxdotp_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_settle(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_mxdotp_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_mxdotp_core.sv", 30, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_mxdotp_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__stl(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.wb_ready)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.wb_valid)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_trans_ready or [hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.jump_taken_id or [hybrid] tb_mxdotp_core.dut.core_i.if_valid or [hybrid] tb_mxdotp_core.dut.core_i.id_ready or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.pending_single_step)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.wb_ready or [hybrid] tb_mxdotp_core.dut.core_i.if_valid or [hybrid] tb_mxdotp_core.dut.core_i.id_ready or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.__VdfgTmp_hadb0828f__0 or [hybrid] tb_mxdotp_core.dut.core_i.ex_valid or [hybrid] tb_mxdotp_core.dut.core_i.wb_valid or [hybrid] tb_mxdotp_core.dut.core_i.wb_stage_i.instr_valid)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] tb_mxdotp_core.dut.core_i.wb_ready)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] tb_mxdotp_core.dut.core_i.wb_ready or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.count_up or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.count_up)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status or [hybrid] tb_mxdotp_core.dut.core_i.wb_stage_i.instr_valid)\n");
    }
    if ((0x80000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status)\n");
    }
    if ((0x100000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.__Vcellout__mpu_i__bus_trans_o)\n");
    }
    if ((0x200000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((0x400000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x800000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] tb_mxdotp_core.dut.xif.commit)\n");
    }
    if ((0x1000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x2000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x4000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x8000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_h5333ba11__0 or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_h482ed622__0 or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_hc018508c__0)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_sequent__TOP__0(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__0(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__1(Vtb_mxdotp_core___024root* vlSelf);
VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_comb__TOP__2(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__3(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__4(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__5(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__6(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__0(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__7(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__8(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__9(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__10(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__11(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__12(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__13(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__14(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__15(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_sequent__TOP__16(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__1(Vtb_mxdotp_core___024root* vlSelf);
VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_comb__TOP__19(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__3(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__4(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__5(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__6(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__7(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__8(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__9(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__10(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__11(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__12(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__13(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__14(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__15(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__17(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__18(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__19(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__20(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__21(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__22(Vtb_mxdotp_core___024root* vlSelf);
VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_comb__TOP__39(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__24(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__26(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__27(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__28(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__29(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__30(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__31(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__32(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__33(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__34(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__35(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__36(Vtb_mxdotp_core___024root* vlSelf);
void Vtb_mxdotp_core___024root___act_comb__TOP__37(Vtb_mxdotp_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_stl(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x10001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x1001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___stl_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x81ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x8001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x800001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x100001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x200001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x8000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x20001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x80001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x2000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x4000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x400001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((0x2003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x43ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___stl_comb__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x103ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x12003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x803ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x83ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x8003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x300001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x9000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x60001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x20401ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x13ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0xbULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x6000001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x400201ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0xc3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x8004103ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x12007ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x88003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x208003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x308003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0xf20613ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___stl_comb__TOP__39(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xf20653ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0xf206d3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x6002003ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x6001001ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x9004103ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x12107ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x6f21613ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x9f24713ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x92987ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0xf32717ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0xff25713ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((0x9f247d3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__36(vlSelf);
    }
    if ((0xf32797ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mxdotp_core___024root___act_comb__TOP__37(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_triggers__stl(Vtb_mxdotp_core___024root* vlSelf);

VL_ATTR_COLD bool Vtb_mxdotp_core___024root___eval_phase__stl(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_mxdotp_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_mxdotp_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__act(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.wb_ready)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.wb_valid)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_trans_ready or [hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.jump_taken_id or [hybrid] tb_mxdotp_core.dut.core_i.if_valid or [hybrid] tb_mxdotp_core.dut.core_i.id_ready or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.pending_single_step)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.wb_ready or [hybrid] tb_mxdotp_core.dut.core_i.if_valid or [hybrid] tb_mxdotp_core.dut.core_i.id_ready or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.__VdfgTmp_hadb0828f__0 or [hybrid] tb_mxdotp_core.dut.core_i.ex_valid or [hybrid] tb_mxdotp_core.dut.core_i.wb_valid or [hybrid] tb_mxdotp_core.dut.core_i.wb_stage_i.instr_valid)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] tb_mxdotp_core.dut.core_i.wb_ready)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] tb_mxdotp_core.dut.core_i.wb_ready or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.count_up or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.count_up)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status or [hybrid] tb_mxdotp_core.dut.core_i.wb_stage_i.instr_valid)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.__Vcellout__mpu_i__bus_trans_o)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] tb_mxdotp_core.dut.xif.commit)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_h5333ba11__0 or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_h482ed622__0 or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_hc018508c__0)\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(posedge tb_mxdotp_core.clk_i or negedge tb_mxdotp_core.rst_ni)\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(posedge tb_mxdotp_core.clk_i)\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(posedge tb_mxdotp_core.dut.core_i.clk or negedge tb_mxdotp_core.rst_ni)\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__nba(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.wb_ready)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_fsm or [hybrid] tb_mxdotp_core.dut.core_i.wb_valid)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_trans_ready or [hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_mxdotp_core.dut.core_i.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.jump_taken_id or [hybrid] tb_mxdotp_core.dut.core_i.if_valid or [hybrid] tb_mxdotp_core.dut.core_i.id_ready or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.pending_single_step)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.wb_ready or [hybrid] tb_mxdotp_core.dut.core_i.if_valid or [hybrid] tb_mxdotp_core.dut.core_i.id_ready or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.__VdfgTmp_hadb0828f__0 or [hybrid] tb_mxdotp_core.dut.core_i.ex_valid or [hybrid] tb_mxdotp_core.dut.core_i.wb_valid or [hybrid] tb_mxdotp_core.dut.core_i.wb_stage_i.instr_valid)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ctrl_byp or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] tb_mxdotp_core.dut.core_i.wb_ready)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] tb_mxdotp_core.dut.core_i.wb_ready or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_en or [hybrid] tb_mxdotp_core.dut.core_i.id_stage_i.sys_mret_insn or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.count_up or [hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.count_up)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.resp_valid)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status or [hybrid] tb_mxdotp_core.dut.core_i.wb_stage_i.instr_valid)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.mpu_i.mpu_status)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.__Vcellout__mpu_i__bus_trans_o)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] tb_mxdotp_core.dut.core_i.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] tb_mxdotp_core.dut.xif.commit)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.rf_rd_wb_match)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] tb_mxdotp_core.dut.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_h5333ba11__0 or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_h482ed622__0 or [hybrid] tb_mxdotp_core.dut.core_i.controller_i.bypass_i.__VdfgTmp_hc018508c__0)\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(posedge tb_mxdotp_core.clk_i or negedge tb_mxdotp_core.rst_ni)\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(posedge tb_mxdotp_core.clk_i)\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(posedge tb_mxdotp_core.dut.core_i.clk or negedge tb_mxdotp_core.rst_ni)\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mxdotp_core___024root___ctor_var_reset(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_mxdotp_core__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__instr_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__instr_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__data_gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__fencei_flush_req = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__fencei_flush_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__sb_state = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__expected_id = VL_RAND_RESET_I(4);
    vlSelf->tb_mxdotp_core__DOT__pass_count = 0;
    vlSelf->tb_mxdotp_core__DOT__fail_count = 0;
    vlSelf->tb_mxdotp_core__DOT__sb_fail_this_cycle = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_busy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(311, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe);
    VL_RAND_RESET_W(204, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe);
    VL_RAND_RESET_W(119, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(122, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_ex = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_split_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__lsu_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_mtvec_init_if = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__xif_csr_error_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl = VL_RAND_RESET_I(5);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_instr = VL_RAND_RESET_Q(35);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_Q(35);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_inst_resp = VL_RAND_RESET_Q(35);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__xif_id = VL_RAND_RESET_I(4);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o = VL_RAND_RESET_Q(38);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n = VL_RAND_RESET_Q(35);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h915de7d2__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h9292a97e__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h760e7aca__0 = VL_RAND_RESET_Q(35);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = VL_RAND_RESET_Q(38);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_en_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_jmp = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__lsu_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__csr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__jalr_fw = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__op_c_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__bch_jmp_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_a = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_waiting = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__xif_insn_reject = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = VL_RAND_RESET_Q(53);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = VL_RAND_RESET_Q(53);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec = VL_RAND_RESET_Q(53);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul_en_gated = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_data_rev = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_result = VL_RAND_RESET_I(6);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__csr_is_illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_ha8492856__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = VL_RAND_RESET_I(6);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp = VL_RAND_RESET_Q(64);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    VL_RAND_RESET_W(192, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q = VL_RAND_RESET_I(6);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d = VL_RAND_RESET_I(6);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah = VL_RAND_RESET_I(17);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh = VL_RAND_RESET_I(17);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a = VL_RAND_RESET_I(17);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b = VL_RAND_RESET_I(17);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc = VL_RAND_RESET_Q(33);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = VL_RAND_RESET_Q(33);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res = VL_RAND_RESET_Q(33);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(77, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__align_trans);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__buffer_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_err = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_size_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_sext_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__last_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__split_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_halfword = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__done_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_ext = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(81, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h4f7da6f5__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q = VL_RAND_RESET_I(6);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next = VL_RAND_RESET_I(6);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mclicbase_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mclicbase_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VL_RAND_RESET_W(2048, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    VL_RAND_RESET_W(1024, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(2048, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_en_gated = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__illegal_csr_read = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events_raw = VL_RAND_RESET_I(16);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratchcsw_rd_error = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratchcswl_rd_error = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mclicbase_rd_error = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf91f4e7e__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h44007312__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = VL_RAND_RESET_I(5);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7cd04deb__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24798bc0__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24bab915__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd2f5c7e0__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match = VL_RAND_RESET_I(3);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0 = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_q = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_id = VL_RAND_RESET_I(4);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_format = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_operation = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__saved_rs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__mxdotp_i__DOT____Vlvbound_h6077ebe0__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(119, vlSelf->__Vdly__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe);
    VL_RAND_RESET_W(122, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__0 = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__xif__commit__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0__0 = 0;
    vlSelf->__VstlDidInit = 0;
    VL_RAND_RESET_W(122, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__1 = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__xif__commit__1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 35; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
