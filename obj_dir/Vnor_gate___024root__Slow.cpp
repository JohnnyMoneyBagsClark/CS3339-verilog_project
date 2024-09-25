// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnor_gate.h for the primary calling header

#include "Vnor_gate__pch.h"
#include "Vnor_gate__Syms.h"
#include "Vnor_gate___024root.h"

void Vnor_gate___024root___ctor_var_reset(Vnor_gate___024root* vlSelf);

Vnor_gate___024root::Vnor_gate___024root(Vnor_gate__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnor_gate___024root___ctor_var_reset(this);
}

void Vnor_gate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnor_gate___024root::~Vnor_gate___024root() {
}
