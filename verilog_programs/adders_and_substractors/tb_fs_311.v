`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:18:25 09/07/2019
// Design Name:   fs_311
// Module Name:   D:/dld_github/adders_and_substractors/tb_fs_311.v
// Project Name:  adders_and_substractors
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fs_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fs;

	// Inputs
	reg x_311;
	reg y_311;
	reg z_311;

	// Outputs
	wire d_311;
	wire b_311;

	// Instantiate the Unit Under Test (UUT)
	fs_311 uut (
		.x_311(x_311), 
		.y_311(y_311), 
		.z_311(z_311), 
		.d_311(d_311), 
		.b_311(b_311)
	);

	initial begin
		// Initialize Inputs
		x_311 = 0;	y_311 = 0;		z_311 = 0;
#50
		x_311 = 0;	y_311 = 0;		z_311 = 1;
#50
		x_311 = 0;	y_311 = 1;		z_311 = 0;
#50
		x_311 = 0;	y_311 = 1;		z_311 = 1;
#50
		x_311 = 1;	y_311 = 0;		z_311 = 0;
#50
		x_311 = 1;	y_311 = 0;		z_311 = 1;
#50
		x_311 = 1;	y_311 = 1;		z_311 = 0;
#50
		x_311 = 1;	y_311 = 1;		z_311 = 1;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
$finish;
	end
	initial begin
$monitor($time," a=%b b=%b c=%b then diff=%b borrow=%b",x_311,y_311,z_311,d_311,b_311);
	end
endmodule
