`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:36:15 10/29/2024 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input reset,
	 input clk,
    input MemWrite,
	 input [31:0] pc,
    input [31:0] data,
    input [13:2] address,
    output [31:0] out
    );

reg[31:0] Mem[0:3072];
assign out=Mem[address];

integer i;

initial begin
for(i=0;i<=3072;i=i+1) begin
Mem[i]=0;
end
end

always @(posedge clk or posedge reset) begin
if(reset) begin
	for(i=0;i<=3072;i=i+1) begin
	Mem[i]<=0;
	end
end
else begin
	if(MemWrite) begin
		Mem[address]<=data;
		$display("%d@%h: *%h <= %h",$time, pc, {18'b0,address,2'b00}, data);
		end
	end
end

endmodule
