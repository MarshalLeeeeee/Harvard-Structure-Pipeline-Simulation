`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:23:39 03/27/2017 
// Design Name: 
// Module Name:    MR 
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
module MR(
		input clk,
		input [31:0] ALU_result_in,
		input [31:0] readData_in,
		input RegWrite_in,
		input MemtoReg_in,
		input [4:0] write_address_in,
		output reg [31:0] ALU_result_out,
		output reg [31:0] readData_out,
		output reg RegWrite_out,
		output reg MemtoReg_out,
		output reg [4:0] write_address_out
    );

	always @(negedge clk)
	begin
		ALU_result_out = ALU_result_in;
		readData_out = readData_in;
		RegWrite_out = RegWrite_in;
		MemtoReg_out = MemtoReg_in;
		write_address_out = write_address_in;
	end

endmodule
