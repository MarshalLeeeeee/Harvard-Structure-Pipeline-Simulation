`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:55 02/25/2017 
// Design Name: 
// Module Name:    AluCtr 
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

module AluCtr(
    input [1:0] aluOp,
    input [5:0] funct,
    output [3:0] aluCtr
    );
	 
	 reg [3:0] aluCtr;
	 always @ (aluOp or funct)
	 begin
		if(aluOp == 2'b00) aluCtr = 4'b0010;
		else if(aluOp[0] == 1) aluCtr = 4'b0110;
		else
		begin
			if(funct[3:0] == 4'b0000) aluCtr = 4'b0010;
			if(funct[3:0] == 4'b0010) aluCtr = 4'b0110;
			if(funct[3:0] == 4'b0100) aluCtr = 4'b0000;
			if(funct[3:0] == 4'b0101) aluCtr = 4'b0001;
			if(funct[3:0] == 4'b1010) aluCtr = 4'b0111;
			if(funct[3:0] == 4'b0111) aluCtr = 4'b1100;
		end
	 end

endmodule
