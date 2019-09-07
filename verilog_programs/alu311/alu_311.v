`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:09 09/07/2019 
// Design Name: 
// Module Name:    alu_311 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu_311(	
	output reg [7:0]Out_311,
	input [3:0]In1_311,In2_311,Sel_311 );
			always@(Sel_311,In1_311,In2_311)
				begin 
					if(Sel_311==0)
						Out_311=In1_311+In2_311;
					else if(Sel_311==1)
						Out_311=In1_311-In2_311;
					else if(Sel_311==2)
						Out_311=In1_311*In2_311;
					else if(Sel_311==3)
						Out_311=In1_311/In2_311;
					else if(Sel_311==4)
						Out_311=In1_311%In2_311;
					else if(Sel_311==5)
						Out_311=In1_311*In2_311;
					else if(Sel_311==6)
						Out_311=!In1_311;
					else if(Sel_311==7)
						Out_311=In1_311&&In2_311;
					else if(Sel_311==8)
						Out_311=In1_311||In2_311;
					else if(Sel_311==9)
						Out_311=In1_311|In2_311;
					else if(Sel_311==10)
						Out_311=In1_311&In2_311;
					else if(Sel_311==11)
						Out_311=In1_311^In2_311;
					else if(Sel_311==12)
						Out_311=In1_311<<In2_311;
					else if(Sel_311==13)
						Out_311=In1_311>>In2_311;
					else if(Sel_311==14)
						Out_311=In1_311<<<In2_311;
					else
					Out_311=In1_311>>>In2_311;
				end 
endmodule
