module fp_decoder #(
  parameter fpnew_pkg::rvfloat_e RVF   = fpnew_pkg::RV64FDouble
) (
  input  logic                 clk_i,
  input  logic                 rst_ni,
  // to/from controller
  output logic                 illegal_insn_o,        // illegal instr encountered
  // from IF-ID pipeline register
  input  logic [31:0]          instr_rdata_i,         // instruction read from memory/cache
                                                      // replicated to ease fan-out)
  // register file
  output logic                 rf_we_o,               // write enable for regfile 
  // LSU
  output logic                 data_req_o,            // start transaction to data memory
  output logic                 data_we_o,             // write enable
  output logic [1:0]           data_type_o,           // size of transaction: byte, half
                                                      // word or word
  // Floating point extensions IO
  output fpnew_pkg::roundmode_e fp_rounding_mode_o,      // defines the rounding mode 
  output logic [4:0]            fp_rf_raddr_a_o,
  output logic [4:0]            fp_rf_raddr_b_o,
  output logic [4:0]            fp_rf_raddr_c_o,
  output logic [4:0]            fp_rf_waddr_o,
  // output logic                  //fp_rf_we_o,
  output fpnew_pkg::operation_e fp_alu_operator_o,
  output logic                  fp_alu_op_mod_o,
  output logic                  fp_rm_dynamic_o,
  output fpnew_pkg::fp_format_e fp_src_fmt_o,
  output fpnew_pkg::fp_format_e fp_dst_fmt_o,
  // output logic                  //is_fp_instr_o,
  // output logic                  ////use_fp_rs1_o,
  // output logic                  //use_fp_rs2_o,
  // output logic                  //use_fp_rs3_o,
  // output logic                  //use_fp_rd_o,
  // output logic                  //fp_swap_oprnds_o,
  output logic                  fp_load_o
  // output logic                  //mv_instr_o
);

import fpnew_pkg::*;

logic        fp_invalid_rm;
logic        illegal_insn;
logic        rf_we;
logic        opcode_alu;

logic [31:0] instr;
// Source/Destination register instruction index
logic [4:0] instr_rs1;
logic [4:0] instr_rs2;
logic [4:0] instr_rs3;
logic [4:0] instr_rd;

opcode_e     opcode;

// To help timing the flops containing the current instruction are replicated to reduce fan-out.
// instr_alu is used to determine the ALU control logic and associated operand/imm select signals
// as the ALU is often on the more critical timing paths. instr is used for everything else.
assign instr     = instr_rdata_i;
assign opcode_alu = opcode;
//////////////////////////////////////
// Register and immediate selection //
//////////////////////////////////////

// source registers
assign instr_rs1 = instr[19:15];
assign instr_rs2 = instr[24:20];
assign instr_rs3 = instr[31:27];

//destination register
assign instr_rd   = instr[11:7];

// fp source registers
assign fp_rf_raddr_a_o = instr_rs1;
assign fp_rf_raddr_b_o = instr_rs2;
assign fp_rf_raddr_c_o = instr_rs3;

// fp destination register
assign fp_rf_waddr_o   = instr_rd;

