`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:39:10 09/07/2019
// Design Name:   down_counter_311
// Module Name:   D:/dld_github/counters/tb_down_counter_311.v
// Project Name:  counters
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: down_counter_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_down_counter_311;
	reg clk_311;
	reg reset_311;
	wire [7:0] count_311;
	down_counter_311 uut (
		.count_311(count_311), 
		.clk_311(clk_311), 
		.reset_311(reset_311)
	);
	initial begin	$monitor($time,"clk_311=%b,reset_311=%b,count_311=%b",clk_311,reset_311,count_311);
			 clk_311 = 0;
			 reset_311 = 1;
			#8 reset_311=0;
			#3000; 
			$stop;
		end
	initial 
		begin
			forever 	#0.5 clk_311=~clk_311;
		end
endmodule
