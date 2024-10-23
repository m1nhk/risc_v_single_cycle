/* verilator lint_off UNUSED */
module lsu(
    input logic i_clk,
    input logic i_rst_n,
    input logic [31:0] i_lsu_addr,
    input logic [31:0] i_st_data,
    input logic i_lsu_wren,
    input logic [31:0] i_io_sw,
    input logic [3:0] i_io_btn,
    input logic [31:0] instr,

    output logic [31:0] o_ld_data,
    output logic [31:0] o_io_lcd,
    output logic [31:0] o_io_ledg,
    output logic [31:0] o_io_ledr
);

// Internal registers
logic [31:0] led_r_reg; // Red LEDs register
logic [31:0] led_g_reg; // Green LEDs register
logic [31:0] lcd_reg;   // LCD register
logic [31:0] data_mem [8191:0]; // Data memory

// Assign output to internal registers
assign o_io_ledr = led_r_reg;
assign o_io_ledg = led_g_reg;
assign o_io_lcd  = lcd_reg;

always_ff @(negedge i_clk or negedge i_rst_n) begin 
    if (!i_rst_n) begin
        // Reset all registers to 0
        led_r_reg <= 32'b0;
        led_g_reg <= 32'b0;
        lcd_reg   <= 32'b0;
        o_ld_data <= 32'b0;
    end else begin
        if (i_lsu_wren) begin
            // Write operations
            if (i_lsu_addr >= 'h7000 && i_lsu_addr <= 'h700F) begin
                // Write to Red LEDs
                case (instr[14:12])
                    3'b000: led_r_reg <= {24'b0, i_st_data[7:0]};  // SB
                    3'b001: led_r_reg <= {16'b0, i_st_data[15:0]}; // SH
                    3'b010: led_r_reg <= i_st_data;                // SW
                    default: led_r_reg <= led_r_reg;
                endcase
            end else if (i_lsu_addr >= 'h7010 && i_lsu_addr <= 'h701F) begin
                // Write to Green LEDs
                case (instr[14:12])
                    3'b000: led_g_reg <= {24'b0, i_st_data[7:0]};  // SB
                    3'b001: led_g_reg <= {16'b0, i_st_data[15:0]}; // SH
                    3'b010: led_g_reg <= i_st_data;                // SW
                    default: led_g_reg <= led_g_reg;
                endcase
            end else if (i_lsu_addr >= 'h7020 && i_lsu_addr <= 'h703F) begin
                // Write to LCD
                case (instr[14:12])
                    3'b000: lcd_reg <= {24'b0, i_st_data[7:0]};  // SB
                    3'b001: lcd_reg <= {16'b0, i_st_data[15:0]}; // SH
                    3'b010: lcd_reg <= i_st_data;                // SW
                    default: lcd_reg <= lcd_reg;
                endcase
            end else if (i_lsu_addr < 8192) begin
                // Write to data memory
                case (instr[14:12])
                    3'b000: data_mem[i_lsu_addr] <= {24'b0, i_st_data[7:0]};  // SB
                    3'b001: data_mem[i_lsu_addr] <= {16'b0, i_st_data[15:0]}; // SH
                    3'b010: data_mem[i_lsu_addr] <= i_st_data;                // SW
                    default: data_mem[i_lsu_addr] <= i_st_data; // Default case
                endcase
            end
        end else begin
            // Read operations
            if (i_lsu_addr >= 'h7800 && i_lsu_addr <= 'h780F) begin
                // Read buttons
                o_ld_data <= {28'b0, i_io_btn};   // Only 4 bits
            end else if (i_lsu_addr >= 'h7100 && i_lsu_addr <= 'h71FF) begin
                // Read switches
                case (instr[14:12])
                    3'b000: o_ld_data <= {{24{i_io_sw[7]}}, i_io_sw[7:0]};   // LB
                    3'b001: o_ld_data <= {{16{i_io_sw[15]}}, i_io_sw[15:0]}; // LH
                    3'b010: o_ld_data <= i_io_sw;                            // LW
                    3'b100: o_ld_data <= {24'b0, i_io_sw[7:0]};              // LBU
                    3'b101: o_ld_data <= {16'b0, i_io_sw[15:0]};             // LHU
                    default: o_ld_data <= 32'b0;
                endcase
            end else if (i_lsu_addr >= 'h7000 && i_lsu_addr <= 'h700F) begin
                // Read Red LEDs
                case (instr[14:12])
                    3'b000: o_ld_data <= {{24{led_r_reg[7]}}, led_r_reg[7:0]};   // LB
                    3'b001: o_ld_data <= {{16{led_r_reg[15]}}, led_r_reg[15:0]}; // LH
                    3'b010: o_ld_data <= led_r_reg;                              // LW
                    3'b100: o_ld_data <= {24'b0, led_r_reg[7:0]};                // LBU
                    3'b101: o_ld_data <= {16'b0, led_r_reg[15:0]};               // LHU
                    default: o_ld_data <= 32'b0;
                endcase
            end else if (i_lsu_addr >= 'h7010 && i_lsu_addr <= 'h701F) begin
                // Read Green LEDs
                case (instr[14:12])
                    3'b000: o_ld_data <= {{24{led_g_reg[7]}}, led_g_reg[7:0]};   // LB
                    3'b001: o_ld_data <= {{16{led_g_reg[15]}}, led_g_reg[15:0]}; // LH
                    3'b010: o_ld_data <= led_g_reg;                              // LW
                    3'b100: o_ld_data <= {24'b0, led_g_reg[7:0]};                // LBU
                    3'b101: o_ld_data <= {16'b0, led_g_reg[15:0]};               // LHU
                    default: o_ld_data <= 32'b0;
                endcase
            end else if (i_lsu_addr >= 'h7020 && i_lsu_addr <= 'h703F) begin
                // Read LCD
                case (instr[14:12])
                    3'b000: o_ld_data <= {{24{lcd_reg[7]}}, lcd_reg[7:0]};     // LB
                    3'b001: o_ld_data <= {{16{lcd_reg[15]}}, lcd_reg[15:0]};   // LH
                    3'b010: o_ld_data <= lcd_reg;                              // LW
                    3'b100: o_ld_data <= {24'b0, lcd_reg[7:0]};                // LBU
                    3'b101: o_ld_data <= {16'b0, lcd_reg[15:0]};               // LHU
                    default: o_ld_data <= 32'b0;
                endcase
            end else if (i_lsu_addr < 8192) begin
                // Read from data memory
                case (instr[14:12])
                    3'b000: o_ld_data <= {{24{data_mem[i_lsu_addr][7]}}, data_mem[i_lsu_addr][7:0]};   // LB
                    3'b001: o_ld_data <= {{16{data_mem[i_lsu_addr][15]}}, data_mem[i_lsu_addr][15:0]}; // LH
                    3'b010: o_ld_data <= data_mem[i_lsu_addr];                                          // LW
                    3'b100: o_ld_data <= {24'b0, data_mem[i_lsu_addr][7:0]};                            // LBU
                    3'b101: o_ld_data <= {16'b0, data_mem[i_lsu_addr][15:0]};                           // LHU
                    default: o_ld_data <= 32'b0;
                endcase
            end else begin
                o_ld_data <= 32'b0; // Default case for out-of-bound addresses
            end
        end
    end
end

endmodule
