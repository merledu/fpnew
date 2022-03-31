module FP_register( 
	input logic  clk_i, rst_ni, Fregwrite_i,
	input logic [4:0] frd_i, freg1_i, FReg2_i, FReg3_i,
	input logic [31:0] writeback_data_i,
	output logic [31:0] FOperandA_o , FOperandB_o, FOperandC_o
);
	logic   [31:0][31:0]  registers; 
	logic   [31:0]        we;

always_comb begin 
    for (int i = 0; i < 32; i++) begin
      we[i] = (frd_i == 5'(i)) ?  Fregwrite_i : 1'b0;
    end
  end

  for (int  i = 0; i < 32; i++) begin 
    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
        registers[i] <= '0;
      end else if(we[i]) begin
        registers[i] <= writeback_data_i;
      end
    end
  end

  assign FOperandA_o = registers[freg1_i];
  assign FOperandB_o = registers[FReg2_i];
  assign FOperandC_o = registers[FReg3_i];
endmodule
