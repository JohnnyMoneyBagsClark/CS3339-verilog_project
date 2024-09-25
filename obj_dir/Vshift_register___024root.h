// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_register.h for the primary calling header

#ifndef VERILATED_VSHIFT_REGISTER___024ROOT_H_
#define VERILATED_VSHIFT_REGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vshift_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshift_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_in,3,0);
    VL_OUT8(data_out,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshift_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshift_register___024root(Vshift_register__Syms* symsp, const char* v__name);
    ~Vshift_register___024root();
    VL_UNCOPYABLE(Vshift_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
