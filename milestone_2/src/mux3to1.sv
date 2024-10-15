module mux3to1(
    input logic [1:0] sel,
    input logic [31:0] in_0,
    input logic [31:0] in_1,
    input logic [31:0] in_2,

    output logic [31:0] out
);

always_comb begin : mux3to1
    if(sel == 2'b10) out = in_2;
    else if(sel == 2'b01) out = in_1;
    else out = in_0;
end

endmodule
