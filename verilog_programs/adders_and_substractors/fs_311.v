`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:17:41 09/07/2019 
// Design Name: 
// Module Name:    fs_311 
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
module fs_311(input x_311, input y_311,input z_311,output d_311,output b_311  );
assign d_311= x_311^y_311^z_311;
assign b_311=  ((~x_311)&y_311) | (y_311&z_311) | ((~x_311)&z_311);

endmodule
