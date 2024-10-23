module singlecycle (
    input logic i_clk,
    input logic i_rst_n,
    input logic [31:0] i_io_sw,
    input logic [3:0] i_io_btn,

    output logic o_insn_vld,
    output logic [31:0] o_pc_debug,
    output logic [31:0] o_io_lcd,
    output logic [31:0] o_io_ledg,
    output logic [31:0] o_io_ledr
);

wire pc_sel;
wire [31:0] pc_four;
wire [31:0] pc_next;
wire [31:0] alu_data;
wire [31:0] pc;
wire [31:0] instr;
wire rd_wren;
wire [31:0] rs1_data, rs2_data;
wire [31:0] wb_data;
wire [31:0] imm;
wire br_un, br_less, br_equal;
wire op_a, op_b;
wire [31:0] operand_a, operand_b;
wire [3:0] alu_op;
wire mem_wren;
wire [31:0] ld_data;
wire [1:0] wb_sel;

assign o_pc_debug = pc;

mux2to1 mux1(
    .sel(pc_sel),
    .in_0(pc_four),
    .in_1(alu_data),
    .out(pc_next)
);

program_counter pc_inst(
    .clk_i(i_clk),
    .rst_ni(i_rst_n),
    .next_pc(pc_next),
    .pc(pc)
);

program_counter_four pc_four_inst(
    .pc_i(pc),
    .next_pc_four(pc_four)
);

imem imem(
    .rst_n(i_rst_n),
    .pc(pc),
    .instr(instr)
);

regfile regfile(
    .i_clk(i_clk),
    .i_rst(i_rst_n),
    .i_rs1_addr(instr[19:15]),
    .i_rs2_addr(instr[24:20]),
    .i_rd_addr(instr[11:7]),
    .i_rd_data(wb_data),
    .i_rd_wren(rd_wren),
    .o_rs1_data(rs1_data),
    .o_rs2_data(rs2_data)
);

immgen immgen(
    .instr(instr),
    .imm(imm)
);

brc brc(
    .i_rs1_data(rs1_data),
    .i_rs2_data(rs2_data),
    .i_br_un(br_un),
    .o_br_less(br_less),
    .o_br_equal(br_equal)
);

mux2to1 mux2(
    .sel(op_a),
    .in_0(rs1_data),
    .in_1(pc),
    .out(operand_a)
);

mux2to1 mux3(
    .sel(op_b),
    .in_0(rs2_data),
    .in_1(imm),
    .out(operand_b)
);

alu alu(
    .i_operand_a(operand_a),
    .i_operand_b(operand_b),
    .i_alu_op(alu_op),
    .o_alu_data(alu_data)
);

lsu lsu(
    .i_clk(i_clk),
    .i_rst_n(i_rst_n),
    .i_lsu_addr(alu_data),
    .i_st_data(rs2_data),
    .i_lsu_wren(mem_wren),
    .i_io_sw(i_io_sw),
    .i_io_btn(i_io_btn),
    .instr(instr),
    .o_ld_data(ld_data),
    .o_io_lcd(o_io_lcd),
    .o_io_ledg(o_io_ledg),
    .o_io_ledr(o_io_ledr)
);

mux3to1 mux3to1(
    .sel(wb_sel),
    .in_0(alu_data),
    .in_1(ld_data),
    .in_2(pc_four),
    .out(wb_data)
);

ctrl_unit ctrl_unit(
    .instr(instr),
    .br_less(br_less),
    .br_equal(br_equal),
    .pc_sel(pc_sel),
    .br_un(br_un),
    .rd_wren(rd_wren),
    .mem_wren(mem_wren),
    .opa_sel(op_a),
    .opb_sel(op_b),
    .alu_op(alu_op),
    .wb_sel(wb_sel),
    .o_insn_vld(o_insn_vld)
);

endmodule
