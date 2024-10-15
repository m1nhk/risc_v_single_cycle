module program_counter_four(
    input logic [31:0] pc_i,
    output logic [31:0] next_pc_four
);

always_comb begin : pc_four
    next_pc_four = pc_i + 32'd4;
end

endmodule
