// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core_if_xif__X3_XF0_XGz1.h"

VL_ATTR_COLD void Vtb_mxdotp_core_if_xif__X3_XF0_XGz1___ctor_var_reset(Vtb_mxdotp_core_if_xif__X3_XF0_XGz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_mxdotp_core_if_xif__X3_XF0_XGz1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__compressed_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__compressed_resp = VL_RAND_RESET_Q(33);
    vlSelf->issue_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(144, vlSelf->issue_req);
    vlSelf->issue_resp = VL_RAND_RESET_I(7);
    vlSelf->commit_valid = VL_RAND_RESET_I(1);
    vlSelf->commit = VL_RAND_RESET_I(5);
    vlSelf->result_valid = VL_RAND_RESET_I(1);
    vlSelf->result_ready = VL_RAND_RESET_I(1);
    vlSelf->result = VL_RAND_RESET_Q(58);
}
