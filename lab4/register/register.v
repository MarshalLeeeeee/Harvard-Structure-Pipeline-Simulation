`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:03:13 03/01/2017 
// Design Name: 
// Module Name:    register 
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
module register(reset, clock_in, readReg1, readReg2,
		writeReg, writeData, regWrite,
      readData1, readData2
    );
	 
	 input reset;
	 input clock_in;
    input [25:21] readReg1;
    input [20:16] readReg2;
    input [4:0] writeReg;
    input [31:0] writeData;
    input regWrite;
    output [31:0] readData1;
    output [31:0] readData2;
	 
	 reg [31:0] regFile[31:0];
	 reg [31:0] readData1;
	 reg [31:0] readData2;
	 
	 always @ (readReg1 or readReg2 or ~regWrite)
	 begin
		readData1 = regFile[readReg1];
		readData2 = regFile[readReg2];
	 end
	 
	 always @ (negedge reset)
	 begin
			regFile[0] = 0;regFile[1] = 0;regFile[2] = 0;regFile[3] = 0;
			regFile[4] = 0;regFile[5] = 0;regFile[6] = 0;regFile[7] = 0;
			regFile[8] = 0;regFile[9] = 0;regFile[10] = 0;regFile[11] = 0;
			regFile[12] = 0;regFile[13] = 0;regFile[14] = 0;regFile[15] = 0;
			regFile[16] = 0;regFile[17] = 0;regFile[18] = 0;regFile[19] = 0;
			regFile[20] = 0;regFile[21] = 0;regFile[22] = 0;regFile[23] = 0;
			regFile[24] = 0;regFile[25] = 0;regFile[26] = 0;regFile[27] = 0;
			regFile[28] = 0;regFile[29] = 0;regFile[30] = 0;regFile[31] = 0;
	 end
	 
	 always @ (regWrite or writeReg or negedge clock_in)
	 begin
	 if(regWrite == 1)
	 begin
		if(writeReg != 0)
		begin
			regFile[writeReg] = writeData;
		end
	 end
	 end
	 
endmodule
