// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc)),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__singlecycle__DOT__pc),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__singlecycle__DOT__ld_data),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__singlecycle__DOT__pc_sel));
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__singlecycle__DOT__alu_data),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__singlecycle__DOT__instr),32);
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__singlecycle__DOT__rd_wren));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__singlecycle__DOT__rs1_data),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__singlecycle__DOT__rs2_data),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__singlecycle__DOT__imm),32);
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__singlecycle__DOT__br_un));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__singlecycle__DOT__br_less));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__singlecycle__DOT__br_equal));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__singlecycle__DOT__op_a));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__singlecycle__DOT__op_b));
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__singlecycle__DOT__operand_a),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__singlecycle__DOT__operand_b),32);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__singlecycle__DOT__alu_op),4);
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__singlecycle__DOT__mem_wren));
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__singlecycle__DOT__wb_sel),2);
        bufp->chgBit(oldp+55,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1fU) == 
                                      (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                       >> 0x1fU)) ? 
                                     ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1fU) ? 
                                      (~ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
                                          >> 0x1fU))
                                       : (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
                                          >> 0x1fU))
                                      : (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+56,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                        >> 0x1fU)))));
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_arithmetic_result),32);
        bufp->chgCData(oldp+60,((0x1fU & vlSelf->top__DOT__singlecycle__DOT__operand_b)),5);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed),32);
        bufp->chgBit(oldp+63,((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                               >> 0x1fU)));
        bufp->chgBit(oldp+64,((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                               >> 0x1fU)));
        bufp->chgIData(oldp+65,(((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))),32);
        bufp->chgIData(oldp+66,(((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))),32);
        bufp->chgIData(oldp+67,((~ ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c),32);
        bufp->chgBit(oldp+69,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+70,((1U & (~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 9U))));
        bufp->chgBit(oldp+72,((1U & (((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0xaU) ^ (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0xaU))) 
                                     ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                        >> 9U)))));
        bufp->chgBit(oldp+73,((1U & ((((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0xaU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0xaU))) 
                                      | ((~ (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                             >> 0xaU)) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 9U))) 
                                     | ((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0xaU) & 
                                        (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 9U))))));
        bufp->chgBit(oldp+74,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+75,((1U & (~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xaU))));
        bufp->chgBit(oldp+77,((1U & (((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0xbU) ^ (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0xbU))) 
                                     ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+78,((1U & ((((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0xbU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0xbU))) 
                                      | ((~ (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                             >> 0xbU)) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0xaU))) 
                                     | ((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0xbU) & 
                                        (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xaU))))));
        bufp->chgBit(oldp+79,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+80,((1U & (~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xbU))));
        bufp->chgBit(oldp+82,((1U & (((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0xcU) ^ (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0xcU))) 
                                     ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+83,((1U & ((((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0xcU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0xcU))) 
                                      | ((~ (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                             >> 0xcU)) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0xbU))) 
                                     | ((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xbU))))));
        bufp->chgBit(oldp+84,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+85,((1U & (~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xcU))));
        bufp->chgBit(oldp+87,((1U & (((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0xdU) ^ (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0xdU))) 
                                     ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+88,((1U & ((((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0xdU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0xdU))) 
                                      | ((~ (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                             >> 0xdU)) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0xcU))) 
                                     | ((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0xdU) & 
                                        (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xcU))))));
        bufp->chgBit(oldp+89,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+90,((1U & (~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xdU))));
        bufp->chgBit(oldp+92,((1U & (((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0xeU) ^ (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0xeU))) 
                                     ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+93,((1U & ((((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0xeU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0xeU))) 
                                      | ((~ (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                             >> 0xeU)) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0xdU))) 
                                     | ((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0xeU) & 
                                        (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xdU))))));
        bufp->chgBit(oldp+94,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+95,((1U & (~ (((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                        >> 0xfU)))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xeU))));
        bufp->chgBit(oldp+97,((1U & (((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0xfU) ^ (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0xfU))) 
                                     ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+98,((1U & ((((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0xfU) & 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0xfU))) 
                                      | ((~ (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                             >> 0xfU)) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0xeU))) 
                                     | ((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0xfU) & 
                                        (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xeU))))));
        bufp->chgBit(oldp+99,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x10U))));
        bufp->chgBit(oldp+100,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+101,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+102,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x10U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x10U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+103,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x10U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x10U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x10U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0xfU))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x10U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+104,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+105,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+107,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x11U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x11U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+108,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x11U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x11U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x11U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x10U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x11U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+109,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+110,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+111,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+112,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x12U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x12U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+113,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x12U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x12U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x12U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x11U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+114,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+115,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+117,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x13U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x13U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+118,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x13U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x13U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x13U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x12U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x13U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+119,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 1U))));
        bufp->chgBit(oldp+120,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 1U)))));
        bufp->chgBit(oldp+121,((1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)));
        bufp->chgBit(oldp+122,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 1U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 1U))) 
                                      ^ vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c))));
        bufp->chgBit(oldp+123,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 1U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 1U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 1U)) 
                                          & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)))));
        bufp->chgBit(oldp+124,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+125,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+126,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+127,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x14U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x14U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+128,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x14U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x14U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x14U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x13U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x14U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+129,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+130,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+131,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+132,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x15U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x15U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+133,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x15U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x15U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x15U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x14U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+134,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+135,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+137,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x16U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x16U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+138,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x16U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x16U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x16U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x15U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x16U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+139,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+140,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+141,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+142,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x17U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x17U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+143,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x17U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x17U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x17U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x16U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x17U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+144,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+145,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+147,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x18U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x18U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+148,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x18U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x18U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x18U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x17U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+149,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+150,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+151,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+152,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x19U) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x19U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+153,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x19U) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x19U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x19U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x18U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x19U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+154,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+155,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+157,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x1aU) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1aU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+158,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x1aU) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1aU))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1aU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x19U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x1aU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+159,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+160,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+161,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+162,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x1bU) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1bU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+163,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x1bU) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1bU))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1bU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x1aU))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+164,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+165,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+166,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+167,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x1cU) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1cU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+168,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x1cU) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1cU))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1cU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x1bU))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x1cU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+169,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+170,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+171,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+172,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x1dU) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1dU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+173,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x1dU) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1dU))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1dU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x1cU))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x1dU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+174,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 2U))));
        bufp->chgBit(oldp+175,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 2U)))));
        bufp->chgBit(oldp+176,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+177,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 2U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 2U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 1U)))));
        bufp->chgBit(oldp+178,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 2U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 2U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 2U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 1U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 2U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 1U))))));
        bufp->chgBit(oldp+179,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+180,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+181,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+182,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x1eU) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1eU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+183,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x1eU) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1eU))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1eU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x1dU))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+184,((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+185,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+186,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+187,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 0x1fU) ^ 
                                       (~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1fU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+188,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 0x1fU) 
                                        & (~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1fU))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 0x1fU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 0x1eU))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 0x1fU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+189,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 3U))));
        bufp->chgBit(oldp+190,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 3U)))));
        bufp->chgBit(oldp+191,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+192,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 3U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 3U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 2U)))));
        bufp->chgBit(oldp+193,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 3U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 3U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 3U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 2U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 3U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 2U))))));
        bufp->chgBit(oldp+194,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 4U))));
        bufp->chgBit(oldp+195,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 4U)))));
        bufp->chgBit(oldp+196,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+197,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 4U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 4U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 3U)))));
        bufp->chgBit(oldp+198,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 4U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 4U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 4U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 3U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 4U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 3U))))));
        bufp->chgBit(oldp+199,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 5U))));
        bufp->chgBit(oldp+200,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+201,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+202,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 5U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 5U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 4U)))));
        bufp->chgBit(oldp+203,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 5U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 5U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 5U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 4U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 4U))))));
        bufp->chgBit(oldp+204,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 6U))));
        bufp->chgBit(oldp+205,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+206,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+207,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 6U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 6U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 5U)))));
        bufp->chgBit(oldp+208,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 6U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 6U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 6U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 5U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 6U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 5U))))));
        bufp->chgBit(oldp+209,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 7U))));
        bufp->chgBit(oldp+210,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 7U)))));
        bufp->chgBit(oldp+211,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+212,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 7U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 7U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 6U)))));
        bufp->chgBit(oldp+213,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 7U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 7U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 7U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 6U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 7U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 6U))))));
        bufp->chgBit(oldp+214,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 8U))));
        bufp->chgBit(oldp+215,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 8U)))));
        bufp->chgBit(oldp+216,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+217,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 8U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 8U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 7U)))));
        bufp->chgBit(oldp+218,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 8U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 8U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 8U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 7U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 7U))))));
        bufp->chgBit(oldp+219,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 9U))));
        bufp->chgBit(oldp+220,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                         >> 9U)))));
        bufp->chgBit(oldp+221,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 8U))));
        bufp->chgBit(oldp+222,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        >> 9U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 9U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 8U)))));
        bufp->chgBit(oldp+223,((1U & ((((((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         >> 9U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 9U))) 
                                       | ((~ (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                              >> 9U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                             >> 8U))) 
                                      | ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                          >> 9U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 8U))))));
        bufp->chgBit(oldp+224,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)))));
        bufp->chgBit(oldp+225,((1U & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))))));
        bufp->chgBit(oldp+226,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                         ^ (~ ((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))))))));
        bufp->chgBit(oldp+227,((1U & (((((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                        & (~ ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))) 
                                       | (~ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))) 
                                      | ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))))));
        bufp->chgIData(oldp+228,((~ vlSelf->top__DOT__singlecycle__DOT__operand_b)),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c),32);
        bufp->chgBit(oldp+230,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xaU))));
        bufp->chgBit(oldp+231,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+232,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 9U))));
        bufp->chgBit(oldp+233,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xaU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xaU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 9U)))));
        bufp->chgBit(oldp+234,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xaU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xaU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xaU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 9U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xaU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 9U))))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xbU))));
        bufp->chgBit(oldp+236,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xaU))));
        bufp->chgBit(oldp+238,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xbU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xbU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+239,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xbU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xbU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xbU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xaU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+240,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xcU))));
        bufp->chgBit(oldp+241,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+242,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xbU))));
        bufp->chgBit(oldp+243,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xcU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xcU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+244,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xcU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xcU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xcU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xbU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xcU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+245,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xdU))));
        bufp->chgBit(oldp+246,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+247,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xcU))));
        bufp->chgBit(oldp+248,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xdU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xdU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+249,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xdU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xdU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xdU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xcU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xdU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+250,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xeU))));
        bufp->chgBit(oldp+251,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xdU))));
        bufp->chgBit(oldp+253,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xeU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xeU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+254,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xeU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xeU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xeU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xdU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+255,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xfU))));
        bufp->chgBit(oldp+256,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xeU))));
        bufp->chgBit(oldp+258,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xfU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xfU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+259,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xfU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xfU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xeU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xfU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+260,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x10U))));
        bufp->chgBit(oldp+261,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+263,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x10U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x10U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+264,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x10U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x10U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xfU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x10U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x11U))));
        bufp->chgBit(oldp+266,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+267,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+268,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x11U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x11U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+269,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x11U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x11U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x10U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x11U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+270,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x12U))));
        bufp->chgBit(oldp+271,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+273,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x12U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x12U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+274,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x12U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x12U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x11U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x13U))));
        bufp->chgBit(oldp+276,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+277,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+278,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x13U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x13U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+279,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x13U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x13U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x12U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x13U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+280,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 1U))));
        bufp->chgBit(oldp+281,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 1U)))));
        bufp->chgBit(oldp+282,((1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)));
        bufp->chgBit(oldp+283,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 1U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 1U))) 
                                      ^ vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c))));
        bufp->chgBit(oldp+284,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 1U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 1U)) 
                                          & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)))));
        bufp->chgBit(oldp+285,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x14U))));
        bufp->chgBit(oldp+286,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+288,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x14U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x14U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+289,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x14U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x14U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x13U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x14U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+290,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x15U))));
        bufp->chgBit(oldp+291,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+293,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x15U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x15U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+294,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x15U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x15U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x14U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+295,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x16U))));
        bufp->chgBit(oldp+296,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+297,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+298,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x16U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x16U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+299,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x16U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x16U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x15U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x16U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+300,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x17U))));
        bufp->chgBit(oldp+301,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+302,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+303,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x17U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x17U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+304,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x17U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x17U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x16U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x17U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+305,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x18U))));
        bufp->chgBit(oldp+306,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+307,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+308,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x18U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x18U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+309,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x18U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x18U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x17U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+310,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x19U))));
        bufp->chgBit(oldp+311,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+312,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+313,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x19U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x19U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+314,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x19U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x19U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x18U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x19U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+315,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+316,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+317,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+318,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1aU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1aU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+319,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1aU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1aU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x19U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1aU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+320,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+321,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+322,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+323,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1bU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1bU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+324,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1bU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1bU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1aU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+325,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+326,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+327,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+328,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1cU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1cU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+329,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1cU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1cU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1cU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+331,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+332,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+333,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1dU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1dU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+334,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1dU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1dU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1cU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1dU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+335,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 2U))));
        bufp->chgBit(oldp+336,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 2U)))));
        bufp->chgBit(oldp+337,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+338,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 2U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 2U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 1U)))));
        bufp->chgBit(oldp+339,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 2U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 2U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 2U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 1U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 2U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 1U))))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+341,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+343,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1eU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1eU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+344,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1eU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1eU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1dU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+345,((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                >> 0x1fU)));
        bufp->chgBit(oldp+346,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+347,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+348,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1fU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1fU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+349,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1fU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1fU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1fU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1fU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+350,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 3U))));
        bufp->chgBit(oldp+351,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 3U)))));
        bufp->chgBit(oldp+352,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+353,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 3U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 3U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 2U)))));
        bufp->chgBit(oldp+354,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 3U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 3U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 3U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 2U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 3U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 2U))))));
        bufp->chgBit(oldp+355,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 4U))));
        bufp->chgBit(oldp+356,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 4U)))));
        bufp->chgBit(oldp+357,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+358,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 4U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 4U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 3U)))));
        bufp->chgBit(oldp+359,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 4U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 4U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 4U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 3U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 4U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 3U))))));
        bufp->chgBit(oldp+360,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 5U))));
        bufp->chgBit(oldp+361,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 5U)))));
        bufp->chgBit(oldp+362,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+363,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 5U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 5U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 4U)))));
        bufp->chgBit(oldp+364,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 5U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 5U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 5U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 4U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 4U))))));
        bufp->chgBit(oldp+365,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 6U))));
        bufp->chgBit(oldp+366,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 6U)))));
        bufp->chgBit(oldp+367,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+368,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 6U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 6U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 5U)))));
        bufp->chgBit(oldp+369,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 6U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 6U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 6U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 5U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 6U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 5U))))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 7U))));
        bufp->chgBit(oldp+371,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 7U)))));
        bufp->chgBit(oldp+372,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+373,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 7U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 7U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 6U)))));
        bufp->chgBit(oldp+374,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 7U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 7U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 7U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 6U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 7U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 6U))))));
        bufp->chgBit(oldp+375,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 8U))));
        bufp->chgBit(oldp+376,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 8U)))));
        bufp->chgBit(oldp+377,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+378,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 8U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 8U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 7U)))));
        bufp->chgBit(oldp+379,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 8U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 8U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 8U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 7U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 7U))))));
        bufp->chgBit(oldp+380,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 9U))));
        bufp->chgBit(oldp+381,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                         >> 9U)))));
        bufp->chgBit(oldp+382,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 8U))));
        bufp->chgBit(oldp+383,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 9U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 9U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                         >> 8U)))));
        bufp->chgBit(oldp+384,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 9U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 9U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 9U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                             >> 8U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 9U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 8U))))));
        bufp->chgBit(oldp+385,((1U & vlSelf->top__DOT__singlecycle__DOT__operand_a)));
        bufp->chgBit(oldp+386,((1U & (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))));
        bufp->chgBit(oldp+387,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         ^ (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))))));
        bufp->chgBit(oldp+388,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        & (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                       | (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      | vlSelf->top__DOT__singlecycle__DOT__operand_a))));
        bufp->chgIData(oldp+389,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum),32);
        bufp->chgBit(oldp+390,((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                >> 0x1fU)));
        bufp->chgIData(oldp+391,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c),32);
        bufp->chgBit(oldp+392,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 9U))));
        bufp->chgBit(oldp+393,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xaU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xaU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 9U)))));
        bufp->chgBit(oldp+394,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xaU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xaU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xaU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 9U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xaU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 9U))))));
        bufp->chgBit(oldp+395,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xaU))));
        bufp->chgBit(oldp+396,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xbU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xbU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+397,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xbU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xbU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xbU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xaU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+398,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xbU))));
        bufp->chgBit(oldp+399,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xcU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xcU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+400,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xcU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xcU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xcU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xbU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xcU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+401,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xcU))));
        bufp->chgBit(oldp+402,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xdU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xdU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+403,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xdU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xdU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xdU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xcU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xdU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+404,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xdU))));
        bufp->chgBit(oldp+405,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xeU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xeU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+406,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xeU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xeU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xeU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xdU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xeU))));
        bufp->chgBit(oldp+408,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0xfU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xfU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+409,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                            >> 0xfU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0xfU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xeU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0xfU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+410,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+411,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x10U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x10U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+412,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x10U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x10U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xfU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x10U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+413,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+414,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x11U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x11U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+415,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x11U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x11U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x10U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x11U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+416,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+417,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x12U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x12U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+418,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x12U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x12U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x11U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+419,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+420,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x13U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x13U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+421,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x13U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x13U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x12U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x13U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+422,((1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)));
        bufp->chgBit(oldp+423,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 1U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 1U))) 
                                      ^ vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c))));
        bufp->chgBit(oldp+424,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 1U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 1U)) 
                                          & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)))));
        bufp->chgBit(oldp+425,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+426,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x14U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x14U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+427,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x14U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x14U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x13U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x14U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+428,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+429,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x15U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x15U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+430,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x15U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x15U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x14U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+431,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+432,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x16U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x16U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+433,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x16U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x16U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x15U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x16U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+434,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+435,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x17U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x17U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+436,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x17U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x17U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x16U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x17U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+437,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+438,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x18U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x18U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+439,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x18U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x18U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x17U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+440,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+441,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x19U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x19U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+442,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x19U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x19U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x18U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x19U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+443,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+444,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1aU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1aU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+445,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1aU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1aU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x19U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1aU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+446,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+447,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1bU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1bU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+448,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1bU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1bU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1aU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+449,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+450,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1cU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1cU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+451,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1cU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1cU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1cU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+452,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+453,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1dU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1dU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+454,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1dU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1dU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1cU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1dU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+456,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 2U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 2U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 1U)))));
        bufp->chgBit(oldp+457,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 2U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 2U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 2U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 1U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 2U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 1U))))));
        bufp->chgBit(oldp+458,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+459,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1eU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1eU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+460,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1eU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1eU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1dU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+462,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1fU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1fU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+463,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1fU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1fU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 0x1fU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1fU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+464,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+465,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 3U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 3U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 2U)))));
        bufp->chgBit(oldp+466,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 3U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 3U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 3U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 2U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 3U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 2U))))));
        bufp->chgBit(oldp+467,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+468,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 4U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 4U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 3U)))));
        bufp->chgBit(oldp+469,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 4U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 4U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 4U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 3U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 4U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 3U))))));
        bufp->chgBit(oldp+470,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+471,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 5U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 5U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 4U)))));
        bufp->chgBit(oldp+472,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 5U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 5U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 5U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 4U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 4U))))));
        bufp->chgBit(oldp+473,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+474,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 6U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 6U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 5U)))));
        bufp->chgBit(oldp+475,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 6U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 6U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 6U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 5U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 6U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 5U))))));
        bufp->chgBit(oldp+476,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+477,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 7U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 7U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 6U)))));
        bufp->chgBit(oldp+478,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 7U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 7U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 7U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 6U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 7U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 6U))))));
        bufp->chgBit(oldp+479,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+480,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 8U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 8U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 7U)))));
        bufp->chgBit(oldp+481,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 8U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 8U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 8U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 7U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 7U))))));
        bufp->chgBit(oldp+482,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 8U))));
        bufp->chgBit(oldp+483,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                        >> 9U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 9U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                         >> 8U)))));
        bufp->chgBit(oldp+484,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                         >> 9U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 9U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                              >> 9U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                             >> 8U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                          >> 9U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 8U))))));
        bufp->chgIData(oldp+485,(vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned),32);
        bufp->chgBit(oldp+486,((vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                >> 0x1fU)));
        bufp->chgIData(oldp+487,((~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)),32);
        bufp->chgIData(oldp+488,(vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c),32);
        bufp->chgBit(oldp+489,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+490,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+491,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 9U))));
        bufp->chgBit(oldp+492,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0xaU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xaU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 9U)))));
        bufp->chgBit(oldp+493,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0xaU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                            >> 0xaU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0xaU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 9U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0xaU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 9U))))));
        bufp->chgBit(oldp+494,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+495,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+496,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xaU))));
        bufp->chgBit(oldp+497,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0xbU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xbU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+498,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0xbU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                            >> 0xbU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0xbU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xaU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xaU))))));
        bufp->chgBit(oldp+499,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+500,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+501,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xbU))));
        bufp->chgBit(oldp+502,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0xcU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xcU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+503,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0xcU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                            >> 0xcU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0xcU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xbU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0xcU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xbU))))));
        bufp->chgBit(oldp+504,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+505,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+506,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xcU))));
        bufp->chgBit(oldp+507,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0xdU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xdU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+508,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0xdU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                            >> 0xdU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0xdU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xcU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0xdU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+509,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+510,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+511,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xdU))));
        bufp->chgBit(oldp+512,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0xeU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xeU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+513,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0xeU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                            >> 0xeU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0xeU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xdU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xdU))))));
        bufp->chgBit(oldp+514,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+515,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+516,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xeU))));
        bufp->chgBit(oldp+517,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0xfU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xfU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+518,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                            >> 0xfU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0xfU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xeU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0xfU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xeU))))));
        bufp->chgBit(oldp+519,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+520,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+521,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+522,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x10U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x10U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+523,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x10U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x10U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0xfU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x10U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0xfU))))));
        bufp->chgBit(oldp+524,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+525,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+526,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+527,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x11U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x11U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+528,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x11U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x11U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x10U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x11U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+529,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+530,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+531,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+532,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x12U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x12U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+533,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x12U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x12U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x11U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x11U))))));
        bufp->chgBit(oldp+534,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+535,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+536,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+537,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x13U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x13U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+538,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x13U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x13U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x12U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x13U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x12U))))));
        bufp->chgBit(oldp+539,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 1U))));
        bufp->chgBit(oldp+540,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 1U)))));
        bufp->chgBit(oldp+541,((1U & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)));
        bufp->chgBit(oldp+542,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 1U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 1U))) 
                                      ^ vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c))));
        bufp->chgBit(oldp+543,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 1U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 1U)) 
                                          & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 1U) & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)))));
        bufp->chgBit(oldp+544,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+545,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+546,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+547,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x14U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x14U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+548,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x14U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x14U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x13U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x14U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+549,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+550,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+551,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+552,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x15U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x15U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+553,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x15U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x15U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x14U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x14U))))));
        bufp->chgBit(oldp+554,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+555,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+556,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+557,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x16U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x16U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+558,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x16U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x16U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x15U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x16U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x15U))))));
        bufp->chgBit(oldp+559,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+560,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+561,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+562,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x17U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x17U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+563,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x17U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x17U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x16U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x17U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+564,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+565,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+566,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+567,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x18U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x18U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+568,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x18U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x18U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x17U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x17U))))));
        bufp->chgBit(oldp+569,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+570,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+571,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+572,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x19U) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x19U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+573,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x19U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x19U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x18U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x19U) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x18U))))));
        bufp->chgBit(oldp+574,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+575,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+576,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+577,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x1aU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1aU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+578,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1aU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1aU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x19U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x1aU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+579,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+580,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+581,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+582,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x1bU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1bU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+583,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1bU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1bU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1aU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1aU))))));
        bufp->chgBit(oldp+584,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+585,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+586,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+587,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x1cU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1cU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+588,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1cU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1cU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x1cU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1bU))))));
        bufp->chgBit(oldp+589,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+590,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+591,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+592,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x1dU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1dU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+593,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1dU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1dU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1cU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x1dU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+594,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 2U))));
        bufp->chgBit(oldp+595,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 2U)))));
        bufp->chgBit(oldp+596,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+597,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 2U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 2U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 1U)))));
        bufp->chgBit(oldp+598,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 2U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 2U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 2U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 1U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 2U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 1U))))));
        bufp->chgBit(oldp+599,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+600,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+601,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+602,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x1eU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1eU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+603,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1eU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1eU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1dU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1dU))))));
        bufp->chgBit(oldp+604,((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+605,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+606,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+607,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 0x1fU) ^ 
                                       (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1fU))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+608,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 0x1fU) 
                                        & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1fU))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 0x1fU)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 0x1fU) 
                                         & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                            >> 0x1eU))))));
        bufp->chgBit(oldp+609,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 3U))));
        bufp->chgBit(oldp+610,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 3U)))));
        bufp->chgBit(oldp+611,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+612,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 3U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 3U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 2U)))));
        bufp->chgBit(oldp+613,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 3U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 3U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 3U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 2U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 3U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 2U))))));
        bufp->chgBit(oldp+614,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 4U))));
        bufp->chgBit(oldp+615,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 4U)))));
        bufp->chgBit(oldp+616,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+617,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 4U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 4U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 3U)))));
        bufp->chgBit(oldp+618,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 4U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 4U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 4U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 3U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 4U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 3U))))));
        bufp->chgBit(oldp+619,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 5U))));
        bufp->chgBit(oldp+620,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 5U)))));
        bufp->chgBit(oldp+621,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+622,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 5U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 5U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 4U)))));
        bufp->chgBit(oldp+623,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 5U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 5U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 5U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 4U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 4U))))));
        bufp->chgBit(oldp+624,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 6U))));
        bufp->chgBit(oldp+625,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 6U)))));
        bufp->chgBit(oldp+626,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+627,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 6U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 6U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 5U)))));
        bufp->chgBit(oldp+628,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 6U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 6U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 6U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 5U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 6U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 5U))))));
        bufp->chgBit(oldp+629,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 7U))));
        bufp->chgBit(oldp+630,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 7U)))));
        bufp->chgBit(oldp+631,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+632,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 7U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 7U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 6U)))));
        bufp->chgBit(oldp+633,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 7U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 7U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 7U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 6U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 7U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 6U))))));
        bufp->chgBit(oldp+634,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 8U))));
        bufp->chgBit(oldp+635,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 8U)))));
        bufp->chgBit(oldp+636,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+637,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 8U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 8U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 7U)))));
        bufp->chgBit(oldp+638,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 8U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 8U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 8U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 7U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 7U))))));
        bufp->chgBit(oldp+639,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 9U))));
        bufp->chgBit(oldp+640,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                         >> 9U)))));
        bufp->chgBit(oldp+641,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 8U))));
        bufp->chgBit(oldp+642,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        >> 9U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 9U))) 
                                      ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                         >> 8U)))));
        bufp->chgBit(oldp+643,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         >> 9U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 9U))) 
                                       | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                              >> 9U)) 
                                          & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                             >> 8U))) 
                                      | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                          >> 9U) & 
                                         (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 8U))))));
        bufp->chgBit(oldp+644,((1U & vlSelf->top__DOT__singlecycle__DOT__rs1_data)));
        bufp->chgBit(oldp+645,((1U & (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data))));
        bufp->chgBit(oldp+646,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                         ^ (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data))))));
        bufp->chgBit(oldp+647,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                        & (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)) 
                                       | (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)) 
                                      | vlSelf->top__DOT__singlecycle__DOT__rs1_data))));
        bufp->chgCData(oldp+648,((0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+649,((0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+650,((0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                           >> 7U))),5);
    }
    bufp->chgBit(oldp+651,(vlSelf->i_clk));
    bufp->chgBit(oldp+652,(vlSelf->i_rst_n));
    bufp->chgIData(oldp+653,(vlSelf->i_io_sw),32);
    bufp->chgCData(oldp+654,(vlSelf->i_io_btn),4);
    bufp->chgBit(oldp+655,(vlSelf->o_insn_vld));
    bufp->chgIData(oldp+656,(vlSelf->o_pc_debug),32);
    bufp->chgIData(oldp+657,(vlSelf->o_io_lcd),32);
    bufp->chgIData(oldp+658,(vlSelf->o_io_ledg),32);
    bufp->chgIData(oldp+659,(vlSelf->o_io_ledr),32);
    bufp->chgIData(oldp+660,(((IData)(vlSelf->top__DOT__singlecycle__DOT__pc_sel)
                               ? vlSelf->top__DOT__singlecycle__DOT__alu_data
                               : ((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc))),32);
    bufp->chgIData(oldp+661,(((2U == (IData)(vlSelf->top__DOT__singlecycle__DOT__wb_sel))
                               ? ((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc)
                               : ((1U == (IData)(vlSelf->top__DOT__singlecycle__DOT__wb_sel))
                                   ? vlSelf->top__DOT__singlecycle__DOT__ld_data
                                   : vlSelf->top__DOT__singlecycle__DOT__alu_data))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
