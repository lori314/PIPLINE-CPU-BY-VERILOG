`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:12 10/29/2024 
// Design Name: 
// Module Name:    Trans 
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
module Trans(
    input [31:0] instr,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [15:0] immediate,
    output [25:0] instr_index
    );

assign rs=instr[25:21];
assign rt=instr[20:16];
assign rd=instr[15:11];
assign immediate=instr[15:0];
assign instr_index=instr[25:0];

endmodule
