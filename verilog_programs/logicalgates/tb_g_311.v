`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:12:28 09/07/2019
// Design Name:   g_311
// Module Name:   D:/dld_github/logicalgates/tb_g_311.v
// Project Name:  logicalgates
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: g_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_g_311;

	// Inputs
	reg a_311;
	reg b_311;

	// Outputs
	wire or_311;
	wire not_311;
	wire and_311;
	wire nand_311;
	wire nor_311;
	wire xor_311;
	wire xnor_311;

	// Instantiate the Unit Under Test (UUT)
	g_311 uut (
		.a_311(a_311), 
		.b_311(b_311), 
		.not_311(not_311),
		.or_311(or_311), 
		.and_311(and_311), 
		.nand_311(nand_311), 
		.nor_311(nor_311), 
		.xor_311(xor_311), 
		.xnor_311(xnor_311)
	);

	initial begin
		// Initialize Inputs
		
	   a_311 = 0;
		b_311 = 0;
		#20

		a_311 = 0;
		b_311 = 1;
		#30

		a_311 = 1;
		b_311 = 0;
		#40		

		a_311 = 1;
		b_311 = 1;		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
$finish;
	end
	initial begin
		// Initialize Inputs
		$monitor($time,"ns	a=%b b=%b	 not=%b or=%b and=%b nand=%b nor=%b xor=%b xnor=%b",a_311,b_311,not_311,or_311,and_311,nand_311,nor_311,xor_311,xnor_311);
		end
	
      
endmodule

