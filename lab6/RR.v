`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:22:59 03/27/2017 
// Design Name: 
// Module Name:    RR 
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
module RR(
      input clk,
		input [31:0] readData1_in,
		input [31:0] readData2_in,
		input [31:0] sign_extend_in,
		input [31:0] PC_add_in,
		input [31:0] instruction,
		input [31:0] jump_address_in,
		input regDst_in,
		input aluSrc_in,
		input memToReg_in,
		input regWrite_in,
		input memRead_in,
		input memWrite_in,
		input branch_in,
		input [1:0] aluOp_in,
		input jump_in,
		output reg [31:0] readData1_out,
		output reg [31:0] readData2_out,
		output reg [31:0] sign_extend_out,
		output reg [31:0] PC_add_out,
		output reg [31:0] jump_address_out,
		output reg [4:0] write_address1,
		output reg [4:0] write_address2,
		output reg regDst_out,
		output reg aluSrc_out,
		output reg memToReg_out,
		output reg regWrite_out,
		output reg memRead_out,
		output reg memWrite_out,
		output reg branch_out,
		output reg [1:0] aluOp_out,
		output reg jump_out
    );
	 
	 always @(negedge clk)
	 begin
		readData1_out = readData1_in;
		readData2_out = readData2_in;
		sign_extend_out = sign_extend_in;
		PC_add_out = PC_add_in;
		jump_address_out = jump_address_in;
		write_address1 = instruction[20:16];
		write_address2 = instruction[15:11];
		regDst_out = regDst_in;
		aluSrc_out = aluSrc_in;
		memToReg_out = memToReg_in;
		regWrite_out = regWrite_in;
		memRead_out = memRead_in;
		memWrite_out = memWrite_in;
		branch_out = branch_in;
		aluOp_out = aluOp_in;
		jump_out = jump_in;
	 end


endmodule
