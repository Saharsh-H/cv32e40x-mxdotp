// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mxdotp_core.h for the primary calling header

#ifndef VERILATED_VTB_MXDOTP_CORE_IF_C_OBI_H_
#define VERILATED_VTB_MXDOTP_CORE_IF_C_OBI_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mxdotp_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mxdotp_core_if_c_obi final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ s_req;
    QData/*37:0*/ req_payload;

    // INTERNAL VARIABLES
    Vtb_mxdotp_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mxdotp_core_if_c_obi(Vtb_mxdotp_core__Syms* symsp, const char* v__name);
    ~Vtb_mxdotp_core_if_c_obi();
    VL_UNCOPYABLE(Vtb_mxdotp_core_if_c_obi);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_mxdotp_core_if_c_obi* obj);

#endif  // guard
