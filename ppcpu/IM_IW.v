`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:23:49 11/06/2024 
// Design Name: 
// Module Name:    IM_IW 
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
module IM_IW(
    input reset,
    input clk,
    input MemtoRegM,
    input RegWriteM,
    output MemtoRegW,
    output RegWriteW,
    input [31:0] out,
    output [31:0] MDM,
    input [31:0] AOE,
    output [31:0] AOM,
    input [4:0] WAE,
    output [4:0] WAM,
	 input[31:0] PCE,
	 output[31:0] PCM,
	 input Req,
	 input [31:0] instrM,
	 output [31:0] instrW
    );

reg memtoreg;
reg regwrite;
reg[31:0] mdm;
reg[31:0] aom;
reg[4:0] wam;
reg[31:0] pc;
reg [31:0] instr;

assign MemtoRegW=memtoreg;
assign RegWriteW=regwrite;
assign MDM=mdm;
assign AOM=aom;
assign WAM=wam;
assign PCM=pc;
assign instrW=instr;

always @(posedge clk or posedge reset)begin
if(reset) begin
memtoreg<=0;
regwrite<=0;
mdm<=0;
aom<=0;
wam<=0;
pc<=0;
instr<=0;
end
else if(Req) begin
memtoreg<=0;
regwrite<=0;
mdm<=0;
aom<=0;
wam<=0;
pc<=0;
instr<=0;
end
else begin
memtoreg<=MemtoRegM;
regwrite<=RegWriteM;
mdm<=out;
aom<=AOE;
wam<=WAE;
pc<=PCE;
instr<=instrM;
end
end
endmodule
