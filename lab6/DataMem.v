`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:24:36 03/27/2017 
// Design Name: 
// Module Name:    DataMem 
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
module DataMem(clock_in, address,
    writeData, memWrite, memRead, readData
    );
	 
	 input clock_in;
    input [31:0] address;
    input [31:0] writeData;
    input memWrite;
    input memRead;
    output [31:0] readData;
	 
	 reg [31:0] memFile[127:0];
	 reg [31:0] readData;
	 
	 initial
	 begin
		$readmemh("mem_data.txt", memFile);
	 end
	 
	 always @ (negedge clock_in)
	 begin
		if(memWrite == 1) 
		begin
		memFile[address] = writeData;
		end
	 end
	 
	 always @ (address)
	 begin
		readData = memFile[address];
	 end


endmodule
