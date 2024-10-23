module alu(
    input logic [31:0] i_operand_a,
    input logic [31:0] i_operand_b,
    input logic [3:0] i_alu_op,
    output logic [31:0] o_alu_data
);

parameter ADD  = 4'b0000;
parameter SUB  = 4'b0001;
parameter SLT  = 4'b0010;
parameter SLTU = 4'b0011;
parameter XOR  = 4'b0100;
parameter OR   = 4'b0101;
parameter AND  = 4'b0110;
parameter SLL  = 4'b0111;
parameter SRL  = 4'b1000;
parameter SRA  = 4'b1001;

wire slt_result, sltu_result;
wire [31:0] shift_left_result, shift_right_result, shift_right_arithmetic_result;

slt slt (i_operand_a, i_operand_b, slt_result);
sltu sltu (i_operand_a, i_operand_b, sltu_result);
shift_left shift_left (i_operand_a, i_operand_b[4:0], shift_left_result);
shift_right shift_right (i_operand_a, i_operand_b[4:0], shift_right_result);
shift_right_arithmetic shift_right_arithmetic(i_operand_a, i_operand_b[4:0], shift_right_arithmetic_result);

always_comb begin: alu_operation
    case(i_alu_op)
        ADD: o_alu_data = i_operand_a + i_operand_b;        
        SUB: o_alu_data = i_operand_a + ~i_operand_b + 1'b1;
        SLT: o_alu_data = {{31{1'b0}}, slt_result};
        SLTU: o_alu_data = {{31{1'b0}}, sltu_result};
        XOR: o_alu_data = i_operand_a ^ i_operand_b;
        OR: o_alu_data = i_operand_a | i_operand_b;        
        AND: o_alu_data = i_operand_a & i_operand_b;
        SLL: o_alu_data = shift_left_result;
        SRL: o_alu_data = shift_right_result;
        SRA: o_alu_data = shift_right_arithmetic_result;
        default: o_alu_data = i_operand_b;
    endcase
end
endmodule