assign fp_rounding_mode_o = roundmode_e'(instr[14:12]);
assign fp_invalid_rm      = (instr[14:12] == 3'b101) ? 1'b1 :
                            (instr[14:12] == 3'b110) ? 1'b1 : 1'b0;
assign fp_rm_dynamic_o    = (instr[14:12] == 3'b111) ? 1'b1 : 1'b0;


/////////////
// Decoder //
/////////////

always_comb begin

  // Floating Point
  // //fp_rf_we_o            = 1'b0;
  //is_fp_instr_o         = 1'b0;
  ////use_fp_rs1_o          = 1'b0;
  //use_fp_rs2_o          = 1'b0;
  //use_fp_rs3_o          = 1'b0;
  //use_fp_rd_o           = 1'b0;
  fp_load_o             = 1'b0;
  fp_src_fmt_o          = FP32; 
  fp_dst_fmt_o          = FP32;
  //fp_swap_oprnds_o      = 1'b0;
  //mv_instr_o            = 1'b0;

  opcode                = opcode_e'(instr[6:0]);

  unique case (opcode)

    //////////////////////////////////////////
    //  Floating Point Extension (F and D)  //
    //////////////////////////////////////////

    OPCODE_STORE_FP: begin
      data_req_o         = 1'b1;
      data_we_o          = 1'b1;
      data_type_o        = 2'b00;

      //use_fp_rs2_o       = 1'b1;

      unique case(instr[14:12])
        3'b011: begin // FSD
          illegal_insn = (RVF == RV64FDouble) ? 1'b0 : 1'b1;
          fp_src_fmt_o = FP64;
        end
        3'b010: begin // FSW
          illegal_insn = (RVF == RV32FNone) ? 1'b1 : 1'b0;
          fp_src_fmt_o = FP32; 
        end
        default: illegal_insn = 1'b1;
      endcase
      end

    OPCODE_LOAD_FP: begin
      data_req_o         = 1'b1;
      data_type_o        = 2'b00;
      fp_load_o          = 1'b1;

      //use_fp_rd_o        = 1'b1; 

      unique case(instr[14:12])
        3'b011: begin // FLD
          illegal_insn = (RVF == RV64FDouble) ? 1'b0 : 1'b1;
          fp_src_fmt_o = FP64;
        end
        3'b010: begin // FLW
          illegal_insn = (RVF == RV32FNone) ? 1'b1 : 1'b0;
          fp_src_fmt_o = FP32; 
        end
        default: illegal_insn = 1'b1;
      endcase
    end

    OPCODE_MADD_FP,  // FMADD.S, FMADD.D
    OPCODE_MSUB_FP,  // FMSUB.S, FMSUB.D
    OPCODE_NMSUB_FP, // FNMSUB.S, FNMSUB.D
    OPCODE_NMADD_FP: begin //FNMADD.S, FNMADD.S
      // //fp_rf_we_o         = 1'b1;
      fp_src_fmt_o       = FP32;
      //is_fp_instr_o      = 1'b1;

      ////use_fp_rs1_o       = 1'b1;
      //use_fp_rs2_o       = 1'b1;
      //use_fp_rs3_o       = 1'b1;
      //use_fp_rd_o        = 1'b1; 
      
      unique case (instr[26:25])
        01: begin
          illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
          fp_src_fmt_o = FP64;
        end
        00: begin
          illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
          fp_src_fmt_o = FP32;
        end
        default: illegal_insn = 1'b1;
      endcase
    end

    OPCODE_OP_FP: begin
      fp_src_fmt_o       = FP32;
      //is_fp_instr_o      = 1'b1;

      unique case (instr[31:25]) 
        7'b0000001,       // FADD.D
        7'b0000101: begin // FSUB.D
          // //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          //fp_swap_oprnds_o   = 1'b1;
          illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
          fp_src_fmt_o = FP64;
        end
        7'b0001001,      // FMUL.D
        7'b0001101:begin // FDIV.D
          ////fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
          fp_src_fmt_o = FP64;
        end
        7'b0000000,       // FADD.S
        7'b0000100: begin // FSUB.S
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          //fp_swap_oprnds_o   = 1'b1;
          illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
          fp_src_fmt_o = FP32;
        end
        7'b0001000, // FMUL.S
        7'b0001100: begin // FDIV.S
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
          fp_src_fmt_o = FP32;
        end
        7'b0101101: begin
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~|instr[24:20]) begin //FSQRT.D
            illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o = FP64;
          end
        end
        7'b0101100: begin // FSQRT.S
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~|instr[24:20]) begin
            illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o = FP32;
          end
        end
        7'b0010001: begin // FSGNJ.D, FSGNJN.D, FSGNJX.D
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~(instr[14] | (&instr[13:12]))) begin
            illegal_insn  = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o  = FP64;
          end
        end
        7'b0010000: begin // FSGNJ.S, FSGNJN.S, FSGNJX.S
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~(instr[14] | (&instr[13:12]))) begin
            illegal_insn  = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o  = FP32;
          end
        end
        7'b0010101: begin // FMIN.D, FMAX.D
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~|instr[14:13]) begin
            illegal_insn  = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o  = FP64;
          end
        end
        7'b0010100: begin // FMIN.S, FMAX.S
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rs2_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~|instr[14:13]) begin
            illegal_insn  = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o  = FP32;
          end
        end
        7'b0100000: begin // FCVT.S.D
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~(|instr[24:21] | (~instr[20]))) begin
            illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o = FP64;
          end
        end
        7'b1100000: begin // FCVT.W.S, FCVT.WU.S
          rf_we            = 1'b1;  // write back in int_regfile
          //use_fp_rs1_o     = 1'b1;
          if (~|instr[24:21]) begin
            illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o = FP32;
          end
        end
        7'b0100001: begin // FCVT.D.S
          //fp_rf_we_o         = 1'b1;
          //use_fp_rs1_o       = 1'b1;
          //use_fp_rd_o        = 1'b1;
          if (~|instr[24:20]) begin 
            illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o = FP64;
          end
        end
        7'b1110000: begin // FMV.X.W , FCLASS.S
          rf_we            = 1'b1;  // write back in int_regfile
          unique case ({instr[24:20],instr[14:12]})
            {5'b00000,3'b000}: begin
              //use_fp_rs1_o   = 1'b1;
              illegal_insn   = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
              fp_src_fmt_o   = FP32;
              //mv_instr_o     = 1'b1;
            end
            {5'b00000,3'b001}: begin
              //use_fp_rs1_o = 1'b1;
              illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
              fp_src_fmt_o = FP32;
            end
            default: begin
              illegal_insn =1'b1;
            end
          endcase
        end
        7'b1010001: begin // FEQ.D, FLT.D, FLE.D
          rf_we            = 1'b1;  // write back in int_regfile
          //use_fp_rs1_o     = 1'b1;
          //use_fp_rs2_o     = 1'b1;
          if (~(instr[14]) | (&instr[13:12])) begin
            illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o = FP64;
          end
        end
        7'b1010000: begin // FEQ.S, FLT.S, FLE.S
          rf_we            = 1'b1;  // write back in int_regfile
          //use_fp_rs1_o     = 1'b1;
          //use_fp_rs2_o     = 1'b1;
          if (~(instr[14]) | (&instr[13:12])) begin
            illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o = FP32;
          end
        end
        7'b1110001: begin // FCLASS.D
          rf_we            = 1'b1;  // write back in int_regfile
          //use_fp_rs1_o     = 1'b1;
          unique case ({instr[24:20],instr[14:12]}) 
            {5'b00000,3'b001}: begin  
              illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
              fp_src_fmt_o = FP64;
            end
            default: begin
              illegal_insn =1'b1;
            end
          endcase
        end
        7'b1100001: begin // // FCVT.W.D, FCVT.WU.D
          rf_we            = 1'b1;  // write back in int_regfile
          //use_fp_rs1_o     = 1'b1;
          if (~|instr[24:21]) begin
            illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o = FP64;
          end
        end
        7'b1101000: begin // FCVT.S.W, FCVT.S.WU
          //fp_rf_we_o       = 1'b1;
          //use_fp_rd_o      = 1'b1;
          if (~|instr[24:21]) begin
            illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o = FP32;
          end
        end
        7'b1111001: begin // FCVT.D.W, FCVT.D.WU
          rf_we            = 1'b1;  // write back in int_regfile
          //use_fp_rd_o      = 1'b1;
          if (~|instr[24:21]) begin
            illegal_insn = ((RVF == RV64FDouble) & (fp_invalid_rm)) ? 1'b0 : 1'b1;
            fp_src_fmt_o = FP64;
          end
        end
        7'b1111000: begin // FMV.W.X
          //fp_rf_we_o        = 1'b1;
          //use_fp_rd_o       = 1'b1;
          //mv_instr_o        = 1'b1;
          if (~(|instr[24:20]) | (|instr[14:12])) begin
            illegal_insn = ((RVF == RV32FNone) & (~fp_invalid_rm)) ? 1'b1 : 1'b0;
            fp_src_fmt_o = FP32;
          end
        end
        default: illegal_insn = 1'b1;
      endcase
    end
  default: begin
    illegal_insn = 1'b1;
  end
  endcase

  // make sure illegal instructions detected in the decoder do not propagate from decoder
  // into register file, LSU, EX, WB, CSRs, PC
  // NOTE: instructions can also be detected to be illegal inside the CSRs (upon accesses with
  // insufficient privileges), or when accessing non-available registers in RV32E,
  // these cases are not handled here
  if (illegal_insn) begin
    rf_we           = 1'b0;
    data_req_o      = 1'b0;
    data_we_o       = 1'b0;
    // floating point
    //fp_rf_we_o      = 1'b0;
  end
