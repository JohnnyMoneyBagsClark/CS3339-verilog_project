// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnand_gate.h for the primary calling header

#ifndef VERILATED_VNAND_GATE___024ROOT_H_
#define VERILATED_VNAND_GATE___024ROOT_H_  // guard

#include "verilated.h"


class Vnand_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnand_gate___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
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
    Vnand_gate__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnand_gate___024root(Vnand_gate__Syms* symsp, const char* v__name);
    ~Vnand_gate___024root();
    VL_UNCOPYABLE(Vnand_gate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
