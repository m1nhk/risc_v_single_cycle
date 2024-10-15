module regfile(
    input logic i_clk,
    input logic i_rst,
    input logic [4:0] i_rs1_addr,
    input logic [4:0] i_rs2_addr,
    input logic [4:0] i_rd_addr,
    input logic [31:0] i_rd_data,
    input logic i_rd_wren,

    output logic [31:0] o_rs1_data,
    output logic [31:0] o_rs2_data
);

reg [31:0] register [31:0];

always_comb begin
    o_rs1_data = register[i_rs1_addr];
    o_rs2_data = register[i_rs2_addr];
end

always_ff @(posedge i_clk or negedge i_rst) begin : regfile
    if(!i_rst) begin
        register [0] <= 32'b0;
        register [1] <= 32'b0;
        register [2] <= 32'b0;
        register [3] <= 32'b0;
        register [4] <= 32'b0;
        register [5] <= 32'b0;
        register [6] <= 32'b0;
        register [7] <= 32'b0;
        register [8] <= 32'b0;
        register [9] <= 32'b0;
        register [10] <= 32'b0;
        register [11] <= 32'b0;
        register [12] <= 32'b0;
        register [13] <= 32'b0;
        register [14] <= 32'b0;
        register [15] <= 32'b0;
        register [16] <= 32'b0;
        register [17] <= 32'b0;
        register [18] <= 32'b0;
        register [19] <= 32'b0;
        register [20] <= 32'b0;
        register [21] <= 32'b0;
        register [22] <= 32'b0;
        register [23] <= 32'b0;
        register [24] <= 32'b0;
        register [25] <= 32'b0;
        register [26] <= 32'b0;
        register [27] <= 32'b0;
        register [28] <= 32'b0;
        register [29] <= 32'b0;
        register [30] <= 32'b0;
        register [31] <= 32'b0;
    end else begin
        //register [0] <= 32'b0;
        if(i_rd_wren && i_rd_addr != 5'd0) register[i_rd_addr] <= i_rd_data;
    end
end

endmodule
