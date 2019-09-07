`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:35:33 09/07/2019
// Design Name:   tff_311
// Module Name:   D:/dld_github/flipfl0ps/tb_tff_11.v
// Project Name:  flipfl0ps
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: tff_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_tff_311;
	reg t_311;
	reg clk_311;
	reg reset;
	wire q_311;
	wire qb_311;
	tff_311 uut (
		.t_311(t_311), 
		.clk_311(clk_311), 
		.reset(reset), 
		.q_311(q_311), 
		.qb_311(qb_311)
	);
	initial 
		begin
monitor($time,"Clock=%b,reset=%b,T_311=%b,Q_311=%b,Q_311'=%b",clk_311,reset,t_311,q_311,qb_311);
				
				t_311 = 0;		clk_311 = 0;		reset = 1;
				#8 reset=0;		
				#10 t_311=1;	
				#10 t_311=0;
				#10 t_311=1;
				#10 t_311=0;
				#10 t_311=1;
				#40;        $stop;
		end
	initial
	begin
				forever
			#5 clk_311=~clk_311;
      end
endmodule