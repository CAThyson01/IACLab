// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


VL_ATTR_COLD void Vf1_fsm___024root__trace_init_sub__TOP__0(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+13,"en", false,-1);
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+13,"en", false,-1);
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBus(c+1,"state", false,-1, 31,0);
    tracep->declBus(c+2,"next_state", false,-1, 31,0);
    tracep->declBit(c+3,"cmd_seq", false,-1);
    tracep->declBit(c+4,"cmd_delay", false,-1);
    tracep->declBit(c+5,"clkEn", false,-1);
    tracep->declBit(c+6,"delayEn", false,-1);
    tracep->pushNamePrefix("clocktick ");
    tracep->declBus(c+16,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+17,"N", false,-1, 15,0);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("randdelay ");
    tracep->declBus(c+18,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+4,"trigger", false,-1);
    tracep->declBit(c+6,"time_out", false,-1);
    tracep->declBus(c+8,"count", false,-1, 9,0);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+10,"next_state", false,-1, 31,0);
    tracep->declBus(c+11,"randnum", false,-1, 6,0);
    tracep->pushNamePrefix("randgen ");
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+19,"en", false,-1);
    tracep->declBus(c+11,"data_out", false,-1, 6,0);
    tracep->declBus(c+11,"sreg", false,-1, 6,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_init_top(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_top\n"); );
    // Body
    Vf1_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_fsm___024root__trace_register(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_fsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_fsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_top_0\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_fsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->f1_fsm__DOT__state),32);
    bufp->fullIData(oldp+2,(vlSelf->f1_fsm__DOT__next_state),32);
    bufp->fullBit(oldp+3,(vlSelf->f1_fsm__DOT__cmd_seq));
    bufp->fullBit(oldp+4,(vlSelf->f1_fsm__DOT__cmd_delay));
    bufp->fullBit(oldp+5,(vlSelf->f1_fsm__DOT__clkEn));
    bufp->fullBit(oldp+6,(((0U != vlSelf->f1_fsm__DOT__randdelay__DOT__current_state) 
                           & ((1U != vlSelf->f1_fsm__DOT__randdelay__DOT__current_state) 
                              & (2U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)))));
    bufp->fullSData(oldp+7,(vlSelf->f1_fsm__DOT__clocktick__DOT__count),16);
    bufp->fullSData(oldp+8,(vlSelf->f1_fsm__DOT__randdelay__DOT__count),10);
    bufp->fullIData(oldp+9,(vlSelf->f1_fsm__DOT__randdelay__DOT__current_state),32);
    bufp->fullIData(oldp+10,(((0U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                               ? ((IData)(vlSelf->f1_fsm__DOT__cmd_delay)
                                   ? 1U : vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                               : ((1U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__count))
                                       ? 2U : vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                                   : ((2U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                                       ? ((IData)(vlSelf->f1_fsm__DOT__cmd_delay)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                                           ? ((IData)(vlSelf->f1_fsm__DOT__cmd_delay)
                                               ? vlSelf->f1_fsm__DOT__randdelay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullCData(oldp+11,(vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg),7);
    bufp->fullBit(oldp+12,(vlSelf->rst));
    bufp->fullBit(oldp+13,(vlSelf->en));
    bufp->fullBit(oldp+14,(vlSelf->clk));
    bufp->fullCData(oldp+15,(vlSelf->data_out),8);
    bufp->fullIData(oldp+16,(0x10U),32);
    bufp->fullSData(oldp+17,(0x2fU),16);
    bufp->fullIData(oldp+18,(0xaU),32);
    bufp->fullBit(oldp+19,(1U));
}
