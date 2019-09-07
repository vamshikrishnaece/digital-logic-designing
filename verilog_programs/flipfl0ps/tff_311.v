`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:00 09/07/2019 
// Design Name: 
// Module Name:    tff_311 
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
module tff_311(
    input t_311,
    input clk_311,
    input reset,
    output reg q_311,
    output reg qb_311
    );
   always@(negedge clk_311)
	   begin
			if(reset==1)
				begin
					q_311<=0;
					qb_311<=1;
				end
				
			if(t_311==1)
				begin
					q_311 <= ~q_311;
					qb_311 <= ~qb_311;
				end
		end
endmodule
