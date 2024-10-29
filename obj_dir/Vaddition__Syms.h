// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDITION__SYMS_H_
#define VERILATED_VADDITION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaddition.h"

// INCLUDE MODULE CLASSES
#include "Vaddition___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vaddition__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaddition* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaddition___024root            TOP;

    // CONSTRUCTORS
    Vaddition__Syms(VerilatedContext* contextp, const char* namep, Vaddition* modelp);
    ~Vaddition__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
