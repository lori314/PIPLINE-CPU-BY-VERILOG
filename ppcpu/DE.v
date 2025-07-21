`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:18 11/14/2024 
// Design Name: 
// Module Name:    DE 
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
module DE(
    input [31:0] Address,
    input [31:0] Din,
    input [2:0] MemOpE,
    output reg [31:0] Dout,
	 input Req
    );

always @(*) begin
if(Req) begin
Dout=0;
end
else begin
case(MemOpE) 
3:begin
Dout=Din;
end
4:begin
if(Address[1]==0) begin
Dout=$signed(Din[15:0]);
end
else if(Address[1]==1) begin
Dout=$signed(Din[31:16]);
end
else Dout=0;
end
5:begin
if(Address[1:0]==0) begin
Dout=$signed(Din[7:0]);
end
else if(Address[1:0]==1) begin
Dout=$signed(Din[15:8]);
end
else if(Address[1:0]==2) begin
Dout=$signed(Din[23:16]);
end
else if(Address[1:0]==3) begin
Dout=$signed(Din[31:24]);
end
else Dout=0;
end
default Dout=0;
endcase
end
end

endmodule
