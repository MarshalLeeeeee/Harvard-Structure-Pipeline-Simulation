`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:16:13 03/27/2017 
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
    input clk,
    input rst
    );
	 
	 wire PCSRC;
	 wire [31:0] BRANCH_JUMP;
	 wire [31:0] INSTRUCTION_ADDRESS;
	 wire [31:0] INSTRUCTION_IN;
	 wire [31:0] INSTRUCTION_OUT;
	 wire [31:0] PC_TO_IR;
	 wire [31:0] PC_TO_RR;
	 wire [31:0] PC_TO_AR;
	 wire [31:0] JUMP_ADDRESS_TO_RR;
	 wire [31:0] JUMP_ADDRESS_TO_AR;
	 wire [4 :0] WRITE_REG;
	 wire [4 :0] WRITE_ADDRESS1;
	 wire [4 :0] WRITE_ADDRESS2;
	 wire [4 :0] WRITE_ADDRESS_TO_MR;
	 wire [31:0] REG_READ_DATA1;
	 wire [31:0] REG_READ_DATA2;
	 wire [31:0] REG_READ_DATA1_TO_ALU;
	 wire [31:0] REG_READ_DATA2_TO_ALU;
	 wire [31:0] REG_READ_DATA2_TO_DATAMEM;
	 wire [31:0] SIGN_EXTEND_TO_RR;
	 wire [31:0] SIGN_EXTEND_TO_ALU;
	 wire [31:0] ALURES;
	 wire [31:0] ALURES_TO_AR;
	 wire [31:0] ALURES_TO_DATAMEM;
	 wire [31:0] MEM_READ_DATA_TO_MR;
	 wire [31:0] MEM_READ_DATA;
	 wire REGWRITE, REGWRITE_TO_RR, REGWRITE_TO_AR, REGWRITE_TO_MR;
	 wire REGDST, REGDST_TO_RR;
	 wire ALUSRC, ALUSRC_TO_RR;
	 wire MEMTOREG, MEMTOREG_TO_RR, MEMTOREG_TO_AR, MEMTOREG_TO_MR;
	 wire MEMREAD, MEMREAD_TO_RR, MEMREAD_TO_AR;
	 wire MEMWRITE, MEMWRITE_TO_RR, MEMWRITE_TO_AR;
	 wire [1:0] ALUOP;
	 wire [1:0] ALUOP_TO_RR;
	 wire BRANCH_TO_RR, BRANCH_TO_AR;
	 wire JUMP_TO_RR, JUMP_TO_AR;
	 wire ZERO, ZERO_TO_AR;
	 wire [3:0] ALUCTR;
	 
	 PC mainPC(
	 .clk(clk),
	 .rst(rst),
	 .PCSrc(PCSRC),
	 .branch_jump(BRANCH_JUMP),
	 .instruction_address(INSTRUCTION_ADDRESS),
	 .PC_add_in(PC_TO_IR));
	 
	 InstructionMem mainInstructionMem(
	 .rst(rst),
	 .instruction_address(INSTRUCTION_ADDRESS),
	 .instruction(INSTRUCTION_IN));
	 
	 IR mainIR(
	 .clk(clk),
	 .instruction_in(INSTRUCTION_IN),
	 .PC_in(PC_TO_IR),
	 .instruction_out(INSTRUCTION_OUT),
	 .PC_out(PC_TO_RR),
	 .jump_address(JUMP_ADDRESS_TO_RR));
	 
	 Register mainRegister(
	 .reset(rst),
	 .clock_in(clk),
	 .readReg1(INSTRUCTION_OUT[25:21]),
	 .readReg2(INSTRUCTION_OUT[20:16]),
	 .writeReg(WRITE_REG),
	 .writeData(MEMTOREG ? MEM_READ_DATA : ALURES),
	 .regWrite(REGWRITE),
	 .readData1(REG_READ_DATA1),
	 .readData2(REG_READ_DATA2));
	 
	 Control mainControl(
	 .opCode(INSTRUCTION_OUT[31:26]),
	 .reset(rst),
	 .regDst(REGDST_TO_RR),
	 .aluSrc(ALUSRC_TO_RR),
	 .memToReg(MEMTOREG_TO_RR),
	 .regWrite(REGWRITE_TO_RR),
	 .memRead(MEMREAD_TO_RR),
	 .memWrite(MEMWRITE_TO_RR),
	 .branch(BRANCH_TO_RR),
	 .aluOp(ALUOP_TO_RR),
	 .jump(JUMP_TO_RR));
	 
	 SignExtend mainSignExtend(
	 .inst(INSTRUCTION_OUT[15:0]),
	 .data(SIGN_EXTEND_TO_RR));
	 
	 RR mainRR(
	 .clk(clk),
	 .readData1_in(REG_READ_DATA1),
	 .readData2_in(REG_READ_DATA2),
	 .sign_extend_in(SIGN_EXTEND_TO_RR),
	 .PC_add_in(PC_TO_RR),
	 .instruction(INSTRUCTION_OUT),
	 .jump_address_in(JUMP_ADDRESS_TO_RR),
	 .regDst_in(REGDST_TO_RR),
	 .aluSrc_in(ALUSRC_TO_RR),
	 .memToReg_in(MEMTOREG_TO_RR),
	 .regWrite_in(REGWRITE_TO_RR),
	 .memRead_in(MEMREAD_TO_RR),
	 .memWrite_in(MEMWRITE_TO_RR),
	 .branch_in(BRANCH_TO_RR),
	 .aluOp_in(ALUOP_TO_RR),
	 .jump_in(JUMP_TO_RR),
	 .readData1_out(REG_READ_DATA1_TO_ALU),
	 .readData2_out(REG_READ_DATA2_TO_ALU),
	 .sign_extend_out(SIGN_EXTEND_TO_ALU),
	 .PC_add_out(PC_TO_AR),
	 .jump_address_out(JUMP_ADDRESS_TO_AR),
	 .write_address1(WRITE_ADDRESS1),
	 .write_address2(WRITE_ADDRESS2),
	 .regDst_out(REGDST),
	 .aluSrc_out(ALUSRC),
	 .memToReg_out(MEMTOREG_TO_AR),
	 .regWrite_out(REGWRITE_TO_AR),
	 .memRead_out(MEMREAD_TO_AR),
	 .memWrite_out(MEMWRITE_TO_AR),
	 .branch_out(BRANCH_TO_AR),
	 .aluOp_out(ALUOP),
	 .jump_out(JUMP_TO_AR));
	 
	 ALUControl mainALUControl(
	 .aluOp(ALUOP),
	 .funct(SIGN_EXTEND_TO_ALU[5:0]),
	 .aluCtr(ALUCTR));
	 
	 ALU mainAlu(
	 .input1(REG_READ_DATA1_TO_ALU),
	 .input2(ALUSRC ? SIGN_EXTEND_TO_ALU : REG_READ_DATA2_TO_ALU),
	 .aluCtr(ALUCTR),
	 .zero(ZERO_TO_AR),
	 .aluRes(ALURES_TO_AR));
	 
	 AR mainAR(
	 .clk(clk),
	 .rst(rst),
	 .jump(JUMP_TO_AR),
	 .branch(BRANCH_TO_AR),
	 .zero(ZERO_TO_AR),
	 .jump_address(JUMP_ADDRESS_TO_AR),
	 .PC_add(PC_TO_AR),
	 .sign_extend(SIGN_EXTEND_TO_ALU),
	 .ALU_result_in(ALURES_TO_AR),
	 .readData2_in(REG_READ_DATA2_TO_ALU),
	 .write_address_in(REGDST ? WRITE_ADDRESS2 : WRITE_ADDRESS1),
	 .memRead_in(MEMREAD_TO_AR),
	 .memWrite_in(MEMWRITE_TO_AR),
	 .RegWrite_in(REGWRITE_TO_AR),
	 .MemtoReg_in(MEMTOREG_TO_AR),
	 .PCSrc(PCSRC),
	 .branch_jump(BRANCH_JUMP),
	 .ALU_result_out(ALURES_TO_DATAMEM),
	 .readData2_out(REG_READ_DATA2_TO_DATAMEM),
	 .write_address_out(WRITE_ADDRESS_TO_MR),
	 .memRead_out(MEMREAD),
	 .memWrite_out(MEMWRITE),
	 .RegWrite_out(REGWRITE_TO_MR),
	 .MemtoReg_out(MEMTOREG_TO_MR));
	 
	 DataMem mainDataMem(
	 .clock_in(clk),
	 .address(ALURES_TO_DATAMEM),
	 .writeData(REG_READ_DATA2_TO_DATAMEM),
	 .memWrite(MEMWRITE),
	 .memRead(MEMREAD),
	 .readData(MEM_READ_DATA_TO_MR));
	 
	 MR mainMR(
	 .clk(clk),
	 .ALU_result_in(ALURES_TO_DATAMEM),
	 .readData_in(MEM_READ_DATA_TO_MR),
	 .RegWrite_in(REGWRITE_TO_MR),
	 .MemtoReg_in(MEMTOREG_TO_MR),
	 .write_address_in(WRITE_ADDRESS_TO_MR),
	 .ALU_result_out(ALURES),
	 .readData_out(MEM_READ_DATA),
	 .RegWrite_out(REGWRITE),
	 .MemtoReg_out(MEMTOREG),
	 .write_address_out(WRITE_REG));


endmodule
