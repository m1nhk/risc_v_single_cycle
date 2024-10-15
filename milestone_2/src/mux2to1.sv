module mux2to1(
    input logic sel,
    input logic [31:0] in_0,
    input logic [31:0] in_1,

    output logic [31:0] out
);

always_comb begin : mux2to1
    if (sel) out = in_1;
    else out = in_0;
end

endmodule
