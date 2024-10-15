/* verilator lint_off UNUSED */
module lsu(
    input logic i_clk,
    input logic i_rst_n,
    input logic [31:0] i_lsu_addr,
    input logic [31:0] i_st_data,
    input logic i_lsu_wren,
    input logic [31:0] i_io_sw,
    input logic [3:0] i_io_btn,

    output logic [31:0] o_ld_data,
    output logic [31:0] o_io_lcd,
    output logic [31:0] o_io_ledg,
    output logic [31:0] o_io_ledr
);

// Memory-mapped address boundaries
localparam ADDR_BTN    = 32'h7810;
localparam ADDR_SW     = 32'h7800;
localparam ADDR_LEDG   = 32'h7010;
localparam ADDR_LEDR   = 32'h7000;
localparam ADDR_LCD    = 32'h7030;
localparam ADDR_INST_MEM = 32'h0000; // Instruction memory (not implemented here)
localparam ADDR_DATA_MEM = 32'h2000; // Data memory (not implemented here)

// Internal registers
logic [31:0] led_r_reg; // Red LEDs register
logic [31:0] led_g_reg; // Green LEDs register
logic [31:0] lcd_reg;   // LCD register

// Assign output to internal registers
assign o_io_ledr = led_r_reg;
assign o_io_ledg = led_g_reg;
assign o_io_lcd  = lcd_reg;

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
        // Reset all registers to 0
        led_r_reg <= 32'b0;
        led_g_reg <= 32'b0;
        lcd_reg  <= 32'b0;
        o_ld_data <= 32'b0;
    end else begin
        if (i_lsu_wren) begin
            // Write operations
            case (i_lsu_addr)
                ADDR_LEDR: led_r_reg <= i_st_data;       // Write to Red LEDs
                ADDR_LEDG: led_g_reg <= i_st_data;       // Write to Green LEDs
                ADDR_LCD:  lcd_reg   <= i_st_data;       // Write to LCD
            endcase
        end else begin
            // Read operations
            case (i_lsu_addr)
                ADDR_BTN:    o_ld_data <= {28'b0, i_io_btn};   // Read buttons (only 4 bits)
                ADDR_SW:     o_ld_data <= i_io_sw;             // Read switches
                ADDR_LEDR:   o_ld_data <= led_r_reg;           // Read Red LEDs
                ADDR_LEDG:   o_ld_data <= led_g_reg;           // Read Green LEDs
                ADDR_LCD:    o_ld_data <= lcd_reg;             // Read LCD
                default:     o_ld_data <= 32'b0;               // Reserved or no data
            endcase
        end
    end
end
endmodule
