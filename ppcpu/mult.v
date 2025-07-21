`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:31:23 11/13/2024 
// Design Name: 
// Module Name:    mult 
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
module mult(
    input reset,
    input clk,
    input start,
	 input [3:0] op,
	 input Req,
    output Busy,
    input [31:0] A,
    input [31:0] B,
    output [31:0] HI,
    output [31:0] LO
    );

reg [3:0] count;
reg [63:0] temp;
reg [31:0] hi;
reg [31:0] lo;
reg [31:0] temp1;
reg [31:0] temp2;
reg [3:0] type;

assign HI=(count!=0 || start==1)?0:hi;
assign LO=(count!=0 || start==1)?0:lo;
assign Busy=(count!=0)?1:0;

initial begin
temp=0;
count=0;
hi=0;
lo=0;
temp1=0;
temp2=0;
type=0;
end

always @(posedge clk or posedge reset) begin
if(reset) begin
count<=0;
temp<=0;
temp1<=0;
temp2<=0;
hi<=0;
lo<=0;
type<=0;
end
else begin
	if(count==0) begin
		if(start && Req==0) begin
			type<=op;
			if(op==1) begin
				count<=5;
				temp<=$signed(A)*$signed(B);
			end
			else if(op==2) begin
				count<=10;
				temp1<=$signed(A)%$signed(B);
				temp2<=$signed(A)/$signed(B);
			end
			else if(op==7) begin
				count<=5;
				temp<={0,A[31:0]}*{0,B[31:0]};
			end
			else if(op==8) begin
				count<=10;
				temp1<={0,A[31:0]}%{0,B[31:0]};
				temp2<={0,A[31:0]}/{0,B[31:0]};
			end
			else lo<=32'h0x0x0x0x;
		end
		else begin 
			if(op==3 && Req==0) begin
				hi<=A;
			end
			else if(op==4 && Req==0) begin
				lo<=A;
			end
		end
	end
	else if(count==1) begin
		if(type==1 || type==7) begin
			hi<=temp[63:32];
			lo<=temp[31:0];
			end
		else if(type==2 || type==8) begin
			hi<=temp1;
			lo<=temp2;
			end
		else lo<=32'h0x0x0x0x;
		count<=count-1;
	end
	else count<=count-1;
end
end

endmodule
