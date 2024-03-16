// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb__DOT__clk = 0U;
    vlSelf->tb__DOT__SelectTest = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "performance_degrade.sv", 
                                       14);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       16);
    vlSelf->tb__DOT__SelectTest = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       18);
    vlSelf->tb__DOT__SelectTest = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "performance_degrade.sv", 
                                       20);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       22);
    vlSelf->tb__DOT__Validate = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       24);
    vlSelf->tb__DOT__Validate = 0U;
    vlSelf->tb__DOT__counter_global = 1U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       16);
    vlSelf->tb__DOT__SelectTest = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       18);
    vlSelf->tb__DOT__SelectTest = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "performance_degrade.sv", 
                                       20);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       22);
    vlSelf->tb__DOT__Validate = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       24);
    vlSelf->tb__DOT__Validate = 0U;
    vlSelf->tb__DOT__counter_global = 2U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       16);
    vlSelf->tb__DOT__SelectTest = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       18);
    vlSelf->tb__DOT__SelectTest = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "performance_degrade.sv", 
                                       20);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       22);
    vlSelf->tb__DOT__Validate = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       24);
    vlSelf->tb__DOT__Validate = 0U;
    vlSelf->tb__DOT__counter_global = 3U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       16);
    vlSelf->tb__DOT__SelectTest = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       18);
    vlSelf->tb__DOT__SelectTest = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "performance_degrade.sv", 
                                       20);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       22);
    vlSelf->tb__DOT__Validate = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       24);
    vlSelf->tb__DOT__Validate = 0U;
    vlSelf->tb__DOT__counter_global = 4U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       16);
    vlSelf->tb__DOT__SelectTest = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       18);
    vlSelf->tb__DOT__SelectTest = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "performance_degrade.sv", 
                                       20);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       22);
    vlSelf->tb__DOT__Validate = 1U;
    co_await vlSelf->__VtrigSched_h8aadc088__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb.clk)", 
                                                       "performance_degrade.sv", 
                                                       24);
    vlSelf->tb__DOT__Validate = 0U;
    vlSelf->tb__DOT__counter_global = 5U;
    VL_FINISH_MT("performance_degrade.sv", 27, "");
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "performance_degrade.sv", 
                                           9);
        vlSelf->tb__DOT__clk = (1U & (~ (IData)(vlSelf->tb__DOT__clk)));
    }
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0__PROF__performance_degrade__l62(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0__PROF__performance_degrade__l62\n"); );
    // Init
    IData/*31:0*/ tb__DOT__do_something_here_SelectTest__Vstatic__unnamedblk1__DOT__code;
    tb__DOT__do_something_here_SelectTest__Vstatic__unnamedblk1__DOT__code = 0;
    std::string tb__DOT__do_something_here_SelectTest__Vstatic__unnamedblk1__DOT__line;
    IData/*31:0*/ __Vtask_tb__DOT__do_something_here_SelectTest__0__ctr;
    __Vtask_tb__DOT__do_something_here_SelectTest__0__ctr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__do_something_here_Validate__1__ctr;
    __Vtask_tb__DOT__do_something_here_Validate__1__ctr = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(vlSelf->tb__DOT__SelectTest)) {
        __Vtask_tb__DOT__do_something_here_SelectTest__0__ctr 
            = vlSelf->tb__DOT__counter_global;
        VL_WRITEF("[SelectTest]Start: %11d\n",32,__Vtask_tb__DOT__do_something_here_SelectTest__0__ctr);
        __Vtemp_1[0U] = 0x652e7376U;
        __Vtemp_1[1U] = 0x67726164U;
        __Vtemp_1[2U] = 0x655f6465U;
        __Vtemp_1[3U] = 0x6d616e63U;
        __Vtemp_1[4U] = 0x72666f72U;
        __Vtemp_1[5U] = 0x7065U;
        vlSelf->tb__DOT__do_something_here_SelectTest__Vstatic__fd1 
            = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                          , std::string{"r"});
        ;
        while ((! (vlSelf->tb__DOT__do_something_here_SelectTest__Vstatic__fd1 ? feof(VL_CVT_I_FP(vlSelf->tb__DOT__do_something_here_SelectTest__Vstatic__fd1)) : true))) {
            tb__DOT__do_something_here_SelectTest__Vstatic__unnamedblk1__DOT__code 
                = VL_FSCANF_IX(vlSelf->tb__DOT__do_something_here_SelectTest__Vstatic__fd1,"%s\n",
                               -1,&(tb__DOT__do_something_here_SelectTest__Vstatic__unnamedblk1__DOT__line)) ;
        }
        VL_WRITEF("[SelectTest]Done: %11d\n",32,__Vtask_tb__DOT__do_something_here_SelectTest__0__ctr);
    }
    if (VL_UNLIKELY(vlSelf->tb__DOT__Validate)) {
        __Vtask_tb__DOT__do_something_here_Validate__1__ctr 
            = vlSelf->tb__DOT__counter_global;
        VL_WRITEF("[Validate]Start: %11d\n",32,__Vtask_tb__DOT__do_something_here_Validate__1__ctr);
        vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i = 1U;
        vlSelf->tb__DOT__do_something_here_Validate__Vstatic__fd 
            = VL_FOPEN_NN(std::string{"temp"}, std::string{"w"});
        ;
        while ((0U != vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i)) {
            vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i 
                = ((IData)(1U) + vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i);
            if (VL_UNLIKELY((1U == (0x3ffU & vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i)))) {
                VL_FWRITEF(vlSelf->tb__DOT__do_something_here_Validate__Vstatic__fd,"%10#\n\n",
                           32,vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i);
            }
        }
        VL_FCLOSE_I(vlSelf->tb__DOT__do_something_here_Validate__Vstatic__fd); vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i = 1U;
        vlSelf->tb__DOT__do_something_here_Validate__Vstatic__fd 
            = VL_FOPEN_NN(std::string{"temp"}, std::string{"w"});
        ;
        while ((0U != vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i)) {
            vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i 
                = ((IData)(1U) + vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i);
            if (VL_UNLIKELY((1U == (0x3ffU & vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i)))) {
                VL_FWRITEF(vlSelf->tb__DOT__do_something_here_Validate__Vstatic__fd,"%10#\n\n",
                           32,vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i);
            }
        }
        VL_FCLOSE_I(vlSelf->tb__DOT__do_something_here_Validate__Vstatic__fd); vlSelf->tb__DOT__do_something_here_Validate__Vstatic__i = 1U;
        VL_WRITEF("[Validate]Done: %11d\n",32,__Vtask_tb__DOT__do_something_here_Validate__1__ctr);
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0__PROF__performance_degrade__l62(vlSelf);
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.resume("@(posedge tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8aadc088__0.resume("@(negedge tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.commit("@(posedge tb.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8aadc088__0.commit("@(negedge tb.clk)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("performance_degrade.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("performance_degrade.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
