`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:43:20 03/15/2017 
// Design Name: 
// Module Name:    TimeDv 
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
module TimeDv(
    input clk,
	 input rst,
    output clk_dv
    );
	 
	 reg [7:0] count;
	 reg clk_tmp;
	 
	 always @(negedge rst)
	 begin
		count <= 8'b00000000;
		clk_tmp <= 0;
	 end
	 
	 always @(posedge clk)
	 begin
			if(count == 8'b11000111)
			begin
				clk_tmp <= ~clk_tmp;
			end
		
			if(count == 8'b01100011)
			begin
				clk_tmp <= ~clk_tmp;
			end
			
			if(count == 8'b11000111)
				count <= 8'b00000000;
			else
				count <= count + 8'b00000001;
	 end

	assign clk_dv = clk_tmp;
endmodule
