// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core__Syms.h"
#include "Vtb_mxdotp_core___024root.h"

extern const VlWide<29>/*927:0*/ Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0;
extern const VlWide<56>/*1791:0*/ Vtb_mxdotp_core__ConstPool__CONST_hd3450429_0;

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_initial__TOP(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->tb_mxdotp_core__DOT__clk_i = 0U;
    vlSelf->tb_mxdotp_core__DOT__sb_state = 0U;
    vlSelf->tb_mxdotp_core__DOT__pass_count = 0U;
    vlSelf->tb_mxdotp_core__DOT__fail_count = 0U;
    vlSelf->tb_mxdotp_core__DOT__sb_fail_this_cycle = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x636f7265U;
    __Vtemp_1[2U] = 0x6f74705fU;
    __Vtemp_1[3U] = 0x5f6d7864U;
    __Vtemp_1[4U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[1U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[2U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[3U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[4U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[5U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[6U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[7U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[8U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[9U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0xaU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0xbU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0xcU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0xdU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0xeU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0xfU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x10U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x11U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x12U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x13U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x14U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x15U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x16U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x17U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x18U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x19U] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x1aU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x1bU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x1cU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x1dU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x1eU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0x1fU] = 0x13U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[0U] = 0x500093U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[1U] = 0x700113U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[2U] = 0x900193U;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[3U] = 0x1820828bU;
    vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom[4U] = 0x6fU;
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[0U] 
        = (0x7fU | vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[0U]);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0U] 
              << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[1U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[1U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[2U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[2U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[3U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[3U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[4U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[4U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[5U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[5U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[6U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[6U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[7U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[7U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[8U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[8U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[9U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[9U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xaU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xaU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xbU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xbU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xcU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xcU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xdU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xdU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xeU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xeU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xfU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0xfU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x10U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x10U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x11U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x11U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x12U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x12U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x13U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x13U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x14U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x14U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x15U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x15U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x16U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x16U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x17U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x17U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x18U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x18U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x19U] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x19U] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x1aU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x1aU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x1bU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU] 
        = ((Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x1bU] 
            >> 0x10U) | (Vtb_mxdotp_core__ConstPool__CONST_h9fecadc7_0[0x1cU] 
                         << 0x10U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x37U)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[(__Vilp 
                                                                                + (IData)(8U))] 
            = Vtb_mxdotp_core__ConstPool__CONST_hd3450429_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffff3ULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[2U] = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[3U] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x37U)) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_n[(__Vilp 
                                                                                + (IData)(8U))] 
            = Vtb_mxdotp_core__ConstPool__CONST_hd3450429_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mxdotp_core___024root___dump_triggers__stl(Vtb_mxdotp_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mxdotp_core___024root___eval_triggers__stl(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (0U != ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[0U]) 
                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[1U])) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[2U])) 
                                            | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                               ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[3U]))));
    vlSelf->__VstlTriggered.set(2U, ((0U != ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[0U]) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[1U])) 
                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[2U])) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[3U]))) 
                                     | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__0))));
    vlSelf->__VstlTriggered.set(3U, ((0U != ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[0U]) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[1U])) 
                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[2U])) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[3U]))) 
                                     | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid__0))));
    vlSelf->__VstlTriggered.set(4U, ((0U != ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[0U]) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[1U])) 
                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[2U])) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[3U]))) 
                                     | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0))));
    vlSelf->__VstlTriggered.set(5U, ((0U != ((((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[0U]) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[1U])) 
                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[2U])) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                                ^ vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[3U]))) 
                                     | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid__0))));
    vlSelf->__VstlTriggered.set(6U, (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready__0)) 
                                     | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid__0))));
    vlSelf->__VstlTriggered.set(7U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid__0)));
    vlSelf->__VstlTriggered.set(8U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__0)));
    vlSelf->__VstlTriggered.set(9U, ((((((((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__0)) 
                                            | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status) 
                                               != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0))) 
                                           | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                              != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0))) 
                                          | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__0))) 
                                         | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid__0))) 
                                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready__0))) 
                                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en__0))) 
                                      | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn__0))) 
                                     | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__0))));
    vlSelf->__VstlTriggered.set(0xaU, (((((((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                              != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__0)) 
                                             | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) 
                                                != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__0))) 
                                            | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid) 
                                               != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid__0))) 
                                           | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready) 
                                              != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready__0))) 
                                          | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0) 
                                             != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0__0))) 
                                         | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid__0))) 
                                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid__0))) 
                                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid__0))));
    vlSelf->__VstlTriggered.set(0xbU, ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__0)) 
                                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en__0))) 
                                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn__0))));
    vlSelf->__VstlTriggered.set(0xcU, (0U != ((((((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[0U]) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[1U])) 
                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                    ^ 
                                                    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[2U])) 
                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[3U])) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[4U])) 
                                              | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[5U]))));
    vlSelf->__VstlTriggered.set(0xdU, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__0)));
    vlSelf->__VstlTriggered.set(0xeU, (((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__0)) 
                                         | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en__0))) 
                                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn__0))) 
                                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0))));
    vlSelf->__VstlTriggered.set(0xfU, (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up__0)) 
                                       | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid__0))));
    vlSelf->__VstlTriggered.set(0x10U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up__0)));
    vlSelf->__VstlTriggered.set(0x11U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid__0)));
    vlSelf->__VstlTriggered.set(0x12U, (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0)) 
                                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid__0))));
    vlSelf->__VstlTriggered.set(0x13U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0)));
    vlSelf->__VstlTriggered.set(0x14U, (0U != (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                                 ^ 
                                                 vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0[0U]) 
                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                                   ^ 
                                                   vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0[1U])) 
                                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U] 
                                                  ^ 
                                                  vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0[2U]))));
    vlSelf->__VstlTriggered.set(0x15U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid__0)));
    vlSelf->__VstlTriggered.set(0x16U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0)));
    vlSelf->__VstlTriggered.set(0x17U, ((IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__xif__commit__0)));
    vlSelf->__VstlTriggered.set(0x18U, ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0)));
    vlSelf->__VstlTriggered.set(0x19U, ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                         != vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0) 
                                        | (0U != ((
                                                   (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U]) 
                                                     | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U])) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U])) 
                                                   | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U])) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U])))));
    vlSelf->__VstlTriggered.set(0x1aU, (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                        != vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0));
    vlSelf->__VstlTriggered.set(0x1bU, ((((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0__0)) 
                                         | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0) 
                                            != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0__0))) 
                                        | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0) 
                                           != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[1U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[2U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm__0[3U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_ready;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_ready;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_resp_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ready;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_en;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__sys_mret_insn;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hadb0828f__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[3U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[4U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[5U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__count_up;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o__0[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__bus_trans_valid;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__xif__commit__0 
        = vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.commit;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h5333ba11__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_h482ed622__0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0__0 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT____VdfgTmp_hc018508c__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
        vlSelf->__VstlTriggered.set(9U, 1U);
        vlSelf->__VstlTriggered.set(0xaU, 1U);
        vlSelf->__VstlTriggered.set(0xbU, 1U);
        vlSelf->__VstlTriggered.set(0xcU, 1U);
        vlSelf->__VstlTriggered.set(0xdU, 1U);
        vlSelf->__VstlTriggered.set(0xeU, 1U);
        vlSelf->__VstlTriggered.set(0xfU, 1U);
        vlSelf->__VstlTriggered.set(0x10U, 1U);
        vlSelf->__VstlTriggered.set(0x11U, 1U);
        vlSelf->__VstlTriggered.set(0x12U, 1U);
        vlSelf->__VstlTriggered.set(0x13U, 1U);
        vlSelf->__VstlTriggered.set(0x14U, 1U);
        vlSelf->__VstlTriggered.set(0x15U, 1U);
        vlSelf->__VstlTriggered.set(0x16U, 1U);
        vlSelf->__VstlTriggered.set(0x17U, 1U);
        vlSelf->__VstlTriggered.set(0x18U, 1U);
        vlSelf->__VstlTriggered.set(0x19U, 1U);
        vlSelf->__VstlTriggered.set(0x1aU, 1U);
        vlSelf->__VstlTriggered.set(0x1bU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mxdotp_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vtb_mxdotp_core__ConstPool__TABLE_h0a98d2e0_0;

VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_sequent__TOP__0(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h5717bcde__0;
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h5717bcde__0 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_mxdotp_core__DOT__fencei_flush_ack = vlSelf->tb_mxdotp_core__DOT__fencei_flush_req;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__fetch_enable_q));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__filter_err 
        = (((5U >= (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))) 
            && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                      >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))) 
           << 1U);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[0U] 
        = (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                    >> 5U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[1U] 
        = (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                    >> 0xaU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_raddr_id[2U] 
        = (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                    >> 0x11U));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_ready 
        = (IData)((0x2010U == (0x2010U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                         >> 7U))) | (2U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                  >> 7U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_count_down 
        = (((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))) 
            && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                      >> ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))))
            ? ((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U)))) 
               && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                         >> ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U))))))
            : (IData)(vlSelf->tb_mxdotp_core__DOT__u_data_mem__DOT__req_q));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_ha8492856__0 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                  >> 4U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[0U]));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U] 
        = ((0x3ffU & vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[3U]) 
           | ((IData)((((QData)((IData)(((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          << 0xaU) 
                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                            >> 0x16U)))) 
                        << 6U) | (QData)((IData)((0x30U 
                                                  | (0xfU 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[0U])))))) 
              << 0xaU));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.issue_req[4U] 
        = (0xffffU & (((IData)((((QData)((IData)(((
                                                   vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   << 0xaU) 
                                                  | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                     >> 0x16U)))) 
                                 << 6U) | (QData)((IData)(
                                                          (0x30U 
                                                           | (0xfU 
                                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[0U])))))) 
                       >> 0x16U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                                 << 0xaU) 
                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                                                                   >> 0x16U)))) 
                                               << 6U) 
                                              | (QData)((IData)(
                                                                (0x30U 
                                                                 | (0xfU 
                                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[0U]))))) 
                                             >> 0x20U)) 
                                    << 0xaU)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                              >> 0x15U)))) << 0xcU) 
           | (0xfffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                        >> 0xaU)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q)
            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q
            : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_size_q))
            ? 0U : ((1U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_size_q))
                     ? ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                         ? ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                             ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_sext_q)
                                 ? (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                    >> 0x18U) : (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x18U))
                             : 0U) : 0U) : ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                             ? ((1U 
                                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                 ? 
                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x10U))
                                             : ((1U 
                                                 & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                 ? 
                                                (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 8U)
                                                 : 0U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT____VdfgTmp_h8bea5fa0__0 
        = ((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U])
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                             >> 0xeU)) : (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                            << 0x12U) 
                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)) 
                                          + ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              << 0x12U) 
                                             | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                >> 0xeU))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd 
        = (VL_SHIFTL_III(32,32,32, ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                     << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                  >> 0xeU)), 
                         ((0x22U == (0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                              >> 0xeU)))
                           ? 1U : ((0x24U == (0x3fU 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                 >> 0xeU)))
                                    ? 2U : 3U))) + 
           ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
             << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                          >> 0xeU)));
    if ((0x27U != (0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                            >> 0xeU)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
            = VL_STREAML_FAST_III(32, ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                        << 0x12U) | 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                        >> 0xeU)), 0);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
            = VL_STREAML_FAST_III(32, ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                        << 0x12U) | 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                        >> 0xeU)), 0);
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                             >> 0xeU));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                             >> 0xeU));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0x10000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                         << 5U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                   << 0xaU))) | (0xffffU 
                                                 & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                     << 9U) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                       >> 0x17U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = (((IData)((0x440U == (0x440U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U]))) 
            << 0x10U) | (0xffffU & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                     << 9U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                               >> 0x17U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = ((0xffeU & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)) 
           | (IData)((0x2018U == (0x2018U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U]))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp 
        = ((0xff7U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_byp)) 
           | (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                >> 5U) & (0x1040000U == (0x1040000U 
                                         & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U]))) 
              << 3U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                   >> 5U))];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[1U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                   >> 0xaU))];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_rdata_id[2U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                   >> 0x11U))];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out 
        = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
             == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q) 
            | ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                > vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
               ^ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))) 
           & ((~ (IData)((0U != ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                  << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                               >> 7U))))) 
              | (0U != vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                  >> 0xfU) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                              >> 5U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
            >> 0xdU) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                        >> 0xbU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match 
        = (((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                      >> 6U)) == (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                           >> 5U))) 
           & (0U != (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                              >> 5U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf91f4e7e__0 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                  >> 6U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                            >> 5U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match 
        = (((0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[3U] 
                      >> 0xaU)) == (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                             >> 5U))) 
           & (0U != (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                              >> 5U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                         >> 7U))) | (3U == (3U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                                                  >> 7U))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h933b07bc__0 
        = ((2U >= (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
           && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
                  >> 9U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                            >> 5U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x9f5100000040ULL;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
        = (0x1fffffffffffbfULL & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    if ((0x33U == (0x7fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[2U] 
                            >> 0x16U)))) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
            = (0x1c00000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
            = (0x74000000000ULL | (0x1ff81fffffffffULL 
                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
        if (((((((((8U == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                      >> 0xcU)) | (7U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 2U)))) 
                   | (9U == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                        >> 0xcU)) | 
                             (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                    >> 2U))))) | (0xaU 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                       >> 0xcU)) 
                                                   | (7U 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                         >> 2U))))) 
                 | (0xbU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                        >> 0xcU)) | 
                             (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                    >> 2U))))) | (0xcU 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                       >> 0xcU)) 
                                                   | (7U 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                         >> 2U))))) 
               | (0xdU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                      >> 0xcU)) | (7U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                      >> 2U))))) 
              | (0xeU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                     >> 0xcU)) | (7U 
                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                     >> 2U))))) 
             | (0xfU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                    >> 0xcU)) | (7U 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                    >> 2U)))))) {
            if ((8U == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                   >> 0xcU)) | (7U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                                   >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x80000000ULL | (0x1fffff3fffffffULL 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((9U == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 0xcU)) 
                               | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                        >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0xf0000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
            } else if ((0xaU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                 | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0xd0000000ULL | (0x1fffff0fffffffULL 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xbU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                 | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0xc0000000ULL | (0x1fffff0fffffffULL 
                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xcU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                 | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0xa000000ULL | (0x1ffffff1ffffffULL 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x80000000000ULL | (0x1e07ffffffffffULL 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xdU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                 | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x8000000ULL | (0x1ffffff1ffffffULL 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x80000000000ULL | (0x1e07ffffffffffULL 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xeU == ((0x3f8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                            >> 0xcU)) 
                                 | (7U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_id_pipe[3U] 
                                          >> 2U))))) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0xe000000ULL | vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x80000000000ULL | (0x1e07ffffffffffULL 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0xc000000ULL | (0x1ffffff1ffffffULL 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x80000000000ULL | (0x1e07ffffffffffULL 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            }
        } else {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x9f5100000040ULL;
        }
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x9f5100000040ULL;
    }
    vlSelf->tb_mxdotp_core__DOT__instr_rdata = vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__rom
        [(0x1fU & (vlSelf->tb_mxdotp_core__DOT__u_instr_rom__DOT__addr_q 
                   >> 2U))];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
           - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_waddr[0U] 
        = (0x1fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                    >> 6U));
    vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result = 0ULL;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24798bc0__0 
        = (IData)((0x900U == (0x900U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                  >> 0x13U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                               >> 0xdU)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = VL_GTS_IQQ(33, (((QData)((IData)((0x22000U 
                                            == (0x22000U 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])))) 
                           << 0x20U) | (QData)((IData)(
                                                       ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                         << 0x12U) 
                                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                           >> 0xeU))))), 
                     (((QData)((IData)((1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                               >> 0xdU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                 >> 0x11U))))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                     << 0x12U) 
                                                    | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                                       >> 0xeU))))));
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
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (IData)((0x2c00U == (0x2c00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
             << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                          >> 0xeU)) == ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                         << 0x12U) 
                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                                           >> 0xeU)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb 
        = (IData)((0x2820U == (0x2820U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (IData)((0x2880U == (0x2880U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q 
           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_q);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = (1U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U] 
                  >> 0x12U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
                               >> 0xdU)));
    tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h5717bcde__0 
        = (1U & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                 & (~ (IData)((4U == (0x804U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed 
        = ((~ (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) 
                | (IData)(vlSelf->tb_mxdotp_core__DOT__fencei_flush_req)) 
               | (IData)((0x2010U == (0x2010U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U]))))) 
           & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid_q)) 
              & (0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24bab915__0 
        = (IData)((0xa00U == (0xa00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result = 0U;
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (2U & ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffeU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                         << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffdU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (2U & ((0xfffffffeU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffeU & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 1U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (4U & ((0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffcU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                         << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (4U & ((0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffcU & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                      << 1U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffbU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (4U & ((0xfffffffcU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffcU & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 2U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                         << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 1U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 2U) & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 3U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                         << 2U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 3U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 2U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 3U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 5U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 2U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                         << 3U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 5U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 6U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 2U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 3U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 5U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 6U) & 
                                         (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 7U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                          << 4U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 5U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 4U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 5U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 9U) & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 4U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                          << 5U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 9U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 0xaU) 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 4U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 5U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 9U) & 
                                          (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 0xaU) 
                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 0xbU) 
                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                           << 6U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 7U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 6U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 7U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xdU) 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 6U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                           << 7U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xdU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xeU) 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 6U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 7U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xdU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xeU) 
                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xfU) 
                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                            << 8U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 9U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 8U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 9U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x11U) 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 8U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                            << 9U)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x11U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x12U) 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 8U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 9U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x11U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x12U) 
                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x13U) 
                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                             << 0xaU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xbU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xaU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xbU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x15U) 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xaU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                             << 0xbU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x15U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x16U) 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xaU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xbU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x15U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x16U) 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x17U) 
                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                              << 0xcU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xdU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xcU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xdU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x19U) 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x1aU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xcU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                              << 0xdU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x19U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x1aU) 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x1bU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x1aU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xcU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xdU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x19U) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x1aU) 
                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x1bU) 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                               << 0xeU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xfU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1dU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xeU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xfU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    if ((0x80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                      >> 0x12U)))) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0x11U)))) {
                if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                              >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                             >> 0xeU));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                         >> 0x12U)))) {
        if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((0x10000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                              >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = (- (IData)((1U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                >> 0xdU))));
                    }
                }
            }
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1dU) 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1eU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1dU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xeU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                               << 0xfU)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1dU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1eU) 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1fU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1eU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1dU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xeU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xfU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xfU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xeU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1dU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1eU) 
                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1fU) 
                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
        = (0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                      >> 7U));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
        = (0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                      >> 7U));
    if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
        }
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))
                ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh
                : (0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                              >> 7U)));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah;
    } else {
        if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            if ((0x1000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])) {
                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh;
            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                = (0xffffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                              >> 7U));
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf91f4e7e__0)
            ? (0xfffU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                         >> 0xeU)) : 0U);
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
            >> 6U) & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h876130de__0 
        = ((2U >= (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
           && (1U & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (3U & ((IData)(2U) - (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en)
            ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                             >> 7U)) : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                         << 0x12U) 
                                        | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                           >> 0xeU)));
    if ((0x80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
        if ((0x40000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0x10U)))) {
                if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                              >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa = 1U;
                    }
                }
            }
        } else if ((0x20000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
            if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                          >> 0x10U)))) {
                if ((1U & (~ (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                              >> 0xfU)))) {
                    if ((0x4000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U])) {
                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa = 1U;
                    }
                }
            }
        }
    }
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
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb 
        = ((0x80000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[3U])
            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_ext
            : ((0x10U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])
                ? (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                           >> 0x16U)) : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[6U] 
                                          << 0x1aU) 
                                         | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[5U] 
                                            >> 6U))));
    if (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                             >> 0xeU));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                             >> 0xeU));
    } else {
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                             >> 0xeU));
        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                << 0x12U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[7U] 
                             >> 0xeU));
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_exception 
        = (((IData)((0x2010U == (0x2010U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U]))) 
            & (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid)) 
           & (IData)((vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result 
                      >> 6U)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__xif_waiting 
        = (IData)(((0x2010U == (0x2010U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U])) 
                   & (~ (IData)(vlSymsp->TOP__tb_mxdotp_core__DOT__dut__DOT__xif.result_valid))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
           | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__irq_id_ctrl 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x800U 
                                                               & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xbU
                                                               : 
                                                              ((8U 
                                                                & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 3U
                                                                : 7U))))))))))))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
           & (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h5717bcde__0));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt 
        = (((0U != vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__int_controller_i__DOT__irq_local_qual) 
            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
               >> 3U)) & (IData)(tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h5717bcde__0));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_h24bab915__0) 
           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
              >> 0xdU));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result 
        = (0x3ffffffffULL & (VL_MULS_QQQ(34, (0x3ffffffffULL 
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
                                                               >> 7U)))))) 
                             + VL_EXTENDS_QQ(34,33, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 0U;
    if ((0x800U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                                } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                                } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                                } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                                } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                        } else if ((8U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                        } else if ((4U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                        } else if ((2U & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__csr_raddr)))) {
                            vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__csr_counter_read = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgTmp_hefdaf2df__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
           & ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U] 
               >> 6U) ^ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
        = ((0x80U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[6U])
            ? ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                ? (1U | ((IData)((0xffffffffULL & (
                                                   VL_SHIFTL_QQI(33,33,32, 
                                                                 (~ (QData)((IData)(
                                                                                ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                                                >> 7U))))), 1U) 
                                                   >> 1U))) 
                         << 1U)) : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                                     << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                                                  >> 7U)))
            : ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[5U] 
                << 0x19U) | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[4U] 
                             >> 7U)));
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
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata[0U] 
        = vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__rf_wdata_wb;
    __Vtableidx2 = ((0x200U & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
                               << 9U)) | ((0x100U & 
                                           ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0)) 
                                            << 8U)) 
                                          | (((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h37a39c5f__0) 
                                              << 7U) 
                                             | ((0x7eU 
                                                 & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                    >> 0xdU)) 
                                                | (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result 
        = Vtb_mxdotp_core__ConstPool__TABLE_h0a98d2e0_0
        [__Vtableidx2];
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h20def8f8__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h37e37f35__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt) 
           & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd2f5c7e0__0 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                 >> 0xfU)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
            << 0x1fU) | ((0x40000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_en)
            ? vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__div_clz_data_rev
            : ((0x28U == (0x3fU & (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                   >> 0xeU))) ? ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                                  << 0x12U) 
                                                 | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                                    >> 0xeU))
                : VL_STREAML_FAST_III(32, ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U] 
                                            << 0x12U) 
                                           | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[8U] 
                                              >> 0xeU)), 0)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = ((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
           & (((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[1U] 
                >> 5U) & (0x600000U == (0x600000U & 
                                        vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__id_ex_pipe[9U]))) 
              & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result)));
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug 
        = ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | (((~ (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
               & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q)) 
              | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgTmp_hd2f5c7e0__0) 
                 | ((IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                    & (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
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

VL_ATTR_COLD void Vtb_mxdotp_core___024root___stl_comb__TOP__2(Vtb_mxdotp_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mxdotp_core___024root___stl_comb__TOP__2\n"); );
    // Body
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
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__wb_stage_i__DOT__instr_valid 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ex_wb_pipe[1U] 
            >> 0xdU) & (0U == (0x22U & vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[0U])));
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
    vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_trans_valid 
        = ((vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
            >> 0x18U) & ((2U > (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                         & ((0U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0) 
                            | (((1U == vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgTmp_h750a0b4b__0) 
                                & (0U == (IData)(vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
                               | (vlSelf->tb_mxdotp_core__DOT__dut__DOT__core_i__DOT__ctrl_fsm[3U] 
                                  >> 0x17U)))));
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
