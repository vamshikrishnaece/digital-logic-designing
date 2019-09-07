`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:11 09/07/2019 
// Design Name: 
// Module Name:    srff_311 
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
module srff_311 (
    input s_311,
    input r_311,
    input clk,
    input reset,
    output reg q_311,
    output reg qb_311
    );
	always@(posedge clk)
		begin
				if((reset==1)||((s_311==0)&&(r_311==1)))
						begin
							q_311<=0;
							qb_311<=1;
						end
				
				else if(((s_311==1)&&(r_311==0))&&(reset==0))
						begin
							q_311<=1;
							qb_311<=0;
						end
		end
endmodule

