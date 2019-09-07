`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:37 09/07/2019 
// Design Name: 
// Module Name:    jkff_311 
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
module jkff_311(
    input j_311,
    input k_311,
    input clk_311,
    input reset,
    output reg q_311,
    output reg qb_311
    );
	always@(negedge clk_311)
		begin
			case({reset,j_311,k_311})
				3'b100: 	begin 
						q_311<=0; qb_311<=1; 
					end
				3'b001: 	begin 
						q_311<=0; qb_311<=1; 
					end
				3'b010: begin 
						q_311<=1; qb_311<=0; 
					end
				3'b011: begin 
						q_311<=~q_311; qb_311<=~qb_311;
					end
			endcase
		end
endmodule
