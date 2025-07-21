`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:15 11/13/2024 
// Design Name: 
// Module Name:    div 
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
module div(
    input reset,
    input clk,
    input start,
    output Busy,
    input [31:0] A,
    input [31:0] B,
    output [31:0] HI,
    output [31:0] LO
    );

reg [3:0] count;
reg [31:0] hi;
reg [31:0] lo;
reg [31:0] temp1;
reg [31:0] temp2;

assign HI=(count!=0 || start==1)?0:temp2;
assign LO=(count!=0 || start==1)?0:temp1;
assign Busy=(count!=0)?1:0;

initial begin
count=0;
hi=0;
lo=0;
temp1=0;
temp2=0;
end

always @(*) begin
temp1=A/B;
temp2=A%B;
end

always @(posedge clk or posedge reset) begin
if(reset) begin
count<=0;
temp1<=0;
temp2<=0;
hi<=0;
lo<=0;
end
else begin
	if(start) begin
	count<=10;
	end
	else if(count!=0) begin
	count<=count-1;
	end
	else begin
	hi<=temp2;
	lo<=temp1;
	end
end
end

endmodule
