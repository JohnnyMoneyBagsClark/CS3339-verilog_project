// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshifter.h for the primary calling header

#ifndef VERILATED_VSHIFTER___024ROOT_H_
#define VERILATED_VSHIFTER___024ROOT_H_  // guard

#include "verilated.h"


class Vshifter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(shift,1,0);
    VL_OUT8(left_shift,3,0);
    VL_OUT8(right_shift,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshifter___024root(Vshifter__Syms* symsp, const char* v__name);
    ~Vshifter___024root();
    VL_UNCOPYABLE(Vshifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
