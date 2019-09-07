`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:54:38 09/07/2019
// Design Name:   mealy_311
// Module Name:   D:/dld_github/melayandmoore/tb_melay_311.v
// Project Name:  melayandmoore
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mealy_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_melay_311;
	reg in_311;
	reg clk_311;
	reg rst_311;
	wire out_311;
	mealy_311 uut (
		.out_311(out_311), 
		.in_311(in_311), 
		.clk_311(clk_311), 
		.rst_311(rst_311)
	);

	initial begin
	$monitor($time,"in_311=%b clk_311=%b rst_311=%b out_311=%b",in_311,clk_311,rst_311,out_311);
		in_311 = 0;		clk_311 = 0;		rst_311 = 1;
				
		#8 rst_311 =0;		
		#10 in_311=1;		
		#30 in_311=0;
		#10 in_311=1;
		#30 in_311=0;
		#10 in_311=1;
		#20 in_311=1;
		#10 in_311=0;
		#10 in_311=1;
		#30 in_311=1;
		#10 in_311=1;
		#30 in_311=0;
		#10 in_311=1;
		#10 in_311=1;
		#10 in_311=1;
		#100; $stop;
	end
   
   initial 
		begin
			forever#5 clk_311 = ~clk_311;
		end

endmodule
