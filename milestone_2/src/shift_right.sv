module shift_right (
    input logic [31:0] data_in,
    input logic [31:0] shift_amount,
    output logic [31:0] data_out
);
    
always_comb begin 
    case(shift_amount)
        32'd0: data_out = data_in;
        32'd1: data_out = {1'b0, data_in[31:1]};
        32'd2: data_out = {2'b0, data_in[31:2]};
        32'd3: data_out = {3'b0, data_in[31:3]};
        32'd4: data_out = {4'b0, data_in[31:4]};
        32'd5: data_out = {5'b0, data_in[31:5]};
        32'd6: data_out = {6'b0, data_in[31:6]};
        32'd7: data_out = {7'b0, data_in[31:7]};
        32'd8: data_out = {8'b0, data_in[31:8]};
        32'd9: data_out = {9'b0, data_in[31:9]};
        32'd10: data_out = {10'b0, data_in[31:10]};
        32'd11: data_out = {11'b0, data_in[31:11]};
        32'd12: data_out = {12'b0, data_in[31:12]};
        32'd13: data_out = {13'b0, data_in[31:13]};
        32'd14: data_out = {14'b0, data_in[31:14]};
        32'd15: data_out = {15'b0, data_in[31:15]};
        32'd16: data_out = {16'b0, data_in[31:16]};
        32'd17: data_out = {17'b0, data_in[31:17]};
        32'd18: data_out = {18'b0, data_in[31:18]};
        32'd19: data_out = {19'b0, data_in[31:19]};
        32'd20: data_out = {20'b0, data_in[31:20]};
        32'd21: data_out = {21'b0, data_in[31:21]};
        32'd22: data_out = {22'b0, data_in[31:22]};
        32'd23: data_out = {23'b0, data_in[31:23]};
        32'd24: data_out = {24'b0, data_in[31:24]};
        32'd25: data_out = {25'b0, data_in[31:25]};
        32'd26: data_out = {26'b0, data_in[31:26]};
        32'd27: data_out = {27'b0, data_in[31:27]};
        32'd28: data_out = {28'b0, data_in[31:28]};
        32'd29: data_out = {29'b0, data_in[31:29]};
        32'd30: data_out = {30'b0, data_in[31:30]};
        32'd31: data_out = {31'b0, data_in[31:31]};
        default: data_out = 32'b0;
    endcase
end

endmodule
