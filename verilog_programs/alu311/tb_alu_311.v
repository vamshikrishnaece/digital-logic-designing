`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:20:01 09/07/2019
// Design Name:   alu_311
// Module Name:   D:/dld_github/alu311/tb_alu_311.v
// Project Name:  alu311
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_311
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_alu_311;

	// Inputs
	reg [3:0] In1_311;
	reg [3:0] In2_311;
	reg [3:0] Sel_311;

	// Outputs
	wire [7:0] Out_311;

	// Instantiate the Unit Under Test (UUT)
	alu_311 uut (
		.Out_311(Out_311), 
		.In1_311(In1_311), 
		.In2_311(In2_311), 
		.Sel_311(Sel_311)
	);

	initial begin
		// Initialize Inputs
		In1_311 = 0;
		In2_311 = 0;
		Sel_311 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

