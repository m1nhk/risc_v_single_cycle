/* verilator lint_off UNUSED */
module top(
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

singlecycle singlecycle(
    .i_clk(i_clk),
    .i_rst_n(i_rst_n),
    .i_io_sw(i_io_sw),
    .i_io_btn(i_io_btn),
    .o_insn_vld(o_insn_vld),
    .o_pc_debug(o_pc_debug),
    .o_io_lcd(o_io_lcd),
    .o_io_ledg(o_io_ledg),
    .o_io_ledr(o_io_ledr)
);

endmodule
