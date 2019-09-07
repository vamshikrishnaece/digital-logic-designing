`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:19 09/07/2019 
// Design Name: 
// Module Name:    hs_311 
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
module hs_311(
    input x_311,
    input y_311,
    output d_311,
    output b_311
    );
    assign d_311= x_311 ^ y_311;
    assign b_311= (~x_311)& y_311;

endmodule
