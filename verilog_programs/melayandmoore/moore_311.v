`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:55:11 09/07/2019 
// Design Name: 
// Module Name:    moore_311 
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
module moore_311 (out_311,in_311, clk_311,rst_311);
  output reg out_311;
  input in_311, clk_311,  rst_311;
  reg [2:0] state_311;  
  parameter s0_311=0,s1_311=1,s2_311=2,s3_311=3,s4_311=4;

	always@(negedge clk_311 or posedge rst_311)
		
				if(rst_311)
					state_311<=s0_311;
				else
					case(state_311)
							s0_311: if(in_311) state_311 <=s1_311;
								 else state_311 <= s0_311;
							s1_311: if(in_311) state_311 <=s1_311;
								 else state_311 <= s2_311;
							s2_311: if(in_311) state_311 <=s3_311;
								 else state_311 <= s0_311;
							s3_311: if(in_311) state_311 <=s4_311;
								 else state_311 <= s1_311;
							s4_311: if(in_311) state_311 <=s1_311;
							    else state_311 <=s2_311;
					endcase
					
	always@(state_311)
		
					case(state_311)
							s0_311: out_311 <=0;
							s1_311: out_311 <=0;
							s2_311: out_311 <=0;
							s3_311: out_311 <=0;
							s4_311: out_311 <=1;
					endcase
					

endmodule

