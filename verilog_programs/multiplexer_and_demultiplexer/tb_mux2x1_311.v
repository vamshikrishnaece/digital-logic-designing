`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:27:49 09/07/2019
// Design Name:   mux2x1
// Module Name:   D:/dld_github/multiplexer_and_demultiplexer/tb_mux2x1_311.v
// Project Name:  multiplexer_and_demultiplexer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux2x1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_mux2x1_311;
	reg i0_311;
	reg i1_311;
	reg s_311;
	wire y_311;
	mux2x1 uut (
		.i0_311(i0_311), 
		.i1_311(i1_311), 
		.y_311(y_311), 
		.s_311(s_311)
	);
	initial begin
		i0_311 = 0;		i1_311 = 0;		s_311 = 0;
#10
		i0_311 = 1;		i1_311 = 0;		s_311 = 0;		
#10
		i0_311 = 0;		i1_311 = 1;		s_311 = 1;		
$finish;
	end
	initial begin 
$monitor($time,"i0=%b  i1=%b s=%b then output=%b",i0_311,i1_311,s_311,y_311);
end
endmodule