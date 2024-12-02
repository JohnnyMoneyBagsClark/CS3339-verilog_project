// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_0_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_0_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.alu__DOT__and_out),4);
        bufp->chgCData(oldp+1,(vlSelfRef.alu__DOT__or_out),4);
        bufp->chgCData(oldp+2,(vlSelfRef.alu__DOT__xor_out),4);
        bufp->chgCData(oldp+3,((0xfU & (~ (IData)(vlSelfRef.alu__DOT__and_out)))),4);
        bufp->chgCData(oldp+4,((0xfU & (~ (IData)(vlSelfRef.alu__DOT__or_out)))),4);
        bufp->chgCData(oldp+5,((0xfU & (~ (IData)(vlSelfRef.alu__DOT__xor_out)))),4);
    }
    bufp->chgCData(oldp+6,(vlSelfRef.a),4);
    bufp->chgCData(oldp+7,(vlSelfRef.b),4);
    bufp->chgCData(oldp+8,(vlSelfRef.op_code),4);
    bufp->chgBit(oldp+9,(vlSelfRef.carry_in));
    bufp->chgCData(oldp+10,(vlSelfRef.result),4);
    bufp->chgBit(oldp+11,(vlSelfRef.carry_out));
    bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelfRef.a) 
                                     + ((IData)(vlSelfRef.b) 
                                        + (IData)(vlSelfRef.carry_in))))),4);
    bufp->chgCData(oldp+13,((0xfU & (((IData)(vlSelfRef.a) 
                                      - (IData)(vlSelfRef.b)) 
                                     - (IData)(vlSelfRef.carry_in)))),4);
    bufp->chgCData(oldp+14,(((0U != (IData)(vlSelfRef.b))
                              ? (0xfU & VL_DIV_III(32, (IData)(vlSelfRef.a), (IData)(vlSelfRef.b)))
                              : 0U)),4);
    bufp->chgCData(oldp+15,(((0U != (IData)(vlSelfRef.b))
                              ? (0xfU & VL_MODDIV_III(32, (IData)(vlSelfRef.a), (IData)(vlSelfRef.b)))
                              : 0U)),4);
    bufp->chgCData(oldp+16,((0xffU & ((IData)(vlSelfRef.a) 
                                      * (IData)(vlSelfRef.b)))),8);
    bufp->chgCData(oldp+17,((0xfU & (((IData)(vlSelfRef.a) 
                                      * (IData)(vlSelfRef.b)) 
                                     >> 4U))),4);
    bufp->chgBit(oldp+18,((1U & (((IData)(vlSelfRef.a) 
                                  + ((IData)(vlSelfRef.b) 
                                     + (IData)(vlSelfRef.carry_in))) 
                                 >> 4U))));
    bufp->chgBit(oldp+19,((1U & ((((IData)(vlSelfRef.a) 
                                   - (IData)(vlSelfRef.b)) 
                                  - (IData)(vlSelfRef.carry_in)) 
                                 >> 4U))));
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
