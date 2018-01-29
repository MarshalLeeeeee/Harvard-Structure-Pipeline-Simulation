`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:23:51 03/27/2017 
// Design Name: 
// Module Name:    IR 
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
module IR(
		input clk,
		input [31:0] instruction_in,
		input [31:0] PC_in,
		output reg [31:0] instruction_out,
		output reg [31:0] PC_out,
		output reg [31:0] jump_address
    );
	 
	 always @(negedge clk)
	 begin
		instruction_out = instruction_in;
		PC_out = PC_in;
		jump_address = ((instruction_in << 2) & 8'h0fffffff) + (PC_in & 8'hf0000000);
	 end


endmodule
