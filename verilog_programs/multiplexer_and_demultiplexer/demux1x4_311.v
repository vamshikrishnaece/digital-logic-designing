`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:31:13 09/07/2019 
// Design Name: 
// Module Name:    demux1x4_311 
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
module demux1x4_311(
    input i,
    input s0,
    input s1,
    output y0_311,
    output y1_311,
    output y2_311,
	 output y3_311
    );
assign y0_311=((~s1)&(~s0)&(i));
assign y1_311=((~s1)&(s0)&(i));
assign y2_311=((s1)&(~s0)&(i));
assign y3_311=((s1)&(s0)&(i));
endmodule
