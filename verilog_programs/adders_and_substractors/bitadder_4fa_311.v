`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:30 09/07/2019 
// Design Name: 
// Module Name:    bitadder_4fa_311 
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
module bitadder_4fa_311(
    input [3:0] a,
    input [3:0] b,
    input cin,
    output cout_311,
    output [3:0] s_311,
    inout w1,
    inout w2,
    inout w3
    );
fa_311 g1(a[0],b[0],cin,s_311[0],w1);
fa_311 g2(w1,a[1],b[1],s_311[1],w2);
fa_311 g3(w2,a[2],b[2],s_311[2],w3);
fa_311 g4(w3,a[3],b[3],s_311[3],cout_311);
endmodule


