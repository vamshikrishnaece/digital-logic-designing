`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:32:07 09/07/2019
// Design Name:   demux1x4_311
// Module Name:   D:/dld_github/multiplexer_and_demultiplexer/tb_dmux1x4_311.v
// Project Name:  multiplexer_and_demultiplexer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux1x4_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_demux4x1_311;
	reg i;
	reg s0;
	reg s1;
	wire y0_311;
	wire y1_311;
	wire y2_311;
	wire y3_311;
	demux1x4_311 uut (
		.i(i), 
		.s0(s0), 
		.s1(s1), 
		.y0_311(y0_311), 
		.y1_311(y1_311), 
		.y2_311(y2_311), 
		.y3_311(y3_311)
	);
	initial begin
$monitor($time,"i =%b s0=%b s1=%b then y0=%b y1=%b y2=%b y3=%b",i,s0,s1,y0_311,y1_311,y2_311,y3_311);
		i = 1;		s0 = 0;		s1 = 0;
#5
		i = 1;		s0 = 0;		s1 = 1;
#5	
		i = 1;		s0 = 1;		s1 = 0;
#5	
		i = 1;		s0 = 1;		s1 = 1;
#5;
	end
endmodule
