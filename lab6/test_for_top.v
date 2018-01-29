`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:35:47 03/27/2017
// Design Name:   top
// Module Name:   F:/document/SJTU/course/computer_architecture/experiment/workshop/lmc/lab6/lab6/test_for_top.v
// Project Name:  lab6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_top;

	// Inputs
	reg clk;
	reg rst;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst)
	);

	always #(100) clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		// Wait 100ns for global reset to finish
		#100;
		rst = 0;
        
		// Add stimulus here

	end
      
endmodule

