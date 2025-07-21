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
    input [1:0] nPC_sel,
    input [15:0] sel_PC,
	 input [31:0] jr_PC,
	 input [25:0] instr_index, 
    input reset,
    input clk,
    output [31:0] instr,
	 output [31:0] PC
    );	 

wire[31:0] pre_pc;
reg[31:0] pc;

IM im (
   .PC(pc),
	.instr(instr)
);

PC_trans trans (
		.PC(pc), 
		.sel_PC(sel_PC), 
		.nPC_sel(nPC_sel),
		.jr_PC(jr_PC),
		.instr_index(instr_index),
		.next_PC(pre_pc)
	);
	
assign PC=pc+32'h0000_3000;	
initial begin
pc=32'h0000_0000;
end

always @(posedge clk or posedge reset) begin
if(reset) begin
pc<=32'h0000_0000;
end
else begin
pc<=pre_pc;
end
end

endmodule
