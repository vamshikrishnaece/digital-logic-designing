`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:25:24 09/07/2019
// Design Name:   jkff_311
// Module Name:   D:/dld_github/flipfl0ps/tb_jkff_311.v
// Project Name:  flipfl0ps
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jkff_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_jkff_311;
	reg j_311;
	reg k_311;
	reg clk_311;
	reg reset;
	wire q_311;
	wire qb_311;
	jkff_311 uut (
		.j_311(j_311), 
		.k_311(k_311), 
		.clk_311(clk_311), 
		.reset(reset), 
		.q_311(q_311), 
		.qb_311(qb_311)
	);
	initial 
			begin
$monitor($time,"clk_311=%b,Reset=%b,j_311=%b,k_311=%b,Q_311=%b,Qb_311=%b",clk_311,reset,j_311,k_311,q_311,qb_311);
j_311 = 0;
k_311 =0;
clk_311 = 0;
reset = 1;
#8 reset=0;
#10 j_311=0; k_311=0;
#10 j_311=0; k_311=1;
#10 j_311=1;k_311=0;
#10 j_311=1;k_311=1;
#20;
  $stop;
		end
		initial 
	begin
			forever
			#5 clk_311=~clk_311;
	end
endmodule

