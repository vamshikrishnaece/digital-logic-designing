`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:29:20 09/07/2019 
// Design Name: 
// Module Name:    mux4x1_311 
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
module mux4x1_311(
    input i0_311,
    input i1_311,
    input i2_311,
    input i3_311,
    input s0_311,
    input s1_311,
    output y_311
    );
assign y_311=(((i0_311)&(~s1_311)&(~s0_311))
				 |((i1_311)&(~s1_311)&(s0_311))
				 |((i2_311)&(s1_311)&(~s0_311))
				 |((i3_311)&(s1_311)&(s0_311)));
endmodule

