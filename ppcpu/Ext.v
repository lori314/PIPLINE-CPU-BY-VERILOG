`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:51 10/30/2024 
// Design Name: 
// Module Name:    Ext 
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
module Ext(
    input ExtOp,
    input ExtHigh,
    input [15:0] in,
    output reg[31:0] out
    );

always @(*) begin
if(ExtOp) begin
out=$signed(in);
end
else begin
	if(ExtHigh) begin
	out={in,16'b0};
	end
	else out=in;
end
end

endmodule
