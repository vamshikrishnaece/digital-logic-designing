`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:26 09/07/2019 
// Design Name: 
// Module Name:    down_counter_311 
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
module down_counter_311(
    output reg [7:0] count_311,
    input clk_311,
    input reset_311
    );
always@(negedge clk_311)
		begin
			if(reset_311==1)
				count_311=255;
			else
				count_311=(count_311)-1;
		end
endmodule

