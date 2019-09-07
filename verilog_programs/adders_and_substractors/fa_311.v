`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:16:33 09/07/2019 
// Design Name: 
// Module Name:    fa_311 
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
module fa_311(
    input a_311,
    input b_311,
    input c_311,
    output s_311,
    output cy_311,
	 inout x_311,
	 inout y_311,
	 inout z_311
	 
    );
	xor g1(s_311,a_311,b_311,c_311);
	and a1(x_311,a_311,c_311);
	and a2(y_311,a_311,b_311);
	and a3(z_311,b_311,c_311);
	or  o1(cy_311,x_311,y_311,z_311);


endmodule

