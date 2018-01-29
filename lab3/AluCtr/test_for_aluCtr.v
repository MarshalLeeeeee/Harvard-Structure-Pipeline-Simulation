`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:38:26 02/25/2017
// Design Name:   AluCtr
// Module Name:   F:/program/ISE/sophomore_2/lab3/AluCtr/test_for_aluCtr.v
// Project Name:  AluCtr
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AluCtr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_aluCtr;

	// Inputs
	reg [1:0] aluOp;
	reg [5:0] funct;

	// Outputs
	wire [3:0] aluCtr;

	// Instantiate the Unit Under Test (UUT)
	AluCtr uut (
		.aluOp(aluOp), 
		.funct(funct), 
		.aluCtr(aluCtr)
	);

	initial begin
		// Initialize Inputs
		aluOp = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		#100 {aluOp, funct} = 8'b00000000;
		#100 {aluOp, funct} = 8'b01000000;
		#100 {aluOp, funct} = 8'b10000000;
		#100 {aluOp, funct} = 8'b10000010;
		#100 {aluOp, funct} = 8'b10000100;
		#100 {aluOp, funct} = 8'b10000101;
		#100 {aluOp, funct} = 8'b10001010;
		// Add stimulus here

	end
      
endmodule

