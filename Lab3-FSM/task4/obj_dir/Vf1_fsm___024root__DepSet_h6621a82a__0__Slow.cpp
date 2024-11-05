// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_ATTR_COLD void Vf1_fsm___024root___initial__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->f1_fsm__DOT__randdelay__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1_fsm___024root___settle__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1_fsm__DOT__state) | 
               (1U == vlSelf->f1_fsm__DOT__state)) 
              | (2U == vlSelf->f1_fsm__DOT__state)) 
             | (3U == vlSelf->f1_fsm__DOT__state)) 
            | (4U == vlSelf->f1_fsm__DOT__state)) | 
           (5U == vlSelf->f1_fsm__DOT__state)) | (6U 
                                                  == vlSelf->f1_fsm__DOT__state)) 
         | (7U == vlSelf->f1_fsm__DOT__state))) {
        if ((0U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 0U;
            vlSelf->f1_fsm__DOT__next_state = 1U;
        } else if ((1U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 1U;
            vlSelf->f1_fsm__DOT__next_state = 2U;
        } else if ((2U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 3U;
            vlSelf->f1_fsm__DOT__next_state = 3U;
        } else if ((3U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 7U;
            vlSelf->f1_fsm__DOT__next_state = 4U;
        } else if ((4U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->f1_fsm__DOT__next_state = 5U;
        } else if ((5U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->f1_fsm__DOT__next_state = 6U;
        } else if ((6U == vlSelf->f1_fsm__DOT__state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->f1_fsm__DOT__next_state = 7U;
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->f1_fsm__DOT__next_state = 8U;
        }
    } else if ((8U == vlSelf->f1_fsm__DOT__state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->f1_fsm__DOT__next_state = 9U;
    } else {
        vlSelf->data_out = ((9U == vlSelf->f1_fsm__DOT__state)
                             ? 0xffU : 0U);
        vlSelf->f1_fsm__DOT__next_state = 0U;
    }
    vlSelf->f1_fsm__DOT__randdelay__DOT__next_state 
        = ((0U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
            ? ((IData)(vlSelf->f1_fsm__DOT__cmd_delay)
                ? 1U : vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
            : ((1U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__count))
                    ? 2U : vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                : ((2U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                    ? ((IData)(vlSelf->f1_fsm__DOT__cmd_delay)
                        ? 3U : 0U) : ((3U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)
                                       ? ((IData)(vlSelf->f1_fsm__DOT__cmd_delay)
                                           ? vlSelf->f1_fsm__DOT__randdelay__DOT__current_state
                                           : 0U) : 0U))));
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_initial(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vf1_fsm___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_settle(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_settle\n"); );
    // Body
    Vf1_fsm___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_fsm___024root___final(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_fsm___024root___ctor_var_reset(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_fsm__DOT__state = 0;
    vlSelf->f1_fsm__DOT__next_state = 0;
    vlSelf->f1_fsm__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->f1_fsm__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->f1_fsm__DOT__clkEn = VL_RAND_RESET_I(1);
    vlSelf->f1_fsm__DOT__clocktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1_fsm__DOT__randdelay__DOT__count = VL_RAND_RESET_I(10);
    vlSelf->f1_fsm__DOT__randdelay__DOT__current_state = 0;
    vlSelf->f1_fsm__DOT__randdelay__DOT__next_state = 0;
    vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
