`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:47 11/27/2024 
// Design Name: 
// Module Name:    ExcM 
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
module ExcM(
    input MemtoRegM,
    input MemWriteM,
    input [2:0] MemOpM,
    input [31:0] Address,
    input [4:0] ExcCodeM,
    output reg[4:0] ExcCodeW
    );

reg inrange;

always @(*) begin
	if((Address>=32'h0000_0000 && Address<=32'h0000_2FFF)||(Address>=32'h0000_7F00 && Address<=32'h0000_7F0B)||(Address>=32'h0000_7F10 && Address<=32'h0000_7F1B)||(Address>=32'h0000_7F20 && Address<=32'h0000_7F23)) inrange=1;
	else inrange=0;
	if(MemtoRegM) begin
		if(MemOpM==3) begin
			if(Address%4==0 && inrange) ExcCodeW=ExcCodeM;
			else ExcCodeW=4;
		end
		if(MemOpM==4) begin
			if(Address%2==0 && ((Address>=32'h0000_0000 && Address<=32'h0000_2FFF)||(Address>=32'h0000_7F20 && Address<=32'h0000_7F23))) begin
				ExcCodeW=ExcCodeM;
			end
			else ExcCodeW=4;
		end
		if(MemOpM==5) begin
			if((Address>=32'h0000_0000 && Address<=32'h0000_2FFF)||(Address>=32'h0000_7F20 && Address<=32'h0000_7F23)) ExcCodeW=ExcCodeM;
			else ExcCodeW=4;
		end
	end
	if(MemWriteM) begin
		if(MemOpM==0) begin
			if(Address%4==0 && inrange && Address!=32'h0000_7F08 && Address!=32'h0000_7F18) ExcCodeW=ExcCodeM;
			else ExcCodeW=5;
		end
		if(MemOpM==1) begin
			if(Address%2==0 && ((Address>=32'h0000_0000 && Address<=32'h0000_2FFF)||(Address>=32'h0000_7F20 && Address<=32'h0000_7F23))) begin
				ExcCodeW=ExcCodeM;
			end
			else ExcCodeW=5;
		end
		if(MemOpM==2) begin
			if((Address>=32'h0000_0000 && Address<=32'h0000_2FFF)||(Address>=32'h0000_7F20 && Address<=32'h0000_7F23)) ExcCodeW=ExcCodeM;
			else ExcCodeW=5;
		end
	end
	if(MemWriteM!=1 && MemtoRegM!=1) ExcCodeW=ExcCodeM;
end

endmodule
