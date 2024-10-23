module immgen(
    input logic [31:0] instr,

    output logic [31:0] imm
);

logic [4:0] srai;
assign srai = instr[24:20];

always_comb begin
    case (instr[6:0])
        7'b0000011: //I-type load
            imm = {{20{instr[31]}}, instr[31:20]};
        7'b0010011: begin //I-type addi
            if((instr[31:25] == 7'b0100000 && instr[14:12] == 3'b101) || (instr[14:12] == 3'b001) || instr[14:12] == 3'b101)
                imm = {{27{srai[4]}}, srai};
            else
                imm = {{20{instr[31]}}, instr[31:20]};
        end
        7'b0100011: //S-type    
            imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};
        7'b1100011: //B-type
            //imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            imm = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; 
        7'b0110111: //LUI-type
            imm = {instr[31:12], 12'b0};
        7'b0010111: //AUIPC-type
            imm = {instr[31:12], 12'b0};
        7'b1101111: //JAL-type
            imm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
        7'b1100111: //JALR-type
            imm = {{20{instr[31]}}, instr[31:20]};
    default: imm = 32'b0;
    endcase
end

endmodule
