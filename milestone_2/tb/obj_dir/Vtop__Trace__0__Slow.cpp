// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+651,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+653,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+654,"i_io_btn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+655,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+656,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+657,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+658,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+651,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+653,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+654,"i_io_btn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+655,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+656,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+657,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+658,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("singlecycle ");
    tracep->declBit(c+651,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+653,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+654,"i_io_btn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+655,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+656,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+657,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+658,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+39,"pc_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+659,"pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"instr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+42,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+660,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+46,"br_un",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"br_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"op_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"op_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+54,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+51,"i_operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"i_operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"i_alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"o_alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+661,"ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+662,"SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+663,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+664,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+665,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+666,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+667,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+668,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+669,"SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+670,"SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+56,"slt_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"sltu_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"shift_left_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"shift_right_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"shift_right_arithmetic_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("shift_left ");
    tracep->declBus(c+51,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"shift_amount",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_right ");
    tracep->declBus(c+51,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"shift_amount",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_right_arithmetic ");
    tracep->declBus(c+51,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"shift_amount",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("slt ");
    tracep->declBus(c+51,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"sum_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"sum_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,"cout_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+64,"cout_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+65,"rs1_mag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,"rs2_mag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("full_adder_signed ");
    tracep->declBus(c+65,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+62,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+64,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"b_xor_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("create_adder[10] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+69,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[11] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+74,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[12] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[13] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[14] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+89,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[15] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[16] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+99,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[17] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+104,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[18] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+109,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[19] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[1] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+119,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[20] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[21] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+129,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[22] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+134,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[23] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[24] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[25] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+149,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[26] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+154,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[27] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+159,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[28] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+164,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[29] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+169,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[2] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+174,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[30] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+179,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[31] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+184,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[3] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[4] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+194,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[5] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+199,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[6] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+204,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[7] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[8] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+214,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[9] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+219,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_0 ");
    tracep->declBit(c+224,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_unsigned ");
    tracep->declBus(c+51,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+228,"b_xor_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+229,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("create_adder[10] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+230,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[11] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+235,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[12] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+240,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[13] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+245,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[14] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+250,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[15] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+255,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[16] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[17] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+265,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[18] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+270,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[19] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+275,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[1] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[20] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+285,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[21] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+290,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[22] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+295,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[23] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+300,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[24] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+305,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[25] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+310,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[26] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+315,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[27] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+320,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[28] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+325,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[29] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+330,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[2] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+335,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[30] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[31] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+345,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[3] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+350,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[4] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+355,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[5] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+360,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[6] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+365,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[7] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+370,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[8] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+375,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[9] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+380,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_0 ");
    tracep->declBit(c+385,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sltu ");
    tracep->declBus(c+51,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+389,"sum",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+390,"cout",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("full_adder_unsigned ");
    tracep->declBus(c+51,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+389,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+390,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+228,"b_xor_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+391,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("create_adder[10] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+230,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[11] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+235,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[12] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+240,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[13] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+245,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[14] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+250,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[15] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+255,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[16] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[17] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+265,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[18] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+270,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[19] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+275,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[1] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[20] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+285,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[21] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+290,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[22] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+295,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[23] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+300,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[24] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+305,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[25] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+310,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[26] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+315,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[27] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+320,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[28] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+325,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[29] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+330,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[2] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+335,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[30] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[31] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+345,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[3] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+350,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[4] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+355,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[5] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+360,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[6] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+365,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[7] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+370,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[8] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+375,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[9] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+380,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_0 ");
    tracep->declBit(c+385,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("brc ");
    tracep->declBus(c+43,"i_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"i_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+46,"i_br_un",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"o_br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"o_br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+485,"sum_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+486,"cout_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("full_adder_unsigned ");
    tracep->declBus(c+43,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+485,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+486,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+487,"b_xor_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+488,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("create_adder[10] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+489,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[11] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+494,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[12] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+499,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[13] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+504,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[14] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+509,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[15] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+514,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[16] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+519,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[17] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+524,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[18] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+529,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[19] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+534,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[1] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+539,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[20] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+544,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[21] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+549,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[22] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+554,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[23] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+559,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[24] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+564,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[25] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+569,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[26] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+574,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[27] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+579,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[28] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+584,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[29] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+589,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[2] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+594,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[30] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+599,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[31] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+604,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[3] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+609,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+611,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[4] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+614,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[5] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+619,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[6] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+624,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[7] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+629,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[8] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+634,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("create_adder[9] ");
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+639,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_0 ");
    tracep->declBit(c+644,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_unit ");
    tracep->declBus(c+41,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"br_less",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"br_equal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"pc_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"br_un",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"opa_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"opb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+55,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+655,"o_insn_vld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+652,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen ");
    tracep->declBus(c+41,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+648,"srai",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+651,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"i_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"i_lsu_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"i_st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+54,"i_lsu_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+653,"i_io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+654,"i_io_btn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3,"o_ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+656,"o_io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+657,"o_io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+658,"o_io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+672,"ADDR_BTN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+673,"ADDR_SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+674,"ADDR_LEDG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+675,"ADDR_LEDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+676,"ADDR_LCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+677,"ADDR_INST_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+678,"ADDR_DATA_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4,"led_r_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"led_g_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"lcd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBit(c+39,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"in_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"in_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+659,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBit(c+49,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"in_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"in_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBit(c+50,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+44,"in_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"in_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux3to1 ");
    tracep->declBus(c+55,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+40,"in_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"in_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"in_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+660,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_four_inst ");
    tracep->declBus(c+2,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"next_pc_four",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_inst ");
    tracep->declBit(c+651,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+659,"next_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+651,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"i_rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+649,"i_rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+648,"i_rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+650,"i_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+660,"i_rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+42,"i_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"o_rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"o_rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc)),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__singlecycle__DOT__pc),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singlecycle__DOT__ld_data),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_r_reg),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__led_g_reg),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singlecycle__DOT__lsu__DOT__lcd_reg),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__singlecycle__DOT__regfile__DOT__register[31]),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__singlecycle__DOT__pc_sel));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__singlecycle__DOT__alu_data),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__singlecycle__DOT__instr),32);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__singlecycle__DOT__rd_wren));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__singlecycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__singlecycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singlecycle__DOT__imm),32);
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__singlecycle__DOT__br_un));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__singlecycle__DOT__br_less));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__singlecycle__DOT__br_equal));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__singlecycle__DOT__op_a));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__singlecycle__DOT__op_b));
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__singlecycle__DOT__operand_a),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singlecycle__DOT__operand_b),32);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__singlecycle__DOT__alu_op),4);
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__singlecycle__DOT__mem_wren));
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__singlecycle__DOT__wb_sel),2);
    bufp->fullBit(oldp+56,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                    >> 0x1fU) == (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0x1fU))
                                   ? ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1fU) ? 
                                      (~ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed 
                                          >> 0x1fU))
                                       : (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned 
                                          >> 0x1fU))
                                   : (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+57,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                     >> 0x1fU)))));
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_left_result),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_result),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__shift_right_arithmetic_result),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_unsigned),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__sum_signed),32);
    bufp->fullBit(oldp+63,((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                            >> 0x1fU)));
    bufp->fullBit(oldp+64,((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                            >> 0x1fU)));
    bufp->fullIData(oldp+65,(((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))),32);
    bufp->fullIData(oldp+66,(((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))),32);
    bufp->fullIData(oldp+67,((~ ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c),32);
    bufp->fullBit(oldp+69,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+70,((1U & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0xaU)))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 9U))));
    bufp->fullBit(oldp+72,((1U & (((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xaU) ^ (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xaU))) 
                                  ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 9U)))));
    bufp->fullBit(oldp+73,((1U & ((((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xaU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 0xaU))) 
                                   | ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 9U))) | 
                                  ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                >> 9U))))));
    bufp->fullBit(oldp+74,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+75,((1U & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0xbU)))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0xaU))));
    bufp->fullBit(oldp+77,((1U & (((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xbU) ^ (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xbU))) 
                                  ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xaU)))));
    bufp->fullBit(oldp+78,((1U & ((((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xbU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 0xbU))) 
                                   | ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xaU))) 
                                  | ((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  >> 0xaU))))));
    bufp->fullBit(oldp+79,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+80,((1U & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0xcU)))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0xbU))));
    bufp->fullBit(oldp+82,((1U & (((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xcU) ^ (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xcU))) 
                                  ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xbU)))));
    bufp->fullBit(oldp+83,((1U & ((((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xcU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 0xcU))) 
                                   | ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xbU))) 
                                  | ((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  >> 0xbU))))));
    bufp->fullBit(oldp+84,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+85,((1U & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0xcU))));
    bufp->fullBit(oldp+87,((1U & (((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xdU) ^ (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xdU))) 
                                  ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xcU)))));
    bufp->fullBit(oldp+88,((1U & ((((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xdU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 0xdU))) 
                                   | ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xcU))) 
                                  | ((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  >> 0xcU))))));
    bufp->fullBit(oldp+89,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+90,((1U & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0xdU))));
    bufp->fullBit(oldp+92,((1U & (((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xeU) ^ (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xeU))) 
                                  ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+93,((1U & ((((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xeU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 0xeU))) 
                                   | ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xdU))) 
                                  | ((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  >> 0xdU))))));
    bufp->fullBit(oldp+94,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+95,((1U & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                  >> 0xeU))));
    bufp->fullBit(oldp+97,((1U & (((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                    >> 0xfU) ^ (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0xfU))) 
                                  ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+98,((1U & ((((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0xfU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 0xfU))) 
                                   | ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                         >> 0xeU))) 
                                  | ((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                  >> 0xeU))))));
    bufp->fullBit(oldp+99,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                  >> 0x10U))));
    bufp->fullBit(oldp+100,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+102,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x10U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x10U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+103,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x10U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x10U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0xfU))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x10U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+104,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+105,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+107,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x11U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x11U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+108,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x11U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x11U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x10U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x11U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+109,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+110,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+112,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x12U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x12U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+113,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x12U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x12U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x11U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x11U))))));
    bufp->fullBit(oldp+114,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+115,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+117,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x13U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x13U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+118,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x13U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x13U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x12U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x13U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x12U))))));
    bufp->fullBit(oldp+119,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 1U))));
    bufp->fullBit(oldp+120,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 1U)))));
    bufp->fullBit(oldp+121,((1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c)));
    bufp->fullBit(oldp+122,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 1U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 1U))) 
                                   ^ vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c))));
    bufp->fullBit(oldp+123,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 1U) & (~ (
                                                   ((IData)(1U) 
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
    bufp->fullBit(oldp+124,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+125,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+127,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x14U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x14U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+128,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x14U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x14U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x13U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x14U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+129,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+130,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+131,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+132,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x15U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x15U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+133,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x15U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x15U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x15U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x14U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x14U))))));
    bufp->fullBit(oldp+134,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+135,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+137,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x16U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x16U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+138,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x16U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x16U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x16U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x15U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x16U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x15U))))));
    bufp->fullBit(oldp+139,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+140,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+142,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x17U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x17U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+143,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x17U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x17U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x17U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x16U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x17U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+144,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+145,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+147,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x18U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x18U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+148,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x18U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x18U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x18U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x17U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x17U))))));
    bufp->fullBit(oldp+149,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+150,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+151,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+152,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x19U) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x19U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+153,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x19U) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x19U))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x19U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x18U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x19U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x18U))))));
    bufp->fullBit(oldp+154,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+155,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+157,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x1aU) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x1aU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+158,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1aU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x1aU))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1aU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x19U))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x1aU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+159,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+160,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+161,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+162,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x1bU) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x1bU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+163,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1bU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x1bU))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1bU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x1aU))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x1aU))))));
    bufp->fullBit(oldp+164,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+165,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+167,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x1cU) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x1cU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+168,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1cU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x1cU))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1cU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x1bU))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x1cU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x1bU))))));
    bufp->fullBit(oldp+169,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+170,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+171,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+172,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x1dU) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x1dU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+173,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1dU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x1dU))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x1cU))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x1dU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+174,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 2U))));
    bufp->fullBit(oldp+175,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 2U)))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+177,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 2U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 2U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 1U)))));
    bufp->fullBit(oldp+178,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 2U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 1U))))));
    bufp->fullBit(oldp+179,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+180,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+182,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x1eU) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x1eU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+183,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1eU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x1eU))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x1dU))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x1dU))))));
    bufp->fullBit(oldp+184,((((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+185,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+186,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+187,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 0x1fU) ^ (~ 
                                                  (((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                   >> 0x1fU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+188,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 0x1fU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                    >> 0x1fU))) 
                                    | ((~ (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                           >> 0x1fU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                          >> 0x1eU))) 
                                   | ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                       >> 0x1fU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                       >> 0x1eU))))));
    bufp->fullBit(oldp+189,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 3U))));
    bufp->fullBit(oldp+190,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 3U)))));
    bufp->fullBit(oldp+191,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+192,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 3U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 3U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 2U)))));
    bufp->fullBit(oldp+193,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 3U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 2U))))));
    bufp->fullBit(oldp+194,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 4U))));
    bufp->fullBit(oldp+195,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 4U)))));
    bufp->fullBit(oldp+196,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+197,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 4U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 4U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 3U)))));
    bufp->fullBit(oldp+198,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 4U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 3U))))));
    bufp->fullBit(oldp+199,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 5U))));
    bufp->fullBit(oldp+200,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+202,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 5U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 5U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 4U)))));
    bufp->fullBit(oldp+203,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 5U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 4U))))));
    bufp->fullBit(oldp+204,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 6U))));
    bufp->fullBit(oldp+205,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+206,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+207,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 6U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 6U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 5U)))));
    bufp->fullBit(oldp+208,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 6U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 5U))))));
    bufp->fullBit(oldp+209,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 7U))));
    bufp->fullBit(oldp+210,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 7U)))));
    bufp->fullBit(oldp+211,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+212,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 7U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 7U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 6U)))));
    bufp->fullBit(oldp+213,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 7U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 6U))))));
    bufp->fullBit(oldp+214,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 8U))));
    bufp->fullBit(oldp+215,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 8U)))));
    bufp->fullBit(oldp+216,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+217,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 8U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 8U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 7U)))));
    bufp->fullBit(oldp+218,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 8U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 7U))))));
    bufp->fullBit(oldp+219,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                   >> 9U))));
    bufp->fullBit(oldp+220,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                      >> 9U)))));
    bufp->fullBit(oldp+221,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+222,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     >> 9U) ^ (~ (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                                  >> 9U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                      >> 8U)))));
    bufp->fullBit(oldp+223,((1U & ((((((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      >> 9U) & (~ (
                                                   ((IData)(1U) 
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
                                       >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_signed__DOT__c 
                                                 >> 8U))))));
    bufp->fullBit(oldp+224,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)))));
    bufp->fullBit(oldp+225,((1U & (~ ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))))));
    bufp->fullBit(oldp+226,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                      ^ (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))))))));
    bufp->fullBit(oldp+227,((1U & (((((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a)) 
                                     & (~ ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))) 
                                    | (~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)))) 
                                   | ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singlecycle__DOT__operand_a))))));
    bufp->fullIData(oldp+228,((~ vlSelf->top__DOT__singlecycle__DOT__operand_b)),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c),32);
    bufp->fullBit(oldp+230,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0xaU))));
    bufp->fullBit(oldp+231,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 9U))));
    bufp->fullBit(oldp+233,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xaU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xaU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 9U)))));
    bufp->fullBit(oldp+234,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xaU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xaU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xaU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 9U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                   >> 9U))))));
    bufp->fullBit(oldp+235,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0xbU))));
    bufp->fullBit(oldp+236,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+238,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xbU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xbU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+239,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xbU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xbU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xbU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xaU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+240,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0xcU))));
    bufp->fullBit(oldp+241,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+243,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xcU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xcU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+244,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xcU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xcU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xcU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xbU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+245,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0xdU))));
    bufp->fullBit(oldp+246,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+247,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+248,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xdU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xdU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+249,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xdU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xdU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xdU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xcU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+250,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0xeU))));
    bufp->fullBit(oldp+251,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+252,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+253,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xeU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xeU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+254,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xeU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xeU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xeU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xdU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+255,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0xfU))));
    bufp->fullBit(oldp+256,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+257,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+258,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xfU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xfU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+259,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xfU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xfU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xfU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xeU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+260,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x10U))));
    bufp->fullBit(oldp+261,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+263,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x10U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x10U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+264,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x10U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x10U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xfU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x10U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+265,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x11U))));
    bufp->fullBit(oldp+266,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+267,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+268,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x11U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x11U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+269,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x11U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x11U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x10U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x11U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+270,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x12U))));
    bufp->fullBit(oldp+271,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+273,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x12U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x12U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+274,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x12U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x12U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x11U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x11U))))));
    bufp->fullBit(oldp+275,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x13U))));
    bufp->fullBit(oldp+276,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+277,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+278,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x13U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x13U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+279,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x13U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x13U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x12U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x13U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x12U))))));
    bufp->fullBit(oldp+280,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 1U))));
    bufp->fullBit(oldp+281,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 1U)))));
    bufp->fullBit(oldp+282,((1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)));
    bufp->fullBit(oldp+283,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 1U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 1U))) 
                                   ^ vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c))));
    bufp->fullBit(oldp+284,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 1U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 1U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 1U)) 
                                       & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c)))));
    bufp->fullBit(oldp+285,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x14U))));
    bufp->fullBit(oldp+286,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+287,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+288,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x14U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x14U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+289,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x14U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x14U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x13U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x14U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+290,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x15U))));
    bufp->fullBit(oldp+291,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+292,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+293,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x15U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x15U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+294,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x15U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x15U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x15U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x14U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x14U))))));
    bufp->fullBit(oldp+295,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x16U))));
    bufp->fullBit(oldp+296,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+297,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+298,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x16U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x16U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+299,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x16U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x16U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x16U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x15U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x16U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x15U))))));
    bufp->fullBit(oldp+300,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x17U))));
    bufp->fullBit(oldp+301,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+302,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+303,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x17U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x17U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+304,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x17U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x17U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x17U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x16U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x17U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+305,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x18U))));
    bufp->fullBit(oldp+306,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+307,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+308,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x18U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x18U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+309,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x18U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x18U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x18U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x17U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x17U))))));
    bufp->fullBit(oldp+310,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x19U))));
    bufp->fullBit(oldp+311,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+312,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+313,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x19U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x19U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+314,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x19U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x19U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x19U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x18U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x19U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x18U))))));
    bufp->fullBit(oldp+315,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+316,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+317,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+318,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1aU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1aU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+319,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1aU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1aU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1aU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x19U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+320,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+321,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+322,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+323,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1bU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1bU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+324,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1bU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1bU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1bU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1aU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1aU))))));
    bufp->fullBit(oldp+325,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+326,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+327,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+328,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1cU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1cU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+329,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1cU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1cU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1cU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1bU))))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+331,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+332,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+333,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1dU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1dU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+334,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1dU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1dU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1cU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+335,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 2U))));
    bufp->fullBit(oldp+336,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 2U)))));
    bufp->fullBit(oldp+337,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+338,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 2U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 2U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 1U)))));
    bufp->fullBit(oldp+339,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 2U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 2U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 2U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 1U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 1U))))));
    bufp->fullBit(oldp+340,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+341,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+343,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1eU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1eU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+344,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1eU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1eU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1dU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1dU))))));
    bufp->fullBit(oldp+345,((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                             >> 0x1fU)));
    bufp->fullBit(oldp+346,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+348,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1fU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1fU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+349,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1fU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1fU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1fU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1eU))))));
    bufp->fullBit(oldp+350,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 3U))));
    bufp->fullBit(oldp+351,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 3U)))));
    bufp->fullBit(oldp+352,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+353,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 3U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 3U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 2U)))));
    bufp->fullBit(oldp+354,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 3U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 3U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 3U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 2U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 2U))))));
    bufp->fullBit(oldp+355,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 4U))));
    bufp->fullBit(oldp+356,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 4U)))));
    bufp->fullBit(oldp+357,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+358,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 4U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 4U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 3U)))));
    bufp->fullBit(oldp+359,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 4U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 4U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 4U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 3U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 3U))))));
    bufp->fullBit(oldp+360,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 5U))));
    bufp->fullBit(oldp+361,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 5U)))));
    bufp->fullBit(oldp+362,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+363,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 5U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 5U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 4U)))));
    bufp->fullBit(oldp+364,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 5U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 5U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 5U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 4U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 4U))))));
    bufp->fullBit(oldp+365,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 6U))));
    bufp->fullBit(oldp+366,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 6U)))));
    bufp->fullBit(oldp+367,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+368,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 6U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 6U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 5U)))));
    bufp->fullBit(oldp+369,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 6U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 6U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 6U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 5U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 5U))))));
    bufp->fullBit(oldp+370,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 7U))));
    bufp->fullBit(oldp+371,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 7U)))));
    bufp->fullBit(oldp+372,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+373,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 7U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 7U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 6U)))));
    bufp->fullBit(oldp+374,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 7U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 7U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 7U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 6U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 6U))))));
    bufp->fullBit(oldp+375,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+376,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 8U)))));
    bufp->fullBit(oldp+377,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+378,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 8U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 8U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 7U)))));
    bufp->fullBit(oldp+379,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 8U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 8U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 8U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 7U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 7U))))));
    bufp->fullBit(oldp+380,((1U & (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                   >> 9U))));
    bufp->fullBit(oldp+381,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                      >> 9U)))));
    bufp->fullBit(oldp+382,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+383,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 9U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 9U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                      >> 8U)))));
    bufp->fullBit(oldp+384,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 9U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 9U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 9U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                          >> 8U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__slt__DOT__full_adder_unsigned__DOT__c 
                                                 >> 8U))))));
    bufp->fullBit(oldp+385,((1U & vlSelf->top__DOT__singlecycle__DOT__operand_a)));
    bufp->fullBit(oldp+386,((1U & (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))));
    bufp->fullBit(oldp+387,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      ^ (~ vlSelf->top__DOT__singlecycle__DOT__operand_b))))));
    bufp->fullBit(oldp+388,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     & (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                    | (~ vlSelf->top__DOT__singlecycle__DOT__operand_b)) 
                                   | vlSelf->top__DOT__singlecycle__DOT__operand_a))));
    bufp->fullIData(oldp+389,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__sum),32);
    bufp->fullBit(oldp+390,((vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                             >> 0x1fU)));
    bufp->fullIData(oldp+391,(vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c),32);
    bufp->fullBit(oldp+392,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 9U))));
    bufp->fullBit(oldp+393,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xaU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xaU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 9U)))));
    bufp->fullBit(oldp+394,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xaU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xaU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xaU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 9U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                   >> 9U))))));
    bufp->fullBit(oldp+395,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+396,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xbU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xbU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+397,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xbU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xbU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xbU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xaU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+398,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+399,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xcU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xcU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+400,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xcU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xcU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xcU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xbU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+401,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+402,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xdU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xdU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+403,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xdU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xdU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xdU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xcU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+405,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xeU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xeU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+406,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xeU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xeU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xeU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xdU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+407,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+408,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0xfU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 0xfU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+409,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0xfU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0xfU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0xfU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xeU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+410,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+411,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x10U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x10U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+412,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x10U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x10U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xfU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x10U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+413,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+414,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x11U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x11U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+415,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x11U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x11U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x10U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x11U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+416,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+417,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x12U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x12U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+418,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x12U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x12U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x11U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x11U))))));
    bufp->fullBit(oldp+419,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+420,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x13U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x13U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+421,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x13U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x13U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x12U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x13U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x12U))))));
    bufp->fullBit(oldp+422,((1U & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)));
    bufp->fullBit(oldp+423,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 1U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 1U))) 
                                   ^ vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c))));
    bufp->fullBit(oldp+424,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 1U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 1U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 1U)) 
                                       & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 1U) & vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c)))));
    bufp->fullBit(oldp+425,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+426,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x14U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x14U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+427,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x14U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x14U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x13U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x14U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+428,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+429,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x15U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x15U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+430,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x15U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x15U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x15U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x14U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x14U))))));
    bufp->fullBit(oldp+431,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+432,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x16U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x16U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+433,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x16U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x16U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x16U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x15U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x16U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x15U))))));
    bufp->fullBit(oldp+434,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+435,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x17U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x17U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+436,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x17U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x17U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x17U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x16U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x17U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+437,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+438,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x18U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x18U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+439,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x18U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x18U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x18U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x17U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x17U))))));
    bufp->fullBit(oldp+440,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+441,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x19U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x19U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+442,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x19U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x19U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x19U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x18U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x19U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x18U))))));
    bufp->fullBit(oldp+443,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+444,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1aU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1aU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+445,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1aU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1aU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1aU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x19U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+446,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+447,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1bU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1bU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+448,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1bU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1bU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1bU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1aU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1aU))))));
    bufp->fullBit(oldp+449,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+450,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1cU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1cU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+451,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1cU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1cU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1cU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1bU))))));
    bufp->fullBit(oldp+452,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+453,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1dU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1dU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+454,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1dU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1dU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1cU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+455,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+456,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 2U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 2U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 1U)))));
    bufp->fullBit(oldp+457,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 2U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 2U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 2U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 1U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 1U))))));
    bufp->fullBit(oldp+458,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+459,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1eU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1eU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+460,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1eU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1eU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1dU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1dU))))));
    bufp->fullBit(oldp+461,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+462,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1fU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1fU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+463,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1fU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 0x1fU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1fU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1eU))))));
    bufp->fullBit(oldp+464,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+465,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 3U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 3U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 2U)))));
    bufp->fullBit(oldp+466,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 3U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 3U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 3U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 2U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 2U))))));
    bufp->fullBit(oldp+467,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+468,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 4U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 4U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 3U)))));
    bufp->fullBit(oldp+469,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 4U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 4U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 4U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 3U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 3U))))));
    bufp->fullBit(oldp+470,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+471,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 5U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 5U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 4U)))));
    bufp->fullBit(oldp+472,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 5U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 5U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 5U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 4U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 4U))))));
    bufp->fullBit(oldp+473,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+474,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 6U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 6U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 5U)))));
    bufp->fullBit(oldp+475,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 6U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 6U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 6U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 5U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 5U))))));
    bufp->fullBit(oldp+476,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+477,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 7U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 7U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 6U)))));
    bufp->fullBit(oldp+478,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 7U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 7U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 7U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 6U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 6U))))));
    bufp->fullBit(oldp+479,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+480,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 8U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 8U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 7U)))));
    bufp->fullBit(oldp+481,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 8U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 8U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 8U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 7U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 7U))))));
    bufp->fullBit(oldp+482,((1U & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+483,((1U & (((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                     >> 9U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                  >> 9U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                      >> 8U)))));
    bufp->fullBit(oldp+484,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                      >> 9U) & (~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                                   >> 9U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__operand_b 
                                           >> 9U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                          >> 8U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__operand_a 
                                       >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__alu__DOT__sltu__DOT__full_adder_unsigned__DOT__c 
                                                 >> 8U))))));
    bufp->fullIData(oldp+485,(vlSelf->top__DOT__singlecycle__DOT__brc__DOT__sum_unsigned),32);
    bufp->fullBit(oldp+486,((vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                             >> 0x1fU)));
    bufp->fullIData(oldp+487,((~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)),32);
    bufp->fullIData(oldp+488,(vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c),32);
    bufp->fullBit(oldp+489,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+490,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+491,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 9U))));
    bufp->fullBit(oldp+492,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0xaU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 0xaU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 9U)))));
    bufp->fullBit(oldp+493,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xaU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xaU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xaU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 9U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0xaU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                   >> 9U))))));
    bufp->fullBit(oldp+494,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+495,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+496,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+497,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0xbU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 0xbU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+498,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xbU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xbU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xbU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xaU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0xbU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+499,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+500,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+501,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+502,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0xcU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 0xcU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+503,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xcU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xcU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xcU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xbU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0xcU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+504,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+505,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+506,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+507,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0xdU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 0xdU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+508,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xdU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xdU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xdU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xcU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0xdU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+509,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+510,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+511,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+512,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0xeU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 0xeU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+513,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xeU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xeU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xeU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xdU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0xeU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+514,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+515,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+516,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+517,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0xfU) ^ (~ 
                                                 (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 0xfU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+518,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0xfU) & (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0xfU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0xfU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xeU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0xfU) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+519,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+520,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+521,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+522,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x10U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x10U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+523,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x10U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x10U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0xfU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x10U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+524,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+525,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+526,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+527,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x11U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x11U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+528,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x11U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x11U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x10U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x11U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+529,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+530,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+531,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+532,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x12U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x12U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+533,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x12U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x12U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x11U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x11U))))));
    bufp->fullBit(oldp+534,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+535,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+536,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+537,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x13U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x13U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+538,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x13U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x13U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x12U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x13U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x12U))))));
    bufp->fullBit(oldp+539,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 1U))));
    bufp->fullBit(oldp+540,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 1U)))));
    bufp->fullBit(oldp+541,((1U & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)));
    bufp->fullBit(oldp+542,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 1U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 1U))) 
                                   ^ vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c))));
    bufp->fullBit(oldp+543,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 1U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 1U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 1U)) 
                                       & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 1U) & vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c)))));
    bufp->fullBit(oldp+544,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+545,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+546,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+547,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x14U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x14U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+548,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x14U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x14U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x13U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x14U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+549,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+550,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+551,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+552,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x15U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x15U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+553,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x15U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x15U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x15U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x14U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x14U))))));
    bufp->fullBit(oldp+554,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+555,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+556,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+557,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x16U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x16U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+558,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x16U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x16U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x16U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x15U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x16U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x15U))))));
    bufp->fullBit(oldp+559,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+560,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+561,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+562,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x17U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x17U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+563,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x17U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x17U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x17U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x16U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x17U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+564,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+565,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+566,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+567,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x18U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x18U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+568,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x18U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x18U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x18U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x17U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x17U))))));
    bufp->fullBit(oldp+569,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+570,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+571,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+572,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x19U) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x19U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+573,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x19U) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x19U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x19U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x18U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x19U) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x18U))))));
    bufp->fullBit(oldp+574,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+575,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+576,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+577,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x1aU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x1aU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+578,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1aU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x1aU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1aU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x19U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x1aU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+579,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+580,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+581,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+582,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x1bU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x1bU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+583,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1bU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x1bU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1bU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1aU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1aU))))));
    bufp->fullBit(oldp+584,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+585,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+586,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+587,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x1cU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x1cU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+588,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1cU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x1cU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1cU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x1cU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1bU))))));
    bufp->fullBit(oldp+589,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+590,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+591,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+592,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x1dU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x1dU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+593,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1dU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x1dU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1cU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x1dU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+594,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 2U))));
    bufp->fullBit(oldp+595,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 2U)))));
    bufp->fullBit(oldp+596,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+597,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 2U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 2U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 1U)))));
    bufp->fullBit(oldp+598,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 2U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 2U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 2U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 1U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 2U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 1U))))));
    bufp->fullBit(oldp+599,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+600,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+601,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+602,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x1eU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x1eU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+603,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1eU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x1eU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1dU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1dU))))));
    bufp->fullBit(oldp+604,((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+605,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+606,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+607,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 0x1fU) ^ (~ 
                                                  (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 0x1fU))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+608,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 0x1fU) & (~ 
                                                   (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                    >> 0x1fU))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 0x1fU)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 0x1fU) & 
                                      (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                       >> 0x1eU))))));
    bufp->fullBit(oldp+609,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 3U))));
    bufp->fullBit(oldp+610,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 3U)))));
    bufp->fullBit(oldp+611,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+612,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 3U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 3U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 2U)))));
    bufp->fullBit(oldp+613,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 3U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 3U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 3U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 2U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 3U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 2U))))));
    bufp->fullBit(oldp+614,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 4U))));
    bufp->fullBit(oldp+615,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 4U)))));
    bufp->fullBit(oldp+616,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+617,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 4U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 4U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 3U)))));
    bufp->fullBit(oldp+618,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 4U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 4U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 4U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 3U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 4U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 3U))))));
    bufp->fullBit(oldp+619,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 5U))));
    bufp->fullBit(oldp+620,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 5U)))));
    bufp->fullBit(oldp+621,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+622,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 5U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 5U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 4U)))));
    bufp->fullBit(oldp+623,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 5U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 5U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 5U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 4U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 5U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 4U))))));
    bufp->fullBit(oldp+624,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 6U))));
    bufp->fullBit(oldp+625,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 6U)))));
    bufp->fullBit(oldp+626,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+627,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 6U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 6U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 5U)))));
    bufp->fullBit(oldp+628,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 6U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 6U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 6U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 5U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 6U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 5U))))));
    bufp->fullBit(oldp+629,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 7U))));
    bufp->fullBit(oldp+630,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 7U)))));
    bufp->fullBit(oldp+631,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+632,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 7U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 7U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 6U)))));
    bufp->fullBit(oldp+633,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 7U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 7U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 7U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 6U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 7U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 6U))))));
    bufp->fullBit(oldp+634,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 8U))));
    bufp->fullBit(oldp+635,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 8U)))));
    bufp->fullBit(oldp+636,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+637,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 8U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 8U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 7U)))));
    bufp->fullBit(oldp+638,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 8U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 8U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 8U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 7U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 8U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 7U))))));
    bufp->fullBit(oldp+639,((1U & (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                   >> 9U))));
    bufp->fullBit(oldp+640,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                      >> 9U)))));
    bufp->fullBit(oldp+641,((1U & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+642,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     >> 9U) ^ (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                  >> 9U))) 
                                   ^ (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                      >> 8U)))));
    bufp->fullBit(oldp+643,((1U & ((((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      >> 9U) & (~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                                   >> 9U))) 
                                    | ((~ (vlSelf->top__DOT__singlecycle__DOT__rs2_data 
                                           >> 9U)) 
                                       & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                          >> 8U))) 
                                   | ((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                       >> 9U) & (vlSelf->top__DOT__singlecycle__DOT__brc__DOT__full_adder_unsigned__DOT__c 
                                                 >> 8U))))));
    bufp->fullBit(oldp+644,((1U & vlSelf->top__DOT__singlecycle__DOT__rs1_data)));
    bufp->fullBit(oldp+645,((1U & (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data))));
    bufp->fullBit(oldp+646,((1U & (~ (vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                      ^ (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data))))));
    bufp->fullBit(oldp+647,((1U & (((vlSelf->top__DOT__singlecycle__DOT__rs1_data 
                                     & (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)) 
                                    | (~ vlSelf->top__DOT__singlecycle__DOT__rs2_data)) 
                                   | vlSelf->top__DOT__singlecycle__DOT__rs1_data))));
    bufp->fullCData(oldp+648,((0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+649,((0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+650,((0x1fU & (vlSelf->top__DOT__singlecycle__DOT__instr 
                                        >> 7U))),5);
    bufp->fullBit(oldp+651,(vlSelf->i_clk));
    bufp->fullBit(oldp+652,(vlSelf->i_rst_n));
    bufp->fullIData(oldp+653,(vlSelf->i_io_sw),32);
    bufp->fullCData(oldp+654,(vlSelf->i_io_btn),4);
    bufp->fullBit(oldp+655,(vlSelf->o_insn_vld));
    bufp->fullIData(oldp+656,(vlSelf->o_io_lcd),32);
    bufp->fullIData(oldp+657,(vlSelf->o_io_ledg),32);
    bufp->fullIData(oldp+658,(vlSelf->o_io_ledr),32);
    bufp->fullIData(oldp+659,(((IData)(vlSelf->top__DOT__singlecycle__DOT__pc_sel)
                                ? vlSelf->top__DOT__singlecycle__DOT__alu_data
                                : ((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc))),32);
    bufp->fullIData(oldp+660,(((2U == (IData)(vlSelf->top__DOT__singlecycle__DOT__wb_sel))
                                ? ((IData)(4U) + vlSelf->top__DOT__singlecycle__DOT__pc)
                                : ((1U == (IData)(vlSelf->top__DOT__singlecycle__DOT__wb_sel))
                                    ? vlSelf->top__DOT__singlecycle__DOT__ld_data
                                    : vlSelf->top__DOT__singlecycle__DOT__alu_data))),32);
    bufp->fullCData(oldp+661,(0U),4);
    bufp->fullCData(oldp+662,(1U),4);
    bufp->fullCData(oldp+663,(2U),4);
    bufp->fullCData(oldp+664,(3U),4);
    bufp->fullCData(oldp+665,(4U),4);
    bufp->fullCData(oldp+666,(5U),4);
    bufp->fullCData(oldp+667,(6U),4);
    bufp->fullCData(oldp+668,(7U),4);
    bufp->fullCData(oldp+669,(8U),4);
    bufp->fullCData(oldp+670,(9U),4);
    bufp->fullBit(oldp+671,(1U));
    bufp->fullIData(oldp+672,(0x7810U),32);
    bufp->fullIData(oldp+673,(0x7800U),32);
    bufp->fullIData(oldp+674,(0x7010U),32);
    bufp->fullIData(oldp+675,(0x7000U),32);
    bufp->fullIData(oldp+676,(0x7030U),32);
    bufp->fullIData(oldp+677,(0U),32);
    bufp->fullIData(oldp+678,(0x2000U),32);
}
