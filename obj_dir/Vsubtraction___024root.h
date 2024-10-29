// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsubtraction.h for the primary calling header

#ifndef VERILATED_VSUBTRACTION___024ROOT_H_
#define VERILATED_VSUBTRACTION___024ROOT_H_  // guard

#include "verilated.h"


class Vsubtraction__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsubtraction___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(carry_in,0,0);
    VL_OUT8(difference,3,0);
    VL_OUT8(carry_out,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsubtraction__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsubtraction___024root(Vsubtraction__Syms* symsp, const char* v__name);
    ~Vsubtraction___024root();
    VL_UNCOPYABLE(Vsubtraction___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
