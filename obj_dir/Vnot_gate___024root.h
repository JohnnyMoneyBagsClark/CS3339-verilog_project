// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnot_gate.h for the primary calling header

#ifndef VERILATED_VNOT_GATE___024ROOT_H_
#define VERILATED_VNOT_GATE___024ROOT_H_  // guard

#include "verilated.h"


class Vnot_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnot_gate___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnot_gate__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnot_gate___024root(Vnot_gate__Syms* symsp, const char* v__name);
    ~Vnot_gate___024root();
    VL_UNCOPYABLE(Vnot_gate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
