`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:40:04 02/24/2021
// Design Name:   h_s_rca2
// Module Name:   C:/Xilinx_projects/Verilog_generated_circuits/Hierarchical_adders/Signed_rca2/h_s_rca2_test.v
// Project Name:  Signed_rca2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: h_s_rca2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module h_s_rca2_test;

    // Inputs
    reg signed [1:0] a;
    reg signed [1:0] b;

    // Outputs
    wire signed [2:0] out;

    // Instantiate the Unit Under Test (UUT)
    h_s_rca2 uut (
        .a(a), 
        .b(b), 
        .out(out)
    );

    initial begin
        // Initialize Inputs
        a = 2'b00;
        b = 2'b01;        
    end

    always #2 a = a + 1;
    always #4 b = b + 1;
    initial $monitor("Time:",$time," ns   ", "a=%d, b=%d, result=%d", a, b, out);
    initial #200 $finish;
endmodule
