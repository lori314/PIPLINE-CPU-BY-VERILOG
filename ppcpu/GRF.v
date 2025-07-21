`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:57:56 10/29/2024 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input reset,
	 input clk,
	 input [31:0] PC,
    input WE,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    output [31:0] R1,
    output [31:0] R2
    );

reg [31:0] registers[31:0];

assign R1=(A1==0)?0:registers[A1];
assign R2=(A2==0)?0:registers[A2];

integer i;
initial begin
for(i=0;i<=31;i=i+1) begin
registers[i]=0;
end
end

always @(posedge clk or posedge reset) begin
if(reset) begin
	for(i=0;i<=31;i=i+1) begin	
	registers[i]<=0;
	end
end
else begin
	if(WE) begin
	registers[A3]<=WD;
	end
end
end

endmodule
