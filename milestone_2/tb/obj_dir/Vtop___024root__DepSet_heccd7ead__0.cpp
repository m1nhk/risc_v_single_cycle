// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__singlecycle__DOT__regfile__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__singlecycle__DOT__regfile__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v1;
    // Body
    __Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v1 = 0U;
    if (vlSelf->i_rst_n) {
        if (((IData)(vlSelf->top__DOT__singlecycle__DOT__rd_wren) 
             & (0U != (0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                >> 7U))))) {
            __Vdlyvval__top__DOT__singlecycle__DOT__regfile__DOT__register__v0 
                = ((2U == (IData)(vlSelf->top__DOT__singlecycle__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc)
                    : ((1U == (IData)(vlSelf->top__DOT__singlecycle__DOT__wb_sel))
                        ? vlSelf->top__DOT__singlecycle__DOT__ld_data
                        : vlSelf->top__DOT__singlecycle__DOT__alu_data));
            __Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__singlecycle__DOT__regfile__DOT__register__v0 
                = (0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                            >> 7U));
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__singlecycle__DOT__mem_wren)))) {
            vlSelf->top__DOT__singlecycle__DOT__ld_data 
                = ((0x7810U == vlSelf->top__DOT__singlecycle__DOT__alu_data)
                    ? (IData)(vlSelf->i_io_btn) : (
                                                   (0x7800U 
                                                    == vlSelf->top__DOT__singlecycle__DOT__alu_data)
                                                    ? vlSelf->i_io_sw
                                                    : 
                                                   ((0x7000U 
                                                     == vlSelf->top__DOT__singlecycle__DOT__alu_data)
                                                     ? vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg
                                                     : 
                                                    ((0x7010U 
                                                      == vlSelf->top__DOT__singlecycle__DOT__alu_data)
                                                      ? vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg
                                                      : 
                                                     ((0x7030U 
                                                       == vlSelf->top__DOT__singlecycle__DOT__alu_data)
                                                       ? vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg
                                                       : 0U)))));
        }
        vlSelf->top__DOT__singlecycle__DOT__pc = vlSelf->top__DOT__singlecycle__DOT__pc_next;
        if (vlSelf->top__DOT__singlecycle__DOT__mem_wren) {
            if ((0x7000U == vlSelf->top__DOT__singlecycle__DOT__alu_data)) {
                vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg 
                    = vlSelf->top__DOT__singlecycle__DOT__rs2_data;
            }
            if ((0x7000U != vlSelf->top__DOT__singlecycle__DOT__alu_data)) {
                if ((0x7010U == vlSelf->top__DOT__singlecycle__DOT__alu_data)) {
                    vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg 
                        = vlSelf->top__DOT__singlecycle__DOT__rs2_data;
                }
                if ((0x7010U != vlSelf->top__DOT__singlecycle__DOT__alu_data)) {
                    if ((0x7030U == vlSelf->top__DOT__singlecycle__DOT__alu_data)) {
                        vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg 
                            = vlSelf->top__DOT__singlecycle__DOT__rs2_data;
                    }
                }
            }
        }
    } else {
        __Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v1 = 1U;
        vlSelf->top__DOT__singlecycle__DOT__ld_data = 0U;
        vlSelf->top__DOT__singlecycle__DOT__pc = 0U;
        vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg = 0U;
        vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg = 0U;
        vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg = 0U;
    }
    if (__Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v0) {
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[__Vdlyvdim0__top__DOT__singlecycle__DOT__regfile__DOT__register__v0] 
            = __Vdlyvval__top__DOT__singlecycle__DOT__regfile__DOT__register__v0;
    }
    if (__Vdlyvset__top__DOT__singlecycle__DOT__regfile__DOT__register__v1) {
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[1U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[2U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[3U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[4U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[5U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[6U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[7U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[8U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[9U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0xaU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0xbU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0xcU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0xdU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0xeU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0xfU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x10U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x11U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x12U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x13U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x14U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x15U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x16U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x17U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x18U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x19U] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x1aU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x1bU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x1cU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x1dU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x1eU] = 0U;
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0x1fU] = 0U;
    }
    vlSelf->o_io_ledr = vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg;
    vlSelf->o_io_ledg = vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg;
    vlSelf->o_io_lcd = vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5;
    CData/*0:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5;
    // Body
    vlSelf->top__DOT__singlecycle__DOT__instr = ((IData)(vlSelf->i_rst_n)
                                                  ? 
                                                 vlSelf->top__DOT__singlecycle__DOT__imem__DOT__mem
                                                 [(0x7ffU 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__pc 
                                                      >> 2U))]
                                                  : 0U);
    if ((0x40U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
            } else if ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                            vlSelf->top__DOT__singlecycle__DOT__wb_sel = 2U;
                            vlSelf->top__DOT__singlecycle__DOT__imm 
                                = (((- (IData)((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__singlecycle__DOT__instr) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                          >> 0x14U)))));
                        } else {
                            vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                            vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                        vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                }
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
            } else if ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                        vlSelf->top__DOT__singlecycle__DOT__wb_sel = 2U;
                        vlSelf->top__DOT__singlecycle__DOT__imm 
                            = (((- (IData)((vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 0x14U));
                    } else {
                        vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                        vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                }
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
            } else {
                vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                if ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                        vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                        if ((0x4000U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                            if ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                                vlSelf->top__DOT__singlecycle__DOT__br_un = 1U;
                            }
                        }
                        vlSelf->top__DOT__singlecycle__DOT__imm 
                            = (((- (IData)((vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                  >> 7U))));
                    } else {
                        vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                        vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                }
            }
        } else {
            vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
            vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
        }
        vlSelf->top__DOT__singlecycle__DOT__rd_wren 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singlecycle__DOT__instr)) 
                             & ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->top__DOT__singlecycle__DOT__instr)))
                                 : (IData)((7U == (7U 
                                                   & vlSelf->top__DOT__singlecycle__DOT__instr)))))));
        vlSelf->o_insn_vld = (1U & (IData)(((0x20U 
                                             == (0x30U 
                                                 & vlSelf->top__DOT__singlecycle__DOT__instr)) 
                                            & ((8U 
                                                & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                ? (IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->top__DOT__singlecycle__DOT__instr)))
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                    ? 
                                                   ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                    : 
                                                   ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__singlecycle__DOT__instr))))));
        vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
        vlSelf->top__DOT__singlecycle__DOT__op_b = 
            (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singlecycle__DOT__instr)) 
                           & ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)
                               ? (IData)((7U == (7U 
                                                 & vlSelf->top__DOT__singlecycle__DOT__instr)))
                               : ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                   ? ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                       >> 1U) & vlSelf->top__DOT__singlecycle__DOT__instr)
                                   : ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                       >> 1U) & vlSelf->top__DOT__singlecycle__DOT__instr))))));
        vlSelf->top__DOT__singlecycle__DOT__op_a = 
            (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singlecycle__DOT__instr)) 
                           & ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)
                               ? (IData)((7U == (7U 
                                                 & vlSelf->top__DOT__singlecycle__DOT__instr)))
                               : (IData)((3U == (7U 
                                                 & vlSelf->top__DOT__singlecycle__DOT__instr)))))));
    } else {
        if ((0x20U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
            vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singlecycle__DOT__rd_wren 
                = (1U & (IData)(((0x10U == (0x18U & vlSelf->top__DOT__singlecycle__DOT__instr)) 
                                 & ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                     ? ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                         >> 1U) & vlSelf->top__DOT__singlecycle__DOT__instr)
                                     : ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                         >> 1U) & vlSelf->top__DOT__singlecycle__DOT__instr)))));
            if ((0x10U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                vlSelf->o_insn_vld = (1U & ((~ (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                >> 3U)) 
                                            & ((4U 
                                                & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                ? (
                                                   (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                : (
                                                   (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__singlecycle__DOT__instr))));
                if ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                } else if ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm 
                        = ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)
                            ? ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                ? (0xfffff000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                : 0U) : 0U);
                } else {
                    if ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                            vlSelf->top__DOT__singlecycle__DOT__alu_op 
                                = ((0x4000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                    ? ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelf->top__DOT__singlecycle__DOT__instr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelf->top__DOT__singlecycle__DOT__instr)
                                            ? ((0x40000000U 
                                                & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                     ? ((0x1000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                         ? 7U : ((0x40000000U 
                                                  & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                  ? 1U
                                                  : 0U))));
                            vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                            if ((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__instr 
                                          >> 0xeU)))) {
                                if ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                                    if ((0x1000U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                                        vlSelf->top__DOT__singlecycle__DOT__br_un = 1U;
                                    }
                                }
                            }
                        } else {
                            vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                            vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                        vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                    }
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                }
                vlSelf->top__DOT__singlecycle__DOT__op_b 
                    = (1U & (IData)((7U == (0xfU & vlSelf->top__DOT__singlecycle__DOT__instr))));
            } else {
                vlSelf->o_insn_vld = (1U & (IData)(
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->top__DOT__singlecycle__DOT__instr))));
                vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm 
                    = ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)
                        ? 0U : ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                 ? 0U : ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                          ? ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                          >> 7U))))
                                              : 0U)
                                          : 0U)));
                vlSelf->top__DOT__singlecycle__DOT__op_b 
                    = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singlecycle__DOT__instr))));
            }
        } else if ((0x10U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
            vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singlecycle__DOT__rd_wren 
                = (1U & ((~ (vlSelf->top__DOT__singlecycle__DOT__instr 
                             >> 3U)) & ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                         ? ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                             >> 1U) 
                                            & vlSelf->top__DOT__singlecycle__DOT__instr)
                                         : ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                             >> 1U) 
                                            & vlSelf->top__DOT__singlecycle__DOT__instr))));
            vlSelf->o_insn_vld = (1U & ((~ (vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 3U)) 
                                        & ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                            ? ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                >> 1U) 
                                               & vlSelf->top__DOT__singlecycle__DOT__instr)
                                            : ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                >> 1U) 
                                               & vlSelf->top__DOT__singlecycle__DOT__instr))));
            if ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm 
                    = ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)
                        ? ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)
                            ? (0xfffff000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                            : 0U) : 0U);
            } else if ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    vlSelf->top__DOT__singlecycle__DOT__alu_op 
                        = ((0x4000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                            ? ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                   ? 7U
                                                   : 0U)));
                    vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                    if ((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__instr 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                            if ((0x1000U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                                vlSelf->top__DOT__singlecycle__DOT__br_un = 1U;
                            }
                        }
                    }
                    vlSelf->top__DOT__singlecycle__DOT__imm 
                        = ((((IData)((0x40005000U == 
                                      (0xfe007000U 
                                       & vlSelf->top__DOT__singlecycle__DOT__instr))) 
                             | (1U == (7U & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                             >> 0xcU)))) 
                            | (5U == (7U & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 0xcU))))
                            ? (((- (IData)((1U & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                  >> 0x18U)))) 
                                << 5U) | (0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                   >> 0x14U)))
                            : (((- (IData)((vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__singlecycle__DOT__instr 
                                            >> 0x14U)));
                } else {
                    vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
                vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
            }
            vlSelf->top__DOT__singlecycle__DOT__op_b 
                = (1U & ((~ (vlSelf->top__DOT__singlecycle__DOT__instr 
                             >> 3U)) & ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)
                                         ? ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                             >> 1U) 
                                            & vlSelf->top__DOT__singlecycle__DOT__instr)
                                         : ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                             >> 1U) 
                                            & vlSelf->top__DOT__singlecycle__DOT__instr))));
        } else {
            if ((8U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
            } else if ((2U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__singlecycle__DOT__instr)) {
                    vlSelf->top__DOT__singlecycle__DOT__wb_sel = 1U;
                    vlSelf->top__DOT__singlecycle__DOT__imm 
                        = (((- (IData)((vlSelf->top__DOT__singlecycle__DOT__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->top__DOT__singlecycle__DOT__instr 
                                        >> 0x14U));
                } else {
                    vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__singlecycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singlecycle__DOT__imm = 0U;
            }
            vlSelf->top__DOT__singlecycle__DOT__rd_wren 
                = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singlecycle__DOT__instr))));
            vlSelf->o_insn_vld = (1U & (IData)((3U 
                                                == 
                                                (0xfU 
                                                 & vlSelf->top__DOT__singlecycle__DOT__instr))));
            vlSelf->top__DOT__singlecycle__DOT__alu_op = 0U;
            vlSelf->top__DOT__singlecycle__DOT__br_un = 0U;
            vlSelf->top__DOT__singlecycle__DOT__op_b 
                = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singlecycle__DOT__instr))));
        }
        vlSelf->top__DOT__singlecycle__DOT__op_a = 
            (1U & (IData)((0x17U == (0x3fU & vlSelf->top__DOT__singlecycle__DOT__instr))));
    }
    vlSelf->top__DOT__singlecycle__DOT__mem_wren = (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__singlecycle__DOT__instr)));
    vlSelf->top__DOT__singlecycle__DOT__rs1_data = 
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register
        [(0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singlecycle__DOT__rs2_data = 
        vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register
        [(0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                   >> 0x14U))];
    vlSelf->top__DOT__singlecycle__DOT__operand_a = 
        ((IData)(vlSelf->top__DOT__singlecycle__DOT__op_a)
          ? vlSelf->top__DOT__singlecycle__DOT__pc : vlSelf->top__DOT__singlecycle__DOT__rs1_data);
    vlSelf->top__DOT__singlecycle__DOT__br_equal = 
        (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
         == vlSelf->top__DOT__singlecycle__DOT__rs2_data);
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                       ^ (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                      & (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)) 
                     | (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)) 
                    | vlSelf->top__DOT__singlecycle__DOT__rs1_data)));
    vlSelf->top__DOT__singlecycle__DOT__operand_b = 
        ((IData)(vlSelf->top__DOT__singlecycle__DOT__op_b)
          ? vlSelf->top__DOT__singlecycle__DOT__imm
          : vlSelf->top__DOT__singlecycle__DOT__rs2_data);
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 1U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 1U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 1U)) 
                                             & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 1U) & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 2U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 2U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 1U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 1U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 3U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 3U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 3U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 2U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 2U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 4U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 4U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 4U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 3U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 3U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 5U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 5U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 5U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 4U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 4U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 6U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 6U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 6U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 5U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 5U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 7U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 7U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 7U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 6U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 6U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 8U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 8U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 8U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 7U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 7U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 9U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 9U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                 >> 9U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                >> 8U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                               >> 8U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0xaU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0xaU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                    >> 9U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                 >> 9U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0xbU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0xbU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xaU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xaU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0xcU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0xcU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xbU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xbU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0xdU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0xdU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xcU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xcU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0xeU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0xeU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xdU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xdU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0xfU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0xfU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xfU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xeU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xeU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x10U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x10U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x10U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0xfU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x10U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0xfU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x11U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x11U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x11U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x10U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x11U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x10U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x12U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x12U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x12U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x11U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x12U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x11U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x13U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x13U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x13U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x12U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x13U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x12U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x14U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x14U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x14U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x13U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x14U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x13U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x15U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x15U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x15U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x14U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x15U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x14U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x16U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x16U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x16U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x15U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x16U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x15U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x17U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x17U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x17U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x16U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x17U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x16U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x18U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x18U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x18U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x17U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x18U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x17U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x19U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x19U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x19U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x18U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x19U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x18U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x1aU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1aU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x1aU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x19U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x1aU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x19U))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x1bU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1bU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x1bU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1aU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x1bU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1aU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x1cU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1cU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x1cU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1bU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x1cU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1bU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x1dU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1dU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x1dU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1cU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x1dU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1cU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x1eU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1eU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x1eU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1dU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x1eU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1dU))));
    top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                    >> 0x1fU) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1fU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1eU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                     >> 0x1fU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffffdU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (2U & (((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                            >> 1U)) << 1U)) ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                               << 1U))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffffbU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (4U & (((0xfffffffcU & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                            >> 2U)) << 2U)) ^ (0xfffffffcU 
                                               & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffff7U & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (8U & (((0xfffffff8U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                            >> 3U)) << 3U)) ^ (0xfffffff8U 
                                               & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffffefU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x10U & (((0xfffffff0U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                               >> 4U)) << 4U)) ^ (0xfffffff0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffffdfU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x20U & (((0xffffffe0U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                               >> 5U)) << 5U)) ^ (0xffffffe0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffffbfU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x40U & (((0xffffffc0U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                               >> 6U)) << 6U)) ^ (0xffffffc0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffff7fU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x80U & (((0xffffff80U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                               >> 7U)) << 7U)) ^ (0xffffff80U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffeffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x100U & (((0xffffff00U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                >> 8U)) << 8U)) ^ (0xffffff00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffdffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x200U & (((0xfffffe00U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                >> 9U)) << 9U)) ^ (0xfffffe00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffffbffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x400U & (((0xfffffc00U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                >> 0xaU)) << 0xaU)) 
                        ^ (0xfffffc00U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffff7ffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x800U & (((0xfffff800U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                >> 0xbU)) << 0xbU)) 
                        ^ (0xfffff800U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffefffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x1000U & (((0xfffff000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 0xcU)) << 0xcU)) 
                         ^ (0xfffff000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffdfffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x2000U & (((0xffffe000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 0xdU)) << 0xdU)) 
                         ^ (0xffffe000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffffbfffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x4000U & (((0xffffc000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 0xeU)) << 0xeU)) 
                         ^ (0xffffc000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffff7fffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x8000U & (((0xffff8000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                 >> 0xfU)) << 0xfU)) 
                         ^ (0xffff8000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffeffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x10000U & (((0xffff0000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                  >> 0x10U)) << 0x10U)) 
                          ^ (0xffff0000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffdffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x20000U & (((0xfffe0000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                  >> 0x11U)) << 0x11U)) 
                          ^ (0xfffe0000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfffbffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x40000U & (((0xfffc0000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                  >> 0x12U)) << 0x12U)) 
                          ^ (0xfffc0000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfff7ffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x80000U & (((0xfff80000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                  >> 0x13U)) << 0x13U)) 
                          ^ (0xfff80000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffefffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x100000U & (((0xfff00000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0x14U)) << 0x14U)) 
                           ^ (0xfff00000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffdfffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x200000U & (((0xffe00000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0x15U)) << 0x15U)) 
                           ^ (0xffe00000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xffbfffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x400000U & (((0xffc00000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0x16U)) << 0x16U)) 
                           ^ (0xffc00000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xff7fffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x800000U & (((0xff800000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                   >> 0x17U)) << 0x17U)) 
                           ^ (0xff800000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfeffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x1000000U & (((0xff000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x18U)) << 0x18U)) 
                            ^ (0xff000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfdffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x2000000U & (((0xfe000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x19U)) << 0x19U)) 
                            ^ (0xfe000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xfbffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x4000000U & (((0xfc000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1aU)) << 0x1aU)) 
                            ^ (0xfc000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xf7ffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x8000000U & (((0xf8000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                    >> 0x1bU)) << 0x1bU)) 
                            ^ (0xf8000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xefffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x10000000U & (((0xf0000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                     >> 0x1cU)) << 0x1cU)) 
                             ^ (0xf0000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xdfffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x20000000U & (((0xe0000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                     >> 0x1dU)) << 0x1dU)) 
                             ^ (0xe0000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0xbfffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x40000000U & (((0xc0000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                     >> 0x1eU)) << 0x1eU)) 
                             ^ (0xc0000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
        = ((0x7fffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned) 
           | (0x80000000U & (((0x80000000U & vlSelf->top__DOT__singlecycle__DOT__rs1_data) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                     >> 0x1fU)) << 0x1fU)) 
                             ^ (0x80000000U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    if (((((((((0U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
               | (1U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
              | (2U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
             | (3U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
            | (4U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
           | (5U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
          | (6U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
         | (7U == vlSelf->top__DOT__singlecycle__DOT__operand_b))) {
        if ((0U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = vlSelf->top__DOT__singlecycle__DOT__operand_a;
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = vlSelf->top__DOT__singlecycle__DOT__operand_a;
        } else if ((1U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 1U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 1U);
        } else if ((2U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 2U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 2U);
        } else if ((3U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 3U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 3U);
        } else if ((4U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 4U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 4U);
        } else if ((5U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 5U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 5U);
        } else if ((6U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 6U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 6U);
        } else {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 7U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 7U);
        }
    } else if (((((((((8U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                      | (9U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                     | (0xaU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                    | (0xbU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                   | (0xcU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                  | (0xdU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                 | (0xeU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                | (0xfU == vlSelf->top__DOT__singlecycle__DOT__operand_b))) {
        if ((8U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 8U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 8U);
        } else if ((9U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 9U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 9U);
        } else if ((0xaU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0xaU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0xaU);
        } else if ((0xbU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0xbU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0xbU);
        } else if ((0xcU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0xcU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0xcU);
        } else if ((0xdU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0xdU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0xdU);
        } else if ((0xeU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0xeU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0xeU);
        } else {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0xfU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0xfU);
        }
    } else if (((((((((0x10U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                      | (0x11U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                     | (0x12U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                    | (0x13U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                   | (0x14U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                  | (0x15U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                 | (0x16U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                | (0x17U == vlSelf->top__DOT__singlecycle__DOT__operand_b))) {
        if ((0x10U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x10U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x10U);
        } else if ((0x11U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x11U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x11U);
        } else if ((0x12U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x12U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x12U);
        } else if ((0x13U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x13U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x13U);
        } else if ((0x14U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x14U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x14U);
        } else if ((0x15U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x15U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x15U);
        } else if ((0x16U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x16U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x16U);
        } else {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x17U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x17U);
        }
    } else if (((((((((0x18U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                      | (0x19U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                     | (0x1aU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                    | (0x1bU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                   | (0x1cU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                  | (0x1dU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                 | (0x1eU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                | (0x1fU == vlSelf->top__DOT__singlecycle__DOT__operand_b))) {
        if ((0x18U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x18U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x18U);
        } else if ((0x19U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x19U);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x19U);
        } else if ((0x1aU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x1aU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x1aU);
        } else if ((0x1bU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x1bU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x1bU);
        } else if ((0x1cU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x1cU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x1cU);
        } else if ((0x1dU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x1dU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x1dU);
        } else if ((0x1eU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x1eU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x1eU);
        } else {
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   << 0x1fU);
            vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result 
                = (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                   >> 0x1fU);
        }
    } else {
        vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result = 0U;
        vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result = 0U;
    }
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_arithmetic_result 
        = ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
            >> 0x1fU) ? (((((((((0U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                | (1U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                               | (2U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                              | (3U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                             | (4U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                            | (5U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                           | (6U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                          | (7U == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                          ? ((0U == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                              ? vlSelf->top__DOT__singlecycle__DOT__operand_a
                              : ((1U == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                  ? (0x80000000U | 
                                     (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 1U)) : ((2U 
                                                  == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                  ? 
                                                 (0xc0000000U 
                                                  | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 2U))
                                                  : 
                                                 ((3U 
                                                   == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                   ? 
                                                  (0xe0000000U 
                                                   | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 3U))
                                                   : 
                                                  ((4U 
                                                    == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                    ? 
                                                   (0xf0000000U 
                                                    | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 4U))
                                                    : 
                                                   ((5U 
                                                     == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                     ? 
                                                    (0xf8000000U 
                                                     | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 5U))
                                                     : 
                                                    ((6U 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                      ? 
                                                     (0xfc000000U 
                                                      | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 6U))
                                                      : 
                                                     (0xfe000000U 
                                                      | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 7U)))))))))
                          : (((((((((8U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                    | (9U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   | (0xaU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                  | (0xbU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 | (0xcU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                | (0xdU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                               | (0xeU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                              | (0xfU == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                              ? ((8U == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                  ? (0xff000000U | 
                                     (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 8U)) : ((9U 
                                                  == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                  ? 
                                                 (0xff800000U 
                                                  | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 9U))
                                                  : 
                                                 ((0xaU 
                                                   == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                   ? 
                                                  (0xffc00000U 
                                                   | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 0xaU))
                                                   : 
                                                  ((0xbU 
                                                    == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                    ? 
                                                   (0xffe00000U 
                                                    | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 0xbU))
                                                    : 
                                                   ((0xcU 
                                                     == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                     ? 
                                                    (0xfff00000U 
                                                     | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0xcU))
                                                     : 
                                                    ((0xdU 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                      ? 
                                                     (0xfff80000U 
                                                      | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 0xdU))
                                                      : 
                                                     ((0xeU 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                       ? 
                                                      (0xfffc0000U 
                                                       | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 0xeU))
                                                       : 
                                                      (0xfffe0000U 
                                                       | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 0xfU)))))))))
                              : (((((((((0x10U == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                        | (0x11U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                       | (0x12U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      | (0x13U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     | (0x14U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    | (0x15U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   | (0x16U == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                  | (0x17U == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                                  ? ((0x10U == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                      ? (0xffff0000U 
                                         | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                            >> 0x10U))
                                      : ((0x11U == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                          ? (0xffff8000U 
                                             | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                >> 0x11U))
                                          : ((0x12U 
                                              == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                              ? (0xffffc000U 
                                                 | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                    >> 0x12U))
                                              : ((0x13U 
                                                  == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                  ? 
                                                 (0xffffe000U 
                                                  | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 0x13U))
                                                  : 
                                                 ((0x14U 
                                                   == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                   ? 
                                                  (0xfffff000U 
                                                   | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 0x14U))
                                                   : 
                                                  ((0x15U 
                                                    == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                    ? 
                                                   (0xfffff800U 
                                                    | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 0x15U))
                                                    : 
                                                   ((0x16U 
                                                     == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                     ? 
                                                    (0xfffffc00U 
                                                     | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0x16U))
                                                     : 
                                                    (0xfffffe00U 
                                                     | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0x17U)))))))))
                                  : (((((((((0x18U 
                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                            | (0x19U 
                                               == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           | (0x1aU 
                                              == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          | (0x1bU 
                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         | (0x1cU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        | (0x1dU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                       | (0x1eU == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      | (0x1fU == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                                      ? ((0x18U == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                          ? (0xffffff00U 
                                             | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                >> 0x18U))
                                          : ((0x19U 
                                              == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                              ? (0xffffff80U 
                                                 | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                    >> 0x19U))
                                              : ((0x1aU 
                                                  == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                  ? 
                                                 (0xffffffc0U 
                                                  | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 0x1aU))
                                                  : 
                                                 ((0x1bU 
                                                   == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                   ? 
                                                  (0xffffffe0U 
                                                   | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 0x1bU))
                                                   : 
                                                  ((0x1cU 
                                                    == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                    ? 
                                                   (0xfffffff0U 
                                                    | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 0x1cU))
                                                    : 
                                                   ((0x1dU 
                                                     == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                     ? 
                                                    (0xfffffff8U 
                                                     | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0x1dU))
                                                     : 
                                                    ((0x1eU 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                      ? 
                                                     (0xfffffffcU 
                                                      | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 0x1eU))
                                                      : 
                                                     (0xfffffffeU 
                                                      | (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 0x1fU)))))))))
                                      : 0U)))) : ((
                                                   (((((((0U 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                                         | (1U 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                        | (2U 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                       | (3U 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                      | (4U 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     | (5U 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    | (6U 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   | (7U 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                    ? vlSelf->top__DOT__singlecycle__DOT__operand_a
                                                    : 
                                                   ((1U 
                                                     == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                     ? 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 1U)
                                                     : 
                                                    ((2U 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                      ? 
                                                     (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 2U)
                                                      : 
                                                     ((3U 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                       ? 
                                                      (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 3U)
                                                       : 
                                                      ((4U 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                        ? 
                                                       (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 4U)
                                                        : 
                                                       ((5U 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                         ? 
                                                        (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 5U)
                                                         : 
                                                        ((6U 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                          ? 
                                                         (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 6U)
                                                          : 
                                                         (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 7U))))))))
                                                   : 
                                                  (((((((((8U 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                                          | (9U 
                                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                         | (0xaU 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                        | (0xbU 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                       | (0xcU 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                      | (0xdU 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     | (0xeU 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    | (0xfU 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                                                    ? 
                                                   ((8U 
                                                     == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                     ? 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 8U)
                                                     : 
                                                    ((9U 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                      ? 
                                                     (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 9U)
                                                      : 
                                                     ((0xaU 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                       ? 
                                                      (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 0xaU)
                                                       : 
                                                      ((0xbU 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                        ? 
                                                       (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0xbU)
                                                        : 
                                                       ((0xcU 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                         ? 
                                                        (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 0xcU)
                                                         : 
                                                        ((0xdU 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                          ? 
                                                         (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 0xdU)
                                                          : 
                                                         ((0xeU 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                           ? 
                                                          (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                           >> 0xeU)
                                                           : 
                                                          (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                           >> 0xfU))))))))
                                                    : 
                                                   (((((((((0x10U 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                                           | (0x11U 
                                                              == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                          | (0x12U 
                                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                         | (0x13U 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                        | (0x14U 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                       | (0x15U 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                      | (0x16U 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     | (0x17U 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                                                     ? 
                                                    ((0x10U 
                                                      == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                      ? 
                                                     (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 0x10U)
                                                      : 
                                                     ((0x11U 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                       ? 
                                                      (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 0x11U)
                                                       : 
                                                      ((0x12U 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                        ? 
                                                       (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0x12U)
                                                        : 
                                                       ((0x13U 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                         ? 
                                                        (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 0x13U)
                                                         : 
                                                        ((0x14U 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                          ? 
                                                         (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x15U 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                           ? 
                                                          (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                           >> 0x15U)
                                                           : 
                                                          ((0x16U 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                            ? 
                                                           (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                            >> 0x16U)
                                                            : 
                                                           (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                            >> 0x17U))))))))
                                                     : 
                                                    (((((((((0x18U 
                                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b) 
                                                            | (0x19U 
                                                               == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                           | (0x1aU 
                                                              == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                          | (0x1bU 
                                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                         | (0x1cU 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                        | (0x1dU 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                       | (0x1eU 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                      | (0x1fU 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b))
                                                      ? 
                                                     ((0x18U 
                                                       == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                       ? 
                                                      (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                       >> 0x18U)
                                                       : 
                                                      ((0x19U 
                                                        == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                        ? 
                                                       (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                        >> 0x19U)
                                                        : 
                                                       ((0x1aU 
                                                         == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                         ? 
                                                        (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                         >> 0x1aU)
                                                         : 
                                                        ((0x1bU 
                                                          == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                          ? 
                                                         (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                          >> 0x1bU)
                                                          : 
                                                         ((0x1cU 
                                                           == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                           ? 
                                                          (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                           >> 0x1cU)
                                                           : 
                                                          ((0x1dU 
                                                            == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                            ? 
                                                           (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                            >> 0x1dU)
                                                            : 
                                                           ((0x1eU 
                                                             == vlSelf->top__DOT__singlecycle__DOT__operand_b)
                                                             ? 
                                                            (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                             >> 0x1eU)
                                                             : 
                                                            (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                             >> 0x1fU))))))))
                                                      : 0U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                       ^ (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                       ^ (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                       ^ (~ ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                      & (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                     | (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                    | vlSelf->top__DOT__singlecycle__DOT__operand_a)));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                      & (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                     | (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                    | vlSelf->top__DOT__singlecycle__DOT__operand_a)));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (1U & (((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                      & (~ ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))) 
                     | (~ ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))) 
                    | ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xffffffe1U & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5) 
               << 4U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5) 
                          << 3U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5) 
                                     << 2U) | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5) 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffffe1fU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5) 
               << 8U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5) 
                          << 7U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5) 
                                     << 6U) | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5) 
                                               << 5U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xffffe1ffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5) 
               << 0xcU) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5) 
                            << 0xbU) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5) 
                                         << 0xaU) | 
                                        ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5) 
                                         << 9U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffe1fffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5) 
               << 0x10U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5) 
                             << 0xfU) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5) 
                                          << 0xeU) 
                                         | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5) 
                                            << 0xdU)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xffe1ffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5) 
               << 0x14U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5) 
                             << 0x13U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5) 
                                           << 0x12U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5) 
                                             << 0x11U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xfe1fffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5) 
               << 0x18U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5) 
                             << 0x17U) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5) 
                                           << 0x16U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5) 
                                             << 0x15U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0xe1ffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5) 
               << 0x1cU) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5) 
                             << 0x1bU) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5) 
                                           << 0x1aU) 
                                          | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5) 
                                             << 0x19U)))));
    vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = ((0x1fffffffU & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5) 
               << 0x1fU) | (((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5) 
                             << 0x1eU) | ((IData)(top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5) 
                                          << 0x1dU))));
    vlSelf->top__DOT__singlecycle__DOT__br_less = (1U 
                                                   & ((IData)(vlSelf->top__DOT__singlecycle__DOT__br_un)
                                                       ? 
                                                      (~ 
                                                       (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                        >> 0x1fU))
                                                       : 
                                                      (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                                         >> 0x1fU) 
                                                        == 
                                                        (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                         >> 0x1fU))
                                                        ? 
                                                       (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned 
                                                        >> 0x1fU)
                                                        : 
                                                       (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                                        >> 0x1fU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 1U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 1U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 1U)) 
                                             & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 2U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 2U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 1U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 1U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 3U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 3U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 3U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 2U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 2U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 4U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 4U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 4U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 3U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 3U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 5U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 5U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 5U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 4U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 4U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 6U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 6U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 6U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 5U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 5U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 7U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 7U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 7U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 6U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 6U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 8U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 8U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 8U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 7U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 7U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 9U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 9U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 9U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                >> 8U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                               >> 8U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xaU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xaU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                    >> 9U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                 >> 9U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xbU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xbU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xaU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xaU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xcU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xcU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xbU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xbU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xdU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xdU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xcU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xcU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xeU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xeU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xdU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xdU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xfU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xfU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xfU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xeU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xeU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x10U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x10U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x10U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0xfU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x10U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0xfU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x11U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x11U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x11U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x10U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x11U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x10U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x12U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x12U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x12U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x11U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x12U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x11U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x13U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x13U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x13U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x12U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x13U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x12U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x14U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x14U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x14U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x13U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x14U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x13U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x15U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x15U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x15U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x14U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x15U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x14U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x16U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x16U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x16U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x15U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x16U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x15U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x17U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x17U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x17U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x16U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x17U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x16U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x18U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x18U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x18U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x17U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x18U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x17U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x19U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x19U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x19U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x18U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x19U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x18U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1aU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1aU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1aU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x19U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1aU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x19U))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1bU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1bU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1bU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1aU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1bU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1aU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1cU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1cU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1cU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1bU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1cU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1bU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1dU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1dU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1dU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1cU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1dU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1cU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1eU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1eU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1eU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1dU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1eU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1dU))));
    top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1fU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1fU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1eU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1fU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffffdU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (2U & (((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                            >> 1U)) << 1U)) ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                               << 1U))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffffbU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (4U & (((0xfffffffcU & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                            >> 2U)) << 2U)) ^ (0xfffffffcU 
                                               & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffff7U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (8U & (((0xfffffff8U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                            >> 3U)) << 3U)) ^ (0xfffffff8U 
                                               & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffffefU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x10U & (((0xfffffff0U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 4U)) << 4U)) ^ (0xfffffff0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffffdfU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x20U & (((0xffffffe0U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 5U)) << 5U)) ^ (0xffffffe0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffffbfU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x40U & (((0xffffffc0U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 6U)) << 6U)) ^ (0xffffffc0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffff7fU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x80U & (((0xffffff80U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 7U)) << 7U)) ^ (0xffffff80U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffeffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x100U & (((0xffffff00U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 8U)) << 8U)) ^ (0xffffff00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffdffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x200U & (((0xfffffe00U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 9U)) << 9U)) ^ (0xfffffe00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffffbffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x400U & (((0xfffffc00U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 0xaU)) << 0xaU)) 
                        ^ (0xfffffc00U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffff7ffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x800U & (((0xfffff800U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 0xbU)) << 0xbU)) 
                        ^ (0xfffff800U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffefffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x1000U & (((0xfffff000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xcU)) << 0xcU)) 
                         ^ (0xfffff000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffdfffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x2000U & (((0xffffe000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xdU)) << 0xdU)) 
                         ^ (0xffffe000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffffbfffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x4000U & (((0xffffc000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xeU)) << 0xeU)) 
                         ^ (0xffffc000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffff7fffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x8000U & (((0xffff8000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xfU)) << 0xfU)) 
                         ^ (0xffff8000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffeffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x10000U & (((0xffff0000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x10U)) << 0x10U)) 
                          ^ (0xffff0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffdffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x20000U & (((0xfffe0000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x11U)) << 0x11U)) 
                          ^ (0xfffe0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfffbffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x40000U & (((0xfffc0000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x12U)) << 0x12U)) 
                          ^ (0xfffc0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfff7ffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x80000U & (((0xfff80000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x13U)) << 0x13U)) 
                          ^ (0xfff80000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffefffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x100000U & (((0xfff00000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x14U)) << 0x14U)) 
                           ^ (0xfff00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffdfffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x200000U & (((0xffe00000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x15U)) << 0x15U)) 
                           ^ (0xffe00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xffbfffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x400000U & (((0xffc00000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x16U)) << 0x16U)) 
                           ^ (0xffc00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xff7fffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x800000U & (((0xff800000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x17U)) << 0x17U)) 
                           ^ (0xff800000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfeffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x1000000U & (((0xff000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x18U)) << 0x18U)) 
                            ^ (0xff000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfdffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x2000000U & (((0xfe000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x19U)) << 0x19U)) 
                            ^ (0xfe000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xfbffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x4000000U & (((0xfc000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1aU)) << 0x1aU)) 
                            ^ (0xfc000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xf7ffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x8000000U & (((0xf8000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1bU)) << 0x1bU)) 
                            ^ (0xf8000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xefffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x10000000U & (((0xf0000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1cU)) << 0x1cU)) 
                             ^ (0xf0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xdfffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x20000000U & (((0xe0000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1dU)) << 0x1dU)) 
                             ^ (0xe0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0xbfffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x40000000U & (((0xc0000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1eU)) << 0x1eU)) 
                             ^ (0xc0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum 
        = ((0x7fffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum) 
           | (0x80000000U & (((0x80000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1fU)) << 0x1fU)) 
                             ^ (0x80000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 1U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 1U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 1U)) 
                                             & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 2U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 2U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 1U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 1U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 3U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 3U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 3U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 2U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 2U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 4U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 4U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 4U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 3U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 3U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 5U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 5U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 5U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 4U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 4U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 6U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 6U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 6U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 5U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 5U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 7U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 7U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 7U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 6U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 6U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 8U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 8U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 8U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 7U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 7U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 9U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 9U))) | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                 >> 9U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                >> 8U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 8U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xaU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xaU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                    >> 9U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                 >> 9U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xbU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xbU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xaU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xaU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xcU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xcU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xbU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xbU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xdU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xdU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xcU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xcU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xeU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xeU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xdU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xdU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0xfU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0xfU))) | ((~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xfU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                    >> 0xeU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                 >> 0xeU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x10U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x10U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x10U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0xfU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x10U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0xfU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x11U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x11U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x11U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x10U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x11U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x10U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x12U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x12U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x12U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x11U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x12U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x11U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x13U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x13U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x13U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x12U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x13U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x12U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x14U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x14U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x14U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x13U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x14U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x13U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x15U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x15U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x15U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x14U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x15U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x14U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x16U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x16U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x16U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x15U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x16U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x15U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x17U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x17U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x17U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x16U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x17U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x16U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x18U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x18U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x18U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x17U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x18U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x17U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x19U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x19U))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x19U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x18U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x19U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x18U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1aU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1aU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1aU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x19U))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1aU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x19U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1bU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1bU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1bU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1aU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1bU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1aU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1cU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1cU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1cU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1bU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1cU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1bU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1dU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1dU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1dU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1cU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1dU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1cU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1eU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1eU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1eU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1dU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1eU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1dU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                    >> 0x1fU) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1fU))) | (
                                                   (~ 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      >> 0x1eU))) 
                 | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                     >> 0x1fU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffffdU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (2U & (((0xfffffffeU & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                            >> 1U)) << 1U)) ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                               << 1U))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffffbU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (4U & (((0xfffffffcU & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                            >> 2U)) << 2U)) ^ (0xfffffffcU 
                                               & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffff7U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (8U & (((0xfffffff8U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                     ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                            >> 3U)) << 3U)) ^ (0xfffffff8U 
                                               & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffffefU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x10U & (((0xfffffff0U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 4U)) << 4U)) ^ (0xfffffff0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffffdfU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x20U & (((0xffffffe0U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 5U)) << 5U)) ^ (0xffffffe0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffffbfU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x40U & (((0xffffffc0U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 6U)) << 6U)) ^ (0xffffffc0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffff7fU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x80U & (((0xffffff80U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                        ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                               >> 7U)) << 7U)) ^ (0xffffff80U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffeffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x100U & (((0xffffff00U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 8U)) << 8U)) ^ (0xffffff00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffdffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x200U & (((0xfffffe00U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 9U)) << 9U)) ^ (0xfffffe00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffffbffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x400U & (((0xfffffc00U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 0xaU)) << 0xaU)) 
                        ^ (0xfffffc00U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffff7ffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x800U & (((0xfffff800U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                         ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                >> 0xbU)) << 0xbU)) 
                        ^ (0xfffff800U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffefffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x1000U & (((0xfffff000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xcU)) << 0xcU)) 
                         ^ (0xfffff000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffdfffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x2000U & (((0xffffe000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xdU)) << 0xdU)) 
                         ^ (0xffffe000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffffbfffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x4000U & (((0xffffc000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xeU)) << 0xeU)) 
                         ^ (0xffffc000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffff7fffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x8000U & (((0xffff8000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                          ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                 >> 0xfU)) << 0xfU)) 
                         ^ (0xffff8000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffeffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x10000U & (((0xffff0000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x10U)) << 0x10U)) 
                          ^ (0xffff0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffdffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x20000U & (((0xfffe0000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x11U)) << 0x11U)) 
                          ^ (0xfffe0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfffbffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x40000U & (((0xfffc0000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x12U)) << 0x12U)) 
                          ^ (0xfffc0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfff7ffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x80000U & (((0xfff80000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                           ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                  >> 0x13U)) << 0x13U)) 
                          ^ (0xfff80000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffefffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x100000U & (((0xfff00000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x14U)) << 0x14U)) 
                           ^ (0xfff00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffdfffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x200000U & (((0xffe00000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x15U)) << 0x15U)) 
                           ^ (0xffe00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xffbfffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x400000U & (((0xffc00000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x16U)) << 0x16U)) 
                           ^ (0xffc00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xff7fffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x800000U & (((0xff800000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                            ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                   >> 0x17U)) << 0x17U)) 
                           ^ (0xff800000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfeffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x1000000U & (((0xff000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x18U)) << 0x18U)) 
                            ^ (0xff000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfdffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x2000000U & (((0xfe000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x19U)) << 0x19U)) 
                            ^ (0xfe000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xfbffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x4000000U & (((0xfc000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1aU)) << 0x1aU)) 
                            ^ (0xfc000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xf7ffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x8000000U & (((0xf8000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                             ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                    >> 0x1bU)) << 0x1bU)) 
                            ^ (0xf8000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xefffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x10000000U & (((0xf0000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1cU)) << 0x1cU)) 
                             ^ (0xf0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xdfffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x20000000U & (((0xe0000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1dU)) << 0x1dU)) 
                             ^ (0xe0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0xbfffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x40000000U & (((0xc0000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1eU)) << 0x1eU)) 
                             ^ (0xc0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
        = ((0x7fffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned) 
           | (0x80000000U & (((0x80000000U & vlSelf->top__DOT__singlecycle__DOT__operand_a) 
                              ^ ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                     >> 0x1fU)) << 0x1fU)) 
                             ^ (0x80000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                               << 1U)))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 1U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 1U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 1U)) 
                                             & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 2U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 2U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 1U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 1U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 3U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 3U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 3U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 2U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 2U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 4U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 4U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 4U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 3U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 3U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 5U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 5U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 5U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 4U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 4U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 6U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 6U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 6U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 5U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 5U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 7U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 7U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 7U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 6U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 6U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 8U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 8U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 8U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 7U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 7U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 9U) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 9U))) | ((~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                 >> 9U)) 
                                             & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 8U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 8U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0xaU) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0xaU))) | ((~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                    >> 9U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                 >> 9U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0xbU) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0xbU))) | ((~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                    >> 0xaU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                 >> 0xaU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0xcU) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0xcU))) | ((~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                    >> 0xbU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                 >> 0xbU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0xdU) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0xdU))) | ((~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                    >> 0xcU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                 >> 0xcU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0xeU) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0xeU))) | ((~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                    >> 0xdU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                 >> 0xdU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0xfU) & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0xfU))) | ((~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xfU)) 
                                                 & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                    >> 0xeU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                 >> 0xeU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x10U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x10U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x10U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0xfU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x10U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0xfU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x11U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x11U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x11U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x10U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x11U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x10U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x12U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x12U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x12U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x11U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x12U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x11U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x13U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x13U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x13U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x12U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x13U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x12U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x14U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x14U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x14U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x13U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x14U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x13U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x15U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x15U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x15U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x14U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x15U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x14U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x16U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x16U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x16U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x15U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x16U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x15U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x17U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x17U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x17U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x16U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x17U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x16U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x18U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x18U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x18U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x17U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x18U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x17U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x19U) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x19U))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x19U)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x18U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x19U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x18U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x1aU) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1aU))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x1aU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x19U))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x1aU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x19U))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x1bU) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1bU))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x1bU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x1aU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x1bU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x1aU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x1cU) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1cU))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x1cU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x1bU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x1cU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x1bU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x1dU) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1dU))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x1dU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x1cU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x1dU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x1cU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x1eU) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1eU))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x1eU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x1dU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x1eU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x1dU))));
    top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5 
        = (1U & ((((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                    >> 0x1fU) & (~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1fU))) | (
                                                   (~ 
                                                    (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                     >> 0x1fU)) 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      >> 0x1eU))) 
                 | ((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                     >> 0x1fU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0x1eU))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffffdU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (2U & (((0xfffffffeU & ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                     ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                            >> 1U)) << 1U)) ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                               << 1U))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffffbU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (4U & (((0xfffffffcU & ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                     ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                            >> 2U)) << 2U)) ^ (0xfffffffcU 
                                               & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffff7U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (8U & (((0xfffffff8U & ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                     ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                            >> 3U)) << 3U)) ^ (0xfffffff8U 
                                               & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffffefU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x10U & (((0xfffffff0U & ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                        ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                               >> 4U)) << 4U)) ^ (0xfffffff0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffffdfU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x20U & (((0xffffffe0U & ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                        ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                               >> 5U)) << 5U)) ^ (0xffffffe0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffffbfU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x40U & (((0xffffffc0U & ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                        ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                               >> 6U)) << 6U)) ^ (0xffffffc0U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffff7fU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x80U & (((0xffffff80U & ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                        ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                               >> 7U)) << 7U)) ^ (0xffffff80U 
                                                  & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                     << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffeffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x100U & (((0xffffff00U & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                         ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                >> 8U)) << 8U)) ^ (0xffffff00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffdffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x200U & (((0xfffffe00U & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                         ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                >> 9U)) << 9U)) ^ (0xfffffe00U 
                                                   & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                      << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffffbffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x400U & (((0xfffffc00U & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                         ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                >> 0xaU)) << 0xaU)) 
                        ^ (0xfffffc00U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffff7ffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x800U & (((0xfffff800U & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                         ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                >> 0xbU)) << 0xbU)) 
                        ^ (0xfffff800U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffefffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x1000U & (((0xfffff000U & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                          ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 0xcU)) << 0xcU)) 
                         ^ (0xfffff000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffdfffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x2000U & (((0xffffe000U & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                          ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 0xdU)) << 0xdU)) 
                         ^ (0xffffe000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffffbfffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x4000U & (((0xffffc000U & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                          ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 0xeU)) << 0xeU)) 
                         ^ (0xffffc000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffff7fffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x8000U & (((0xffff8000U & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                          ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                 >> 0xfU)) << 0xfU)) 
                         ^ (0xffff8000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                           << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffeffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x10000U & (((0xffff0000U & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                           ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                  >> 0x10U)) << 0x10U)) 
                          ^ (0xffff0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffdffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x20000U & (((0xfffe0000U & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                           ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                  >> 0x11U)) << 0x11U)) 
                          ^ (0xfffe0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfffbffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x40000U & (((0xfffc0000U & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                           ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                  >> 0x12U)) << 0x12U)) 
                          ^ (0xfffc0000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfff7ffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x80000U & (((0xfff80000U & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                           ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                  >> 0x13U)) << 0x13U)) 
                          ^ (0xfff80000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffefffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x100000U & (((0xfff00000U & ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                            ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0x14U)) << 0x14U)) 
                           ^ (0xfff00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffdfffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x200000U & (((0xffe00000U & ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                            ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0x15U)) << 0x15U)) 
                           ^ (0xffe00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xffbfffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x400000U & (((0xffc00000U & ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                            ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0x16U)) << 0x16U)) 
                           ^ (0xffc00000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xff7fffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x800000U & (((0xff800000U & ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                            ^ ((~ (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   >> 0x17U)) << 0x17U)) 
                           ^ (0xff800000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfeffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x1000000U & (((0xff000000U & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                             ^ ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x18U)) << 0x18U)) 
                            ^ (0xff000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfdffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x2000000U & (((0xfe000000U & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                             ^ ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x19U)) << 0x19U)) 
                            ^ (0xfe000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xfbffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x4000000U & (((0xfc000000U & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                             ^ ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1aU)) << 0x1aU)) 
                            ^ (0xfc000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xf7ffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x8000000U & (((0xf8000000U & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                             ^ ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    >> 0x1bU)) << 0x1bU)) 
                            ^ (0xf8000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                              << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xefffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x10000000U & (((0xf0000000U & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                              ^ ((~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0x1cU)) << 0x1cU)) 
                             ^ (0xf0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xdfffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x20000000U & (((0xe0000000U & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                              ^ ((~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0x1dU)) << 0x1dU)) 
                             ^ (0xe0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0xbfffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x40000000U & (((0xc0000000U & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                              ^ ((~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0x1eU)) << 0x1eU)) 
                             ^ (0xc0000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
        = ((0x7fffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed) 
           | (0x80000000U & (((0x80000000U & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))) 
                              ^ ((~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0x1fU)) << 0x1fU)) 
                             ^ (0x80000000U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__pc_sel = (1U 
                                                  & (IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x70U 
                                                               & vlSelf->top__DOT__singlecycle__DOT__instr)) 
                                                             & ((8U 
                                                                 & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                 ? (IData)(
                                                                           (7U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->top__DOT__singlecycle__DOT__instr)))
                                                                 : 
                                                                ((4U 
                                                                  & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                  ? 
                                                                 ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                                   >> 1U) 
                                                                  & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                  : 
                                                                 ((vlSelf->top__DOT__singlecycle__DOT__instr 
                                                                   >> 1U) 
                                                                  & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                                     & ((0x4000U 
                                                                         & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                         ? 
                                                                        ((0x2000U 
                                                                          & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                          ? 
                                                                         ((0x1000U 
                                                                           & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                           ? 
                                                                          (~ (IData)(vlSelf->top__DOT__singlecycle__DOT__br_less))
                                                                           : (IData)(vlSelf->top__DOT__singlecycle__DOT__br_less))
                                                                          : 
                                                                         ((0x1000U 
                                                                           & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                           ? 
                                                                          (~ (IData)(vlSelf->top__DOT__singlecycle__DOT__br_less))
                                                                           : (IData)(vlSelf->top__DOT__singlecycle__DOT__br_less)))
                                                                         : 
                                                                        ((~ 
                                                                          (vlSelf->top__DOT__singlecycle__DOT__instr 
                                                                           >> 0xdU)) 
                                                                         & ((0x1000U 
                                                                             & vlSelf->top__DOT__singlecycle__DOT__instr)
                                                                             ? 
                                                                            (~ (IData)(vlSelf->top__DOT__singlecycle__DOT__br_equal))
                                                                             : (IData)(vlSelf->top__DOT__singlecycle__DOT__br_equal)))))))))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xffffffe1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5) 
               << 4U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5) 
                          << 3U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5) 
                                     << 2U) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5) 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffffe1fU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5) 
               << 8U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5) 
                          << 7U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5) 
                                     << 6U) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5) 
                                               << 5U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xffffe1ffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5) 
               << 0xcU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5) 
                            << 0xbU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5) 
                                         << 0xaU) | 
                                        ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5) 
                                         << 9U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffe1fffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5) 
               << 0x10U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5) 
                             << 0xfU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5) 
                                          << 0xeU) 
                                         | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5) 
                                            << 0xdU)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xffe1ffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5) 
               << 0x14U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5) 
                             << 0x13U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5) 
                                           << 0x12U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5) 
                                             << 0x11U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xfe1fffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5) 
               << 0x18U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5) 
                             << 0x17U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5) 
                                           << 0x16U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5) 
                                             << 0x15U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0xe1ffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5) 
               << 0x1cU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5) 
                             << 0x1bU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5) 
                                           << 0x1aU) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5) 
                                             << 0x19U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = ((0x1fffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5) 
               << 0x1fU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5) 
                             << 0x1eU) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5) 
                                          << 0x1dU))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xffffffe1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5) 
               << 4U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5) 
                          << 3U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5) 
                                     << 2U) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5) 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffffe1fU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5) 
               << 8U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5) 
                          << 7U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5) 
                                     << 6U) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5) 
                                               << 5U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xffffe1ffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5) 
               << 0xcU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5) 
                            << 0xbU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5) 
                                         << 0xaU) | 
                                        ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5) 
                                         << 9U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xfffe1fffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5) 
               << 0x10U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5) 
                             << 0xfU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5) 
                                          << 0xeU) 
                                         | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5) 
                                            << 0xdU)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xffe1ffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5) 
               << 0x14U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5) 
                             << 0x13U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5) 
                                           << 0x12U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5) 
                                             << 0x11U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xfe1fffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5) 
               << 0x18U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5) 
                             << 0x17U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5) 
                                           << 0x16U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5) 
                                             << 0x15U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0xe1ffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5) 
               << 0x1cU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5) 
                             << 0x1bU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5) 
                                           << 0x1aU) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5) 
                                             << 0x19U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = ((0x1fffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5) 
               << 0x1fU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5) 
                             << 0x1eU) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5) 
                                          << 0x1dU))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xffffffe1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__4__KET____DOT__full_adder____pinNumber5) 
               << 4U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__3__KET____DOT__full_adder____pinNumber5) 
                          << 3U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__2__KET____DOT__full_adder____pinNumber5) 
                                     << 2U) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__1__KET____DOT__full_adder____pinNumber5) 
                                               << 1U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xfffffe1fU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__8__KET____DOT__full_adder____pinNumber5) 
               << 8U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__7__KET____DOT__full_adder____pinNumber5) 
                          << 7U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__6__KET____DOT__full_adder____pinNumber5) 
                                     << 6U) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__5__KET____DOT__full_adder____pinNumber5) 
                                               << 5U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xffffe1ffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__12__KET____DOT__full_adder____pinNumber5) 
               << 0xcU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__11__KET____DOT__full_adder____pinNumber5) 
                            << 0xbU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__10__KET____DOT__full_adder____pinNumber5) 
                                         << 0xaU) | 
                                        ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__9__KET____DOT__full_adder____pinNumber5) 
                                         << 9U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xfffe1fffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__16__KET____DOT__full_adder____pinNumber5) 
               << 0x10U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__15__KET____DOT__full_adder____pinNumber5) 
                             << 0xfU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__14__KET____DOT__full_adder____pinNumber5) 
                                          << 0xeU) 
                                         | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__13__KET____DOT__full_adder____pinNumber5) 
                                            << 0xdU)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xffe1ffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__20__KET____DOT__full_adder____pinNumber5) 
               << 0x14U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__19__KET____DOT__full_adder____pinNumber5) 
                             << 0x13U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__18__KET____DOT__full_adder____pinNumber5) 
                                           << 0x12U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__17__KET____DOT__full_adder____pinNumber5) 
                                             << 0x11U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xfe1fffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__24__KET____DOT__full_adder____pinNumber5) 
               << 0x18U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__23__KET____DOT__full_adder____pinNumber5) 
                             << 0x17U) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__22__KET____DOT__full_adder____pinNumber5) 
                                           << 0x16U) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__21__KET____DOT__full_adder____pinNumber5) 
                                             << 0x15U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0xe1ffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__28__KET____DOT__full_adder____pinNumber5) 
               << 0x1cU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__27__KET____DOT__full_adder____pinNumber5) 
                             << 0x1bU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__26__KET____DOT__full_adder____pinNumber5) 
                                           << 0x1aU) 
                                          | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__25__KET____DOT__full_adder____pinNumber5) 
                                             << 0x19U)))));
    vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = ((0x1fffffffU & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c) 
           | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__31__KET____DOT__full_adder____pinNumber5) 
               << 0x1fU) | (((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__30__KET____DOT__full_adder____pinNumber5) 
                             << 0x1eU) | ((IData)(top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT____Vcellout__create_adder__BRA__29__KET____DOT__full_adder____pinNumber5) 
                                          << 0x1dU))));
    vlSelf->top__DOT__singlecycle__DOT__alu_data = 
        ((8U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
          ? ((4U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
              ? 0xffffffffU : ((2U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                                ? 0xffffffffU : ((1U 
                                                  & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                                                  ? vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_arithmetic_result
                                                  : vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result)))
          : ((4U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                      ? vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result
                      : (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                         & vlSelf->top__DOT__singlecycle__DOT__operand_b))
                  : ((1U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                         | vlSelf->top__DOT__singlecycle__DOT__operand_b)
                      : (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singlecycle__DOT__operand_b)))
              : ((2U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                      ? (1U & (~ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                  >> 0x1fU))) : (1U 
                                                 & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 0x1fU) 
                                                     == 
                                                     (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                      >> 0x1fU))
                                                     ? 
                                                    ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                      >> 0x1fU)
                                                      ? 
                                                     (~ 
                                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
                                                       >> 0x1fU))
                                                      : 
                                                     (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
                                                      >> 0x1fU))
                                                     : 
                                                    (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                                     >> 0x1fU))))
                  : ((1U & (IData)(vlSelf->top__DOT__singlecycle__DOT__alu_op))
                      ? ((IData)(1U) + (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))
                      : (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                         + vlSelf->top__DOT__singlecycle__DOT__operand_b)))));
    vlSelf->top__DOT__singlecycle__DOT__pc_next = ((IData)(vlSelf->top__DOT__singlecycle__DOT__pc_sel)
                                                    ? vlSelf->top__DOT__singlecycle__DOT__alu_data
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__singlecycle__DOT__pc));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->i_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__i_clk))) 
         | ((~ (IData)(vlSelf->i_rst_n)) & (IData)(vlSelf->__Vclklast__TOP__i_rst_n)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vclklast__TOP__i_rst_n = vlSelf->i_rst_n;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)
         | (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)
         | (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)
         | (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c))) VL_DBG_MSGF("        CHANGE: ../src/full_adder_32_bit.sv:12: top.singlecycle.brc.full_adder_unsigned.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c))) VL_DBG_MSGF("        CHANGE: ../src/full_adder_32_bit.sv:12: top.singlecycle.alu.slt.full_adder_unsigned.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c))) VL_DBG_MSGF("        CHANGE: ../src/full_adder_32_bit.sv:12: top.singlecycle.alu.slt.full_adder_signed.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c))) VL_DBG_MSGF("        CHANGE: ../src/full_adder_32_bit.sv:12: top.singlecycle.alu.sltu.full_adder_unsigned.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
        = vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
        = vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
        = vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
        = vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_rst_n & 0xfeU))) {
        Verilated::overWidthError("i_rst_n");}
    if (VL_UNLIKELY((vlSelf->i_io_btn & 0xf0U))) {
        Verilated::overWidthError("i_io_btn");}
    if (VL_UNLIKELY((vlSelf->__pinNumber9 & 0xfeU))) {
        Verilated::overWidthError("__pinNumber9");}
}
#endif  // VL_DEBUG
