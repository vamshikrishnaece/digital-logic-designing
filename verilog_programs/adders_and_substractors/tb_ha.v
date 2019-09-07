`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:14:39 09/07/2019
// Design Name:   ha_311
// Module Name:   D:/dld_github/adders_and_substractors/tb_ha.v
// Project Name:  adders_and_substractors
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ha_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_ha;
	// Inputs
	reg a_311;
	reg b_311;

	// Outputs
	wire s_311;
	wire c_311;
	// Instantiate the Unit Under Test (UUT)
	ha_311 uut (
		.a_311(a_311), 
		.b_311(b_311), 
		.s_311(s_311), 
		.c_311(c_311)
	);
	initial begin
		// Initialize Inputs
		a_311 = 0;
		b_311 = 0;
#50
		a_311 = 0;
		b_311 = 1;
#50
		a_311 = 1;
		b_311 = 0;
#50
		a_311 = 1;
		b_311 = 1;

		// Wait 100 ns for global reset to finish
		#100;
	$finish;
	end
	initial begin
$monitor($time," a=%b b=%b c=%b then sum=%b carry=%b",a_311,b_311,c_311,s_311,c_311);
	end
    
endmodule
