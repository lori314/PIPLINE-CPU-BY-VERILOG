`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:53 11/05/2024 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
    input reset,
    input clk,
    input [31:0] instr,
    input [31:0] PC,
    output [31:0] next_instr,
    input [31:0] next_PC,
	 input [4:0] ExcCode,
	 output [4:0] ExcCodeF,
	 input EN,
	 input BDIn,
	 output BDInD,
	 input Req,
	 input ID_EXLClr,
	 input [31:0] EPCOut
    );

reg[31:0] pc_reg;
reg[31:0] instr_reg;
reg[4:0] ExcCode_reg;
reg bdin;

assign next_instr=instr_reg;
assign next_PC=pc_reg;
assign ExcCodeF=ExcCode_reg;
assign BDInD=bdin;

always @(posedge clk or posedge reset) begin
if(reset) begin
pc_reg<=32'h0000_3000;
instr_reg<=0;
ExcCode_reg<=0;
bdin<=0;
end
else if(Req) begin
pc_reg<=32'h0000_4180;
instr_reg<=0;
ExcCode_reg<=0;
bdin<=0;
end
else if(EN) begin
if(ID_EXLClr) begin
pc_reg<=EPCOut;
instr_reg<=0;
ExcCode_reg<=0;
end
else if(ExcCode!=0) begin
pc_reg<=PC;
instr_reg<=0;
ExcCode_reg<=ExcCode;
bdin<=BDIn;
end
else begin
pc_reg<=PC;
instr_reg<=instr;
ExcCode_reg<=ExcCode;
bdin<=BDIn;
end
end
else ExcCode_reg<=0;
end

endmodule
