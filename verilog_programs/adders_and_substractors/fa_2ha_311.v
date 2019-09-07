`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:12 09/07/2019 
// Design Name: 
// Module Name:    fa_2ha_311 
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
module fa_2ha_311(
    input a,
    input b,
    input c,
    output s_311,
	 wire w1,w2,w3,
    output cy_311
    );

ha_311 g1(a,b,w1,w2);
ha_311 g2(c,w1,s_311,w3);
or g3(cy_311,w2,w3);
endmodule

