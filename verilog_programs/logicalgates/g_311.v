`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:11:57 09/07/2019 
// Design Name: 
// Module Name:    g_311 
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
module g_311(
    input a_311,
    input b_311,
    output or_311,
    output and_311,
    output nand_311,
    output nor_311,
    output xor_311,
	 output not_311,
    output xnor_311
    );
	 
	 not(not_311,a_311);
	 or(or_311,a_311,b_311);
	 and(and_311,a_311,b_311);
	 nand(nand_311,a_311,b_311);
	 nor(nor_311,a_311,b_311);
	 xor(xor_311,a_311,b_311);
	 xnor(xnor_311,a_311,b_311);

endmodule

