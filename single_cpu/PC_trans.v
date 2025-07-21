`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:49 10/29/2024 
// Design Name: 
// Module Name:    PC_trans 
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
module PC_trans(
    input [31:0] PC,
    input [15:0] sel_PC,
	 input [31:0] jr_PC,
	 input [25:0] instr_index,
    input [1:0] nPC_sel,
    output [31:0] next_PC
    );

wire[31:0] ext_PC;

assign ext_PC=$signed({sel_PC,2'b00});
assign next_PC=(nPC_sel==1)?ext_PC+4+PC:
					(nPC_sel==2)?({PC[31:28],instr_index,2'b00})-32'h0000_3000:
					(nPC_sel==3)?(jr_PC)-32'h0000_3000:
					PC+4;

endmodule
