// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTER__SYMS_H_
#define VERILATED_VSHIFTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vshifter.h"

// INCLUDE MODULE CLASSES
#include "Vshifter___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vshifter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshifter* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshifter___024root             TOP;

    // CONSTRUCTORS
    Vshifter__Syms(VerilatedContext* contextp, const char* namep, Vshifter* modelp);
    ~Vshifter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
