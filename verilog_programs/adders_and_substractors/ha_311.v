`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:14:11 09/07/2019 
// Design Name: 
// Module Name:    ha_311 
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
module ha_311(
    input a_311,
    input b_311,
    output s_311,
    output c_311
    );
    assign s_311= a_311 ^ b_311;
    assign c_311= a_311 & b_311;

endmodule

