`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:22 11/14/2024 
// Design Name: 
// Module Name:    BE 
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
module BE(
    output reg [3:0] m_data_byteen,
    input [31:0] Address,
    input [2:0] MemOpE,
	 input MemWriteE,
	 input [31:0] Mem_data,
	 output reg [31:0] fixed_Mem_data,
	 input Req
    );

always @(*) begin
if(Req) begin
m_data_byteen=0;
fixed_Mem_data=0;
end
else begin
if(MemWriteE) begin
case(MemOpE)
0:begin
m_data_byteen=4'b1111;
fixed_Mem_data=Mem_data;
end
1:begin
if(Address[1]===0) begin
m_data_byteen=4'b0011;
fixed_Mem_data=Mem_data;
end
else if(Address[1]===1) begin
m_data_byteen=4'b1100;
fixed_Mem_data={Mem_data[15:0],16'h0000};
end
else begin 
m_data_byteen=4'b0000;
fixed_Mem_data=Mem_data;
end
end
2:begin 
if(Address[1:0]===2'b00) begin
m_data_byteen=4'b0001;
fixed_Mem_data=Mem_data;
end
else if(Address[1:0]===2'b01) begin
m_data_byteen=4'b0010;
fixed_Mem_data={8'b0,8'b0,Mem_data[7:0],8'b0};
end
else if(Address[1:0]===2'b10) begin
m_data_byteen=4'b0100;
fixed_Mem_data={8'b0,Mem_data[7:0],8'b0,8'b0};
end
else if(Address[1:0]===2'b11) begin
m_data_byteen=4'b1000;
fixed_Mem_data={Mem_data[7:0],24'h000000};
end
else begin
m_data_byteen=4'b0000;
fixed_Mem_data=Mem_data;
end
end
default begin
m_data_byteen=4'b0000;
fixed_Mem_data=Mem_data;
end
endcase
end
else m_data_byteen=0;
end
end
endmodule
