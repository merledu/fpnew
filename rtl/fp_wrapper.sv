module fp_wrapper #(
  parameter type      TagType        = logic,
  parameter DATAWIDTH = 32
)(
  input                     clk_i         ,
  input                     rst_ni        ,
  input  [DATAWIDTH-1 : 0]  instr_i       ,
  output [DATAWIDTH-1 : 0]  result_o      ,
  output                    illegal_insn,
  output fpnew_pkg::status_t   status_o,
  output TagType               tag_o,
  output logic                 out_valid_o,
  output logic                 busy_o,
  output logic                 in_ready_o
);
import fpnew_pkg::*;
  logic [4:0]         freg1;
  logic [4:0]         freg2;
  logic [4:0]         freg3;
  logic [4:0]         frd;
  logic [31:0]        foperand_a;
  logic [31:0]        foperand_b;
  logic [31:0]        foperand_c;
  logic               fregwrite;
  logic [2:0][31:0]   foperand;
  operation_e         op; 
  logic               op_mod;
  fp_format_e         src_fmt;
  fp_format_e         fp_dst_fmt;

fp_decoder fpdecoder( //working on it //incomplete
  .instr_rdata_i(instr_i),
  .clk_i(clk_i),
  .rst_ni(rst_ni),
  .fp_rf_raddr_a_o(freg1),
  .fp_rf_raddr_b_o(freg2),
  .fp_rf_raddr_c_o(freg3),
  .fp_rf_waddr_o(frd),
  .fp_load_o(fregwrite),
  .fp_alu_operator_o(op),
  .fp_alu_op_mod_o(op_mod),
  .fp_src_fmt_o(src_fmt),
  .fp_dst_fmt_o(fp_dst_fmt),
  .illegal_insn_o(illegal_insn)
);

fp_register fpregister( //all complete
  .clk_i(clk_i), 
  .rst_ni(rst_ni), 
  .fregwrite_i(fregwrite),
  .freg1_i(freg1),
  .freg2_i(freg2),
  .freg3_i(freg3),
  .frd_i(frd),
  .writeback_data_i(result_o),
  .foperand_a_o(foperand_a),  
  .foperand_b_o(foperand_b),  
  .foperand_c_o(foperand_c)   
);
fpnew_top fpnewtop( //working on it //incomplete
  .clk_i(clk_i),
  .rst_ni(rst_ni), 
  .operands_i(foperand),
  .op_i(op),
  .op_mod_i(op_mod),
  .src_fmt_i(src_fmt),
  .dst_fmt_i(fp_dst_fmt),
  .status_o(status_o),
  .tag_o(tag_o),
  .out_valid_o(out_valid_o),
  .busy_o(busy_o),
  .in_ready_o(in_ready_o),
  .result_o(result_o)
);

assign foperand[0] = foperand_a;
assign foperand[1] = foperand_b;
assign foperand[2] = foperand_c;

endmodule
