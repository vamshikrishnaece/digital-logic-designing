`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:26:11 09/07/2019
// Design Name:   bitadder_4fa_311
// Module Name:   D:/dld_github/adders_and_substractors/tb_bitadder_4fa_311.v
// Project Name:  adders_and_substractors
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bitadder_4fa_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_bitadder_4fa_311;
	reg [3:0] a;
	reg [3:0] b;
	reg cin;
	wire cout_311;	wire [3:0] s_311;
	wire w1;	wire w2;	wire w3;
	bitadder_4fa_311 uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.cout_311(cout_311), 
		.s_311(s_311), 
		.w1(w1), 
		.w2(w2), 
		.w3(w3)
	);
	initial begin
	$monitor($time,"a=%b b=%b cin=%b sum=%b cout=%b ",a,b,cin,s_311,cout_311);
		// Initialize Inputs
		a = 0;		b = 0;		cin = 0;
#10
		a = 0;		b = 1;		cin = 0;
#10		// Wait 100 ns for global reset to finish
		a = 1;		b = 0;		cin = 0;
#10		
 		a = 1;		b = 1;		cin = 0;
#100;       
	end
      
endmodule
