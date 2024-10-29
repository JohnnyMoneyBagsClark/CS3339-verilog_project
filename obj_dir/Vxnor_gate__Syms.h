// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VXNOR_GATE__SYMS_H_
#define VERILATED_VXNOR_GATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vxnor_gate.h"

// INCLUDE MODULE CLASSES
#include "Vxnor_gate___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vxnor_gate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vxnor_gate* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vxnor_gate___024root           TOP;

    // CONSTRUCTORS
    Vxnor_gate__Syms(VerilatedContext* contextp, const char* namep, Vxnor_gate* modelp);
    ~Vxnor_gate__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
