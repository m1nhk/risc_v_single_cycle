module program_counter(
    input logic clk_i,
    input logic rst_ni,
    input logic [31:0] next_pc,

    output logic [31:0] pc
);

always_ff @(posedge clk_i or negedge rst_ni) begin
    if(!rst_ni) pc <= 32'b0;
    else pc <= next_pc;
end

endmodule
