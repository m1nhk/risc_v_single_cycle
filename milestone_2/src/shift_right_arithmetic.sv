module shift_right_arithmetic (
    input logic [31:0] data_in,
    input logic [4:0] shift_amount,
    output logic [31:0] data_out
);

always_comb begin
    if(data_in[31] == 1'b1) begin
        case(shift_amount)
            5'd0: data_out = data_in;
            5'd1: data_out = {1'b1, data_in[31:1]};
            5'd2: data_out = {{2{1'b1}}, data_in[31:2]};
            5'd3: data_out = {{3{1'b1}}, data_in[31:3]};
            5'd4: data_out = {{4{1'b1}}, data_in[31:4]};
            5'd5: data_out = {{5{1'b1}}, data_in[31:5]};
            5'd6: data_out = {{6{1'b1}}, data_in[31:6]};
            5'd7: data_out = {{7{1'b1}}, data_in[31:7]};
            5'd8: data_out = {{8{1'b1}}, data_in[31:8]};
            5'd9: data_out = {{9{1'b1}}, data_in[31:9]};
            5'd10: data_out = {{10{1'b1}}, data_in[31:10]};
            5'd11: data_out = {{11{1'b1}}, data_in[31:11]};
            5'd12: data_out = {{12{1'b1}}, data_in[31:12]};
            5'd13: data_out = {{13{1'b1}}, data_in[31:13]};
            5'd14: data_out = {{14{1'b1}}, data_in[31:14]};
            5'd15: data_out = {{15{1'b1}}, data_in[31:15]};
            5'd16: data_out = {{16{1'b1}}, data_in[31:16]};
            5'd17: data_out = {{17{1'b1}}, data_in[31:17]};
            5'd18: data_out = {{18{1'b1}}, data_in[31:18]};
            5'd19: data_out = {{19{1'b1}}, data_in[31:19]};
            5'd20: data_out = {{20{1'b1}}, data_in[31:20]};
            5'd21: data_out = {{21{1'b1}}, data_in[31:21]};
            5'd22: data_out = {{22{1'b1}}, data_in[31:22]};
            5'd23: data_out = {{23{1'b1}}, data_in[31:23]};
            5'd24: data_out = {{24{1'b1}}, data_in[31:24]};
            5'd25: data_out = {{25{1'b1}}, data_in[31:25]};
            5'd26: data_out = {{26{1'b1}}, data_in[31:26]};
            5'd27: data_out = {{27{1'b1}}, data_in[31:27]};
            5'd28: data_out = {{28{1'b1}}, data_in[31:28]};
            5'd29: data_out = {{29{1'b1}}, data_in[31:29]};
            5'd30: data_out = {{30{1'b1}}, data_in[31:30]};
            5'd31: data_out = {{31{1'b1}}, data_in[31:31]};
            default: data_out = 32'b0;
        endcase
    end else begin
        case(shift_amount)
            5'd0: data_out = data_in;
            5'd1: data_out = {1'b0, data_in[31:1]};
            5'd2: data_out = {2'b0, data_in[31:2]};
            5'd3: data_out = {3'b0, data_in[31:3]};
            5'd4: data_out = {4'b0, data_in[31:4]};
            5'd5: data_out = {5'b0, data_in[31:5]};
            5'd6: data_out = {6'b0, data_in[31:6]};
            5'd7: data_out = {7'b0, data_in[31:7]};
            5'd8: data_out = {8'b0, data_in[31:8]};
            5'd9: data_out = {9'b0, data_in[31:9]};
            5'd10: data_out = {10'b0, data_in[31:10]};
            5'd11: data_out = {11'b0, data_in[31:11]};
            5'd12: data_out = {12'b0, data_in[31:12]};
            5'd13: data_out = {13'b0, data_in[31:13]};
            5'd14: data_out = {14'b0, data_in[31:14]};
            5'd15: data_out = {15'b0, data_in[31:15]};
            5'd16: data_out = {16'b0, data_in[31:16]};
            5'd17: data_out = {17'b0, data_in[31:17]};
            5'd18: data_out = {18'b0, data_in[31:18]};
            5'd19: data_out = {19'b0, data_in[31:19]};
            5'd20: data_out = {20'b0, data_in[31:20]};
            5'd21: data_out = {21'b0, data_in[31:21]};
            5'd22: data_out = {22'b0, data_in[31:22]};
            5'd23: data_out = {23'b0, data_in[31:23]};
            5'd24: data_out = {24'b0, data_in[31:24]};
            5'd25: data_out = {25'b0, data_in[31:25]};
            5'd26: data_out = {26'b0, data_in[31:26]};
            5'd27: data_out = {27'b0, data_in[31:27]};
            5'd28: data_out = {28'b0, data_in[31:28]};
            5'd29: data_out = {29'b0, data_in[31:29]};
            5'd30: data_out = {30'b0, data_in[31:30]};
            5'd31: data_out = {31'b0, data_in[31:31]};
            default: data_out = 32'b0;
        endcase
    end
end

endmodule
