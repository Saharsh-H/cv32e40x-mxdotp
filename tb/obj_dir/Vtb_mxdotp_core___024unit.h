// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mxdotp_core.h for the primary calling header

#ifndef VERILATED_VTB_MXDOTP_CORE___024UNIT_H_
#define VERILATED_VTB_MXDOTP_CORE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mxdotp_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mxdotp_core___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 8> __Venumtab_enum_name0;

    // INTERNAL VARIABLES
    Vtb_mxdotp_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mxdotp_core___024unit(Vtb_mxdotp_core__Syms* symsp, const char* v__name);
    ~Vtb_mxdotp_core___024unit();
    VL_UNCOPYABLE(Vtb_mxdotp_core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
