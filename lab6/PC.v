`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:23:28 03/27/2017 
// Design Name: 
// Module Name:    PC 
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
module PC(
		input clk,
		input rst,
		input PCSrc,
		input [31:0] branch_jump,
		output reg [31:0] instruction_address,
		output reg [31:0] PC_add_in
    );
	 
	   reg [31:0] PC;

		always @(negedge rst)
		begin
			PC = 0;
			instruction_address = 0;
		end
		
		always @(posedge clk)
		begin
			PC_add_in = PC + 4;
			PC = PCSrc ? branch_jump : PC_add_in;
			instruction_address = PC;
		end

endmodule
