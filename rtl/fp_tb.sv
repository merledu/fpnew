`timescale 1ns/1ns
module fp_tb(
  input               clk_i,
  input               rst_ni   
);
  logic [31 : 0]      instr_i       ;
  logic [31 : 0]      result_o      ;
  logic               illegal_insn  ;
  logic               in_valid_i    ;
  logic               in_ready_o    ;
  logic               flush_i       ;
  logic               status_o      ;
  logic               tag_o         ;
  logic               out_valid_o   ;
  logic               out_ready_i   ;
  logic               busy_o        ;

fp_wrapper fp_wrapper_dut (.*);

assign out_ready_i = 1'b1;

reg [31:0] mem [31:0];
initial
$readmemh("/home/wishah/Desktop/FPU/ReV-F-Extension/program.hex",mem);

always @ (posedge clk_i) begin
  for (int i=0 ; i<2 ; i++) begin
  instr_i = mem[i];
  end 
end

always @ (clk_i) begin
  in_valid_i = 1'b1;
end
endmodule