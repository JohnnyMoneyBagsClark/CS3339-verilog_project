// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshifter.h for the primary calling header

#include "Vshifter__pch.h"
#include "Vshifter__Syms.h"
#include "Vshifter___024root.h"

void Vshifter___024root___ctor_var_reset(Vshifter___024root* vlSelf);

Vshifter___024root::Vshifter___024root(Vshifter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vshifter___024root___ctor_var_reset(this);
}

void Vshifter___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vshifter___024root::~Vshifter___024root() {
}
