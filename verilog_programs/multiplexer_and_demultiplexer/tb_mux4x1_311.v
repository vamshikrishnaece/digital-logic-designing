`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:29:59 09/07/2019
// Design Name:   mux4x1_311
// Module Name:   D:/dld_github/multiplexer_and_demultiplexer/tb_mux4x1_311.v
// Project Name:  multiplexer_and_demultiplexer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux4x1_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_mux4x1_311;
	reg i0_311;
	reg i1_311;
	reg i2_311;
	reg i3_311;
	reg s0_311;
	reg s1_311;
	wire y_311;
	mux4x1_311 uut (
		.i0_311(i0_311), 
		.i1_311(i1_311), 
		.i2_311(i2_311), 
		.i3_311(i3_311), 
		.s0_311(s0_311), 
		.s1_311(s1_311), 
		.y_311(y_311)
	);
	initial begin
		i0_311 = 1;		i1_311 = 0;		i2_311 = 1;		i3_311 = 0;		s0_311 = 0;		s1_311 = 0;
#10
		i0_311 = 1;		i1_311 = 0;		i2_311 = 1;		i3_311 = 0;		s0_311 = 1;		s1_311 = 0;
#10
		i0_311 = 1;		i1_311 = 0;		i2_311 = 1;		i3_311 = 0;		s0_311 = 0;		s1_311 = 0;
#10
		i0_311 = 1;		i1_311 = 0;		i2_311 = 1;		i3_311 = 0;		s0_311 = 1;		s1_311 = 1;
		#100;
$finish;
	end
	initial begin
$monitor($time,"  i0=%d i1=%d i2=%d i3=%d   s1=%d s0=%d then output= %d",i0_311,i1_311,i2_311,i3_311,s1_311,s0_311,y_311);
     end 
endmodule
