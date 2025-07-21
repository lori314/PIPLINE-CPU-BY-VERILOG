`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:07:51 10/29/2024 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input [2:0] nPC_sel,
    input [15:0] sel_PC,
	 input [31:0] jr_PC,
	 input [25:0] instr_index, 
    input reset,
    input clk,
	 input EN,
	 input Req,
	 input [31:0] EPCOut,
	 output [31:0] PC,
	 output [4:0] ExcCode,
	 input ID_EXLClr
    );	 

wire[31:0] pre_pc;
reg[31:0] pc;

PC_trans trans (
		.PC(pc), 
		.sel_PC(sel_PC), 
		.nPC_sel(nPC_sel),
		.Req(Req),
		.jr_PC(jr_PC),
		.instr_index(instr_index),
		.next_PC(pre_pc),
		.EPCOut(EPCOut),
		.ID_EXLClr(ID_EXLClr)
	);
	
assign PC=pc+32'h0000_3000;	
assign ExcCode=( pc%4!=0 || pc<32'h0000_0000 || pc> 32'h0000_3ffc )?4:0;
initial begin
pc=32'h0000_0000;
end

always @(posedge clk or posedge reset) begin
if(reset) begin
pc<=32'h0000_0000;
end
else if(Req) begin
pc<=32'h0000_4180-32'h0000_3000;
end
else if(ID_EXLClr) begin
pc<=EPCOut-32'h0000_3000;
end
else if(EN) begin
pc<=pre_pc;
end
else pc<=pc;
end

endmodule
