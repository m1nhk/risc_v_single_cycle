/* verilator lint_off UNUSED */
module lsu(
	input i_clk,
	input i_rst_n,
	input  logic [2:0] load_sel,
	input  logic [1:0] store_sel,
	//
	input  logic [31:0] i_lsu_addr, // aludata
	input  logic [31:0] i_st_data, 	// rs2_data
	input  logic 		i_lsu_wren,	// mem_wren
	input  logic [31:0] i_io_sw,
	input  logic [3:0] 	i_io_btn,
	output logic [31:0] o_ld_data,	// ld_data
	output logic [31:0] o_io_ledr,
	output logic [31:0] o_io_ledg,
	output logic [7:0] 	o_io_hex0,
	output logic [7:0] 	o_io_hex1, 
	output logic [7:0] 	o_io_hex2, 
	output logic [7:0] 	o_io_hex3, 
	output logic [7:0] 	o_io_hex4,  
	output logic [7:0] 	o_io_hex5, 
	output logic [7:0] 	o_io_hex6,
	output logic [7:0] 	o_io_hex7,  
	output logic [31:0] o_io_lcd

);
// --MEMORY LOCATION select--
logic [1:0] addr_sel;
assign addr_sel = {i_lsu_addr[14],i_lsu_addr[11]};	// 0x for dmem, 10 for output, 11 for input
// --OUTPUT select--
logic [1:0] output_sel;
assign output_sel = {i_lsu_addr[5],i_lsu_addr[4]};
// --HEX select--
logic [2:0] hex_sel;
assign hex_sel = {i_lsu_addr[2],i_lsu_addr[1],i_lsu_addr[0]};
// --INPUT select--
logic input_sel;
assign input_sel = i_lsu_addr[4];

//--------------------DMEM--------------------
logic [7:0] dmem[8191:0]; // 8 KB

//--------------------INPUT-------------------- 
// SWITCH
logic [31:0] sw_reg;
// BUTTON
logic [31:0] btn_reg;

//------------------- OUTPUT------------------- 
// HEX
logic [7:0] hex_reg[7:0];
assign o_io_hex0 = hex_reg[0];
assign o_io_hex1 = hex_reg[1];
assign o_io_hex2 = hex_reg[2];
assign o_io_hex3 = hex_reg[3];
assign o_io_hex4 = hex_reg[4];
assign o_io_hex5 = hex_reg[5];
assign o_io_hex6 = hex_reg[6];
assign o_io_hex7 = hex_reg[7];
// LED
logic [16:0] led_r_reg;
logic [7:0]  led_g_reg;
assign o_io_ledr = {15'b0, led_r_reg}; 
assign o_io_ledg = {24'b0, led_g_reg};  
// LCD 
logic [31:0] lcd_reg;
assign o_io_lcd  = lcd_reg;    


always @(negedge i_clk or negedge i_rst_n) begin
	if (!i_rst_n) begin
		o_ld_data <= 0;
	end
	case (i_lsu_wren)
	1'b0: begin // LOAD
		casez (addr_sel) // check bit 14 and bit 11
		2'b0z: begin // DMEM
			case (load_sel)
				3'b001: o_ld_data <= {{24{dmem[i_lsu_addr][7]}}, dmem[i_lsu_addr]}; 										 // LB
				3'b010: o_ld_data <= {{16{dmem[i_lsu_addr + 1][7]}}, dmem[i_lsu_addr + 1], dmem[i_lsu_addr]};  				 //	LH				
				3'b011: o_ld_data <= {24'b0, dmem[i_lsu_addr]};  															 // LBU
				3'b100: o_ld_data <= {16'b0, dmem[i_lsu_addr + 1], dmem[i_lsu_addr]};  								         // LHU
				3'b101: o_ld_data <= {dmem[i_lsu_addr + 3], dmem[i_lsu_addr + 2], dmem[i_lsu_addr + 1], dmem[i_lsu_addr]}; 	 // LW
				default: begin
				end
			endcase
		end
		2'b11: begin // INPUT 
			case (input_sel) 
			1'b0: o_ld_data <= sw_reg;
			1'b1: o_ld_data <= btn_reg;	
			endcase
		end
		default: begin
		end
		endcase
	end 
	1'b1: begin // STORE
		casez (addr_sel)
		2'b0z: begin // DMEM
			case (store_sel)
			2'b01:  // sb: Store Byte
				dmem[o_ld_data] 		<= i_st_data[7:0];
			2'b10: begin // sh: Store Halfword
				dmem[o_ld_data] 		<= i_st_data[7:0];
				dmem[o_ld_data + 1]		<= i_st_data[15:8];
			end
			2'b11: begin // sw: Store Word                   
				dmem[o_ld_data] 		<= i_st_data[7:0];
				dmem[o_ld_data + 1] 	<= i_st_data[15:8];
				dmem[o_ld_data + 2] 	<= i_st_data[23:16];
				dmem[o_ld_data + 3] 	<= i_st_data[31:24];
			end
			default: begin
			end
			endcase
		end
		2'b10: begin // OUTPUT MUX
			case (output_sel)
			2'b00: led_r_reg 		<= i_st_data[16:0];
			2'b01: led_g_reg 		<= i_st_data[7:0];
			2'b10: hex_reg[hex_sel] <= i_st_data[7:0];
			2'b11: lcd_reg	 		<= {i_st_data[31],20'b0,i_st_data[10:0]};
			endcase
		end
		2'b11: begin // INPUT
			case (input_sel)
			1'b0: begin
				if (i_io_sw[17]) begin
					sw_reg <= 32'b0;
				end else begin
					sw_reg <= {15'b0,i_io_sw[16:0]};
				end
			end
			1'b1: btn_reg <= {28'b0,i_io_btn[3:0]};	
			endcase
		end
		default: begin
		end
		endcase
	end
	endcase
end
endmodule

