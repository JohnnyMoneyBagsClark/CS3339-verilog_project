// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnand_gate.h for the primary calling header

#include "Vnand_gate__pch.h"
#include "Vnand_gate__Syms.h"
#include "Vnand_gate___024root.h"

void Vnand_gate___024root___ctor_var_reset(Vnand_gate___024root* vlSelf);

Vnand_gate___024root::Vnand_gate___024root(Vnand_gate__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnand_gate___024root___ctor_var_reset(this);
}

void Vnand_gate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnand_gate___024root::~Vnand_gate___024root() {
}
