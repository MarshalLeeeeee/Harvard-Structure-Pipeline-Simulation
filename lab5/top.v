`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:02:05 03/01/2017 
// Design Name: 
// Module Name:    top 
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
module top(
    input main_clk,
    input reset
    );
	   wire [31:0] INST;
		wire REG_DST,
			JUMP,
			BRANCH,
			MEM_READ,
			MEM_TO_REG,
			MEM_WRITE;
		wire [1:0] ALU_OP;
		wire ALU_SRC,
			REG_WRITE;
		wire [31:0] READ_DATA1;
		wire [31:0] READ_DATA2;
		wire [31:0] READ_DATA;
		wire [31:0] SIGN_EXTEND;
		wire ZERO;
		wire [31:0] ADDRESS;
		wire [3:0] ALU_CTR;
		wire CLK_IN,
			RESET;
		wire [4:0] WRITE_REG;
		wire [31:0] WRITE_DATA;
		wire [31:0] READ_ADDRESS;
		wire [31:0] RESULT1;
		
		Ctr mainCtr(
		.opCode(INST[31:26]),
		.reset(RESET),
		.regDst(REG_DST),
		.jump(JUMP),
		.branch(BRANCH),
		.memRead(MEM_READ),
		.memToReg(MEM_TO_REG),
		.aluOp(ALU_OP),
		.memWrite(MEM_WRITE),
		.aluSrc(ALU_SRC),
		.regWrite(REG_WRITE));
		
		Alu mainAlu(
		.input1(READ_DATA1),
		.input2(RESULT1),
		.aluCtr(ALU_CTR),
		.zero(ZERO),
		.aluRes(ADDRESS));
		
		Mux1 mux1(
		.input1(SIGN_EXTEND),
		.input2(READ_DATA2),
		.signal(ALU_SRC),
		.out(RESULT1));
		
		AluCtr mainAluCtr(
		.aluOp(ALU_OP),
		.funct(INST[5:0]),
		.aluCtr(ALU_CTR));
	
		signext mainSignext(
		.inst(INST[15:0]),
		.data(SIGN_EXTEND));
		
		register mainRegister(
		.reset(reset),
		.clock_in(CLK_IN),
		.readReg1(INST[25:21]),
		.readReg2(INST[20:16]),
		.writeReg(REG_DST ? INST[15:11] : INST[20:16]),
		.writeData(MEM_TO_REG ? READ_DATA : ADDRESS),
		.regWrite(REG_WRITE),
		.readData1(READ_DATA1),
		.readData2(READ_DATA2));
		
		data_memory mainData_memory(
		.clock_in(CLK_IN),
		.address(ADDRESS),
		.writeData(READ_DATA2),
		.memWrite(MEM_WRITE),
		.memRead(MEM_READ),
		.readData(READ_DATA));
			
		ProgramCounter mainPC(
		.clock_in(CLK_IN),
		.reset(reset),
		.sgn_extend(SIGN_EXTEND),
		.branch(BRANCH),
		.zero(ZERO),
		.jump(JUMP),
		.inst(INST[25:0]),
		.read_address(READ_ADDRESS));
		
		Instruction_memory mainInstruction_memory(
		.reset(reset),
		.read_address(READ_ADDRESS),
		.instruction(INST));
		
		TimeDv mainTimeDv(
		.clk(main_clk),
		.rst(reset),
		.clk_dv(CLK_IN));

endmodule
