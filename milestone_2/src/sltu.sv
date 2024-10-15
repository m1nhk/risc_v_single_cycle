/* verilator lint_off UNUSED */
module sltu(
    input logic [31:0] rs1_data,
    input logic [31:0] rs2_data,

    output logic br_less
);

wire [31:0] sum;
wire cout;

full_adder_32_bit full_adder_unsigned (rs1_data, rs2_data, 1'b1, sum, cout);

always_comb begin : sltu
    br_less = ~cout;
end

endmodule
