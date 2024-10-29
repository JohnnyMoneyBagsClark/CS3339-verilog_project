// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vshifter__pch.h"
#include "Vshifter.h"
#include "Vshifter___024root.h"

// FUNCTIONS
Vshifter__Syms::~Vshifter__Syms()
{
}

Vshifter__Syms::Vshifter__Syms(VerilatedContext* contextp, const char* namep, Vshifter* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
