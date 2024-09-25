// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnot_gate.h for the primary calling header

#include "Vnot_gate__pch.h"
#include "Vnot_gate__Syms.h"
#include "Vnot_gate___024root.h"

void Vnot_gate___024root___ctor_var_reset(Vnot_gate___024root* vlSelf);

Vnot_gate___024root::Vnot_gate___024root(Vnot_gate__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnot_gate___024root___ctor_var_reset(this);
}

void Vnot_gate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnot_gate___024root::~Vnot_gate___024root() {
}
