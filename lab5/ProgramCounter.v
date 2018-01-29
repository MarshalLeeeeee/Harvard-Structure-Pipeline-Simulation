`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:55 03/08/2017 
// Design Name: 
// Module Name:    ProgramCounter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ProgramCounter(
    input clock_in,
	 input reset,
    input [31:0] sgn_extend,
    input branch,
    input zero,
    input jump,
    input [25:0] inst,
    output reg [31:0] read_address
    );
	 
	   reg [31:0] PC;
		reg [31:0] PC_4;
		reg [28:0] inst_shft;
		reg [31:0] jump_address;
		reg [31:0] add_2;
		reg [31:0] mux_1;
		reg [31:0] mux_2;
		
		always @(negedge reset)
		begin
			read_address = 0;
			PC = 0;
		end
		
		always @ (posedge clock_in)
		begin
				PC_4 = PC + 4;
				inst_shft = inst << 2;
				jump_address = inst_shft + (PC_4 & 8'hf0000000);
				add_2 = (sgn_extend << 2) + PC_4;
				mux_1 = (branch & zero) ? add_2 : PC_4;
				mux_2 = jump ? jump_address : mux_1;
				PC = mux_2;
				read_address = PC;
		end


endmodule
