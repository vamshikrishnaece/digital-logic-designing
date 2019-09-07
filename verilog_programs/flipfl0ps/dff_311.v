`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:10 09/07/2019 
// Design Name: 
// Module Name:    dff_311 
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
module dff_311(
    input d_311,
    input clk,
    input reset_311,
    output reg q_311,
    output reg qb_311
    );	
	always@(posedge clk)
		begin
				 if(reset_311==1)
				begin
					q_311 <=0;
					qb_311 <=1;
				end
				else 
				begin
					q_311<=d_311;
					qb_311<=~d_311;
				end
		end
endmodule

