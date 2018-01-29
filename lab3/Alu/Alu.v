`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:02 02/25/2017 
// Design Name: 
// Module Name:    Alu 
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
module Alu(input1,input2,aluCtr,zero,aluRes);
	 input [31:0] input1;
    input [31:0] input2;
    input [3:0] aluCtr;
    output zero;
    output [31:0] aluRes;
	 
	 reg zero;
	 reg [31:0] aluRes;
	 integer index;
	 
	 always @ (input1 or input2 or aluCtr)
	 begin
			if (aluCtr == 4'b0000)// AND
			begin
				for(index = 0; index < 32; index = index + 1) aluRes[index] = input1[index] & input2[index];
				if (aluRes == 0) zero = 1;
				else zero = 0;
			end
			
			else if (aluCtr == 4'b0001)// OR
			begin
				for(index = 0; index < 32; index = index + 1) aluRes[index] = input1[index] | input2[index];
				if (aluRes == 0) zero = 1;
				else zero = 0;
			end
			
			else if (aluCtr == 4'b0010)// add
			begin
				aluRes = input1 + input2;
				if (aluRes == 0) zero = 1;
				else zero = 0;
			end
			
			else if (aluCtr == 4'b0110)// subtract
			begin
				aluRes = input1 - input2;
				if (aluRes == 0) zero = 1;
				else zero = 0;
			end
			
			else if (aluCtr == 4'b0111)// slt
			begin
				aluRes = input1 < input2;
				if (aluRes == 0) zero = 1;
				else zero = 0;
			end
			
			else if (aluCtr == 4'b1100)// NOR
			begin
				for(index = 0; index < 32; index = index + 1) aluRes[index] = ~ (input1[index] | input2[index]);
				if (aluRes == 0) zero = 1;
				else zero = 0;
			end
			
			else ;
	 end


endmodule
