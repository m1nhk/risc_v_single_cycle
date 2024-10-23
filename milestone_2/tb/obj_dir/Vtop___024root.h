// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);
    VL_IN8(i_io_btn,3,0);
    VL_OUT8(o_insn_vld,0,0);
    CData/*0:0*/ top__DOT__singlecycle__DOT__pc_sel;
    CData/*0:0*/ top__DOT__singlecycle__DOT__rd_wren;
    CData/*0:0*/ top__DOT__singlecycle__DOT__br_un;
    CData/*0:0*/ top__DOT__singlecycle__DOT__br_less;
    CData/*0:0*/ top__DOT__singlecycle__DOT__br_equal;
    CData/*0:0*/ top__DOT__singlecycle__DOT__op_a;
    CData/*0:0*/ top__DOT__singlecycle__DOT__op_b;
    CData/*3:0*/ top__DOT__singlecycle__DOT__alu_op;
    CData/*0:0*/ top__DOT__singlecycle__DOT__mem_wren;
    CData/*1:0*/ top__DOT__singlecycle__DOT__wb_sel;
    CData/*0:0*/ __Vdlyvset__top__DOT__singlecycle__DOT__lsu__DOT__data_mem__v0;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_rst_n;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__singlecycle__DOT__lsu__DOT__data_mem__v0;
    VL_IN(i_io_sw,31,0);
    VL_OUT(o_pc_debug,31,0);
    VL_OUT(o_io_lcd,31,0);
    VL_OUT(o_io_ledg,31,0);
    VL_OUT(o_io_ledr,31,0);
    IData/*31:0*/ top__DOT__singlecycle__DOT__pc_next;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu_data;
    IData/*31:0*/ top__DOT__singlecycle__DOT__pc;
    IData/*31:0*/ top__DOT__singlecycle__DOT__instr;
    IData/*31:0*/ top__DOT__singlecycle__DOT__rs1_data;
    IData/*31:0*/ top__DOT__singlecycle__DOT__rs2_data;
    IData/*31:0*/ top__DOT__singlecycle__DOT__imm;
    IData/*31:0*/ top__DOT__singlecycle__DOT__operand_a;
    IData/*31:0*/ top__DOT__singlecycle__DOT__operand_b;
    IData/*31:0*/ top__DOT__singlecycle__DOT__ld_data;
    IData/*31:0*/ top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned;
    IData/*31:0*/ top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__shift_left_result;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__shift_right_result;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__shift_right_arithmetic_result;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum;
    IData/*31:0*/ top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c;
    IData/*31:0*/ top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg;
    IData/*31:0*/ top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg;
    IData/*31:0*/ top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg;
    IData/*31:0*/ __Vdly__top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg;
    IData/*31:0*/ __Vdly__top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg;
    IData/*31:0*/ __Vdly__top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg;
    IData/*31:0*/ __Vdlyvval__top__DOT__singlecycle__DOT__lsu__DOT__data_mem__v0;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c;
    VlUnpacked<IData/*31:0*/, 2048> top__DOT__singlecycle__DOT__imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__singlecycle__DOT__regfile__DOT__register;
    VlUnpacked<IData/*31:0*/, 8192> top__DOT__singlecycle__DOT__lsu__DOT__data_mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
