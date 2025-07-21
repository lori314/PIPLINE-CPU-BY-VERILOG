`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:10:31 11/06/2024 
// Design Name: 
// Module Name:    IE_IM 
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
module IE_IM(
    input reset,
    input clk,
    input MemtoRegE,
    input MemWriteE,
    input RegWriteE,
    input [31:0] result,
    input [31:0] WDD,
    input [4:0] WAD,
	 input [4:0] rs,
	 input [4:0] rt,
	 input [4:0] rd,
	 output [4:0] RSE,
	 output [4:0] RTE,
	 output [4:0] RDE,
    output MemtoRegM,
    output RegWriteM,
    output MemWriteM,
    output [31:0] AOE,
    output [31:0] WDE,
    output [4:0] WAE,
    input [31:0] PCD,
    output [31:0] PCE,
	 input [2:0] T_newE,
	 output [2:0] T_newM,
	 input [2:0] MemOpE,
	 output [2:0] MemOpM,
	 input [4:0] ExcCodeE,
	 output [4:0] ExcCodeM,
	 input C0WriteE,
	 output C0WriteM,
	 input BDInE,
	 output BDInM,
	 input Req,
	 input ID_EXLClrE,
	 output ID_EXLClrM,
	 input [31:0] instrE,
	 output [31:0] instrM
    );

reg memtoreg;
reg memwrite;
reg regwrite;
reg[31:0] aoe;
reg[31:0] wde;
reg[4:0] wae;
reg[31:0] pc;
reg[4:0] Rs;
reg[4:0] Rt;
reg[4:0] Rd;
reg[2:0] t_new;
reg[2:0] memope;
reg[4:0] exccode;
reg c0write;
reg bdin;
reg id_exlclr;
reg [31:0] instr;

assign MemtoRegM=memtoreg;
assign MemWriteM=memwrite;
assign RegWriteM=regwrite;
assign AOE=aoe;
assign WDE=wde;
assign WAE=wae;
assign PCE=pc;
assign RSE=Rs;
assign RTE=Rt;
assign RDE=Rd;
assign T_newM=(t_new==0)?0:t_new-1;
assign MemOpM=memope;
assign ExcCodeM=exccode;
assign C0WriteM=c0write;
assign BDInM=bdin;
assign ID_EXLClrM=id_exlclr;
assign instrM=instr;

always @(posedge clk or posedge reset) begin
if(reset) begin
memtoreg<=0;
memwrite<=0;
regwrite<=0;
aoe<=0;
wde<=0;
wae<=0;
pc<=0;
Rs<=0;
Rt<=0;
Rd<=0;
t_new<=0;
memope<=0;
exccode<=0;
c0write<=0;
bdin<=0;
id_exlclr<=0;
instr<=0;
end
else if(Req) begin
memtoreg<=0;
memwrite<=0;
regwrite<=0;
aoe<=0;
wde<=0;
wae<=0;
pc<=32'h0000_4180;
Rs<=0;
Rt<=0;
Rd<=0;
t_new<=0;
memope<=0;
exccode<=0;
c0write<=0;
bdin<=0;
id_exlclr<=0;
instr<=0;
end
else begin
if(ExcCodeE!=0) begin
memtoreg<=0;
memwrite<=0;
regwrite<=0;
aoe<=0;
wde<=0;
wae<=0;
pc<=PCD;
Rs<=0;
Rt<=0;
Rd<=0;
t_new<=0;
memope<=0;
exccode<=ExcCodeE;
c0write<=0;
bdin<=BDInE;
id_exlclr<=0;
instr<=0;
end
else begin
memtoreg<=MemtoRegE;
memwrite<=MemWriteE;
regwrite<=RegWriteE;
aoe<=result;
wde<=WDD;
wae<=WAD;
pc<=PCD;
Rs<=rs;
Rt<=rt;
Rd<=rd;
t_new<=T_newE;
memope<=MemOpE;
exccode<=ExcCodeE;
c0write<=C0WriteE;
bdin<=BDInE;
id_exlclr<=ID_EXLClrE;
instr<=instrE;
end
end
end
endmodule
