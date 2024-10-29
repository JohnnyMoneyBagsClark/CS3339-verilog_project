// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivision.h for the primary calling header

#ifndef VERILATED_VDIVISION___024ROOT_H_
#define VERILATED_VDIVISION___024ROOT_H_  // guard

#include "verilated.h"


class Vdivision__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdivision___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(numerator,3,0);
    VL_IN8(denominator,3,0);
    VL_OUT8(quotient,3,0);
    VL_OUT8(remainder,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdivision__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdivision___024root(Vdivision__Syms* symsp, const char* v__name);
    ~Vdivision___024root();
    VL_UNCOPYABLE(Vdivision___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
