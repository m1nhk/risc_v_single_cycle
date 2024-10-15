/* verilator lint_off UNUSED */
module imem (
    input logic rst_n,
    input logic [31:0] pc,

    output logic [31:0] instr
);

logic [31:0] mem [2047:0];

always_comb begin
    if (!rst_n) instr = 32'b0;
    else instr = mem[pc[12:2]];
end

initial begin
    $readmemh("mem.dump", mem);
end

endmodule
