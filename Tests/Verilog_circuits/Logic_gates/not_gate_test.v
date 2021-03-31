`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:04:26 02/24/2021
// Design Name:   not_gate
// Module Name:   C:/Xilinx_projects/Verilog_generated_circuits/Logic_gates/not_gate_test.v
// Project Name:  Logic_gates
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: not_gate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module not_gate_test;

    // Inputs
    reg _a;

    // Outputs
    wire _y0;

    // Instantiate the Unit Under Test (UUT)
    not_gate uut (
        ._a(_a), 
        ._y0(_y0)
    );

    initial begin
        // Initialize Inputs
        _a = 1'b0;
    end

    always #2 _a = ~_a;
    initial $monitor("Time:",$time," ns   ", "a=%b, y=%b",_a,_y0);
    initial #50 $finish;  
endmodule

