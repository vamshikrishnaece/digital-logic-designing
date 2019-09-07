`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:50 09/07/2019 
// Design Name: 
// Module Name:    up_down_311 
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
module up_down_311(
    output reg [3:0] count_311,
    input ud_311,
    input clk_311,
    input reset_311
    );
		always@(negedge clk_311)
			begin
				if(ud_311==1)
					begin
						if(reset_311==1)
						count_311=0;
						else
						count_311=count_311+1;
					end
				else
					begin
						if(reset_311==1)
						count_311=255;
						else
						count_311=count_311-1;
					end
			end	
endmodule

