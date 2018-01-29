`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:59:12 03/08/2017 
// Design Name: 
// Module Name:    instruction_memory 
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
module Instruction_memory(
	 input reset,
    input [31:0] read_address,
    output [31:0] instruction
    );
		
		reg [31:0] instruction_mem[255:0];
/*		
		initial
		begin
			$readmemh("mem_inst.txt", instruction_mem);
		end
*/
		always @(negedge reset)
		begin
				instruction_mem[0]  = 32'b00001000000000000000000000000100;
				instruction_mem[1]  = 32'b00000000000000000000000000000000;
				instruction_mem[2]  = 32'b00000000000000000000000000000000;
				instruction_mem[3]  = 32'b00000000000000000000000000000000;
				instruction_mem[4]  = 32'b10001100000000010000000000000000;//load mem[0] to 1
				instruction_mem[5]  = 32'b10001100000000100000000000000001;//load mem[1] to 2
				instruction_mem[6]  = 32'b00000000001000100001100000100000;//add $1 $2 to $3
				instruction_mem[7]  = 32'b00000000001000100010000000100010;//sub $1 $2 to $4
				instruction_mem[8]  = 32'b10101100000001000000000000100000;//store $4 to mem[32];
				instruction_mem[9]  = 32'b10001100000001010000000000000101;//load mem[5] to $5
				instruction_mem[10] = 32'b10001100000001100000000000000110;//load mem[6] to $6
				instruction_mem[11] = 32'b00000000101001100011100000100100;//and $5 $6 to $7
				instruction_mem[12] = 32'b00000000101001100100000000100101;//or $5 $6 to $8
				instruction_mem[13] = 32'b00000000101001100100100000100111;//nor $5 $6 to $9
		end
		
		assign instruction = instruction_mem[read_address >> 2];

endmodule
