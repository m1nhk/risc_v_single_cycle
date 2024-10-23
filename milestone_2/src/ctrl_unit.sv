/* verilator lint_off UNUSED */
module ctrl_unit(
    input logic [31:0] instr,
    input logic br_less,
    input logic br_equal,

    output logic pc_sel,
    output logic br_un,
    output logic rd_wren,
    output logic mem_wren,
    output logic opa_sel,
    output logic opb_sel,
    output logic [3:0] alu_op,
    output logic [1:0] wb_sel,
    output logic o_insn_vld
);

always_comb begin
    case (instr[6:0])
        7'b0110011: begin //R-type
            pc_sel = 1'b0;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b0;
            opb_sel = 1'b0;
            wb_sel = 2'b00;
            o_insn_vld = 1'b1;
            br_un = 1'b0;
            case (instr[14:12])
                3'b000: begin
                    if(!instr[30]) alu_op = 4'b0000; //ADD
                    else alu_op = 4'b0001; //SUB               
                end
                3'b010: alu_op = 4'b0010; //SLT
                3'b011: begin
                    alu_op = 4'b0011; //SLTU
                    br_un = 1'b1;
                end
                3'b100: alu_op = 4'b0100; //XOR
                3'b110: alu_op = 4'b0101; //OR
                3'b111: alu_op = 4'b0110; //AND
                3'b001: alu_op = 4'b0111; //SLL
                3'b101: begin
                    if(!instr[30]) alu_op = 4'b1000; //SRL
                    else alu_op = 4'b1001; //SRA
                end
            endcase
        end
        7'b0010011: begin //I-type
            pc_sel = 1'b0;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b0;
            opb_sel = 1'b1;
            wb_sel = 2'b00;
            o_insn_vld = 1'b1;
            br_un = 1'b0;
            case (instr[14:12])
                3'b000: alu_op = 4'b0000; //ADDI
                3'b010: alu_op = 4'b0010; //STLI
                3'b011: begin
                    alu_op = 4'b0011; //SLTIU
                    br_un = 1'b1; 
                end
                3'b100: alu_op = 4'b0100; //XORI
                3'b110: alu_op = 4'b0101; //ORI
                3'b111: alu_op = 4'b0110; //ANDI
                3'b001: alu_op = 4'b0111; //SLLI
                3'b101: begin
                    if(!instr[30]) alu_op = 4'b1000; //SRLI
                    else alu_op = 4'b1001; //SRAI
                end
            endcase
        end
        7'b0100011: begin //S-type
            pc_sel = 1'b0;
            rd_wren = 1'b0;
            mem_wren = 1'b1;
            opa_sel = 1'b0;
            opb_sel = 1'b1;
            wb_sel = 2'b00;
            alu_op = 4'b0000;
            br_un = 1'b0;
            o_insn_vld = 1'b1;
        end
        7'b1100011: begin //B-type
            rd_wren = 1'b0;
            opa_sel = 1'b1;
            opb_sel = 1'b1;
            alu_op = 4'b0000;
            mem_wren = 1'b0;
            wb_sel = 2'b00;
            o_insn_vld = 1'b1;
            br_un = 1'b0;
            case (instr[14:12])
                3'b000: begin //BEQ
                    if (br_equal) pc_sel = 1'b1;
                    else pc_sel = 1'b0;                 
                end
                3'b001: begin //BNE
                    if(!br_equal) pc_sel = 1'b1;
                    else pc_sel = 1'b0;                                            
                end
                3'b100: begin //BLT
                    if(br_less) pc_sel = 1'b1;
                    else pc_sel = 1'b0;
                end
                3'b101: begin //BGE
                    if(!br_less) pc_sel = 1'b1;
                    else pc_sel = 1'b0;
                end
                3'b110: begin //BLTU
                    br_un = 1'b1;
                    if(br_less) pc_sel = 1'b1;
                    else pc_sel = 1'b0;
                end
                3'b111: begin //BGEU
                    br_un = 1'b1;
                    if(!br_less) pc_sel = 1'b1;
                    else pc_sel = 1'b0;
                end
            default: pc_sel = 1'b0;
            endcase
        end
        7'b0110111: begin //LUI
            pc_sel = 1'b0;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b0;
            opb_sel = 1'b1;
            alu_op = 4'b1111;
            br_un = 1'b0;
            wb_sel = 2'b00;
            o_insn_vld = 1'b1;
        end
        7'b0010111: begin //AUIPC
            pc_sel = 1'b0;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b1;
            opb_sel = 1'b1;
            alu_op = 4'b0000;
            br_un = 1'b0;
            wb_sel = 2'b00;
            o_insn_vld = 1'b1;
        end
        7'b1101111: begin //JAL
            pc_sel = 1'b1;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b1;
            opb_sel = 1'b1;
            alu_op = 4'b0000;
            br_un = 1'b0;
            wb_sel = 2'b10;
            o_insn_vld = 1'b1;
        end
        7'b1100111: begin //JALR
            pc_sel = 1'b1;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b0;
            opb_sel = 1'b1;
            alu_op = 4'b0000;
            br_un = 1'b0;
            wb_sel = 2'b10;
            o_insn_vld = 1'b1;
        end
        7'b0000011: begin //I-type (Load)
            pc_sel = 1'b0;
            rd_wren = 1'b1;
            mem_wren = 1'b0;
            opa_sel = 1'b0;
            opb_sel = 1'b1;
            alu_op = 4'b0000;
            br_un = 1'b0;
            wb_sel = 2'b01;
            o_insn_vld = 1'b1;
        end
    default: begin 
        pc_sel = 1'b0;
        rd_wren = 1'b0;
        mem_wren = 1'b0;
        opa_sel = 1'b0;
        opb_sel = 1'b0;
        alu_op = 4'b0000;
        br_un = 1'b0;
        wb_sel = 2'b00;
        o_insn_vld = 1'b0;
    end
    endcase
end

endmodule
