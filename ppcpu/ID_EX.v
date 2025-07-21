`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:41 11/05/2024 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	 input CLR,
    input MemtoReg,
    input MemWrite,
    input RegDst,
    input RegWrite,
    input [2:0] ALUctr,
    input ALUSrc,
	 input [2:0] MemOp,
	 output [2:0] MemOpE,
    output MemtoRegE,
    output RegWriteE,
    output MemWriteE,
    output [2:0] ALUctrE,
    output ALUSrcE,
    output RegDstE,
    input [31:0] PCF,
    output [31:0] PCD,
    input[31:0] R1,
    input[31:0] R2,
    output[31:0] R1D,
    output[31:0] R2D,
    input [31:0] ext_immediate,
    output [31:0] IMD,
    input clk,
    input reset,
    input JAL_PC,
    output JAL_PCE,
	 input[4:0] RS,
	 output[4:0] rs,
	 input[4:0] RT,
	 output[4:0] rt,
	 input[4:0] RD,
	 output[4:0] rd,
	 input [2:0] T_use_rt,
	 input [2:0] T_use_rs,
	 input [2:0] T_new,
	 input [4:0] WAF,
	 output [4:0] WAD,
	 output [2:0] T_use_rsE,
	 output [2:0] T_use_rtE,
	 output [2:0] T_newE,
	 input [3:0] Multop,
	 output [3:0] MultopE,
	 input Start,
	 output StartE,
	 input [4:0] ExcCodeD,
	 output [4:0] ExcCodeE,
	 input C0Write,
	 output C0WriteE,
	 input BDIn,
	 output BDInE,
	 input [2:0] nPC_sel,
	 output [2:0] nPC_selE,
	 input Req,
	 input ID_EXLClr,
	 output ID_EXLClrE,
	 input [31:0] instrD,
	 output [31:0] instrE
    );

reg memtoreg;
reg memwrite;
reg regdst;
reg regwrite;
reg[2:0] aluctr;
reg alusrc;
reg jal;
reg[31:0] imd;
reg[31:0] r1d;
reg[31:0] r2d;
reg[31:0] pc;
reg[4:0] Rs;
reg[4:0] Rt;
reg[4:0] Rd;
reg[2:0] t_use_rs;
reg[2:0] t_use_rt;
reg[2:0] t_new;
reg [4:0] wad;
reg [3:0] multop;
reg start;
reg [2:0] memop;
reg [4:0] exccode;
reg c0write;
reg bdin;
reg [2:0] npc_sel;
reg id_exlclr;
reg [31:0] instr;

assign MemtoRegE=memtoreg;
assign MemWriteE=memwrite;
assign RegDstE=regdst;
assign RegWriteE=regwrite;
assign ALUctrE=aluctr;
assign ALUSrcE=alusrc;
assign JAL_PCE=jal;
assign IMD=imd;
assign R1D=r1d;
assign R2D=r2d;
assign PCD=pc;
assign rs=Rs;
assign rt=Rt;
assign rd=Rd;
assign T_use_rsE=t_use_rs-1;
assign T_use_rtE=t_use_rt-1;
assign T_newE=(t_new==0)?0:t_new-1;
assign WAD=wad;
assign MultopE=multop;
assign StartE=start;
assign MemOpE=memop;
assign ExcCodeE=exccode;
assign C0WriteE=c0write;
assign BDInE=bdin;
assign nPC_selE=npc_sel;
assign ID_EXLClrE=id_exlclr;
assign instrE=instr;

always @(posedge clk or posedge reset) begin
if(reset) begin
memtoreg<=0;
memwrite<=0;
regdst<=0;
regwrite<=0;
aluctr<=0;
alusrc<=0;
jal<=0;
imd<=0;
r1d<=0;
r2d<=0;
pc<=0;
Rs<=0;
Rt<=0;
Rd<=0;
t_use_rs<=4;
t_use_rt<=4;
t_new<=0;
wad<=0;
multop<=0;
start<=0;
memop<=0;
exccode<=0;
c0write<=0;
bdin<=0;
npc_sel<=0;
id_exlclr<=0;
instr<=0;
end
else if(Req) begin
memtoreg<=0;
memwrite<=0;
regdst<=0;
regwrite<=0;
aluctr<=0;
alusrc<=0;
jal<=0;
imd<=0;
r1d<=0;
r2d<=0;
pc<=32'h0000_4180;
Rs<=0;
Rt<=0;
Rd<=0;
t_use_rs<=4;
t_use_rt<=4;
t_new<=0;
wad<=0;
multop<=0;
start<=0;
memop<=0;
exccode<=0;
c0write<=0;
bdin<=0;
npc_sel<=0;
id_exlclr<=0;
instr<=0;
end
else if(CLR) begin
memtoreg<=0;
memwrite<=0;
regdst<=0;
regwrite<=0;
aluctr<=0;
alusrc<=0;
jal<=0;
imd<=0;
r1d<=0;
r2d<=0;
Rs<=0;
Rt<=0;
Rd<=0;
t_use_rs<=4;
t_use_rt<=4;
t_new<=0;
wad<=0;
bdin<=BDIn;
pc<=PCF;
multop<=0;
start<=0;
memop<=0;
exccode<=0;
c0write<=0;
npc_sel<=0;
id_exlclr<=0;
instr<=0;
end
else begin
if(ExcCodeD!=0) begin
memtoreg<=0;
memwrite<=0;
regdst<=0;
regwrite<=0;
aluctr<=0;
alusrc<=0;
jal<=0;
imd<=0;
r1d<=0;
r2d<=0;
pc<=PCF;
Rs<=0;
Rt<=0;
Rd<=0;
t_use_rs<=4;
t_use_rt<=4;
t_new<=0;
wad<=0;
multop<=0;
start<=0;
memop<=0;
exccode<=ExcCodeD;
c0write<=0;
bdin<=BDIn;
npc_sel<=0;
id_exlclr<=0;
instr<=0;
end
else begin
memtoreg<=MemtoReg;
memwrite<=MemWrite;
regdst<=RegDst;
regwrite<=RegWrite;
aluctr<=ALUctr;
alusrc<=ALUSrc;
jal<=JAL_PC;
imd<=ext_immediate;
r1d<=R1;
r2d<=R2;
pc<=PCF;
Rs<=RS;
Rt<=RT;
Rd<=RD;
t_use_rs<=T_use_rs;
t_use_rt<=T_use_rt;
t_new<=T_new;
wad<=WAF;
multop<=Multop;
start<=Start;
memop<=MemOp;
exccode<=ExcCodeD;
c0write<=C0Write;
bdin<=BDIn;
npc_sel<=nPC_sel;
id_exlclr<=ID_EXLClr;
instr<=instrD;
end
end
end
endmodule
