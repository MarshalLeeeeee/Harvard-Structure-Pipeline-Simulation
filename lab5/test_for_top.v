`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:13:31 03/15/2017
// Design Name:   top
// Module Name:   E:/lmc/lab5/lab5/test_for_top.v
// Project Name:  lab5
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
	reg main_clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.main_clk(main_clk), 
		.reset(reset)
	);

	always #(100) main_clk = ~main_clk;
	initial begin
		// Initialize Inputs
		main_clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#90;
		reset = 0;
        
		// Add stimulus here

	end
      
endmodule

