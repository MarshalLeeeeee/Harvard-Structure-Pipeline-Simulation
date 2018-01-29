`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:38:07 03/01/2017 
// Design Name: 
// Module Name:    signext 
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
module signext(inst, data);
	 
	 input [15:0] inst;
    output [31:0] data;
	 
	 assign data = inst[15] ? (32'b11111111111111111111111111111111 - (16'b1111111111111111 - inst + 1) + 1) : inst;

endmodule
