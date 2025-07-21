`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:07:23 11/06/2024 
// Design Name: 
// Module Name:    Hazard_Cotroller 
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
module Hazard_Cotroller(
    input [4:0] RS,
    input [4:0] RT,
    input [4:0] rt,
    input [4:0] rs,
	 input [4:0] RSE,
	 input [4:0] RTE,
    input [4:0] WAE,
    input [4:0] WAM,
	 input [31:0] PCE,
    input MemtoRegB,
	 input MemtoRegM,
    input RegWriteM,
    input RegWriteW,
	 input [2:0] n_sel,
	 input [4:0] WAD,
    output StallPC,
    output StallF,
    output CLRD,
    output [1:0] ForwardA,
    output [1:0] ForwardB,
	 output [1:0] R1DMux,
	 output [1:0] R2DMux,
	 output DMMux,
	 input[2:0] T_use_rs,
	 input[2:0] T_use_rt,
	 input[2:0] T_new,
	 input[2:0] T_use_rsE,
	 input[2:0] T_use_rtE,
	 input[2:0] T_newE,
	 input[2:0] T_newM,
	 input Busy,
	 input StartE,
	 output start,
	 input ID_EXLClr,
	 input C0WriteE,
	 input C0WriteM
    );

assign ForwardA=forwardA;
assign ForwardB=forwardB;
assign R1DMux=R1Mux;
assign R2DMux=R2Mux;
assign DMMux=dmMux;
assign StallPC=Stall;
assign StallF=Stall;
assign CLRD=Stall;
assign start=(StartE==1)?1:0;

reg [1:0] forwardA;
reg [1:0] forwardB;
reg [1:0] R1Mux;
reg [1:0] R2Mux;
reg dmMux;
reg Stall;

initial begin
forwardA=0;
forwardB=0;
R1Mux=0;
R2Mux=0;
dmMux=0;
Stall=0;
end

always @(*) begin
if(rs==WAE && RegWriteM==1 && rs!=0) begin
forwardA=2;
end
else if(rs==WAM && RegWriteW==1 && rs!=0) begin
forwardA=1;
end
else forwardA=0;
 
if(rt==WAE && RegWriteM==1 && rt!=0) begin
forwardB=2;
end
else if(rt==WAM && RegWriteW==1 && rt!=0) begin
forwardB=1;
end
else forwardB=0;

if(RS==WAE && RegWriteM==1 && RS!=0) begin
R1Mux=1;
end
else if(RS==WAM && RegWriteW==1 && RS!=0) begin
R1Mux=2;
end
else R1Mux=0;

if(RT==WAE && RegWriteM==1 && RT!=0) begin
R2Mux=1;
end
else if(RT==WAM && RegWriteW==1 && RT!=0) begin
R2Mux=2;
end
else R2Mux=0;

if(RTE==WAM && RegWriteW==1 && RTE!=0) begin
dmMux=1;
end
else dmMux=0;

if(Busy==1 || StartE==1) begin
Stall=1;
end
else if((T_use_rs<T_newE&&RS==WAD)||(T_use_rt<T_newE&&RT==WAD)) begin
Stall=1;
end
else if((T_use_rs<T_newM&&RS==WAE)||(T_use_rt<T_newM&&RT==WAE)) begin
Stall=1;
end
else if(ID_EXLClr==1 && (C0WriteE||C0WriteM) ) begin
Stall=1;
end
else Stall=0;

end
endmodule
