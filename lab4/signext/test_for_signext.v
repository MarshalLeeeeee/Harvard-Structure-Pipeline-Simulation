`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:40:27 03/01/2017
// Design Name:   signext
// Module Name:   E:/lmc/lab4/signext/test_for_signext.v
// Project Name:  signext
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: signext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_signext;

	// Inputs
	reg [15:0] inst;

	// Outputs
	wire [31:0] data;

	// Instantiate the Unit Under Test (UUT)
	signext uut (
		.inst(inst), 
		.data(data)
	);

	initial begin
		// Initialize Inputs
		inst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#200 inst = 16'b0000000011111111;
		#200 inst = 16'b1000000011111111;
	end
      
endmodule

