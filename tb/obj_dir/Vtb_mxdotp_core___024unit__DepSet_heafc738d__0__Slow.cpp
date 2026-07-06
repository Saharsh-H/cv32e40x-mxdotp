// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mxdotp_core.h for the primary calling header

#include "Vtb_mxdotp_core__pch.h"
#include "Vtb_mxdotp_core___024unit.h"

VL_ATTR_COLD void Vtb_mxdotp_core___024unit___ctor_var_reset(Vtb_mxdotp_core___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mxdotp_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_mxdotp_core___024unit___ctor_var_reset\n"); );
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name0[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name0[0] = std::string{"SB_WAIT_ISSUE"};
    vlSelf->__Venumtab_enum_name0[1] = std::string{"SB_WAIT_COMMIT"};
    vlSelf->__Venumtab_enum_name0[2] = std::string{"SB_WAIT_RESULT"};
    vlSelf->__Venumtab_enum_name0[3] = std::string{"SB_WAIT_WB"};
    vlSelf->__Venumtab_enum_name0[4] = std::string{"SB_DONE"};
    vlSelf->__Venumtab_enum_name0[5] = std::string{"SB_FAIL"};
}
