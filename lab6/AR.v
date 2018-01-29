`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:25:11 03/27/2017 
// Design Name: 
// Module Name:    AR 
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
module AR(
      input clk,
		input rst,
		input jump,
		input branch,
		input zero,
		input [31:0] jump_address,
		input [31:0] PC_add,
		input [31:0] sign_extend,
		input [31:0] ALU_result_in,
		input [31:0] readData2_in,
		input [4:0] write_address_in,
		input memRead_in,
		input memWrite_in,
		input RegWrite_in,
		input MemtoReg_in,
		output reg PCSrc,
		output reg [31:0] branch_jump,
		output reg [31:0] ALU_result_out,
		output reg [31:0] readData2_out,
		output reg [4:0] write_address_out,
		output reg memRead_out,
		output reg memWrite_out,
		output reg RegWrite_out,
		output reg MemtoReg_out
    );
	 
	 always @ (negedge rst) PCSrc = 0;
	 
	 always @(negedge clk)
	 begin
		if(jump == 1 || (branch == 1 && zero == 1)) PCSrc = 1;
		else PCSrc = 0;
		branch_jump = jump ? (jump_address) : ((sign_extend << 2) + PC_add);
		ALU_result_out = ALU_result_in;
		readData2_out = readData2_in;
		write_address_out = write_address_in;
		memRead_out = memRead_in;
		memWrite_out = memWrite_in;
		RegWrite_out = RegWrite_in;
		MemtoReg_out = MemtoReg_in;
	 end

endmodule
