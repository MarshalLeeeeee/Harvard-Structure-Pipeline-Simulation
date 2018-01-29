`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:24:08 03/27/2017 
// Design Name: 
// Module Name:    InstructionMem 
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
module InstructionMem(
		input rst,
		input [31:0] instruction_address,
		output [31:0] instruction
    );
	 
	 reg [31:0] instruction_mem[63:0];
	 
	 always @(negedge rst)
	 begin
		 instruction_mem[0]  = 32'b10001100000000010000000000000001;// load mem[1] to reg[1]
		 instruction_mem[1]  = 32'b10001100000000100000000000000010;// load mem[2] to reg[2]
		 instruction_mem[2]  = 32'b10001100000000110000000000000011;// load mem[3] to reg[3]
		 instruction_mem[3]  = 32'b10001100000001000000000000000100;// load mem[4] to reg[4]
		 instruction_mem[4]  = 32'b10001100000001010000000000000101;// load mem[5] to reg[5]
		 instruction_mem[5]  = 32'b10001100000001100000000000000110;// load mem[6] to reg[6]
		 instruction_mem[6]  = 32'b00000000001000100011100000100000;// $7  = $1 + $2
		 instruction_mem[7]  = 32'b00000000001000100100000000100010;// $8  = $1 - $2
		 instruction_mem[8]  = 32'b00000000011001000100100000100100;// $9  = $3 & $4
		 instruction_mem[9]  = 32'b00000000011001000101000000100101;// $10 = $3 | $4
		 instruction_mem[10] = 32'b00000000101001100101100000100111;// $11 = $5 nor $6
		 instruction_mem[11] = 32'b00000000101001100110000000101010;// $12 = $5 slt $6
		 instruction_mem[12] = 32'b00010000011001110000000000000110;// jump if $7 == $3, 6 instruction
		 instruction_mem[13] = 32'b00000000001000100110100000100000;// $13 = $1 + $2
		 instruction_mem[14] = 32'b00000000001000100111000000100010;// $14 = $1 - $2
		 instruction_mem[15] = 32'b00000000011001000111100000100100;// $15 = $3 & $4
		 instruction_mem[16] = 32'b00000000011001001000000000100101;// $16 = $3 | $4
		 instruction_mem[17] = 32'b10101100000010000000000000010000;// store $8  to mem[16]
		 instruction_mem[18] = 32'b10101100000010010000000000010001;// store $9  to mem[17], to here!
		 instruction_mem[19] = 32'b10101100000010100000000000010010;// store $10 to mem[18]
		 instruction_mem[20] = 32'b10101100000010110000000000010011;// store $11 to mem[19]
		 instruction_mem[21] = 32'b10101100000011000000000000010100;// store $12 to mem[20]
	 end
	 
	 assign instruction = instruction_mem[instruction_address >> 2];


endmodule
