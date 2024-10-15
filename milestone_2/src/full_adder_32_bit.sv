/* verilator lint_off UNOPTFLAT */
module full_adder_32_bit (
    input logic [31:0] a,
    input logic [31:0] b,
    input logic cin, // cin = 0 for addition, cin = 1 for subtraction

    output logic [31:0] sum,
    output logic cout
);

wire [31:0] b_xor_sel;
wire [31:0] c;

// XOR each bit of b with cin to handle addition/subtraction
assign b_xor_sel = b ^ {32{cin}};

// Instantiate 32 full adders
genvar i;
generate
    full_adder_1_bit full_adder_0(a[0],b_xor_sel[0],cin,sum[0],c[0]);
    for (i = 1; i < 32; i++) begin: create_adder
        full_adder_1_bit full_adder(a[i],b_xor_sel[i],c[i-1],sum[i],c[i]);
    end
endgenerate

assign cout = c[31];

endmodule