end
always_comb begin

    fp_alu_op_mod_o       = 1'b0;
    fp_alu_operator_o     = FMADD;
   // fp_alu_op_b_mux_sel_o = OP_B_IMM; // op_b_sel_e, OP_B_REG_B

    unique case (opcode_alu)

    //////////////////////////////////////////
    //  Floating Point Extension (F and D)  //
    //////////////////////////////////////////

      // OPCODE_STORE_FP: begin
      //   alu_op_a_mux_sel_o = OP_A_REG_A;
      //   alu_op_b_mux_sel_o = OP_B_REG_B;
      //   alu_operator_o     = ALU_ADD;

      //   unique case(instr[14:12])
      //     3'b011: begin // FSD
      //       imm_b_mux_sel_o     = IMM_B_S;
      //       alu_op_b_mux_sel_o  = OP_B_IMM;
      //     end
      //     3'b010: begin // FSW
      //       imm_b_mux_sel_o     = IMM_B_S;
      //       alu_op_b_mux_sel_o  = OP_B_IMM;
      //     end
      //     default: ;
      //   endcase
      // end

      // OPCODE_LOAD_FP: begin
      //   unique case(instr[14:12])
      //     3'b011: begin // FLD
      //       alu_op_a_mux_sel_o    = OP_A_REG_A;

      //       alu_operator_o      = ALU_ADD;
      //       alu_op_b_mux_sel_o  = OP_B_IMM;
      //       imm_b_mux_sel_o     = IMM_B_I;
      //     end
      //     3'b010: begin // FLW
      //       alu_op_a_mux_sel_o    = OP_A_REG_A;

      //       alu_operator_o      = ALU_ADD;
      //       alu_op_b_mux_sel_o  = OP_B_IMM;
      //       imm_b_mux_sel_o     = IMM_B_I;
      //     end
      //     default: ;
      //   endcase
      // end

      OPCODE_MADD_FP:  begin // FMADD.S, FMADD.D
        unique case (instr[26:25])
          01: begin
            fp_alu_operator_o     = FMADD;
            fp_alu_op_mod_o       = 1'b0;
          end
          00: begin
            fp_alu_operator_o     = FMADD;
            fp_alu_op_mod_o       = 1'b0;
          end
          default: ;
        endcase
      end

      OPCODE_MSUB_FP: begin // FMSUB.S, FMSUB.D
        unique case (instr[26:25])
          01: begin
            fp_alu_operator_o     = FMADD;
            fp_alu_op_mod_o       = 1'b1; 
          end
          00: begin
            fp_alu_operator_o     = FMADD;
            fp_alu_op_mod_o       = 1'b1;
          end
          default: ;
        endcase
      end

      OPCODE_NMSUB_FP: begin // FNMSUB.S, FNMSUB.D
        unique case (instr[26:25])
          01: begin
            fp_alu_operator_o     = FNMSUB;
          end
          00: begin
            fp_alu_operator_o     = FNMSUB;
          end
          default: ;
        endcase
      end

      OPCODE_NMADD_FP: begin //FNMADD.S, FNMADD.S     
        unique case (instr[26:25])
          01: begin
            fp_alu_operator_o     = FNMSUB;
            fp_alu_op_mod_o       = 1'b1;
          end
          00: begin
            fp_alu_operator_o     = FNMSUB;
            fp_alu_op_mod_o       = 1'b1;
          end
          default: ;
        endcase
      end

      OPCODE_OP_FP: begin
        unique case (instr[31:25])
          7'b0000001: begin // FADD.D
            fp_alu_operator_o     = ADD;
          end
          7'b0000101: begin // FSUB.D
            fp_alu_operator_o     = ADD;
            fp_alu_op_mod_o       = 1'b1;
          end
          7'b0001001: begin // FMUL.D
            fp_alu_operator_o     = MUL;
          end
          7'b0001101:begin // FDIV.S
            fp_alu_operator_o     = DIV;
          end
          7'b0000000: begin // FADD.S
            fp_alu_operator_o     = ADD;
          end
          7'b0000100: begin // FSUB.S
            fp_alu_operator_o     = ADD;
            fp_alu_op_mod_o       = 1'b1;
          end
          7'b0001000: begin // FMUL.S
            fp_alu_operator_o     = MUL;
          end
          7'b0001100: begin // FDIV.S
            fp_alu_operator_o     = DIV;
          end
          7'b0101101: begin
            if (~|instr[24:20]) begin // FSQRT.D
              fp_alu_operator_o     = SQRT;
            end
          end
          7'b0101100: begin // FSQRT.S
            if (~|instr[24:20]) begin
              fp_alu_operator_o     = SQRT;
            end
          end
          7'b0010001: begin // FSGNJ.D, FSGNJN.D, FSGNJX.D
            if (~(instr[14] | (&instr[13:12]))) begin
              fp_alu_operator_o     = SGNJ;
            end
          end
          7'b0010000: begin // FSGNJ.S, FSGNJN.S, FSGNJX.S
            if (~(instr[14] | (&instr[13:12]))) begin
              fp_alu_operator_o     = SGNJ;
            end
          end
          7'b0010101: begin // FMIN.D, FMAX.D
            if (~|instr[14:13]) begin
              fp_alu_operator_o     = MINMAX;
            end
          end
          7'b0010100: begin // FMIN.S, FMAX.S
            if (~|instr[14:13]) begin
              fp_alu_operator_o     = MINMAX;
            end
          end
          7'b0100000: begin // FCVT.S.D
            if (~(|instr[24:21] | (~instr[20]))) begin
              fp_alu_operator_o     = F2F;
            end
          end
          7'b1100000: begin // FCVT.W.S, FCVT.WU.S
            if (~|instr[24:21]) begin
              fp_alu_operator_o     = F2I;

              if (instr[20])
                fp_alu_op_mod_o       = 1'b1;
            end
          end
          7'b0100001: begin // FCVT.D.S
            if (~|instr[24:20]) begin 
              fp_alu_operator_o     = F2F;
            end
          end
          7'b1110000: begin // FMV.X.W , FCLASS.S
            unique case ({instr[24:20],instr[14:12]})
              // {3'b0000000,3'b000}: begin
              //   fp_alu_operator_o     = ADD;   // to be decided YET
              // end
              {3'b000,3'b001}: begin
                fp_alu_operator_o     = CLASSIFY;
              end
              default: ;
            endcase
          end
          7'b1010001: begin // FEQ.D, FLT.D, FLE.D
            if ((~instr[14]) | (&instr[13:12])) begin
              fp_alu_operator_o     = CMP;
            end
          end
          7'b1010000: begin // FEQ.S, FLT.S, FLE.S
            if ((~instr[14]) | (&instr[13:12])) begin
              fp_alu_operator_o     = CMP;
            end
          end
          7'b1110001: begin // FCLASS.D
            unique case ({instr[24:20],instr[14:12]})
              {3'b000,3'b001}: begin
                fp_alu_operator_o     = CLASSIFY;
              end
              default: ;
            endcase
          end 
          7'b1100001: begin // // FCVT.W.D, FCVT.WU.D
            if (~|instr[24:21]) begin
              fp_alu_operator_o     = F2I;
              
              if (instr[20])
                fp_alu_op_mod_o     = 1'b1;
            end
          end
          7'b1101000: begin // FCVT.S.W, FCVT.S.WU
            if (~(|instr[24:21])) begin
              fp_alu_operator_o     = I2F;

              if (instr[20])
                fp_alu_op_mod_o     = 1'b1;
            end
          end
          7'b1111001: begin // FCVT.D.W, FCVT.D.WU
            if (~|instr[24:21]) begin
              fp_alu_operator_o     = I2F;

              if (instr[20])
                fp_alu_op_mod_o     = 1'b1;
            end
          end
          // 7'b1111000: begin // FMV.W.X
          //   if ((|instr[24:20]) | (|instr[14:12])) begin
          //     fp_alu_operator_o     = FMADD;  // to be decided
          //   end
          // end
          default: ;
        endcase
      end
      default: ;
    endcase
  end
assign illegal_insn_o = illegal_insn ;
assign rf_we_o = rf_we;
endmodule 