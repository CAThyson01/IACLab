// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__f1_fsm__DOT__state;
    CData/*0:0*/ __Vdly__f1_fsm__DOT__clkEn;
    SData/*15:0*/ __Vdly__f1_fsm__DOT__clocktick__DOT__count;
    CData/*6:0*/ __Vdly__f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg;
    // Body
    __Vdly__f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg 
        = vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg;
    __Vdly__f1_fsm__DOT__state = vlSelf->f1_fsm__DOT__state;
    __Vdly__f1_fsm__DOT__clocktick__DOT__count = vlSelf->f1_fsm__DOT__clocktick__DOT__count;
    __Vdly__f1_fsm__DOT__clkEn = vlSelf->f1_fsm__DOT__clkEn;
    vlSelf->f1_fsm__DOT__randdelay__DOT__count = (0x3ffU 
                                                  & ((((IData)(vlSelf->rst) 
                                                       | (IData)(vlSelf->f1_fsm__DOT__cmd_delay)) 
                                                      | (0U 
                                                         == (IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__count)))
                                                      ? 
                                                     ((IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__count) 
                                                      - (IData)(1U))));
    if (vlSelf->rst) {
        __Vdly__f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg = 1U;
        __Vdly__f1_fsm__DOT__clkEn = 0U;
        __Vdly__f1_fsm__DOT__clocktick__DOT__count = 0x2fU;
        vlSelf->f1_fsm__DOT__clocktick__DOT__count 
            = __Vdly__f1_fsm__DOT__clocktick__DOT__count;
        vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg 
            = __Vdly__f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg;
        vlSelf->f1_fsm__DOT__cmd_delay = 0U;
        vlSelf->f1_fsm__DOT__cmd_seq = 0U;
        __Vdly__f1_fsm__DOT__state = 0U;
        vlSelf->f1_fsm__DOT__randdelay__DOT__current_state = 0U;
    } else {
        __Vdly__f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg 
            = ((0x7eU & ((IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg) 
                         << 1U)) | (1U & VL_REDXOR_8(
                                                     (0x44U 
                                                      & (IData)(vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg)))));
        if (vlSelf->f1_fsm__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->f1_fsm__DOT__clocktick__DOT__count))) {
                __Vdly__f1_fsm__DOT__clkEn = 1U;
                __Vdly__f1_fsm__DOT__clocktick__DOT__count = 0x2fU;
            } else {
                __Vdly__f1_fsm__DOT__clocktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1_fsm__DOT__clocktick__DOT__count) 
                                  - (IData)(1U)));
                __Vdly__f1_fsm__DOT__clkEn = 0U;
            }
        }
        vlSelf->f1_fsm__DOT__clocktick__DOT__count 
            = __Vdly__f1_fsm__DOT__clocktick__DOT__count;
        vlSelf->f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg 
            = __Vdly__f1_fsm__DOT__randdelay__DOT__randgen__DOT__sreg;
        vlSelf->f1_fsm__DOT__cmd_delay = 0U;
        vlSelf->f1_fsm__DOT__cmd_seq = 0U;
        if (vlSelf->en) {
            if ((8U == vlSelf->f1_fsm__DOT__state)) {
                vlSelf->f1_fsm__DOT__cmd_delay = 1U;
                __Vdly__f1_fsm__DOT__state = vlSelf->f1_fsm__DOT__next_state;
            }
            if ((9U == vlSelf->f1_fsm__DOT__state)) {
                if (((0U != vlSelf->f1_fsm__DOT__randdelay__DOT__current_state) 
                     & ((1U != vlSelf->f1_fsm__DOT__randdelay__DOT__current_state) 
                        & (2U == vlSelf->f1_fsm__DOT__randdelay__DOT__current_state)))) {
                    __Vdly__f1_fsm__DOT__state = vlSelf->f1_fsm__DOT__next_state;
                }
            } else {
                vlSelf->f1_fsm__DOT__cmd_seq = 1U;
                if (vlSelf->f1_fsm__DOT__clkEn) {
                    __Vdly__f1_fsm__DOT__state = vlSelf->f1_fsm__DOT__next_state;
                }
            }
        }
        vlSelf->f1_fsm__DOT__randdelay__DOT__current_state 
            = vlSelf->f1_fsm__DOT__randdelay__DOT__next_state;
    }
    vlSelf->f1_fsm__DOT__clkEn = __Vdly__f1_fsm__DOT__clkEn;
    vlSelf->f1_fsm__DOT__state = __Vdly__f1_fsm__DOT__state;
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

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
