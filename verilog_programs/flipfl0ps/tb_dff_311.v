`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:23:47 09/07/2019
// Design Name:   dff_311
// Module Name:   D:/dld_github/flipfl0ps/tb_dff_311.v
// Project Name:  flipfl0ps
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dff_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_dff_311;
	reg d_311;
	reg clk;
	reg reset_311;
	wire q_311;
	wire qb_311;
	dff_311 uut (
		.d_311(d_311), 
		.clk(clk), 
		.reset_311(reset_311), 
		.q_311(q_311), 
		.qb_311(qb_311)
	);
		initial begin
		$monitor($time," Clk=%b,Reset_311=%b,D_311=%b,Q_311=%b,Q_311'=%b",clk,reset_311,d_311,q_311,qb_311);
		d_311 = 0;		clk = 0;		reset_311 = 1;
		#8 reset_311=0;		#10 d_311=1;		#10 d_311=0;
		#40;        $stop;
	end
	initial begin
	forever
	#5 clk=~clk;
      	end
endmodule
