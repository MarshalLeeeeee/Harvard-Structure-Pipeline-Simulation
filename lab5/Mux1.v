`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:12:26 03/22/2017 
// Design Name: 
// Module Name:    Mux1 
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
module Mux1(
    input [31:0] input1,
    input [31:0] input2,
    input signal,
    output [31:0] out
    );
	assign out = signal ? input1 : input2;

endmodule
