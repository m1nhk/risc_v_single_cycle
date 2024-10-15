/* verilator lint_off UNUSED */
module slt (
    input logic [31:0] rs1_data,
    input logic [31:0] rs2_data,

    output logic br_less
);

logic [31:0] sum_unsigned;
logic [31:0] sum_signed;
logic cout_unsigned; // Carry-out for unsigned
logic cout_signed;   // Carry-out for signed

// To calculate the two's complement for signed comparison
logic [31:0] rs1_mag = ~rs1_data + 1'b1;
logic [31:0] rs2_mag = ~rs2_data + 1'b1;

// Unsigned subtraction (rs1 - rs2)
full_adder_32_bit full_adder_unsigned (rs1_data, rs2_data, 1'b1, sum_unsigned, cout_unsigned);

// Signed subtraction (rs1 - rs2)
full_adder_32_bit full_adder_signed (rs1_mag, rs2_mag, 1'b1, sum_signed, cout_signed);

always_comb begin : slt
    if (rs1_data[31] == rs2_data[31]) begin // Same sign
        // If both operands are positive, check if the result is negative (overflow)
        if (rs1_data[31] == 0) begin
            // Positive case
            br_less = sum_unsigned[31]; // If result is negative, rs1 < rs2
        end else begin
            // Negative case
            br_less = ~sum_signed[31]; // If result is positive, rs1 < rs2
        end
    end else begin
        // Different signs
        // If rs1 is negative and rs2 is positive, then rs1 < rs2
        br_less = rs1_data[31]; // If rs1 is negative, it is less
    end
end

endmodule
