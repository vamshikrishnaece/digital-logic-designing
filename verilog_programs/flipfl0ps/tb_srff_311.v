`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:34:18 09/07/2019
// Design Name:   srff_311
// Module Name:   D:/dld_github/flipfl0ps/tb_srff_311.v
// Project Name:  flipfl0ps
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: srff_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_srff_311;
	reg s_311;
	reg r_311;
	reg clk;
	reg reset;
	wire q_311;
	wire qb_311;
	srff_311 uut (
		.s_311(s_311), 
		.r_311(r_311), 
		.clk(clk), 
		.reset(reset), 
		.q_311(q_311), 
		.qb_311(qb_311)
	);

initial
		begin
$monitor($time,"  Clk=%b,   Reset=%b,   S_311=%b,   R_311=%b,   q_311=%b,   qb_311=%b",clk,reset,s_311,r_311,q_311,qb_311);
				s_311 = 0;
				r_311=0;
				clk = 0;
				reset= 1;
				#8 reset=0;
				#10 s_311=0; r_311=0;
				#10 s_311=0; r_311=1;
				#10 s_311=1;r_311=0;
				
				#50;
				$stop;
		end
	initial 
		begin
				forever
				#5 clk=~clk;
		end
      endmodule
