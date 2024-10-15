/* verilator lint_off UNUSED */
module brc (
    input logic [31:0] i_rs1_data,
    input logic [31:0] i_rs2_data,
    input logic i_br_un,    // 1: Unsigned, 0: Signed

    output logic o_br_less,
    output logic o_br_equal
);

logic [31:0] sum_unsigned;
logic cout_unsigned;

// Unsigned subtraction (rs1 - rs2)
full_adder_32_bit full_adder_unsigned(
    .a(i_rs1_data),
    .b(i_rs2_data),
    .cin(1'b1),               // Perform subtraction
    .sum(sum_unsigned),
    .cout(cout_unsigned)
);

always_comb begin
    // Check for equality
    o_br_equal = (i_rs1_data == i_rs2_data);

    if (i_br_un) begin
        // Unsigned comparison: Use carry-out to determine if rs1 < rs2
        o_br_less = ~cout_unsigned; // If no carry-out, rs1 < rs2 (unsigned)
    end else begin
        // Signed comparison
        if (i_rs1_data[31] == i_rs2_data[31]) begin
            // If signs are the same, check the sign of the result
            o_br_less = sum_unsigned[31]; // If the result is negative, rs1 < rs2 (signed)
        end else begin
            // If signs differ, simply compare the signs
            o_br_less = i_rs1_data[31]; // rs1 < rs2 if rs1 is negative
        end
    end
end

endmodule
