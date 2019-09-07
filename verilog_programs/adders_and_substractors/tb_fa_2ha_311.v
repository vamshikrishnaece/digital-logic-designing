`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:19:56 09/07/2019
// Design Name:   fa_2ha_311
// Module Name:   D:/dld_github/adders_and_substractors/tb_fa_2ha_311.v
// Project Name:  adders_and_substractors
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fa_2ha_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fa_2ha_311;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire s_311;

	// Instantiate the Unit Under Test (UUT)
	fa_2ha_311 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.s_311(s_311),
		.cy_311(cy_311)
	);

	initial begin
		// Initialize Inputs
		a = 0;	b = 0;		c = 0;
#50
		a = 0;	b = 0;		c = 1;
#50
		a = 0;	b = 1;		c = 0;
#50
		a = 0;	b = 1;		c = 1;
#50
		a = 1;	b = 0;		c = 0;
#50
		a = 1;	b= 0;		c= 1;
#50
		a = 1;	b = 1;		c= 0;
#50
		a = 1;	b = 1;		c = 1;
		#100;
        
		// Add stimulus here
$finish;
	end
	initial begin
$monitor($time," a=%b b=%b c=%b then sum=%b carry=%b",a,b,c,s_311,cy_311);
	end
      
endmodule
