// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfp_wrapper__Syms.h"


//======================

void Vfp_wrapper::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vfp_wrapper::traceInit, &Vfp_wrapper::traceFull, &Vfp_wrapper::traceChg, this);
}
void Vfp_wrapper::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vfp_wrapper* t = (Vfp_wrapper*)userthis;
    Vfp_wrapper__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vfp_wrapper::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfp_wrapper* t = (Vfp_wrapper*)userthis;
    Vfp_wrapper__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vfp_wrapper::traceInitThis(Vfp_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfp_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vfp_wrapper::traceFullThis(Vfp_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfp_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfp_wrapper::traceInitThis__1(Vfp_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfp_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+10065,"clk_i", false,-1);
        vcdp->declBit(c+10073,"rst_ni", false,-1);
        vcdp->declBus(c+10081,"instr_i", false,-1, 31,0);
        vcdp->declBus(c+10089,"result_o", false,-1, 31,0);
        vcdp->declBit(c+10097,"illegal_insn", false,-1);
        vcdp->declBit(c+10105,"in_valid_i", false,-1);
        vcdp->declBit(c+10113,"in_ready_o", false,-1);
        vcdp->declBit(c+10121,"flush_i", false,-1);
        vcdp->declBit(c+10129,"status_o", false,-1);
        vcdp->declBit(c+10137,"tag_o", false,-1);
        vcdp->declBit(c+10145,"out_valid_o", false,-1);
        vcdp->declBit(c+10153,"out_ready_i", false,-1);
        vcdp->declBit(c+10161,"busy_o", false,-1);
        vcdp->declBus(c+10313,"fp_wrapper DATAWIDTH", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper rst_ni", false,-1);
        vcdp->declBus(c+10081,"fp_wrapper instr_i", false,-1, 31,0);
        vcdp->declBus(c+10089,"fp_wrapper result_o", false,-1, 31,0);
        vcdp->declBit(c+10097,"fp_wrapper illegal_insn", false,-1);
        vcdp->declBit(c+10105,"fp_wrapper in_valid_i", false,-1);
        vcdp->declBit(c+10113,"fp_wrapper in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper flush_i", false,-1);
        vcdp->declBit(c+10129,"fp_wrapper status_o", false,-1);
        vcdp->declBit(c+10137,"fp_wrapper tag_o", false,-1);
        vcdp->declBit(c+10145,"fp_wrapper out_valid_o", false,-1);
        vcdp->declBit(c+10153,"fp_wrapper out_ready_i", false,-1);
        vcdp->declBit(c+10161,"fp_wrapper busy_o", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper NUM_FP_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper FP_FORMAT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fp_wrapper NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper INT_FORMAT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10169,"fp_wrapper freg1", false,-1, 4,0);
        vcdp->declBus(c+10177,"fp_wrapper freg2", false,-1, 4,0);
        vcdp->declBus(c+10185,"fp_wrapper freg3", false,-1, 4,0);
        vcdp->declBus(c+10193,"fp_wrapper frd", false,-1, 4,0);
        vcdp->declBus(c+10201,"fp_wrapper foperand_a", false,-1, 31,0);
        vcdp->declBus(c+10209,"fp_wrapper foperand_b", false,-1, 31,0);
        vcdp->declBus(c+10217,"fp_wrapper foperand_c", false,-1, 31,0);
        vcdp->declBit(c+417,"fp_wrapper fregwrite", false,-1);
        vcdp->declArray(c+425,"fp_wrapper foperand", false,-1, 95,0);
        vcdp->declBus(c+449,"fp_wrapper fp_alu_operator", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper op_mod", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fp_src_fmt", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fp_dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+10225,"fp_wrapper fp_rounding_mode", false,-1, 2,0);
        vcdp->declBit(c+10233,"fp_wrapper fp_rm_dynamic", false,-1);
        vcdp->declBus(c+10361,"fp_wrapper int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper tag_i", false,-1);
        vcdp->declBus(c+10385,"fp_wrapper fpdecoder RVF", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpdecoder clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpdecoder rst_ni", false,-1);
        vcdp->declBit(c+10097,"fp_wrapper fpdecoder illegal_insn_o", false,-1);
        vcdp->declBus(c+10081,"fp_wrapper fpdecoder instr_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+10225,"fp_wrapper fpdecoder fp_rounding_mode_o", false,-1, 2,0);
        vcdp->declBus(c+10169,"fp_wrapper fpdecoder fp_rf_raddr_a_o", false,-1, 4,0);
        vcdp->declBus(c+10177,"fp_wrapper fpdecoder fp_rf_raddr_b_o", false,-1, 4,0);
        vcdp->declBus(c+10185,"fp_wrapper fpdecoder fp_rf_raddr_c_o", false,-1, 4,0);
        vcdp->declBus(c+10193,"fp_wrapper fpdecoder fp_rf_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+449,"fp_wrapper fpdecoder fp_alu_operator_o", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpdecoder fp_alu_op_mod_o", false,-1);
        vcdp->declBit(c+10233,"fp_wrapper fpdecoder fp_rm_dynamic_o", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpdecoder fp_src_fmt_o", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpdecoder fp_dst_fmt_o", false,-1, 2,0);
        vcdp->declBit(c+417,"fp_wrapper fpdecoder fp_load_o", false,-1);
        vcdp->declBit(c+473,"fp_wrapper fpdecoder fp_invalid_rm", false,-1);
        vcdp->declBit(c+481,"fp_wrapper fpdecoder illegal_insn", false,-1);
        vcdp->declBit(c+489,"fp_wrapper fpdecoder opcode_alu", false,-1);
        vcdp->declBus(c+10081,"fp_wrapper fpdecoder instr", false,-1, 31,0);
        vcdp->declBus(c+10169,"fp_wrapper fpdecoder instr_rs1", false,-1, 4,0);
        vcdp->declBus(c+10177,"fp_wrapper fpdecoder instr_rs2", false,-1, 4,0);
        vcdp->declBus(c+10185,"fp_wrapper fpdecoder instr_rs3", false,-1, 4,0);
        vcdp->declBus(c+10193,"fp_wrapper fpdecoder instr_rd", false,-1, 4,0);
        vcdp->declBus(c+497,"fp_wrapper fpdecoder opcode", false,-1, 6,0);
        vcdp->declBit(c+10065,"fp_wrapper fpregister clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpregister rst_ni", false,-1);
        vcdp->declBit(c+417,"fp_wrapper fpregister fregwrite_i", false,-1);
        vcdp->declBus(c+10193,"fp_wrapper fpregister frd_i", false,-1, 4,0);
        vcdp->declBus(c+10169,"fp_wrapper fpregister freg1_i", false,-1, 4,0);
        vcdp->declBus(c+10177,"fp_wrapper fpregister freg2_i", false,-1, 4,0);
        vcdp->declBus(c+10185,"fp_wrapper fpregister freg3_i", false,-1, 4,0);
        vcdp->declBus(c+10089,"fp_wrapper fpregister writeback_data_i", false,-1, 31,0);
        vcdp->declBus(c+10201,"fp_wrapper fpregister foperand_a_o", false,-1, 31,0);
        vcdp->declBus(c+10209,"fp_wrapper fpregister foperand_b_o", false,-1, 31,0);
        vcdp->declBus(c+10217,"fp_wrapper fpregister foperand_c_o", false,-1, 31,0);
        vcdp->declArray(c+8625,"fp_wrapper fpregister registers", false,-1, 1023,0);
        vcdp->declBus(c+505,"fp_wrapper fpregister we", false,-1, 31,0);
        vcdp->declBus(c+10393,"fp_wrapper fpregister unnamedblk1 i", false,-1, 31,0);
        vcdp->declQuad(c+10401,"fp_wrapper fpnewtop Features", false,-1, 42,0);
        vcdp->declArray(c+10417,"fp_wrapper fpnewtop Implementation", false,-1, 681,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop rst_ni", false,-1);
        vcdp->declArray(c+425,"fp_wrapper fpnewtop operands_i", false,-1, 95,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop tag_i", false,-1);
        vcdp->declBit(c+10105,"fp_wrapper fpnewtop in_valid_i", false,-1);
        vcdp->declBit(c+10113,"fp_wrapper fpnewtop in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop flush_i", false,-1);
        vcdp->declBus(c+10089,"fp_wrapper fpnewtop result_o", false,-1, 31,0);
        vcdp->declBus(c+513,"fp_wrapper fpnewtop status_o", false,-1, 4,0);
        vcdp->declBit(c+521,"fp_wrapper fpnewtop tag_o", false,-1);
        vcdp->declBit(c+10145,"fp_wrapper fpnewtop out_valid_o", false,-1);
        vcdp->declBit(c+10153,"fp_wrapper fpnewtop out_ready_i", false,-1);
        vcdp->declBit(c+10161,"fp_wrapper fpnewtop busy_o", false,-1);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop NUM_OPGROUPS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+529,"fp_wrapper fpnewtop opgrp_in_ready", false,-1, 3,0);
        vcdp->declBus(c+537,"fp_wrapper fpnewtop opgrp_out_valid", false,-1, 3,0);
        vcdp->declBus(c+545,"fp_wrapper fpnewtop opgrp_out_ready", false,-1, 3,0);
        vcdp->declBus(c+553,"fp_wrapper fpnewtop opgrp_ext", false,-1, 3,0);
        vcdp->declBus(c+561,"fp_wrapper fpnewtop opgrp_busy", false,-1, 3,0);
        vcdp->declArray(c+569,"fp_wrapper fpnewtop opgrp_outputs", false,-1, 151,0);
        vcdp->declBus(c+609,"fp_wrapper fpnewtop is_boxed", false,-1, 14,0);
        vcdp->declQuad(c+617,"fp_wrapper fpnewtop arbiter_output", false,-1, 37,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_nanbox_check[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_nanbox_check[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_nanbox_check[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_nanbox_check[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_nanbox_check[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] in_valid", false,-1);
        vcdp->declBus(c+641,"fp_wrapper fpnewtop gen_operation_groups[0] input_boxed", false,-1, 14,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[1] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] in_valid", false,-1);
        vcdp->declBus(c+657,"fp_wrapper fpnewtop gen_operation_groups[1] input_boxed", false,-1, 9,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[2] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] in_valid", false,-1);
        vcdp->declBus(c+673,"fp_wrapper fpnewtop gen_operation_groups[2] input_boxed", false,-1, 9,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] in_valid", false,-1);
        vcdp->declBus(c+689,"fp_wrapper fpnewtop gen_operation_groups[3] input_boxed", false,-1, 14,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop i_arbiter rr_i", false,-1, 1,0);
        vcdp->declBus(c+537,"fp_wrapper fpnewtop i_arbiter req_i", false,-1, 3,0);
        vcdp->declBus(c+545,"fp_wrapper fpnewtop i_arbiter gnt_o", false,-1, 3,0);
        vcdp->declArray(c+569,"fp_wrapper fpnewtop i_arbiter data_i", false,-1, 151,0);
        vcdp->declBit(c+10145,"fp_wrapper fpnewtop i_arbiter req_o", false,-1);
        vcdp->declBit(c+10153,"fp_wrapper fpnewtop i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+617,"fp_wrapper fpnewtop i_arbiter data_o", false,-1, 37,0);
        vcdp->declBus(c+697,"fp_wrapper fpnewtop i_arbiter idx_o", false,-1, 1,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+705,"fp_wrapper fpnewtop i_arbiter gen_arbiter index_nodes", false,-1, 5,0);
        vcdp->declArray(c+713,"fp_wrapper fpnewtop i_arbiter gen_arbiter data_nodes", false,-1, 113,0);
        vcdp->declBus(c+745,"fp_wrapper fpnewtop i_arbiter gen_arbiter gnt_nodes", false,-1, 2,0);
        vcdp->declBus(c+753,"fp_wrapper fpnewtop i_arbiter gen_arbiter req_nodes", false,-1, 2,0);
        vcdp->declBus(c+8881,"fp_wrapper fpnewtop i_arbiter gen_arbiter rr_q", false,-1, 1,0);
        vcdp->declBus(c+537,"fp_wrapper fpnewtop i_arbiter gen_arbiter req_d", false,-1, 3,0);
        vcdp->declBus(c+10241,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 1,0);
        vcdp->declBus(c+761,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 3,0);
        vcdp->declBus(c+769,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 3,0);
        vcdp->declBus(c+777,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 1,0);
        vcdp->declBus(c+785,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 1,0);
        vcdp->declBus(c+793,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 1,0);
        vcdp->declBit(c+801,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+10649,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+809,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+817,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+825,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+761,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 3,0);
        vcdp->declBus(c+777,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 1,0);
        vcdp->declBit(c+801,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+1,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 7,0);
        vcdp->declBus(c+833,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 3,0);
        vcdp->declBus(c+841,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 7,0);
        vcdp->declBus(c+849,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 3,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+769,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 3,0);
        vcdp->declBus(c+785,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 1,0);
        vcdp->declBit(c+857,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+9,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 7,0);
        vcdp->declBus(c+865,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 3,0);
        vcdp->declBus(c+873,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 7,0);
        vcdp->declBus(c+881,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 3,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10673,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+10689,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+10697,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+10705,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+10745,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+10753,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block rst_ni", false,-1);
        vcdp->declArray(c+425,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block operands_i", false,-1, 95,0);
        vcdp->declBus(c+641,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+889,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+897,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+905,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+913,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+921,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+929,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+937,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+945,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+953,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+961,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+969,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+977,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+985,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+1041,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format in_valid", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+961,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+969,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+985,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+929,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+937,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+1041,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+1057,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+1065,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+1073,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+1145,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+1153,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+8889,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+961,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+6833,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+1161,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+1169,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+1177,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+1185,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+1193,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+1201,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+10769,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+1209,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1217,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1233,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1241,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10785,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+10793,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+10809,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10825,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1161,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+1177,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+1201,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+17,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+1249,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+1257,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+1265,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1169,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+1185,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+1273,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+25,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+1281,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+1289,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+1297,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10833,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10841,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice Width", false,-1, 31,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+10849,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rst_ni", false,-1);
        vcdp->declArray(c+425,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice operands_i", false,-1, 95,0);
        vcdp->declBus(c+1305,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_mod_i", false,-1);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_i", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice flush_i", false,-1);
        vcdp->declBus(c+10249,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+1321,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_o", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+1329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice busy_o", false,-1);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+10249,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_result", false,-1, 31,0);
        vcdp->declBus(c+10249,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_regular_result", false,-1, 31,0);
        vcdp->declBus(c+10865,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_class_result", false,-1, 31,0);
        vcdp->declBus(c+33,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_vec_class_result", false,-1, 31,0);
        vcdp->declBus(c+1337,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+10857,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+10873,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_class_mask", false,-1, 9,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+10881,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_vectorial", false,-1, 0,0);
        vcdp->declBus(c+1329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_is_class", false,-1, 0,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_vector", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_class", false,-1);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice CLASS_VEC_BITS", false,-1, 31,0);
        vcdp->declBus(c+10249,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_sign", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declArray(c+1345,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 95,0);
        vcdp->declBus(c+10257,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+1369,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+10889,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+1377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10865,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+10897,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+10905,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rst_ni", false,-1);
        vcdp->declArray(c+1345,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operands_i", false,-1, 95,0);
        vcdp->declBus(c+1305,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_mod_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_i", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_i", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma in_valid_i", false,-1);
        vcdp->declBit(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma flush_i", false,-1);
        vcdp->declBus(c+10257,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_o", false,-1, 31,0);
        vcdp->declBus(c+1369,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma status_o", false,-1, 4,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma extension_bit_o", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_o", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_o", false,-1);
        vcdp->declBit(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_valid_o", false,-1);
        vcdp->declBit(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_ready_i", false,-1);
        vcdp->declBit(c+1329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma busy_o", false,-1);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10921,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma BIAS", false,-1, 31,0);
        vcdp->declBus(c+10929,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma PRECISION_BITS", false,-1, 31,0);
        vcdp->declBus(c+10937,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma LOWER_SUM_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma LZC_RESULT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10945,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma EXP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma SHIFT_AMOUNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_MID_REGS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declArray(c+1345,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_operands_q", false,-1, 95,0);
        vcdp->declBus(c+1305,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_is_boxed_q", false,-1, 2,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+457,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+1385,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_q", false,-1, 23,0);
        vcdp->declBus(c+1393,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_a", false,-1, 31,0);
        vcdp->declBus(c+1401,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_b", false,-1, 31,0);
        vcdp->declBus(c+1409,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_c", false,-1, 31,0);
        vcdp->declBus(c+1417,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_a", false,-1, 7,0);
        vcdp->declBus(c+1425,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_b", false,-1, 7,0);
        vcdp->declBus(c+1433,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_c", false,-1, 7,0);
        vcdp->declBit(c+1441,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_inf", false,-1);
        vcdp->declBit(c+1449,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_nan", false,-1);
        vcdp->declBit(c+1457,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma signalling_nan", false,-1);
        vcdp->declBit(c+1465,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction", false,-1);
        vcdp->declBit(c+1473,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_sign", false,-1);
        vcdp->declBus(c+1481,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result", false,-1, 31,0);
        vcdp->declBus(c+1489,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status", false,-1, 4,0);
        vcdp->declBit(c+1497,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special", false,-1);
        vcdp->declBus(c+1505,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_a", false,-1, 9,0);
        vcdp->declBus(c+1513,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_b", false,-1, 9,0);
        vcdp->declBus(c+1521,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_c", false,-1, 9,0);
        vcdp->declBus(c+1529,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_addend", false,-1, 9,0);
        vcdp->declBus(c+1537,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product", false,-1, 9,0);
        vcdp->declBus(c+1545,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference", false,-1, 9,0);
        vcdp->declBus(c+1553,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent", false,-1, 9,0);
        vcdp->declBus(c+1561,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt", false,-1, 6,0);
        vcdp->declBus(c+1569,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_a", false,-1, 23,0);
        vcdp->declBus(c+1577,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_b", false,-1, 23,0);
        vcdp->declBus(c+1585,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_c", false,-1, 23,0);
        vcdp->declQuad(c+1593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product", false,-1, 47,0);
        vcdp->declArray(c+1609,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product_shifted", false,-1, 75,0);
        vcdp->declArray(c+1633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_after_shift", false,-1, 75,0);
        vcdp->declBus(c+1657,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_sticky_bits", false,-1, 23,0);
        vcdp->declBit(c+1665,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_before_add", false,-1);
        vcdp->declArray(c+1673,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shifted", false,-1, 75,0);
        vcdp->declBit(c+1697,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inject_carry_in", false,-1);
        vcdp->declArray(c+1705,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_raw", false,-1, 76,0);
        vcdp->declBit(c+1729,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_carry", false,-1);
        vcdp->declArray(c+1737,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum", false,-1, 75,0);
        vcdp->declBit(c+1761,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign", false,-1);
        vcdp->declBit(c+1465,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction_q", false,-1);
        vcdp->declBus(c+1537,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product_q", false,-1, 9,0);
        vcdp->declBus(c+1545,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference_q", false,-1, 9,0);
        vcdp->declBus(c+1553,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent_q", false,-1, 9,0);
        vcdp->declBus(c+1561,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt_q", false,-1, 6,0);
        vcdp->declBit(c+1665,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_before_add_q", false,-1);
        vcdp->declArray(c+1737,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_q", false,-1, 75,0);
        vcdp->declBit(c+1761,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign_q", false,-1);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_q", false,-1, 2,0);
        vcdp->declBit(c+1497,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special_q", false,-1);
        vcdp->declBus(c+1481,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result_q", false,-1, 31,0);
        vcdp->declBus(c+1489,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status_q", false,-1, 4,0);
        vcdp->declBus(c+1465,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_eff_sub_q", false,-1, 0,0);
        vcdp->declBus(c+1537,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_exp_prod_q", false,-1, 9,0);
        vcdp->declBus(c+1545,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_exp_diff_q", false,-1, 9,0);
        vcdp->declBus(c+1553,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_tent_exp_q", false,-1, 9,0);
        vcdp->declBus(c+1561,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_add_shamt_q", false,-1, 6,0);
        vcdp->declBus(c+1665,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_sticky_q", false,-1, 0,0);
        vcdp->declArray(c+1737,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_sum_q", false,-1, 75,0);
        vcdp->declBus(c+1761,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_final_sign_q", false,-1, 0,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+1497,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_res_is_spec_q", false,-1, 0,0);
        vcdp->declBus(c+1481,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_spec_res_q", false,-1, 31,0);
        vcdp->declBus(c+1489,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_spec_stat_q", false,-1, 4,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_ready", false,-1, 0,0);
        vcdp->declQuad(c+1769,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_lower", false,-1, 50,0);
        vcdp->declBus(c+1785,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count", false,-1, 5,0);
        vcdp->declBus(c+1793,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count_sgn", false,-1, 6,0);
        vcdp->declBit(c+1801,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma lzc_zeroes", false,-1);
        vcdp->declBus(c+1809,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma norm_shamt", false,-1, 6,0);
        vcdp->declBus(c+1817,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma normalized_exponent", false,-1, 9,0);
        vcdp->declArray(c+1825,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_shifted", false,-1, 76,0);
        vcdp->declBus(c+1849,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_mantissa", false,-1, 24,0);
        vcdp->declQuad(c+1857,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_sticky_bits", false,-1, 50,0);
        vcdp->declBit(c+1873,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_after_norm", false,-1);
        vcdp->declBus(c+1881,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_exponent", false,-1, 9,0);
        vcdp->declBit(c+1761,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_sign", false,-1);
        vcdp->declBus(c+1889,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_exponent", false,-1, 7,0);
        vcdp->declBus(c+1897,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_mantissa", false,-1, 22,0);
        vcdp->declBus(c+1905,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_abs", false,-1, 30,0);
        vcdp->declBus(c+1913,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma round_sticky_bits", false,-1, 1,0);
        vcdp->declBit(c+1921,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma of_before_round", false,-1);
        vcdp->declBit(c+1929,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma of_after_round", false,-1);
        vcdp->declBit(c+1937,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma uf_before_round", false,-1);
        vcdp->declBit(c+1945,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma uf_after_round", false,-1);
        vcdp->declBit(c+1953,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_zero", false,-1);
        vcdp->declBit(c+10265,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rounded_sign", false,-1);
        vcdp->declBus(c+1961,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rounded_abs", false,-1, 30,0);
        vcdp->declBus(c+10273,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma regular_result", false,-1, 31,0);
        vcdp->declBus(c+1969,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma regular_status", false,-1, 4,0);
        vcdp->declBus(c+10257,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_d", false,-1, 31,0);
        vcdp->declBus(c+1369,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma status_d", false,-1, 4,0);
        vcdp->declBus(c+10257,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+1369,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1313,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+10961,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs NumOperands", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs WIDTH", false,-1, 31,0);
        vcdp->declArray(c+1345,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs operands_i", false,-1, 95,0);
        vcdp->declBus(c+1305,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+1385,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs info_o", false,-1, 23,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+1977,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+1985,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+1993,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+2001,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+2009,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+2017,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+2025,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+2033,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+2041,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+2049,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] value", false,-1, 31,0);
        vcdp->declBit(c+2057,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_boxed", false,-1);
        vcdp->declBit(c+2065,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_normal", false,-1);
        vcdp->declBit(c+2073,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_inf", false,-1);
        vcdp->declBit(c+2081,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_nan", false,-1);
        vcdp->declBit(c+2089,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_signalling", false,-1);
        vcdp->declBit(c+2097,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_quiet", false,-1);
        vcdp->declBit(c+2105,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_zero", false,-1);
        vcdp->declBit(c+2113,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_subnormal", false,-1);
        vcdp->declBus(c+2121,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] value", false,-1, 31,0);
        vcdp->declBit(c+2129,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_boxed", false,-1);
        vcdp->declBit(c+2137,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_normal", false,-1);
        vcdp->declBit(c+2145,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_inf", false,-1);
        vcdp->declBit(c+2153,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_nan", false,-1);
        vcdp->declBit(c+2161,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_signalling", false,-1);
        vcdp->declBit(c+2169,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_quiet", false,-1);
        vcdp->declBit(c+2177,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_zero", false,-1);
        vcdp->declBit(c+2185,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_subnormal", false,-1);
        vcdp->declBus(c+10937,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc MODE", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+1769,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc in_i", false,-1, 50,0);
        vcdp->declBus(c+1785,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc cnt_o", false,-1, 5,0);
        vcdp->declBit(c+1801,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc empty_o", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+41,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc index_lut", false,-1, 305,0);
        vcdp->declQuad(c+2193,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+2209,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+2305,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc in_tmp", false,-1, 50,0);
        vcdp->declBus(c+10937,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10969,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding AbsWidth", false,-1, 31,0);
        vcdp->declBus(c+1905,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding abs_value_i", false,-1, 30,0);
        vcdp->declBit(c+1761,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding sign_i", false,-1);
        vcdp->declBus(c+1913,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding round_sticky_bits_i", false,-1, 1,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding rnd_mode_i", false,-1, 2,0);
        vcdp->declBit(c+1465,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding effective_subtraction_i", false,-1);
        vcdp->declBus(c+1961,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding abs_rounded_o", false,-1, 30,0);
        vcdp->declBit(c+10265,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding sign_o", false,-1);
        vcdp->declBit(c+1953,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding exact_zero_o", false,-1);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding op_i", false,-1, 3,0);
        vcdp->declBit(c+10281,"fp_wrapper fpnewtop gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding round_up", false,-1);
        vcdp->declBus(c+10977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+10985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+10993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11001,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11041,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block rst_ni", false,-1);
        vcdp->declQuad(c+2321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block operands_i", false,-1, 63,0);
        vcdp->declBus(c+657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+2337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+2345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+2353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+2361,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+2369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+2377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+2385,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+2393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+2401,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+2409,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+2417,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+2425,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+6841,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+2433,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice FMT", false,-1, 2,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice REG", false,-1, 31,0);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice in_valid", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+2409,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+2417,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+6841,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+2377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+2385,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+2433,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+2449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+2457,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+2465,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+2537,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+2545,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+8897,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+2409,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+6897,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+2553,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+2561,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+2569,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+2577,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+2585,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+2593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+2601,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2625,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10785,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10825,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2553,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+2569,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+2593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+2641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+2649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+2657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2561,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+2577,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+2665,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+2673,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+2681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+2689,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice Width", false,-1, 31,0);
        vcdp->declBus(c+11089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice IntFmtConfig", false,-1, 0,3);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice rst_ni", false,-1);
        vcdp->declQuad(c+2321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice operands_i", false,-1, 63,0);
        vcdp->declBus(c+657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice tag_i", false,-1);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+2697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice flush_i", false,-1);
        vcdp->declBus(c+6905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+2705,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+8905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice tag_o", false,-1);
        vcdp->declBit(c+2713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+2721,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+2729,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice busy_o", false,-1);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice FMT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice AUX_BITS", false,-1, 31,0);
        vcdp->declBus(c+2697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+2713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+11113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice aux_data", false,-1, 4,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_is_int", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_is_cpk", false,-1);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_vec_op", false,-1, 1,0);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_d", false,-1, 2,0);
        vcdp->declBus(c+11121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_q", false,-1, 2,0);
        vcdp->declBit(c+2737,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_up_cast", false,-1);
        vcdp->declBit(c+2745,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_down_cast", false,-1);
        vcdp->declArray(c+2753,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice fmt_slice_result", false,-1, 159,0);
        vcdp->declArray(c+137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice ifmt_slice_result", false,-1, 127,0);
        vcdp->declBus(c+11129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_slice_result", false,-1, 31,0);
        vcdp->declBus(c+11137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_d", false,-1, 31,0);
        vcdp->declBus(c+11145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_q", false,-1, 31,0);
        vcdp->declBus(c+7801,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+8905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+8913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_aux", false,-1, 4,0);
        vcdp->declBus(c+2729,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBit(c+8921,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_vector", false,-1);
        vcdp->declBus(c+8929,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt", false,-1, 2,0);
        vcdp->declBit(c+8937,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt_is_int", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_cpk", false,-1);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_vec_op", false,-1, 1,0);
        vcdp->declBus(c+2793,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_1op", false,-1, 4,0);
        vcdp->declBus(c+2801,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_2op", false,-1, 9,0);
        vcdp->declBus(c+11153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice boxed_2op unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE", false,-1, 31,0);
        vcdp->declBus(c+11161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] MAX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11185,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11193,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+7809,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+2713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+2721,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declQuad(c+2809,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 63,0);
        vcdp->declBus(c+7817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+7825,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2825,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+11201,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11209,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rst_ni", false,-1);
        vcdp->declQuad(c+2809,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi operands_i", false,-1, 63,0);
        vcdp->declBus(c+2801,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_i", false,-1, 3,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi dst_fmt_i", false,-1, 2,0);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi tag_i", false,-1);
        vcdp->declBus(c+11113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi aux_i", false,-1, 4,0);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_valid_i", false,-1);
        vcdp->declBit(c+2697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi flush_i", false,-1);
        vcdp->declBus(c+7817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_o", false,-1, 31,0);
        vcdp->declBus(c+7825,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi status_o", false,-1, 4,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi extension_bit_o", false,-1);
        vcdp->declBit(c+8905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi tag_o", false,-1);
        vcdp->declBus(c+8913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi aux_o", false,-1, 4,0);
        vcdp->declBit(c+2713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_valid_o", false,-1);
        vcdp->declBit(c+2721,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_ready_i", false,-1);
        vcdp->declBit(c+2729,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi busy_o", false,-1);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declQuad(c+2809,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi operands_q", false,-1, 63,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_q", false,-1, 3,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi dst_fmt_q", false,-1, 2,0);
        vcdp->declBit(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_valid_q", false,-1);
        vcdp->declQuad(c+2809,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_operands_q", false,-1, 63,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+11113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+2697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi divsqrt_fmt", false,-1, 1,0);
        vcdp->declArray(c+2833,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi divsqrt_operands", false,-1, 127,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi input_is_fp8", false,-1);
        vcdp->declBit(c+2697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_ready", false,-1);
        vcdp->declBit(c+2865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi div_valid", false,-1);
        vcdp->declBit(c+2873,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi sqrt_valid", false,-1);
        vcdp->declBit(c+8945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_ready", false,-1);
        vcdp->declBit(c+8953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_done", false,-1);
        vcdp->declBit(c+2881,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_starting", false,-1);
        vcdp->declBit(c+2713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_valid", false,-1);
        vcdp->declBit(c+2721,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_ready", false,-1);
        vcdp->declBit(c+2889,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi hold_result", false,-1);
        vcdp->declBit(c+2897,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi data_is_held", false,-1);
        vcdp->declBit(c+2905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_busy", false,-1);
        vcdp->declBus(c+8961,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi state_q", false,-1, 1,0);
        vcdp->declBus(c+2913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi state_d", false,-1, 1,0);
        vcdp->declBit(c+8969,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_is_fp8_q", false,-1);
        vcdp->declBit(c+8905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_tag_q", false,-1);
        vcdp->declBus(c+8913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_aux_q", false,-1, 4,0);
        vcdp->declQuad(c+7833,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_result", false,-1, 63,0);
        vcdp->declBus(c+8609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi adjusted_result", false,-1, 31,0);
        vcdp->declBus(c+10049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi held_result_q", false,-1, 31,0);
        vcdp->declBus(c+8617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_status", false,-1, 4,0);
        vcdp->declBus(c+10057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi held_status_q", false,-1, 4,0);
        vcdp->declBus(c+7817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_d", false,-1, 31,0);
        vcdp->declBus(c+7825,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi status_d", false,-1, 4,0);
        vcdp->declBus(c+7817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+7825,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+8905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+8913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+2713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+2721,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Clk_CI", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Rst_RBI", false,-1);
        vcdp->declBit(c+2865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Div_start_SI", false,-1);
        vcdp->declBit(c+2873,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sqrt_start_SI", false,-1);
        vcdp->declQuad(c+2921,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Operand_a_DI", false,-1, 63,0);
        vcdp->declQuad(c+2937,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Operand_b_DI", false,-1, 63,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei RM_SI", false,-1, 2,0);
        vcdp->declBus(c+11217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Format_sel_SI", false,-1, 1,0);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Kill_SI", false,-1);
        vcdp->declQuad(c+7833,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Result_DO", false,-1, 63,0);
        vcdp->declBus(c+8617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Fflags_SO", false,-1, 4,0);
        vcdp->declBit(c+8945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Ready_SO", false,-1);
        vcdp->declBit(c+8953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Done_SO", false,-1);
        vcdp->declBus(c+8977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_a_D", false,-1, 11,0);
        vcdp->declBus(c+8985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_b_D", false,-1, 11,0);
        vcdp->declQuad(c+8993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_a_D", false,-1, 52,0);
        vcdp->declQuad(c+9009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_b_D", false,-1, 52,0);
        vcdp->declBus(c+9025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_z_D", false,-1, 12,0);
        vcdp->declQuad(c+7849,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_z_D", false,-1, 56,0);
        vcdp->declBit(c+9033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sign_z_D", false,-1);
        vcdp->declBit(c+2953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Start_S", false,-1);
        vcdp->declBus(c+9041,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei RM_dly_S", false,-1, 2,0);
        vcdp->declBit(c+9049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Div_enable_S", false,-1);
        vcdp->declBit(c+9057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sqrt_enable_S", false,-1);
        vcdp->declBit(c+9065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Inf_a_S", false,-1);
        vcdp->declBit(c+9073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Inf_b_S", false,-1);
        vcdp->declBit(c+9081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Zero_a_S", false,-1);
        vcdp->declBit(c+9089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Zero_b_S", false,-1);
        vcdp->declBit(c+9097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei NaN_a_S", false,-1);
        vcdp->declBit(c+9105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei NaN_b_S", false,-1);
        vcdp->declBit(c+9113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei SNaN_S", false,-1);
        vcdp->declBit(c+2961,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Special_case_SB", false,-1);
        vcdp->declBit(c+9121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Special_case_dly_SB", false,-1);
        vcdp->declBit(c+9129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Full_precision_S", false,-1);
        vcdp->declBit(c+9137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP32_S", false,-1);
        vcdp->declBit(c+9145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP64_S", false,-1);
        vcdp->declBit(c+9153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP16_S", false,-1);
        vcdp->declBit(c+9161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP16ALT_S", false,-1);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Clk_CI", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2873,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+8945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Ready_SI", false,-1);
        vcdp->declQuad(c+2921,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Operand_a_DI", false,-1, 63,0);
        vcdp->declQuad(c+2937,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Operand_b_DI", false,-1, 63,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_SI", false,-1, 2,0);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declBit(c+2953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Start_SO", false,-1);
        vcdp->declBus(c+8977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_DO_norm", false,-1, 11,0);
        vcdp->declBus(c+8985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_DO_norm", false,-1, 11,0);
        vcdp->declQuad(c+8993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_DO_norm", false,-1, 52,0);
        vcdp->declQuad(c+9009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_DO_norm", false,-1, 52,0);
        vcdp->declBus(c+9041,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_dly_SO", false,-1, 2,0);
        vcdp->declBit(c+9033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DO", false,-1);
        vcdp->declBit(c+9065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SO", false,-1);
        vcdp->declBit(c+9073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SO", false,-1);
        vcdp->declBit(c+9081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SO", false,-1);
        vcdp->declBit(c+9089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SO", false,-1);
        vcdp->declBit(c+9097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SO", false,-1);
        vcdp->declBit(c+9105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SO", false,-1);
        vcdp->declBit(c+9113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SO", false,-1);
        vcdp->declBit(c+2961,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Special_case_SBO", false,-1);
        vcdp->declBit(c+9121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Special_case_dly_SBO", false,-1);
        vcdp->declBit(c+2969,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Hb_a_D", false,-1);
        vcdp->declBit(c+2977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Hb_b_D", false,-1);
        vcdp->declBus(c+2985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_D", false,-1, 10,0);
        vcdp->declBus(c+2993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_D", false,-1, 10,0);
        vcdp->declQuad(c+3001,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_NonH_D", false,-1, 51,0);
        vcdp->declQuad(c+3017,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_NonH_D", false,-1, 51,0);
        vcdp->declQuad(c+3033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_D", false,-1, 52,0);
        vcdp->declQuad(c+3049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_D", false,-1, 52,0);
        vcdp->declBit(c+3065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_a_D", false,-1);
        vcdp->declBit(c+3073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_b_D", false,-1);
        vcdp->declBit(c+2953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Start_S", false,-1);
        vcdp->declBit(c+3081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_zero_S", false,-1);
        vcdp->declBit(c+3089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_zero_S", false,-1);
        vcdp->declBit(c+3097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_prenorm_zero_S", false,-1);
        vcdp->declBit(c+3105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_prenorm_zero_S", false,-1);
        vcdp->declBit(c+3113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_prenorm_Inf_NaN_S", false,-1);
        vcdp->declBit(c+3121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_prenorm_Inf_NaN_S", false,-1);
        vcdp->declBit(c+3129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_QNaN_S", false,-1);
        vcdp->declBit(c+3137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_SNaN_S", false,-1);
        vcdp->declBit(c+3145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_QNaN_S", false,-1);
        vcdp->declBit(c+3153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_SNaN_S", false,-1);
        vcdp->declBit(c+3161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SN", false,-1);
        vcdp->declBit(c+9081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SP", false,-1);
        vcdp->declBit(c+3169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SN", false,-1);
        vcdp->declBit(c+9089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SP", false,-1);
        vcdp->declBit(c+3177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SN", false,-1);
        vcdp->declBit(c+9065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SP", false,-1);
        vcdp->declBit(c+3185,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SN", false,-1);
        vcdp->declBit(c+9073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SP", false,-1);
        vcdp->declBit(c+3193,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SN", false,-1);
        vcdp->declBit(c+9097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SP", false,-1);
        vcdp->declBit(c+3201,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SN", false,-1);
        vcdp->declBit(c+9105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SP", false,-1);
        vcdp->declBit(c+6913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SN", false,-1);
        vcdp->declBit(c+9113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SP", false,-1);
        vcdp->declBit(c+6921,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DN", false,-1);
        vcdp->declBit(c+9033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DP", false,-1);
        vcdp->declBus(c+10289,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_DN", false,-1, 2,0);
        vcdp->declBus(c+9041,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_DP", false,-1, 2,0);
        vcdp->declBus(c+3209,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_leadingOne_a", false,-1, 5,0);
        vcdp->declBus(c+3217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_leadingOne_b", false,-1, 5,0);
        vcdp->declBit(c+3225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_zero_S_a", false,-1);
        vcdp->declBit(c+3233,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_zero_S_b", false,-1);
        vcdp->declQuad(c+6929,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_norm_DN", false,-1, 52,0);
        vcdp->declQuad(c+8993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_norm_DP", false,-1, 52,0);
        vcdp->declBus(c+6945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_norm_DN", false,-1, 11,0);
        vcdp->declBus(c+8977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_norm_DP", false,-1, 11,0);
        vcdp->declQuad(c+6953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_norm_DN", false,-1, 52,0);
        vcdp->declQuad(c+9009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_norm_DP", false,-1, 52,0);
        vcdp->declBus(c+6969,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_norm_DN", false,-1, 11,0);
        vcdp->declBus(c+8985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_norm_DP", false,-1, 11,0);
        vcdp->declBus(c+11225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua MODE", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+3033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua in_i", false,-1, 52,0);
        vcdp->declBus(c+3209,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua cnt_o", false,-1, 5,0);
        vcdp->declBit(c+3225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua empty_o", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc index_lut", false,-1, 317,0);
        vcdp->declQuad(c+3241,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+3257,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+3353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc in_tmp", false,-1, 52,0);
        vcdp->declBus(c+11225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub MODE", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+3049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub in_i", false,-1, 52,0);
        vcdp->declBus(c+3217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub cnt_o", false,-1, 5,0);
        vcdp->declBit(c+3233,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub empty_o", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+249,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc index_lut", false,-1, 317,0);
        vcdp->declQuad(c+3369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+3385,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+3481,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc in_tmp", false,-1, 52,0);
        vcdp->declBus(c+11225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Clk_CI", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2873,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+2953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Start_SI", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Kill_SI", false,-1);
        vcdp->declBit(c+2961,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Special_case_SBI", false,-1);
        vcdp->declBit(c+9121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Special_case_dly_SBI", false,-1);
        vcdp->declBus(c+11217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declQuad(c+8993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_a_DI", false,-1, 52,0);
        vcdp->declQuad(c+9009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_b_DI", false,-1, 52,0);
        vcdp->declBus(c+8977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_a_DI", false,-1, 11,0);
        vcdp->declBus(c+8985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_b_DI", false,-1, 11,0);
        vcdp->declBit(c+9049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_enable_SO", false,-1);
        vcdp->declBit(c+9057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_enable_SO", false,-1);
        vcdp->declBit(c+9129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Full_precision_SO", false,-1);
        vcdp->declBit(c+9137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP32_SO", false,-1);
        vcdp->declBit(c+9145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP64_SO", false,-1);
        vcdp->declBit(c+9153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP16_SO", false,-1);
        vcdp->declBit(c+9161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP16ALT_SO", false,-1);
        vcdp->declBit(c+8945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Ready_SO", false,-1);
        vcdp->declBit(c+8953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Done_SO", false,-1);
        vcdp->declQuad(c+7849,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_z_DO", false,-1, 56,0);
        vcdp->declBus(c+9025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_z_DO", false,-1, 12,0);
        vcdp->declBit(c+9169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_start_dly_S", false,-1);
        vcdp->declBit(c+9177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_start_dly_S", false,-1);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Clk_CI", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2873,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+2953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Start_SI", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Kill_SI", false,-1);
        vcdp->declBit(c+2961,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Special_case_SBI", false,-1);
        vcdp->declBit(c+9121,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Special_case_dly_SBI", false,-1);
        vcdp->declBus(c+11217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+10641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declQuad(c+8993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Numerator_DI", false,-1, 52,0);
        vcdp->declBus(c+8977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_num_DI", false,-1, 11,0);
        vcdp->declQuad(c+9009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_DI", false,-1, 52,0);
        vcdp->declBus(c+8985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_den_DI", false,-1, 11,0);
        vcdp->declBit(c+9169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_SO", false,-1);
        vcdp->declBit(c+9177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_dly_SO", false,-1);
        vcdp->declBit(c+9049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_enable_SO", false,-1);
        vcdp->declBit(c+9057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_enable_SO", false,-1);
        vcdp->declBit(c+9129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Full_precision_SO", false,-1);
        vcdp->declBit(c+9137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP32_SO", false,-1);
        vcdp->declBit(c+9145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP64_SO", false,-1);
        vcdp->declBit(c+9153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP16_SO", false,-1);
        vcdp->declBit(c+9161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP16ALT_SO", false,-1);
        vcdp->declBit(c+8945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Ready_SO", false,-1);
        vcdp->declBit(c+8953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Done_SO", false,-1);
        vcdp->declQuad(c+7849,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mant_result_prenorm_DO", false,-1, 56,0);
        vcdp->declBus(c+9025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DO", false,-1, 12,0);
        vcdp->declQuad(c+6977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Partial_remainder_DN", false,-1, 57,0);
        vcdp->declQuad(c+9185,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Partial_remainder_DP", false,-1, 57,0);
        vcdp->declQuad(c+9201,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Quotient_DP", false,-1, 56,0);
        vcdp->declQuad(c+9217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Numerator_se_D", false,-1, 53,0);
        vcdp->declQuad(c+9233,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_D", false,-1, 53,0);
        vcdp->declQuad(c+7865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_DB", false,-1, 53,0);
        vcdp->declQuad(c+7881,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mant_D_sqrt_Norm", false,-1, 53,0);
        vcdp->declBus(c+9249,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Format_sel_S", false,-1, 1,0);
        vcdp->declBus(c+9257,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Precision_ctl_S", false,-1, 5,0);
        vcdp->declBus(c+7897,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_ctl_S", false,-1, 5,0);
        vcdp->declBus(c+9265,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_Two_iteration_unit_S", false,-1, 5,0);
        vcdp->declBus(c+9273,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_Four_iteration_unit_S", false,-1, 5,0);
        vcdp->declBit(c+9169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_S", false,-1);
        vcdp->declBit(c+9177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_dly_S", false,-1);
        vcdp->declBus(c+9281,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Crtl_cnt_S", false,-1, 5,0);
        vcdp->declBit(c+7905,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Start_dly_S", false,-1);
        vcdp->declBit(c+3497,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fsm_enable_S", false,-1);
        vcdp->declBit(c+7913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Final_state_S", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_0", false,-1);
        vcdp->declBit(c+9289,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_1", false,-1);
        vcdp->declBus(c+9297,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_2", false,-1, 1,0);
        vcdp->declBus(c+9305,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_3", false,-1, 2,0);
        vcdp->declBus(c+9313,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_4", false,-1, 3,0);
        vcdp->declBus(c+9321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_5", false,-1, 4,0);
        vcdp->declBus(c+9329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_6", false,-1, 5,0);
        vcdp->declBus(c+9337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_7", false,-1, 6,0);
        vcdp->declBus(c+9345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_8", false,-1, 7,0);
        vcdp->declBus(c+9353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_9", false,-1, 8,0);
        vcdp->declBus(c+9361,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_10", false,-1, 9,0);
        vcdp->declBus(c+9369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_11", false,-1, 10,0);
        vcdp->declBus(c+9377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_12", false,-1, 11,0);
        vcdp->declBus(c+9385,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_13", false,-1, 12,0);
        vcdp->declBus(c+9393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_14", false,-1, 13,0);
        vcdp->declBus(c+9401,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_15", false,-1, 14,0);
        vcdp->declBus(c+9409,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_16", false,-1, 15,0);
        vcdp->declBus(c+9417,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_17", false,-1, 16,0);
        vcdp->declBus(c+9425,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_18", false,-1, 17,0);
        vcdp->declBus(c+9433,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_19", false,-1, 18,0);
        vcdp->declBus(c+9441,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_20", false,-1, 19,0);
        vcdp->declBus(c+9449,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_21", false,-1, 20,0);
        vcdp->declBus(c+9457,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_22", false,-1, 21,0);
        vcdp->declBus(c+9465,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_23", false,-1, 22,0);
        vcdp->declBus(c+9473,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_24", false,-1, 23,0);
        vcdp->declBus(c+9481,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_25", false,-1, 24,0);
        vcdp->declBus(c+9489,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_26", false,-1, 25,0);
        vcdp->declBus(c+9497,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_27", false,-1, 26,0);
        vcdp->declBus(c+9505,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_28", false,-1, 27,0);
        vcdp->declBus(c+9513,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_29", false,-1, 28,0);
        vcdp->declBus(c+9521,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_30", false,-1, 29,0);
        vcdp->declBus(c+9529,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_31", false,-1, 30,0);
        vcdp->declBus(c+9537,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_32", false,-1, 31,0);
        vcdp->declQuad(c+9545,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_33", false,-1, 32,0);
        vcdp->declQuad(c+9561,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_34", false,-1, 33,0);
        vcdp->declQuad(c+9577,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_35", false,-1, 34,0);
        vcdp->declQuad(c+9593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_36", false,-1, 35,0);
        vcdp->declQuad(c+9609,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_37", false,-1, 36,0);
        vcdp->declQuad(c+9625,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_38", false,-1, 37,0);
        vcdp->declQuad(c+9641,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_39", false,-1, 38,0);
        vcdp->declQuad(c+9657,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_40", false,-1, 39,0);
        vcdp->declQuad(c+9673,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_41", false,-1, 40,0);
        vcdp->declQuad(c+9689,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_42", false,-1, 41,0);
        vcdp->declQuad(c+9705,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_43", false,-1, 42,0);
        vcdp->declQuad(c+9721,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_44", false,-1, 43,0);
        vcdp->declQuad(c+9737,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_45", false,-1, 44,0);
        vcdp->declQuad(c+9753,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_46", false,-1, 45,0);
        vcdp->declQuad(c+9769,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_47", false,-1, 46,0);
        vcdp->declQuad(c+9785,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_48", false,-1, 47,0);
        vcdp->declQuad(c+9801,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_49", false,-1, 48,0);
        vcdp->declQuad(c+9817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_50", false,-1, 49,0);
        vcdp->declQuad(c+9833,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_51", false,-1, 50,0);
        vcdp->declQuad(c+9849,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_52", false,-1, 51,0);
        vcdp->declQuad(c+9865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_53", false,-1, 52,0);
        vcdp->declQuad(c+9881,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_54", false,-1, 53,0);
        vcdp->declQuad(c+9897,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_55", false,-1, 54,0);
        vcdp->declQuad(c+9913,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_56", false,-1, 55,0);
        vcdp->declQuad(c+9201,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_57", false,-1, 56,0);
        vcdp->declQuad(c+11233,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_58", false,-1, 57,0);
        vcdp->declQuad(c+11249,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_59", false,-1, 58,0);
        vcdp->declQuad(c+11265,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_60", false,-1, 59,0);
        vcdp->declBus(c+3505,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_0", false,-1, 1,0);
        vcdp->declBus(c+6993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_1", false,-1, 2,0);
        vcdp->declBus(c+7001,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_2", false,-1, 4,0);
        vcdp->declBus(c+7009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_3", false,-1, 6,0);
        vcdp->declBus(c+7017,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_4", false,-1, 8,0);
        vcdp->declBus(c+7025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_5", false,-1, 10,0);
        vcdp->declBus(c+7033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_6", false,-1, 12,0);
        vcdp->declBus(c+7041,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_7", false,-1, 14,0);
        vcdp->declBus(c+7049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_8", false,-1, 16,0);
        vcdp->declBus(c+7057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_9", false,-1, 18,0);
        vcdp->declBus(c+7065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_10", false,-1, 20,0);
        vcdp->declBus(c+7073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_11", false,-1, 22,0);
        vcdp->declBus(c+7081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_12", false,-1, 24,0);
        vcdp->declBus(c+7089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_13", false,-1, 26,0);
        vcdp->declBus(c+7097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_14", false,-1, 28,0);
        vcdp->declBus(c+7105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_15", false,-1, 30,0);
        vcdp->declQuad(c+7113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_16", false,-1, 32,0);
        vcdp->declQuad(c+7129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_17", false,-1, 34,0);
        vcdp->declQuad(c+7145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_18", false,-1, 36,0);
        vcdp->declQuad(c+7161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_19", false,-1, 38,0);
        vcdp->declQuad(c+7177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_20", false,-1, 40,0);
        vcdp->declQuad(c+7193,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_21", false,-1, 42,0);
        vcdp->declQuad(c+7209,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_22", false,-1, 44,0);
        vcdp->declQuad(c+7225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_23", false,-1, 46,0);
        vcdp->declQuad(c+7241,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_24", false,-1, 48,0);
        vcdp->declQuad(c+7257,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_25", false,-1, 50,0);
        vcdp->declQuad(c+7273,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_26", false,-1, 52,0);
        vcdp->declQuad(c+7289,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_27", false,-1, 54,0);
        vcdp->declQuad(c+7305,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_28", false,-1, 56,0);
        vcdp->declBus(c+3513,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_0", false,-1, 2,0);
        vcdp->declBus(c+3521,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_1", false,-1, 4,0);
        vcdp->declBus(c+3529,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_2", false,-1, 7,0);
        vcdp->declBus(c+3537,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_3", false,-1, 10,0);
        vcdp->declBus(c+3545,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_4", false,-1, 13,0);
        vcdp->declBus(c+3553,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_5", false,-1, 16,0);
        vcdp->declBus(c+3561,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_6", false,-1, 19,0);
        vcdp->declBus(c+3569,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_7", false,-1, 22,0);
        vcdp->declBus(c+3577,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_8", false,-1, 25,0);
        vcdp->declBus(c+3585,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_9", false,-1, 28,0);
        vcdp->declBus(c+3593,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_10", false,-1, 31,0);
        vcdp->declQuad(c+3601,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_11", false,-1, 34,0);
        vcdp->declQuad(c+3617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_12", false,-1, 37,0);
        vcdp->declQuad(c+3633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_13", false,-1, 40,0);
        vcdp->declQuad(c+3649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_14", false,-1, 43,0);
        vcdp->declQuad(c+3665,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_15", false,-1, 46,0);
        vcdp->declQuad(c+3681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_16", false,-1, 49,0);
        vcdp->declQuad(c+3697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_17", false,-1, 52,0);
        vcdp->declQuad(c+3713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_18", false,-1, 55,0);
        vcdp->declQuad(c+7321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_19", false,-1, 58,0);
        vcdp->declQuad(c+11281,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_20", false,-1, 61,0);
        vcdp->declBus(c+3729,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_0", false,-1, 3,0);
        vcdp->declBus(c+7337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_1", false,-1, 6,0);
        vcdp->declBus(c+7345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_2", false,-1, 10,0);
        vcdp->declBus(c+7353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_3", false,-1, 14,0);
        vcdp->declBus(c+7361,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_4", false,-1, 18,0);
        vcdp->declBus(c+7369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_5", false,-1, 22,0);
        vcdp->declBus(c+7377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_6", false,-1, 26,0);
        vcdp->declBus(c+7385,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_7", false,-1, 30,0);
        vcdp->declQuad(c+7393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_8", false,-1, 34,0);
        vcdp->declQuad(c+7409,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_9", false,-1, 38,0);
        vcdp->declQuad(c+7425,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_10", false,-1, 42,0);
        vcdp->declQuad(c+7441,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_11", false,-1, 46,0);
        vcdp->declQuad(c+7457,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_12", false,-1, 50,0);
        vcdp->declQuad(c+7473,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_13", false,-1, 54,0);
        vcdp->declQuad(c+7489,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_14", false,-1, 58,0);
        vcdp->declQuad(c+9929,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R0", false,-1, 57,0);
        vcdp->declQuad(c+3737,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q0", false,-1, 57,0);
        vcdp->declQuad(c+3753,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt0", false,-1, 57,0);
        vcdp->declQuad(c+3769,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_0", false,-1, 57,0);
        vcdp->declQuad(c+7505,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R1", false,-1, 57,0);
        vcdp->declQuad(c+3785,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q1", false,-1, 57,0);
        vcdp->declQuad(c+3801,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt1", false,-1, 57,0);
        vcdp->declQuad(c+3817,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_1", false,-1, 57,0);
        vcdp->declQuad(c+7521,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R2", false,-1, 57,0);
        vcdp->declQuad(c+3833,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q2", false,-1, 57,0);
        vcdp->declQuad(c+3849,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt2", false,-1, 57,0);
        vcdp->declQuad(c+3865,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_2", false,-1, 57,0);
        vcdp->declQuad(c+7537,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R3", false,-1, 57,0);
        vcdp->declQuad(c+11297,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q3", false,-1, 57,0);
        vcdp->declQuad(c+11313,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt3", false,-1, 57,0);
        vcdp->declQuad(c+7921,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_3", false,-1, 57,0);
        vcdp->declQuad(c+7553,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R4", false,-1, 57,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+7937+i*1,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_DI", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+7969+i*1,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_DO", true,(i+0), 1,0);}}
        vcdp->declBit(c+11329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_carry_DO", false,-1);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3881+i*2,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_a_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3945+i*2,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_b_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+7569+i*2,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_a_BMASK_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+4009+i*2,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_b_BMASK_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+4073+i*1,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_carry_D", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+4105+i*2,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_sum_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+4169+i*2,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_sum_AMASK_D", true,(i+0), 57,0);}}
        vcdp->declBus(c+4233,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_quotinent_S", false,-1, 3,0);
        vcdp->declQuad(c+8001,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_format_DB", false,-1, 57,0);
        vcdp->declQuad(c+8017,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 First_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+8033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 First_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+9945,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_first_S", false,-1);
        vcdp->declQuad(c+7633,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sec_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7649,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sec_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+4241,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_sec_S", false,-1);
        vcdp->declQuad(c+7665,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Thi_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7681,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Thi_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+4249,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_thi_S", false,-1);
        vcdp->declQuad(c+11337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fou_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+11353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fou_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+11369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_fou_S", false,-1);
        vcdp->declQuad(c+11377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mask_bits_ctl_S", false,-1, 57,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+8049+i*1,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_enable_SI", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+8081+i*1,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_SI", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+8113+i*1,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_enable_SI", true,(i+0));}}
        vcdp->declQuad(c+7697,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Quotient_DN", false,-1, 56,0);
        vcdp->declBus(c+8145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DN", false,-1, 12,0);
        vcdp->declBus(c+9025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DP", false,-1, 12,0);
        vcdp->declBus(c+9953,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_a_D", false,-1, 12,0);
        vcdp->declBus(c+9961,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_b_D", false,-1, 12,0);
        vcdp->declBus(c+8153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_c_D", false,-1, 12,0);
        vcdp->declBus(c+8161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 C_BIAS_AONE", false,-1, 31,0);
        vcdp->declBus(c+8169,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 C_HALF_BIAS", false,-1, 31,0);
        vcdp->declBus(c+11393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4257,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+4273,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+8177,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+8185,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+8193,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+8201,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+8209,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7713,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7729,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+8217,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+8225,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+8233,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declBus(c+11393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4289,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+4305,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+8241,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+8249,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+8257,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+8265,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+8273,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7737,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7753,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+8281,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+8289,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+8297,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declBus(c+11393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+4337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+8305,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+8313,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+8321,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+8329,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+8337,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7761,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7777,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+8345,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+8353,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+8361,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declQuad(c+7849,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_in_DI", false,-1, 56,0);
        vcdp->declBus(c+9025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_in_DI", false,-1, 12,0);
        vcdp->declBit(c+9033,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sign_in_DI", false,-1);
        vcdp->declBit(c+9049,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Div_enable_SI", false,-1);
        vcdp->declBit(c+9057,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sqrt_enable_SI", false,-1);
        vcdp->declBit(c+9065,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Inf_a_SI", false,-1);
        vcdp->declBit(c+9073,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Inf_b_SI", false,-1);
        vcdp->declBit(c+9081,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Zero_a_SI", false,-1);
        vcdp->declBit(c+9089,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Zero_b_SI", false,-1);
        vcdp->declBit(c+9097,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NaN_a_SI", false,-1);
        vcdp->declBit(c+9105,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NaN_b_SI", false,-1);
        vcdp->declBit(c+9113,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 SNaN_SI", false,-1);
        vcdp->declBus(c+9041,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 RM_SI", false,-1, 2,0);
        vcdp->declBit(c+9129,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Full_precision_SI", false,-1);
        vcdp->declBit(c+9137,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP32_SI", false,-1);
        vcdp->declBit(c+9145,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP64_SI", false,-1);
        vcdp->declBit(c+9153,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP16_SI", false,-1);
        vcdp->declBit(c+9161,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP16ALT_SI", false,-1);
        vcdp->declQuad(c+7833,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Result_DO", false,-1, 63,0);
        vcdp->declBus(c+8617,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Fflags_SO", false,-1, 4,0);
        vcdp->declBit(c+8369,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sign_res_D", false,-1);
        vcdp->declBit(c+9969,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NV_OP_S", false,-1);
        vcdp->declBit(c+8377,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_OF_S", false,-1);
        vcdp->declBit(c+8385,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_UF_S", false,-1);
        vcdp->declBit(c+9977,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Div_Zero_S", false,-1);
        vcdp->declBit(c+8393,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 In_Exact_S", false,-1);
        vcdp->declQuad(c+8401,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_res_norm_D", false,-1, 52,0);
        vcdp->declBus(c+8417,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_res_norm_D", false,-1, 10,0);
        vcdp->declBus(c+9985,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP64_D", false,-1, 12,0);
        vcdp->declBus(c+9993,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP32_D", false,-1, 9,0);
        vcdp->declBus(c+10001,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP16_D", false,-1, 6,0);
        vcdp->declBus(c+10009,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP16ALT_D", false,-1, 9,0);
        vcdp->declBus(c+10017,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Num_RS_D", false,-1, 12,0);
        vcdp->declQuad(c+8425,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_RS_D", false,-1, 52,0);
        vcdp->declQuad(c+8441,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_forsticky_D", false,-1, 56,0);
        vcdp->declBus(c+10025,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_subOne_D", false,-1, 12,0);
        vcdp->declBus(c+8457,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_lower_D", false,-1, 1,0);
        vcdp->declBit(c+8465,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_sticky_bit_D", false,-1);
        vcdp->declQuad(c+8473,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_forround_D", false,-1, 56,0);
        vcdp->declQuad(c+8489,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_upper_D", false,-1, 52,0);
        vcdp->declQuad(c+8505,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_upperRounded_D", false,-1, 53,0);
        vcdp->declBit(c+8521,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_roundUp_S", false,-1);
        vcdp->declBit(c+8529,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_rounded_S", false,-1);
        vcdp->declBit(c+8537,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_renorm_S", false,-1);
        vcdp->declQuad(c+8545,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_roundUp_Vector_S", false,-1, 52,0);
        vcdp->declQuad(c+8561,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_res_round_D", false,-1, 51,0);
        vcdp->declBus(c+8577,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_res_round_D", false,-1, 10,0);
        vcdp->declQuad(c+8585,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_before_format_ctl_D", false,-1, 51,0);
        vcdp->declBus(c+8601,"fp_wrapper fpnewtop gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_before_format_ctl_D", false,-1, 10,0);
        vcdp->declBus(c+11401,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11409,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11417,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11425,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11465,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11473,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block rst_ni", false,-1);
        vcdp->declQuad(c+4353,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block operands_i", false,-1, 63,0);
        vcdp->declBus(c+673,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+4369,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+4377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+4385,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+4393,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+4401,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+4409,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+4417,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+4425,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+4433,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+4441,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+4449,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+4457,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+4465,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+4521,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format in_valid", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+4441,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+4449,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+4465,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+4409,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+4417,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+4521,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+4537,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+4545,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+4553,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+4625,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+4633,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+10033,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+4441,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+7785,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+4641,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+4649,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+4657,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+4665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+4673,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+4681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11481,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+4689,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4697,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4705,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4713,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4721,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10785,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11489,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11497,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10825,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+4641,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+4657,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+4681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+4729,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+4737,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4745,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+4649,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+4665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+4753,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+337,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+4761,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+4769,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4777,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11505,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11513,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice Width", false,-1, 31,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11521,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rst_ni", false,-1);
        vcdp->declQuad(c+4353,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice operands_i", false,-1, 63,0);
        vcdp->declBus(c+4785,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_mod_i", false,-1);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_i", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice flush_i", false,-1);
        vcdp->declBus(c+4801,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+4809,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+4817,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_o", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+4825,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice busy_o", false,-1);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+4833,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_result", false,-1, 31,0);
        vcdp->declBus(c+4833,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_regular_result", false,-1, 31,0);
        vcdp->declBus(c+4841,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_class_result", false,-1, 31,0);
        vcdp->declBus(c+4849,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_vec_class_result", false,-1, 31,0);
        vcdp->declBus(c+4857,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+4817,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+4865,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_class_mask", false,-1, 9,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+11529,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_vectorial", false,-1, 0,0);
        vcdp->declBus(c+4825,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBus(c+4873,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_is_class", false,-1, 0,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_vector", false,-1);
        vcdp->declBit(c+4873,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_class", false,-1);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice CLASS_VEC_BITS", false,-1, 31,0);
        vcdp->declBus(c+4833,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+4881,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_sign", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declQuad(c+4889,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 63,0);
        vcdp->declBus(c+4905,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+4913,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+11537,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+4921,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10865,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+11545,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11553,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp rst_ni", false,-1);
        vcdp->declQuad(c+4889,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operands_i", false,-1, 63,0);
        vcdp->declBus(c+4785,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp op_mod_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp tag_i", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp aux_i", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp in_valid_i", false,-1);
        vcdp->declBit(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp flush_i", false,-1);
        vcdp->declBus(c+4905,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp result_o", false,-1, 31,0);
        vcdp->declBus(c+4913,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp status_o", false,-1, 4,0);
        vcdp->declBit(c+4817,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp extension_bit_o", false,-1);
        vcdp->declBus(c+4865,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_mask_o", false,-1, 9,0);
        vcdp->declBit(c+4873,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_class_o", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp tag_o", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp aux_o", false,-1);
        vcdp->declBit(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_valid_o", false,-1);
        vcdp->declBit(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_ready_i", false,-1);
        vcdp->declBit(c+4825,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp busy_o", false,-1);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declQuad(c+4889,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_operands_q", false,-1, 63,0);
        vcdp->declBus(c+4785,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_is_boxed_q", false,-1, 1,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+457,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+4929,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_q", false,-1, 15,0);
        vcdp->declBus(c+4937,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_a", false,-1, 31,0);
        vcdp->declBus(c+4945,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_b", false,-1, 31,0);
        vcdp->declBus(c+4953,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_a", false,-1, 7,0);
        vcdp->declBus(c+4961,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_b", false,-1, 7,0);
        vcdp->declBit(c+4969,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp any_operand_inf", false,-1);
        vcdp->declBit(c+4977,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp any_operand_nan", false,-1);
        vcdp->declBit(c+4985,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp signalling_nan", false,-1);
        vcdp->declBit(c+4993,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operands_equal", false,-1);
        vcdp->declBit(c+5001,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_a_smaller", false,-1);
        vcdp->declBus(c+5009,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_result", false,-1, 31,0);
        vcdp->declBus(c+11113,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_status", false,-1, 4,0);
        vcdp->declBit(c+5017,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_extension_bit", false,-1);
        vcdp->declBus(c+10297,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_result", false,-1, 31,0);
        vcdp->declBus(c+5025,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_status", false,-1, 4,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_extension_bit", false,-1);
        vcdp->declBus(c+5033,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_result", false,-1, 31,0);
        vcdp->declBus(c+5041,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_status", false,-1, 4,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_extension_bit", false,-1);
        vcdp->declBus(c+11113,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_status", false,-1, 4,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_extension_bit", false,-1);
        vcdp->declBus(c+4865,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_mask_d", false,-1, 9,0);
        vcdp->declBus(c+4905,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp result_d", false,-1, 31,0);
        vcdp->declBus(c+4913,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp status_d", false,-1, 4,0);
        vcdp->declBit(c+4817,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp extension_bit_d", false,-1);
        vcdp->declBit(c+4873,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_class_d", false,-1);
        vcdp->declBus(c+4905,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+4913,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+4817,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_extension_bit_q", false,-1, 0,0);
        vcdp->declBus(c+4865,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_class_mask_q", false,-1, 9,0);
        vcdp->declBus(c+4873,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_is_class_q", false,-1, 0,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+665,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4793,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+5049,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sign_injections sign_a", false,-1);
        vcdp->declBit(c+5057,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sign_injections sign_b", false,-1);
        vcdp->declBus(c+11561,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a NumOperands", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4889,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a operands_i", false,-1, 63,0);
        vcdp->declBus(c+4785,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+4929,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a info_o", false,-1, 15,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+5065,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+5073,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+5081,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+5089,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+5097,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+5105,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+5113,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+5121,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+5129,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+5137,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] value", false,-1, 31,0);
        vcdp->declBit(c+5145,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_boxed", false,-1);
        vcdp->declBit(c+5153,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_normal", false,-1);
        vcdp->declBit(c+5161,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_inf", false,-1);
        vcdp->declBit(c+5169,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_nan", false,-1);
        vcdp->declBit(c+5177,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_signalling", false,-1);
        vcdp->declBit(c+5185,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_quiet", false,-1);
        vcdp->declBit(c+5193,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_zero", false,-1);
        vcdp->declBit(c+5201,"fp_wrapper fpnewtop gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_subnormal", false,-1);
        vcdp->declBus(c+11569,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11577,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11585,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11633,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11641,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block rst_ni", false,-1);
        vcdp->declArray(c+425,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block operands_i", false,-1, 95,0);
        vcdp->declBus(c+689,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+5209,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+5217,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+5225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+5233,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+5241,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+5249,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+5257,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+5265,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+5273,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+5281,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+5289,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+5297,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+5305,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+5361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice FMT", false,-1, 2,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice REG", false,-1, 31,0);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice in_valid", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10761,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+5281,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+5289,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+5305,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+5249,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+5257,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+5361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+5377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+5385,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+5393,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+5465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+5473,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+10041,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+5281,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+7793,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+5481,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+5489,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+5497,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+5505,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+5513,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+5521,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+5529,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5537,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5545,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5553,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5561,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10785,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10825,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5481,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+5497,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+5521,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+5569,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+5577,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+5585,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5489,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+5505,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+5593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+5601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+5609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+5617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice Width", false,-1, 31,0);
        vcdp->declBus(c+11681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11689,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice IntFmtConfig", false,-1, 0,3);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11697,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice rst_ni", false,-1);
        vcdp->declArray(c+425,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice operands_i", false,-1, 95,0);
        vcdp->declBus(c+689,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10369,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice tag_i", false,-1);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice flush_i", false,-1);
        vcdp->declBus(c+5633,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+5641,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+5649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice tag_o", false,-1);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+5657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice busy_o", false,-1);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice FMT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice AUX_BITS", false,-1, 31,0);
        vcdp->declBus(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+5665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice aux_data", false,-1, 4,0);
        vcdp->declBit(c+5681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_is_int", false,-1);
        vcdp->declBit(c+5689,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_is_cpk", false,-1);
        vcdp->declBus(c+5697,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_vec_op", false,-1, 1,0);
        vcdp->declBus(c+5705,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_d", false,-1, 2,0);
        vcdp->declBus(c+11705,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_q", false,-1, 2,0);
        vcdp->declBit(c+5713,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_up_cast", false,-1);
        vcdp->declBit(c+5721,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_down_cast", false,-1);
        vcdp->declArray(c+5729,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice fmt_slice_result", false,-1, 159,0);
        vcdp->declArray(c+5769,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice ifmt_slice_result", false,-1, 127,0);
        vcdp->declBus(c+11713,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_slice_result", false,-1, 31,0);
        vcdp->declBus(c+5801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_d", false,-1, 31,0);
        vcdp->declBus(c+5801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_q", false,-1, 31,0);
        vcdp->declBus(c+5809,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+5649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_aux", false,-1, 4,0);
        vcdp->declBus(c+5657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBit(c+5817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_vector", false,-1);
        vcdp->declBus(c+5825,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt", false,-1, 2,0);
        vcdp->declBit(c+5833,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt_is_int", false,-1);
        vcdp->declBit(c+5689,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_cpk", false,-1);
        vcdp->declBus(c+5841,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_vec_op", false,-1, 1,0);
        vcdp->declBus(c+5849,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_1op", false,-1, 4,0);
        vcdp->declBus(c+5857,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_2op", false,-1, 9,0);
        vcdp->declBus(c+11153,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice boxed_2op unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE", false,-1, 31,0);
        vcdp->declBus(c+11721,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11729,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] MAX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11737,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11745,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11753,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5865,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declArray(c+5873,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 95,0);
        vcdp->declBus(c+5897,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+5905,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+10329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_target_q", false,-1, 31,0);
        vcdp->declBus(c+5705,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_aux_q", false,-1, 2,0);
        vcdp->declBus(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+5921,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10865,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+11761,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11769,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi IntFmtConfig", false,-1, 0,3);
        vcdp->declBus(c+10657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10065,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi clk_i", false,-1);
        vcdp->declBit(c+10073,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rst_ni", false,-1);
        vcdp->declBus(c+5929,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi operands_i", false,-1, 31,0);
        vcdp->declBus(c+5849,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi is_boxed_i", false,-1, 4,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_i", false,-1, 3,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_i", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi tag_i", false,-1);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi aux_i", false,-1, 4,0);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi in_valid_i", false,-1);
        vcdp->declBit(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi in_ready_o", false,-1);
        vcdp->declBit(c+10121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi flush_i", false,-1);
        vcdp->declBus(c+5897,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_o", false,-1, 31,0);
        vcdp->declBus(c+5905,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi status_o", false,-1, 4,0);
        vcdp->declBit(c+5649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi extension_bit_o", false,-1);
        vcdp->declBit(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi tag_o", false,-1);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi aux_o", false,-1, 4,0);
        vcdp->declBit(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_valid_o", false,-1);
        vcdp->declBit(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_ready_i", false,-1);
        vcdp->declBit(c+5657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi busy_o", false,-1);
        vcdp->declBus(c+10337,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+11785,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_FORMAT", false,-1, 63,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10921,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_BIAS", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi INT_MAN_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi LZC_RESULT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10785,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi INT_EXP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_MID_REGS", false,-1, 31,0);
        vcdp->declBus(c+10953,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declBus(c+5929,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi operands_q", false,-1, 31,0);
        vcdp->declBus(c+5849,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi is_boxed_q", false,-1, 4,0);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_q", false,-1);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+5929,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_operands_q", false,-1, 31,0);
        vcdp->declBus(c+5849,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_is_boxed_q", false,-1, 4,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+5937,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_is_int", false,-1);
        vcdp->declBit(c+5681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_is_int", false,-1);
        vcdp->declBus(c+5945,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi encoded_mant", false,-1, 31,0);
        vcdp->declBus(c+5953,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_sign", false,-1, 4,0);
        vcdp->declQuad(c+5961,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_exponent", false,-1, 44,0);
        vcdp->declArray(c+5977,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_mantissa", false,-1, 159,0);
        vcdp->declQuad(c+361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_shift_compensation", false,-1, 44,0);
        vcdp->declQuad(c+6017,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi info", false,-1, 39,0);
        vcdp->declArray(c+6033,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_input_val", false,-1, 127,0);
        vcdp->declBit(c+6065,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_sign", false,-1);
        vcdp->declBus(c+6073,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_value", false,-1, 31,0);
        vcdp->declBus(c+6081,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_mantissa", false,-1, 31,0);
        vcdp->declBus(c+6089,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_bias", false,-1, 8,0);
        vcdp->declBus(c+6097,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_exp", false,-1, 8,0);
        vcdp->declBus(c+6105,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_subnormal", false,-1, 8,0);
        vcdp->declBus(c+6113,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_offset", false,-1, 8,0);
        vcdp->declBit(c+6121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_sign", false,-1);
        vcdp->declBus(c+6129,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_exp", false,-1, 8,0);
        vcdp->declBus(c+6137,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_mant", false,-1, 31,0);
        vcdp->declBit(c+6145,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mant_is_zero", false,-1);
        vcdp->declBus(c+6153,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_input_exp", false,-1, 8,0);
        vcdp->declBus(c+6161,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_input_exp", false,-1, 8,0);
        vcdp->declBus(c+6169,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi renorm_shamt", false,-1, 4,0);
        vcdp->declBus(c+6177,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi renorm_shamt_sgn", false,-1, 5,0);
        vcdp->declBus(c+6185,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_exp", false,-1, 8,0);
        vcdp->declBit(c+6121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_sign_q", false,-1);
        vcdp->declBus(c+6129,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_exp_q", false,-1, 8,0);
        vcdp->declBus(c+6137,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_mant_q", false,-1, 31,0);
        vcdp->declBus(c+6185,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_exp_q", false,-1, 8,0);
        vcdp->declBit(c+5937,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_is_int_q", false,-1);
        vcdp->declBit(c+5681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_is_int_q", false,-1);
        vcdp->declBus(c+6193,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi info_q", false,-1, 7,0);
        vcdp->declBit(c+6145,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mant_is_zero_q", false,-1);
        vcdp->declBit(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_q2", false,-1);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_q2", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_q2", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_q2", false,-1, 1,0);
        vcdp->declBus(c+6121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_sign_q", false,-1, 0,0);
        vcdp->declBus(c+6129,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_exp_q", false,-1, 8,0);
        vcdp->declBus(c+6137,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_mant_q", false,-1, 31,0);
        vcdp->declBus(c+6185,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dest_exp_q", false,-1, 8,0);
        vcdp->declBus(c+5937,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_src_is_int_q", false,-1, 0,0);
        vcdp->declBus(c+5681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dst_is_int_q", false,-1, 0,0);
        vcdp->declBus(c+6201,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_info_q", false,-1, 7,0);
        vcdp->declBus(c+6145,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_mant_zero_q", false,-1, 0,0);
        vcdp->declBus(c+457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10361,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+6209,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_exp", false,-1, 8,0);
        vcdp->declArray(c+6217,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi preshift_mant", false,-1, 64,0);
        vcdp->declArray(c+6241,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_mant", false,-1, 64,0);
        vcdp->declBus(c+6265,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_mant", false,-1, 22,0);
        vcdp->declBus(c+6273,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_int", false,-1, 31,0);
        vcdp->declBus(c+6281,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi denorm_shamt", false,-1, 5,0);
        vcdp->declBus(c+6289,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_round_sticky_bits", false,-1, 1,0);
        vcdp->declBus(c+6297,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_round_sticky_bits", false,-1, 1,0);
        vcdp->declBus(c+6305,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi round_sticky_bits", false,-1, 1,0);
        vcdp->declBit(c+6313,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi of_before_round", false,-1);
        vcdp->declBit(c+6321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi uf_before_round", false,-1);
        vcdp->declBus(c+11801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_FP_STICKY", false,-1, 31,0);
        vcdp->declBus(c+10393,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INT_STICKY", false,-1, 31,0);
        vcdp->declBus(c+6329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi pre_round_abs", false,-1, 31,0);
        vcdp->declBit(c+6337,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi of_after_round", false,-1);
        vcdp->declBit(c+6345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi uf_after_round", false,-1);
        vcdp->declArray(c+6353,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_pre_round_abs", false,-1, 159,0);
        vcdp->declBus(c+6393,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_of_after_round", false,-1, 4,0);
        vcdp->declBus(c+6401,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_uf_after_round", false,-1, 4,0);
        vcdp->declArray(c+6409,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_pre_round_abs", false,-1, 127,0);
        vcdp->declBit(c+6121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_sign", false,-1);
        vcdp->declBus(c+6441,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_abs", false,-1, 31,0);
        vcdp->declBit(c+6449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_true_zero", false,-1);
        vcdp->declBus(c+6457,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_int_res", false,-1, 31,0);
        vcdp->declBit(c+6465,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_int_res_zero", false,-1);
        vcdp->declArray(c+6473,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_result", false,-1, 159,0);
        vcdp->declBus(c+6513,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_special_result", false,-1, 31,0);
        vcdp->declBus(c+6521,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_special_status", false,-1, 4,0);
        vcdp->declBit(c+6529,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_result_is_special", false,-1);
        vcdp->declArray(c+6537,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_special_result", false,-1, 159,0);
        vcdp->declBus(c+6577,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_special_result", false,-1, 31,0);
        vcdp->declBus(c+11809,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_special_status", false,-1, 4,0);
        vcdp->declBit(c+6585,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_result_is_special", false,-1);
        vcdp->declArray(c+6593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_special_result", false,-1, 127,0);
        vcdp->declBus(c+6625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_regular_status", false,-1, 4,0);
        vcdp->declBus(c+6633,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_regular_status", false,-1, 4,0);
        vcdp->declBus(c+6641,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_result", false,-1, 31,0);
        vcdp->declBus(c+6649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_result", false,-1, 31,0);
        vcdp->declBus(c+6657,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_status", false,-1, 4,0);
        vcdp->declBus(c+6665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_status", false,-1, 4,0);
        vcdp->declBus(c+5897,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_d", false,-1, 31,0);
        vcdp->declBus(c+5905,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi status_d", false,-1, 4,0);
        vcdp->declBit(c+5649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi extension_bit", false,-1);
        vcdp->declBus(c+5897,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+5905,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+5649,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_ext_bit_q", false,-1, 0,0);
        vcdp->declBus(c+10377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+5673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5625,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10945,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10945,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10945,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11825,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] QNAN_EXPONENT", false,-1, 7,0);
        vcdp->declBus(c+11833,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] QNAN_MANTISSA", false,-1, 22,0);
        vcdp->declBus(c+6673,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] active_format special_results special_res", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11841,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] QNAN_EXPONENT", false,-1, 10,0);
        vcdp->declQuad(c+11849,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] QNAN_MANTISSA", false,-1, 51,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10945,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11865,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] QNAN_EXPONENT", false,-1, 4,0);
        vcdp->declBus(c+11873,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] QNAN_MANTISSA", false,-1, 9,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11865,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] QNAN_EXPONENT", false,-1, 4,0);
        vcdp->declBus(c+11881,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] QNAN_MANTISSA", false,-1, 1,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11825,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] QNAN_EXPONENT", false,-1, 7,0);
        vcdp->declBus(c+11889,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] QNAN_MANTISSA", false,-1, 6,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10609,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+6681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[2] active_format special_results special_res", false,-1, 31,0);
        vcdp->declBus(c+10601,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10633,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc MODE", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5945,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc in_i", false,-1, 31,0);
        vcdp->declBus(c+6169,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc cnt_o", false,-1, 4,0);
        vcdp->declBit(c+6145,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc empty_o", false,-1);
        vcdp->declBus(c+10321,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+377,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc index_lut", false,-1, 159,0);
        vcdp->declBus(c+6689,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc sel_nodes", false,-1, 31,0);
        vcdp->declArray(c+6697,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc index_nodes", false,-1, 159,0);
        vcdp->declBus(c+6737,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc in_tmp", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding AbsWidth", false,-1, 31,0);
        vcdp->declBus(c+6329,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding abs_value_i", false,-1, 31,0);
        vcdp->declBit(c+6121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding sign_i", false,-1);
        vcdp->declBus(c+6305,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding round_sticky_bits_i", false,-1, 1,0);
        vcdp->declBus(c+10225,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding rnd_mode_i", false,-1, 2,0);
        vcdp->declBit(c+10681,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding effective_subtraction_i", false,-1);
        vcdp->declBus(c+6441,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding abs_rounded_o", false,-1, 31,0);
        vcdp->declBit(c+6121,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding sign_o", false,-1);
        vcdp->declBit(c+6449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding exact_zero_o", false,-1);
        vcdp->declBus(c+449,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding op_i", false,-1, 3,0);
        vcdp->declBit(c+10305,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding round_up", false,-1);
        vcdp->declBus(c+11897,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10665,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier NumOperands", false,-1, 31,0);
        vcdp->declBus(c+10593,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5929,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier operands_i", false,-1, 31,0);
        vcdp->declBus(c+6745,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier is_boxed_i", false,-1, 0,0);
        vcdp->declBus(c+6753,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier info_o", false,-1, 7,0);
        vcdp->declBus(c+10617,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10913,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+6761,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+6769,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+6777,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+6785,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+6793,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+6801,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+6809,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+6817,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+6825,"fp_wrapper fpnewtop gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+10321,"fpnew_pkg NUM_FP_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_pkg FP_FORMAT_BITS", false,-1, 31,0);
        vcdp->declArray(c+11905,"fpnew_pkg FP_ENCODINGS", false,-1, 319,0);
        vcdp->declBus(c+11985,"fpnew_pkg CPK_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10337,"fpnew_pkg NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_pkg INT_FORMAT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_pkg NUM_OPGROUPS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_pkg OP_BITS", false,-1, 31,0);
        vcdp->declQuad(c+11993,"fpnew_pkg RV64D", false,-1, 42,0);
        vcdp->declQuad(c+12009,"fpnew_pkg RV32D", false,-1, 42,0);
        vcdp->declQuad(c+12025,"fpnew_pkg RV32F", false,-1, 42,0);
        vcdp->declQuad(c+12041,"fpnew_pkg RV64D_Xsflt", false,-1, 42,0);
        vcdp->declQuad(c+12057,"fpnew_pkg RV32F_Xsflt", false,-1, 42,0);
        vcdp->declQuad(c+12073,"fpnew_pkg RV32F_Xf16alt_Xfvec", false,-1, 42,0);
        vcdp->declArray(c+12089,"fpnew_pkg DEFAULT_NOREGS", false,-1, 681,0);
        vcdp->declArray(c+12265,"fpnew_pkg DEFAULT_SNITCH", false,-1, 681,0);
        vcdp->declBit(c+10857,"fpnew_pkg DONT_CARE", false,-1);
        vcdp->declBus(c+12441,"defs_div_sqrt_mvp C_RM", false,-1, 31,0);
        vcdp->declBus(c+10761,"defs_div_sqrt_mvp C_RM_NEAREST", false,-1, 2,0);
        vcdp->declBus(c+12449,"defs_div_sqrt_mvp C_RM_TRUNC", false,-1, 2,0);
        vcdp->declBus(c+12457,"defs_div_sqrt_mvp C_RM_PLUSINF", false,-1, 2,0);
        vcdp->declBus(c+12465,"defs_div_sqrt_mvp C_RM_MINUSINF", false,-1, 2,0);
        vcdp->declBus(c+12473,"defs_div_sqrt_mvp C_PC", false,-1, 31,0);
        vcdp->declBus(c+12481,"defs_div_sqrt_mvp C_FS", false,-1, 31,0);
        vcdp->declBus(c+12481,"defs_div_sqrt_mvp C_IUNC", false,-1, 31,0);
        vcdp->declBus(c+11881,"defs_div_sqrt_mvp Iteration_unit_num_S", false,-1, 1,0);
        vcdp->declBus(c+12489,"defs_div_sqrt_mvp C_OP_FP64", false,-1, 31,0);
        vcdp->declBus(c+12497,"defs_div_sqrt_mvp C_MANT_FP64", false,-1, 31,0);
        vcdp->declBus(c+12505,"defs_div_sqrt_mvp C_EXP_FP64", false,-1, 31,0);
        vcdp->declBus(c+12513,"defs_div_sqrt_mvp C_BIAS_FP64", false,-1, 31,0);
        vcdp->declBus(c+12521,"defs_div_sqrt_mvp C_BIAS_AONE_FP64", false,-1, 10,0);
        vcdp->declBus(c+12529,"defs_div_sqrt_mvp C_HALF_BIAS_FP64", false,-1, 31,0);
        vcdp->declBus(c+12537,"defs_div_sqrt_mvp C_EXP_ZERO_FP64", false,-1, 10,0);
        vcdp->declBus(c+12545,"defs_div_sqrt_mvp C_EXP_ONE_FP64", false,-1, 12,0);
        vcdp->declBus(c+11841,"defs_div_sqrt_mvp C_EXP_INF_FP64", false,-1, 10,0);
        vcdp->declQuad(c+12553,"defs_div_sqrt_mvp C_MANT_ZERO_FP64", false,-1, 51,0);
        vcdp->declQuad(c+11849,"defs_div_sqrt_mvp C_MANT_NAN_FP64", false,-1, 51,0);
        vcdp->declQuad(c+12569,"defs_div_sqrt_mvp C_PZERO_FP64", false,-1, 63,0);
        vcdp->declQuad(c+12585,"defs_div_sqrt_mvp C_MZERO_FP64", false,-1, 63,0);
        vcdp->declQuad(c+12601,"defs_div_sqrt_mvp C_QNAN_FP64", false,-1, 63,0);
        vcdp->declBus(c+10313,"defs_div_sqrt_mvp C_OP_FP32", false,-1, 31,0);
        vcdp->declBus(c+12617,"defs_div_sqrt_mvp C_MANT_FP32", false,-1, 31,0);
        vcdp->declBus(c+12625,"defs_div_sqrt_mvp C_EXP_FP32", false,-1, 31,0);
        vcdp->declBus(c+12633,"defs_div_sqrt_mvp C_BIAS_FP32", false,-1, 31,0);
        vcdp->declBus(c+12641,"defs_div_sqrt_mvp C_BIAS_AONE_FP32", false,-1, 7,0);
        vcdp->declBus(c+12649,"defs_div_sqrt_mvp C_HALF_BIAS_FP32", false,-1, 31,0);
        vcdp->declBus(c+12657,"defs_div_sqrt_mvp C_EXP_ZERO_FP32", false,-1, 7,0);
        vcdp->declBus(c+11825,"defs_div_sqrt_mvp C_EXP_INF_FP32", false,-1, 7,0);
        vcdp->declBus(c+12665,"defs_div_sqrt_mvp C_MANT_ZERO_FP32", false,-1, 22,0);
        vcdp->declBus(c+10953,"defs_div_sqrt_mvp C_PZERO_FP32", false,-1, 31,0);
        vcdp->declBus(c+12673,"defs_div_sqrt_mvp C_MZERO_FP32", false,-1, 31,0);
        vcdp->declBus(c+12681,"defs_div_sqrt_mvp C_QNAN_FP32", false,-1, 31,0);
        vcdp->declBus(c+12689,"defs_div_sqrt_mvp C_OP_FP16", false,-1, 31,0);
        vcdp->declBus(c+12697,"defs_div_sqrt_mvp C_MANT_FP16", false,-1, 31,0);
        vcdp->declBus(c+12705,"defs_div_sqrt_mvp C_EXP_FP16", false,-1, 31,0);
        vcdp->declBus(c+12713,"defs_div_sqrt_mvp C_BIAS_FP16", false,-1, 31,0);
        vcdp->declBus(c+11809,"defs_div_sqrt_mvp C_BIAS_AONE_FP16", false,-1, 4,0);
        vcdp->declBus(c+12721,"defs_div_sqrt_mvp C_HALF_BIAS_FP16", false,-1, 31,0);
        vcdp->declBus(c+11113,"defs_div_sqrt_mvp C_EXP_ZERO_FP16", false,-1, 4,0);
        vcdp->declBus(c+11865,"defs_div_sqrt_mvp C_EXP_INF_FP16", false,-1, 4,0);
        vcdp->declBus(c+12729,"defs_div_sqrt_mvp C_MANT_ZERO_FP16", false,-1, 9,0);
        vcdp->declBus(c+12737,"defs_div_sqrt_mvp C_PZERO_FP16", false,-1, 15,0);
        vcdp->declBus(c+12745,"defs_div_sqrt_mvp C_MZERO_FP16", false,-1, 15,0);
        vcdp->declBus(c+12753,"defs_div_sqrt_mvp C_QNAN_FP16", false,-1, 15,0);
        vcdp->declBus(c+12689,"defs_div_sqrt_mvp C_OP_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12721,"defs_div_sqrt_mvp C_MANT_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12625,"defs_div_sqrt_mvp C_EXP_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12633,"defs_div_sqrt_mvp C_BIAS_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12641,"defs_div_sqrt_mvp C_BIAS_AONE_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+12649,"defs_div_sqrt_mvp C_HALF_BIAS_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12657,"defs_div_sqrt_mvp C_EXP_ZERO_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+11825,"defs_div_sqrt_mvp C_EXP_INF_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+12761,"defs_div_sqrt_mvp C_MANT_ZERO_FP16ALT", false,-1, 6,0);
        vcdp->declBus(c+12769,"defs_div_sqrt_mvp C_QNAN_FP16ALT", false,-1, 15,0);
    }
}

void Vfp_wrapper::traceFullThis__1(Vfp_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfp_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp841[3];
    WData/*95:0*/ __Vtemp842[3];
    WData/*95:0*/ __Vtemp843[3];
    WData/*95:0*/ __Vtemp847[3];
    WData/*127:0*/ __Vtemp849[4];
    WData/*127:0*/ __Vtemp850[4];
    WData/*127:0*/ __Vtemp853[4];
    WData/*127:0*/ __Vtemp854[4];
    WData/*703:0*/ __Vtemp856[22];
    WData/*159:0*/ __Vtemp857[5];
    WData/*159:0*/ __Vtemp858[5];
    WData/*159:0*/ __Vtemp859[5];
    WData/*159:0*/ __Vtemp860[5];
    WData/*703:0*/ __Vtemp862[22];
    WData/*703:0*/ __Vtemp863[22];
    WData/*319:0*/ __Vtemp861[10];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->fullBus(c+9,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->fullBus(c+17,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+25,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+33,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->fullArray(c+41,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),306);
        vcdp->fullBus(c+121,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+129,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullArray(c+137,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->fullArray(c+169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->fullArray(c+249,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->fullBus(c+329,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+337,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+345,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+353,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullQuad(c+361,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation),45);
        vcdp->fullArray(c+377,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),160);
        vcdp->fullBit(c+417,(vlTOPp->fp_wrapper__DOT__fregwrite));
        vcdp->fullArray(c+425,(vlTOPp->fp_wrapper__DOT__foperand),96);
        vcdp->fullBus(c+449,(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o),4);
        vcdp->fullBit(c+457,(vlTOPp->fp_wrapper__DOT__op_mod));
        vcdp->fullBus(c+465,(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o),3);
        vcdp->fullBit(c+473,(vlTOPp->fp_wrapper__DOT__fpdecoder__DOT__fp_invalid_rm));
        vcdp->fullBit(c+481,(vlTOPp->fp_wrapper__DOT__fpdecoder__DOT__illegal_insn));
        vcdp->fullBit(c+489,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpdecoder__DOT__opcode))));
        vcdp->fullBus(c+497,(vlTOPp->fp_wrapper__DOT__fpdecoder__DOT__opcode),7);
        vcdp->fullBus(c+505,(vlTOPp->fp_wrapper__DOT__fpregister__DOT__we),32);
        vcdp->fullBus(c+513,((0x1fU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 1U)))),5);
        vcdp->fullBit(c+521,((1U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBus(c+529,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_in_ready),4);
        vcdp->fullBus(c+537,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_valid),4);
        vcdp->fullBus(c+545,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready),4);
        vcdp->fullBus(c+553,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_ext),4);
        vcdp->fullBus(c+561,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_busy),4);
        vcdp->fullArray(c+569,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_outputs),152);
        vcdp->fullBus(c+609,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__is_boxed),15);
        vcdp->fullQuad(c+617,((VL_ULL(0x3fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),38);
        vcdp->fullBit(c+633,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        vcdp->fullBus(c+641,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed),15);
        vcdp->fullBit(c+649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid));
        vcdp->fullBus(c+657,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__input_boxed),10);
        vcdp->fullBit(c+665,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
        vcdp->fullBus(c+673,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed),10);
        vcdp->fullBit(c+681,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
        vcdp->fullBus(c+689,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__input_boxed),15);
        vcdp->fullBus(c+697,((3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
        vcdp->fullBus(c+705,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
        vcdp->fullArray(c+713,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),114);
        vcdp->fullBus(c+745,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
        vcdp->fullBus(c+753,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
        vcdp->fullBus(c+761,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),4);
        vcdp->fullBus(c+769,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),4);
        vcdp->fullBus(c+777,((3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->fullBus(c+785,((3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->fullBus(c+793,((3U & ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
        vcdp->fullBit(c+801,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+809,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+817,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+825,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+833,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->fullBus(c+841,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->fullBus(c+849,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->fullBit(c+857,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+865,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->fullBus(c+873,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->fullBus(c+881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->fullBit(c+889,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                              & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready))));
        vcdp->fullBus(c+897,(((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                               << 0x19U) | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 7U))),32);
        vcdp->fullBus(c+905,((0x1fU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 2U)))),5);
        vcdp->fullBit(c+913,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 1U))));
        vcdp->fullBit(c+921,((1U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+929,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+937,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready))));
        vcdp->fullBit(c+945,((0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+953,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+961,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+969,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+977,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+985,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+1041,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBus(c+1057,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+1065,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+1073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+1145,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+1153,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+1161,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+1169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+1177,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+1185,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+1193,((7U & ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+1201,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+1209,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1217,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1225,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+1233,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1241,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+1249,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+1257,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+1265,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+1273,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+1281,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+1289,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+1297,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBus(c+1305,((7U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed))),3);
        vcdp->fullBit(c+1313,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+1321,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->fullBit(c+1329,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        vcdp->fullBus(c+1337,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid)
                                ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                    ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                    : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))
                                : 0U)),5);
        vcdp->fullArray(c+1345,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->fullBus(c+1369,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))),5);
        vcdp->fullBus(c+1377,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+1385,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o),24);
        vcdp->fullBus(c+1393,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
        vcdp->fullBus(c+1401,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
        vcdp->fullBus(c+1409,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
        vcdp->fullBus(c+1417,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
        vcdp->fullBus(c+1425,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
        vcdp->fullBus(c+1433,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
        vcdp->fullBit(c+1441,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
        vcdp->fullBit(c+1449,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
        vcdp->fullBit(c+1457,((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                      | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                         | (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                     >> 2U))));
        vcdp->fullBit(c+1465,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
        vcdp->fullBit(c+1473,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
        vcdp->fullBus(c+1481,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
        vcdp->fullBus(c+1489,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
        vcdp->fullBit(c+1497,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
        vcdp->fullBus(c+1505,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1513,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1521,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1529,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
        vcdp->fullBus(c+1537,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
        vcdp->fullBus(c+1545,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
        vcdp->fullBus(c+1553,((VL_LTS_III(1,32,32, 0U, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
        vcdp->fullBus(c+1561,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
        vcdp->fullBus(c+1569,(((0x800000U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                             << 0x10U)) 
                               | (0x7fffffU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
        vcdp->fullBus(c+1577,(((0x800000U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                             << 0x10U)) 
                               | (0x7fffffU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
        vcdp->fullBus(c+1585,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
        vcdp->fullQuad(c+1593,((VL_ULL(0xffffffffffff) 
                                & ((QData)((IData)(
                                                   ((0x800000U 
                                                     & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                        << 0x10U)) 
                                                    | (0x7fffffU 
                                                       & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                   * (QData)((IData)(
                                                     ((0x800000U 
                                                       & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                          << 0x10U)) 
                                                      | (0x7fffffU 
                                                         & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))))))),48);
        VL_EXTEND_WQ(76,48, __Vtemp841, (VL_ULL(0xffffffffffff) 
                                         & ((QData)((IData)(
                                                            ((0x800000U 
                                                              & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                 << 0x10U)) 
                                                             | (0x7fffffU 
                                                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                            * (QData)((IData)(
                                                              ((0x800000U 
                                                                & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                   << 0x10U)) 
                                                               | (0x7fffffU 
                                                                  & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)))))));
        VL_SHIFTL_WWI(76,76,32, __Vtemp842, __Vtemp841, 2U);
        __Vtemp843[0U] = __Vtemp842[0U];
        __Vtemp843[1U] = __Vtemp842[1U];
        __Vtemp843[2U] = (0xfffU & __Vtemp842[2U]);
        vcdp->fullArray(c+1609,(__Vtemp843),76);
        vcdp->fullArray(c+1633,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
        vcdp->fullBus(c+1657,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
        vcdp->fullBit(c+1665,((0U != vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
        __Vtemp847[0U] = ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                           ? (~ vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U])
                           : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
        __Vtemp847[1U] = ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                           ? (~ vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U])
                           : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
        __Vtemp847[2U] = (0xfffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                                     ? (~ vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U])
                                     : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
        vcdp->fullArray(c+1673,(__Vtemp847),76);
        vcdp->fullBit(c+1697,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                               & (~ (IData)((0U != vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
        vcdp->fullArray(c+1705,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
        vcdp->fullBit(c+1729,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                     >> 0xcU))));
        vcdp->fullArray(c+1737,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
        vcdp->fullBit(c+1761,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
        vcdp->fullQuad(c+1769,((VL_ULL(0x7ffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
        vcdp->fullBus(c+1785,((0x3fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+1793,((0x3fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),7);
        vcdp->fullBit(c+1801,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+1809,((0x7fU & ((VL_GTES_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference))) 
                                         | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                            & VL_GTES_III(1,32,32, 2U, 
                                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))))
                                         ? ((VL_LTES_III(1,32,32, 0U, 
                                                         ((IData)(1U) 
                                                          + 
                                                          (VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product)) 
                                                           - 
                                                           VL_EXTENDS_II(32,7, 
                                                                         (0x3fU 
                                                                          & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
                                             & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                             ? ((IData)(0x1aU) 
                                                + (0x3fU 
                                                   & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             : ((IData)(0x1aU) 
                                                + VL_EXTENDS_II(7,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))))
                                         : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt)))),7);
        vcdp->fullBus(c+1817,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__normalized_exponent),10);
        vcdp->fullArray(c+1825,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_shifted),77);
        vcdp->fullBus(c+1849,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa),25);
        vcdp->fullQuad(c+1857,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits),51);
        vcdp->fullBit(c+1873,(((0U != vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits) 
                               | (0U != vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))));
        vcdp->fullBus(c+1881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent),10);
        vcdp->fullBus(c+1889,((VL_LTES_III(1,32,32, 0xffU, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))
                                ? 0xfeU : (0xffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))),8);
        vcdp->fullBus(c+1897,((VL_LTES_III(1,32,32, 0xffU, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))
                                ? 0x7fffffU : (0x7fffffU 
                                               & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa 
                                                  >> 1U)))),23);
        vcdp->fullBus(c+1905,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs),31);
        vcdp->fullBus(c+1913,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits),2);
        vcdp->fullBit(c+1921,(VL_LTES_III(1,32,32, 0xffU, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))));
        vcdp->fullBit(c+1929,((0xffU == (0xffU & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                                  >> 0x17U)))));
        vcdp->fullBit(c+1937,((0U == VL_EXTENDS_II(32,10, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))));
        vcdp->fullBit(c+1945,((0U == (0xffU & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                               >> 0x17U)))));
        vcdp->fullBit(c+1953,(((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                               & (0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)))));
        vcdp->fullBus(c+1961,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs),31);
        vcdp->fullBus(c+1969,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status),5);
        vcdp->fullBus(c+1977,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+1985,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+1993,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+2001,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+2009,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+2017,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+2025,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+2033,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+2041,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+2049,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->fullBit(c+2057,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->fullBit(c+2065,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->fullBit(c+2073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->fullBit(c+2081,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->fullBit(c+2089,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->fullBit(c+2097,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->fullBit(c+2105,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->fullBit(c+2113,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->fullBus(c+2121,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value),32);
        vcdp->fullBit(c+2129,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed));
        vcdp->fullBit(c+2137,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal));
        vcdp->fullBit(c+2145,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf));
        vcdp->fullBit(c+2153,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan));
        vcdp->fullBit(c+2161,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling));
        vcdp->fullBit(c+2169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet));
        vcdp->fullBit(c+2177,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero));
        vcdp->fullBit(c+2185,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal));
        vcdp->fullQuad(c+2193,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+2209,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+2305,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
        vcdp->fullQuad(c+2321,((((QData)((IData)(vlTOPp->fp_wrapper__DOT__foperand[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fp_wrapper__DOT__foperand[0U])))),64);
        vcdp->fullBit(c+2337,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                               & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready))));
        vcdp->fullBus(c+2345,(((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+2353,((0x1fU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+2361,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+2369,((1U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+2377,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+2385,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                     >> 1U))));
        vcdp->fullBit(c+2393,((0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+2401,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+2409,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+2417,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+2425,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullQuad(c+2433,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBus(c+2449,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+2457,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+2465,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+2537,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+2545,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+2553,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+2561,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+2569,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+2577,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+2585,((7U & ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+2593,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+2601,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+2609,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+2617,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+2625,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+2633,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+2641,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+2649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+2657,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+2665,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+2673,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+2681,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+2689,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+2697,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready));
        vcdp->fullBus(c+2705,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->fullBit(c+2713,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid));
        vcdp->fullBit(c+2721,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBit(c+2729,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                               | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy) 
                                  | (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)))));
        vcdp->fullBit(c+2737,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->fullBit(c+2745,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->fullArray(c+2753,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->fullBus(c+2793,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->fullBus(c+2801,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->fullQuad(c+2809,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->fullBus(c+2825,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullArray(c+2833,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands),128);
        vcdp->fullBit(c+2865,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid));
        vcdp->fullBit(c+2873,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
        vcdp->fullBit(c+2881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting));
        vcdp->fullBit(c+2889,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result));
        vcdp->fullBit(c+2897,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held));
        vcdp->fullBit(c+2905,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy));
        vcdp->fullBus(c+2913,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d),2);
        vcdp->fullQuad(c+2921,((((QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))),64);
        vcdp->fullQuad(c+2937,((((QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))),64);
        vcdp->fullBit(c+2953,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S));
        vcdp->fullBit(c+2961,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB));
        vcdp->fullBit(c+2969,((0U != (0xffU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                                << 9U) 
                                               | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                  >> 0x17U))))));
        vcdp->fullBit(c+2977,((0U != (0xffU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                << 9U) 
                                               | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                  >> 0x17U))))));
        vcdp->fullBus(c+2985,((0xffU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                         << 9U) | (
                                                   vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                   >> 0x17U)))),11);
        vcdp->fullBus(c+2993,((0xffU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                         << 9U) | (
                                                   vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                   >> 0x17U)))),11);
        vcdp->fullQuad(c+3001,(((QData)((IData)((0x7fffffU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                << 0x1dU)),52);
        vcdp->fullQuad(c+3017,(((QData)((IData)((0x7fffffU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                << 0x1dU)),52);
        vcdp->fullQuad(c+3033,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D),53);
        vcdp->fullQuad(c+3049,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D),53);
        vcdp->fullBit(c+3065,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                     >> 0x1fU))));
        vcdp->fullBit(c+3073,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                     >> 0x1fU))));
        vcdp->fullBit(c+3081,((0U == (0x7fffffU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))));
        vcdp->fullBit(c+3089,((0U == (0x7fffffU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))));
        vcdp->fullBit(c+3097,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                                     << 9U) 
                                                    | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                       >> 0x17U)))))))));
        vcdp->fullBit(c+3105,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                     << 9U) 
                                                    | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                       >> 0x17U)))))))));
        vcdp->fullBit(c+3113,((0xffU == (0xffU & ((
                                                   vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                                   << 9U) 
                                                  | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                     >> 0x17U))))));
        vcdp->fullBit(c+3121,((0xffU == (0xffU & ((
                                                   vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                   << 9U) 
                                                  | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                     >> 0x17U))))));
        vcdp->fullBit(c+3129,((1U & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                      >> 0x16U) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3fffffU 
                                                               & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))))))));
        vcdp->fullBit(c+3137,(((~ (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                   >> 0x16U)) & (0U 
                                                 != 
                                                 (0x3fffffU 
                                                  & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))));
        vcdp->fullBit(c+3145,((1U & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                      >> 0x16U) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3fffffU 
                                                               & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))))))));
        vcdp->fullBit(c+3153,(((~ (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                   >> 0x16U)) & (0U 
                                                 != 
                                                 (0x3fffffU 
                                                  & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))));
        vcdp->fullBit(c+3161,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN));
        vcdp->fullBit(c+3169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN));
        vcdp->fullBit(c+3177,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN));
        vcdp->fullBit(c+3185,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN));
        vcdp->fullBit(c+3193,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN));
        vcdp->fullBit(c+3201,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN));
        vcdp->fullBus(c+3209,((0x3fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+3217,((0x3fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBit(c+3225,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+3233,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullQuad(c+3241,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+3257,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+3353,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->fullQuad(c+3369,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+3385,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+3481,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->fullBit(c+3497,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        vcdp->fullBus(c+3505,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U))),2);
        vcdp->fullBus(c+3513,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_0),3);
        vcdp->fullBus(c+3521,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_1),5);
        vcdp->fullBus(c+3529,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_2),8);
        vcdp->fullBus(c+3537,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_3),11);
        vcdp->fullBus(c+3545,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_4),14);
        vcdp->fullBus(c+3553,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_5),17);
        vcdp->fullBus(c+3561,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_6),20);
        vcdp->fullBus(c+3569,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_7),23);
        vcdp->fullBus(c+3577,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_8),26);
        vcdp->fullBus(c+3585,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_9),29);
        vcdp->fullBus(c+3593,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_10),32);
        vcdp->fullQuad(c+3601,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_11),35);
        vcdp->fullQuad(c+3617,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_12),38);
        vcdp->fullQuad(c+3633,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_13),41);
        vcdp->fullQuad(c+3649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_14),44);
        vcdp->fullQuad(c+3665,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_15),47);
        vcdp->fullQuad(c+3681,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_16),50);
        vcdp->fullQuad(c+3697,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_17),53);
        vcdp->fullQuad(c+3713,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_18),56);
        vcdp->fullBus(c+3729,(((4U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)) | (3U 
                                                 & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                    >> 1U)))),4);
        vcdp->fullQuad(c+3737,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q0),58);
        vcdp->fullQuad(c+3753,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0),58);
        vcdp->fullQuad(c+3769,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0),58);
        vcdp->fullQuad(c+3785,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q1),58);
        vcdp->fullQuad(c+3801,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1),58);
        vcdp->fullQuad(c+3817,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1),58);
        vcdp->fullQuad(c+3833,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q2),58);
        vcdp->fullQuad(c+3849,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2),58);
        vcdp->fullQuad(c+3865,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2),58);
        vcdp->fullQuad(c+3881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[0]),58);
        vcdp->fullQuad(c+3883,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[1]),58);
        vcdp->fullQuad(c+3885,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[2]),58);
        vcdp->fullQuad(c+3887,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[3]),58);
        vcdp->fullQuad(c+3945,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[0]),58);
        vcdp->fullQuad(c+3947,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[1]),58);
        vcdp->fullQuad(c+3949,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[2]),58);
        vcdp->fullQuad(c+3951,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[3]),58);
        vcdp->fullQuad(c+4009,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[0]),58);
        vcdp->fullQuad(c+4011,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[1]),58);
        vcdp->fullQuad(c+4013,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[2]),58);
        vcdp->fullQuad(c+4015,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[3]),58);
        vcdp->fullBit(c+4073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[0]));
        vcdp->fullBit(c+4074,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[1]));
        vcdp->fullBit(c+4075,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[2]));
        vcdp->fullBit(c+4076,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[3]));
        vcdp->fullQuad(c+4105,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[0]),58);
        vcdp->fullQuad(c+4107,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[1]),58);
        vcdp->fullQuad(c+4109,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[2]),58);
        vcdp->fullQuad(c+4111,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[3]),58);
        vcdp->fullQuad(c+4169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[0]),58);
        vcdp->fullQuad(c+4171,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[1]),58);
        vcdp->fullQuad(c+4173,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[2]),58);
        vcdp->fullQuad(c+4175,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[3]),58);
        vcdp->fullBus(c+4233,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S),4);
        vcdp->fullBit(c+4241,((1U & (~ (IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [0U] 
                                                >> 0x39U))))));
        vcdp->fullBit(c+4249,((1U & (~ (IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [1U] 
                                                >> 0x39U))))));
        vcdp->fullQuad(c+4257,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [0U]),58);
        vcdp->fullQuad(c+4273,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [0U]),58);
        vcdp->fullQuad(c+4289,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [1U]),58);
        vcdp->fullQuad(c+4305,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [1U]),58);
        vcdp->fullQuad(c+4321,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [2U]),58);
        vcdp->fullQuad(c+4337,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [2U]),58);
        vcdp->fullQuad(c+4353,((((QData)((IData)(vlTOPp->fp_wrapper__DOT__foperand[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fp_wrapper__DOT__foperand[0U])))),64);
        vcdp->fullBit(c+4369,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                               & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready))));
        vcdp->fullBus(c+4377,(((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+4385,((0x1fU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+4393,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+4401,((1U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+4409,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+4417,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                     >> 2U))));
        vcdp->fullBit(c+4425,((0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+4433,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+4441,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+4449,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+4457,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+4465,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+4521,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBus(c+4537,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+4545,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+4553,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+4625,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+4633,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+4641,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+4649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+4657,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+4665,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+4673,((7U & ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+4681,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+4689,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4697,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4705,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+4713,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4721,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+4729,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+4737,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4745,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+4753,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+4761,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+4769,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4777,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBus(c+4785,((3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed))),2);
        vcdp->fullBit(c+4793,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+4801,(((9U == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d)
                                : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid)
                                    ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                    : VL_NEGATE_I((IData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d)))))),32);
        vcdp->fullBus(c+4809,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->fullBit(c+4817,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d));
        vcdp->fullBit(c+4825,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
        vcdp->fullBus(c+4833,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid)
                                ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                : VL_NEGATE_I((IData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d))))),32);
        vcdp->fullBus(c+4841,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),32);
        vcdp->fullBus(c+4849,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->fullBus(c+4857,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid)
                                ? ((8U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                    ? ((4U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                        ? 0x1fU : (
                                                   (2U 
                                                    & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                                    ? 0x1fU
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                                     ? 0U
                                                     : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                    : ((4U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                        ? ((2U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                            ? ((1U 
                                                & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                                ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                : 0U)
                                            : 0x1fU)
                                        : 0x1fU)) : 0U)),5);
        vcdp->fullBus(c+4865,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),10);
        vcdp->fullBit(c+4873,((9U == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))));
        vcdp->fullBit(c+4881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign));
        vcdp->fullQuad(c+4889,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->fullBus(c+4905,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
        vcdp->fullBus(c+4913,(((8U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                ? ((4U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                    ? 0x1fU : ((2U 
                                                & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                                ? 0x1fU
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                                    ? 0U
                                                    : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                : ((4U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                    ? ((2U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                        ? ((1U & (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                            ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                            : 0U) : 0x1fU)
                                    : 0x1fU))),5);
        vcdp->fullBus(c+4921,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+4929,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o),16);
        vcdp->fullBus(c+4937,((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)),32);
        vcdp->fullBus(c+4945,((IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                       >> 0x20U))),32);
        vcdp->fullBus(c+4953,((0xffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))),8);
        vcdp->fullBus(c+4961,((0xffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                        >> 8U))),8);
        vcdp->fullBit(c+4969,((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                      >> 4U) | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                >> 0xcU)))));
        vcdp->fullBit(c+4977,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__any_operand_nan));
        vcdp->fullBit(c+4985,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__signalling_nan));
        vcdp->fullBit(c+4993,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operands_equal));
        vcdp->fullBit(c+5001,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller));
        vcdp->fullBus(c+5009,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result),32);
        vcdp->fullBit(c+5017,((1U & ((~ (IData)(vlTOPp->fp_wrapper__DOT__op_mod)) 
                                     | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                        >> 0x1fU)))));
        vcdp->fullBus(c+5025,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status),5);
        vcdp->fullBus(c+5033,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
        vcdp->fullBus(c+5041,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status),5);
        vcdp->fullBit(c+5049,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_a));
        vcdp->fullBit(c+5057,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_b));
        vcdp->fullBus(c+5065,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+5073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+5081,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+5089,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+5097,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+5105,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+5113,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+5121,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+5129,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+5137,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->fullBit(c+5145,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->fullBit(c+5153,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->fullBit(c+5161,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->fullBit(c+5169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->fullBit(c+5177,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->fullBit(c+5185,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->fullBit(c+5193,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->fullBit(c+5201,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->fullBit(c+5209,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                               & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready))));
        vcdp->fullBus(c+5217,(((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+5225,((0x1fU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+5233,((1U & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+5241,((1U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+5249,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+5257,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                     >> 3U))));
        vcdp->fullBit(c+5265,((0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+5273,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+5281,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+5289,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+5297,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+5305,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+5361,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBus(c+5377,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+5385,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+5393,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+5465,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+5473,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+5481,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+5489,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+5497,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+5505,((7U & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+5513,((7U & ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+5521,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+5529,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+5537,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+5545,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+5553,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+5561,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+5569,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+5577,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+5585,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+5593,((1U & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+5601,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+5609,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+5617,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+5625,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+5633,(((0x10U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))
                                ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                               (3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                : ((0x9fU >= (0xe0U 
                                              & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                                 << 5U)))
                                    ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                   (7U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                    : 0U))),32);
        vcdp->fullBus(c+5641,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->fullBit(c+5649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__extension_bit));
        vcdp->fullBit(c+5657,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
        vcdp->fullBus(c+5665,(((0xbU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                ? (IData)(vlTOPp->fp_wrapper__DOT__int_fmt_i)
                                : 0U)),3);
        vcdp->fullBus(c+5673,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data),5);
        vcdp->fullBit(c+5681,((0xbU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))));
        vcdp->fullBit(c+5689,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->fullBus(c+5697,((1U & (((0xeU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)) 
                                      << 1U) | (IData)(vlTOPp->fp_wrapper__DOT__op_mod)))),2);
        vcdp->fullBus(c+5705,(((2U & (((0xeU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)) 
                                       << 2U) | ((IData)(vlTOPp->fp_wrapper__DOT__op_mod) 
                                                 << 1U))) 
                               | (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk))),3);
        vcdp->fullBit(c+5713,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->fullBit(c+5721,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->fullArray(c+5729,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->fullArray(c+5769,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->fullBus(c+5801,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk)
                                ? vlTOPp->fp_wrapper__DOT__foperand[2U]
                                : vlTOPp->fp_wrapper__DOT__foperand[1U])),32);
        vcdp->fullBus(c+5809,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid)
                                ? ((0xbU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                    ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                        ? 0x10U : (0U 
                                                   != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                    : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                        ? (0x10U & 
                                           ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                            << 2U))
                                        : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                                : 0U)),5);
        vcdp->fullBit(c+5817,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                     >> 3U))));
        vcdp->fullBus(c+5825,((7U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))),3);
        vcdp->fullBit(c+5833,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                     >> 4U))));
        vcdp->fullBus(c+5841,((1U & (((0xeU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)) 
                                      << 1U) | (IData)(vlTOPp->fp_wrapper__DOT__op_mod)))),2);
        vcdp->fullBus(c+5849,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->fullBus(c+5857,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->fullBus(c+5865,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result),32);
        vcdp->fullArray(c+5873,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->fullBus(c+5897,(((0xbU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                                : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                    ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[0U]
                                    : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U]))),32);
        vcdp->fullBus(c+5905,(((0xbU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))
                                ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                    ? 0x10U : (0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                    ? (0x10U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                << 2U))
                                    : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        vcdp->fullBit(c+5913,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready) 
                                     & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                        >> 3U)))));
        vcdp->fullBus(c+5921,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+5929,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]),32);
        vcdp->fullBit(c+5937,((0xcU == (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o))));
        vcdp->fullBus(c+5945,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),32);
        vcdp->fullBus(c+5953,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
        vcdp->fullQuad(c+5961,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),45);
        vcdp->fullArray(c+5977,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),160);
        vcdp->fullQuad(c+6017,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
        vcdp->fullArray(c+6033,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),128);
        vcdp->fullBit(c+6065,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
        vcdp->fullBus(c+6073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value),32);
        vcdp->fullBus(c+6081,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign)
                                ? VL_NEGATE_I(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)
                                : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)),32);
        vcdp->fullBus(c+6089,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias),9);
        vcdp->fullBus(c+6097,(((0x2cU >= (0x3fU & ((IData)(9U) 
                                                   * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o))))
                                ? (0x1ffU & (IData)(
                                                    (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o))))))
                                : 0U)),9);
        vcdp->fullBus(c+6105,((0x1ffU & VL_EXTENDS_II(9,2, 
                                                      ((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(6U) 
                                                            + 
                                                            ((IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o) 
                                                             << 3U)))) 
                                                       & (IData)(
                                                                 (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      ((IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o) 
                                                                       << 3U))))))))),9);
        vcdp->fullBus(c+6113,(((0x2cU >= (0x3fU & ((IData)(9U) 
                                                   * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o))))
                                ? (0x1ffU & (IData)(
                                                    (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o))))))
                                : 0U)),9);
        vcdp->fullBit(c+6121,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
        vcdp->fullBus(c+6129,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp),9);
        vcdp->fullBus(c+6137,((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                               << (0x1fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))),32);
        vcdp->fullBit(c+6145,((1U & (~ vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))));
        vcdp->fullBus(c+6153,((0x1ffU & ((((((0x2cU 
                                              >= (0x3fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o))))
                                              ? (IData)(
                                                        (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(9U) 
                                                             * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o)))))
                                              : 0U) 
                                            + VL_EXTENDS_II(9,2, 
                                                            ((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  ((IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o) 
                                                                   << 3U)))) 
                                                             & (IData)(
                                                                       (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(6U) 
                                                                            + 
                                                                            ((IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o) 
                                                                             << 3U)))))))) 
                                           - (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                                          - (0x1fU 
                                             & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                         + ((0x2cU 
                                             >= (0x3fU 
                                                 & ((IData)(9U) 
                                                    * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o))))
                                             ? (IData)(
                                                       (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(9U) 
                                                            * (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_src_fmt_o)))))
                                             : 0U)))),9);
        vcdp->fullBus(c+6161,((0x1ffU & ((IData)(0x1fU) 
                                         - (0x1fU & 
                                            vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])))),9);
        vcdp->fullBus(c+6169,((0x1fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        vcdp->fullBus(c+6177,((0x1fU & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+6185,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp),9);
        vcdp->fullBus(c+6193,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->fullBus(c+6201,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->fullBus(c+6209,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp),9);
        vcdp->fullArray(c+6217,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant),65);
        vcdp->fullArray(c+6241,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant),65);
        vcdp->fullBus(c+6265,((0x7fffffU & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             << 0x17U) 
                                            | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                               >> 9U)))),23);
        vcdp->fullBus(c+6273,(((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                << 0x1fU) | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                             >> 1U))),32);
        vcdp->fullBus(c+6281,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt),6);
        vcdp->fullBus(c+6289,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits),2);
        vcdp->fullBus(c+6297,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits),2);
        vcdp->fullBus(c+6305,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits),2);
        vcdp->fullBit(c+6313,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round));
        vcdp->fullBit(c+6321,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round));
        vcdp->fullBus(c+6329,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs),32);
        vcdp->fullBit(c+6337,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round))));
        vcdp->fullBit(c+6345,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round))));
        vcdp->fullArray(c+6353,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_pre_round_abs),160);
        vcdp->fullBus(c+6393,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round),5);
        vcdp->fullBus(c+6401,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round),5);
        vcdp->fullArray(c+6409,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs),128);
        vcdp->fullBus(c+6441,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs),32);
        vcdp->fullBit(c+6449,(((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                               & (0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))));
        vcdp->fullBus(c+6457,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res),32);
        vcdp->fullBit(c+6465,((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)));
        vcdp->fullArray(c+6473,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result),160);
        vcdp->fullBus(c+6513,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[0U]),32);
        vcdp->fullBus(c+6521,((0x10U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                        << 2U))),5);
        vcdp->fullBit(c+6529,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
        vcdp->fullArray(c+6537,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),160);
        vcdp->fullBus(c+6577,((((0U == (0x1fU & ((IData)(vlTOPp->fp_wrapper__DOT__int_fmt_i) 
                                                 << 5U)))
                                 ? 0U : (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                         ((IData)(1U) 
                                          + (3U & (IData)(vlTOPp->fp_wrapper__DOT__int_fmt_i)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(vlTOPp->fp_wrapper__DOT__int_fmt_i) 
                                                   << 5U))))) 
                               | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                  (3U & (IData)(vlTOPp->fp_wrapper__DOT__int_fmt_i))] 
                                  >> (0x1fU & ((IData)(vlTOPp->fp_wrapper__DOT__int_fmt_i) 
                                               << 5U))))),32);
        vcdp->fullBit(c+6585,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special));
        vcdp->fullArray(c+6593,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),128);
        vcdp->fullBus(c+6625,((0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits))),5);
        vcdp->fullBus(c+6633,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status),5);
        vcdp->fullBus(c+6641,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[0U]
                                : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U])),32);
        vcdp->fullBus(c+6649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result),32);
        vcdp->fullBus(c+6657,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                ? (0x10U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                            << 2U))
                                : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status))),5);
        vcdp->fullBus(c+6665,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                ? 0x10U : (0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))),5);
        vcdp->fullBus(c+6673,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->fullBus(c+6681,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->fullBus(c+6689,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),32);
        vcdp->fullArray(c+6697,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),160);
        vcdp->fullBus(c+6737,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),32);
        vcdp->fullBit(c+6745,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op))));
        vcdp->fullBus(c+6753,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        vcdp->fullBus(c+6761,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+6769,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+6777,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+6785,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+6793,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+6801,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+6809,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+6817,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+6825,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+6833,((7U & ((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullArray(c+6841,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullBus(c+6897,((7U & ((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                             >> 1U) 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+6905,(((0x10U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))
                                ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                               (3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                : ((0x9fU >= (0xe0U 
                                              & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                                 << 5U)))
                                    ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                   (7U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                    : 0U))),32);
        vcdp->fullBit(c+6913,((((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                ? ((((~ (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                         >> 0x16U)) 
                                     & (0U != (0x3fffffU 
                                               & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U]))) 
                                    & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN)) 
                                   | (((~ (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                           >> 0x16U)) 
                                       & (0U != (0x3fffffU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]))) 
                                      & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN)))
                                : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP))));
        vcdp->fullBit(c+6921,((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                                      & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                      ? ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                          ^ vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U]) 
                                         >> 0x1fU) : 
                                     (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                                       & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                       ? (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                          >> 0x1fU)
                                       : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))))));
        vcdp->fullQuad(c+6929,((VL_ULL(0x1fffffffffffff) 
                                & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                    & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                    ? (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                       << (0x3fU & 
                                           vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP))),53);
        vcdp->fullBus(c+6945,((0xfffU & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (((0xffU 
                                               & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U] 
                                                   << 9U) 
                                                  | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U] 
                                                     >> 0x17U))) 
                                              - (0x3fU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                             + (0U 
                                                != 
                                                (0x3fU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])))
                                          : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))),12);
        vcdp->fullQuad(c+6953,((VL_ULL(0x1fffffffffffff) 
                                & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                    & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                    ? (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                       << (0x3fU & 
                                           vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP))),53);
        vcdp->fullBus(c+6969,((0xfffU & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (((0xffU 
                                               & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                   << 9U) 
                                                  | (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                     >> 0x17U))) 
                                              - (0x3fU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                             + (0U 
                                                != 
                                                (0x3fU 
                                                 & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])))
                                          : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP)))),12);
        vcdp->fullQuad(c+6977,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                                 ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
                                     ? (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                     [2U] 
                                                                     >> 0x39U))))) 
                                         << 0x39U) 
                                        | ((VL_ULL(0x1fffffffffffffc) 
                                            & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [2U] 
                                               << 2U)) 
                                           | (QData)((IData)(
                                                             vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                             [2U]))))
                                     : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                    [2U]) : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->fullBus(c+6993,(((6U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                    >> 3U)))),3);
        vcdp->fullBus(c+7001,(((0x1eU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),5);
        vcdp->fullBus(c+7009,(((0x7eU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),7);
        vcdp->fullBus(c+7017,(((0x1feU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                               (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),9);
        vcdp->fullBus(c+7025,(((0x7feU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                               (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),11);
        vcdp->fullBus(c+7033,(((0x1ffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),13);
        vcdp->fullBus(c+7041,(((0x7ffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),15);
        vcdp->fullBus(c+7049,(((0x1fffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),17);
        vcdp->fullBus(c+7057,(((0x7fffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),19);
        vcdp->fullBus(c+7065,(((0x1ffffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),21);
        vcdp->fullBus(c+7073,(((0x7ffffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),23);
        vcdp->fullBus(c+7081,(((0x1fffffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),25);
        vcdp->fullBus(c+7089,(((0x7fffffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),27);
        vcdp->fullBus(c+7097,(((0x1ffffffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),29);
        vcdp->fullBus(c+7105,(((0x7ffffffeU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 1U)) 
                               | (1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),31);
        vcdp->fullQuad(c+7113,((((QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                 << 1U) | (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 3U)))))),33);
        vcdp->fullQuad(c+7129,(((VL_ULL(0x7fffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),35);
        vcdp->fullQuad(c+7145,(((VL_ULL(0x1ffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),37);
        vcdp->fullQuad(c+7161,(((VL_ULL(0x7ffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),39);
        vcdp->fullQuad(c+7177,(((VL_ULL(0x1fffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),41);
        vcdp->fullQuad(c+7193,(((VL_ULL(0x7fffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),43);
        vcdp->fullQuad(c+7209,(((VL_ULL(0x1ffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),45);
        vcdp->fullQuad(c+7225,(((VL_ULL(0x7ffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),47);
        vcdp->fullQuad(c+7241,(((VL_ULL(0x1fffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),49);
        vcdp->fullQuad(c+7257,(((VL_ULL(0x7fffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),51);
        vcdp->fullQuad(c+7273,(((VL_ULL(0x1ffffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),53);
        vcdp->fullQuad(c+7289,(((VL_ULL(0x7ffffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),55);
        vcdp->fullQuad(c+7305,(((VL_ULL(0x1fffffffffffffe) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),57);
        vcdp->fullQuad(c+7321,(((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                 << 2U) | (QData)((IData)(
                                                          (3U 
                                                           & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 2U)))))),59);
        vcdp->fullBus(c+7337,(((0x78U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 3U)) | 
                               (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)))),7);
        vcdp->fullBus(c+7345,(((0x7f8U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 3U)) | 
                               (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)))),11);
        vcdp->fullBus(c+7353,(((0x7ff8U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 3U)) 
                               | (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),15);
        vcdp->fullBus(c+7361,(((0x7fff8U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 3U)) 
                               | (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),19);
        vcdp->fullBus(c+7369,(((0x7ffff8U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 3U)) 
                               | (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),23);
        vcdp->fullBus(c+7377,(((0x7fffff8U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 3U)) 
                               | (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),27);
        vcdp->fullBus(c+7385,(((0x7ffffff8U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 3U)) 
                               | (7U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),31);
        vcdp->fullQuad(c+7393,((((QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 1U)))))),35);
        vcdp->fullQuad(c+7409,(((VL_ULL(0x7ffffffff8) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),39);
        vcdp->fullQuad(c+7425,(((VL_ULL(0x7fffffffff8) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),43);
        vcdp->fullQuad(c+7441,(((VL_ULL(0x7ffffffffff8) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),47);
        vcdp->fullQuad(c+7457,(((VL_ULL(0x7fffffffffff8) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),51);
        vcdp->fullQuad(c+7473,(((VL_ULL(0x7ffffffffffff8) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),55);
        vcdp->fullQuad(c+7489,(((VL_ULL(0x7fffffffffffff8) 
                                 & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),59);
        vcdp->fullQuad(c+7505,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [0U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [0U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [0U]))))),58);
        vcdp->fullQuad(c+7521,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [1U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [1U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [1U]))))),58);
        vcdp->fullQuad(c+7537,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [2U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [2U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [2U]))))),58);
        vcdp->fullQuad(c+7553,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [3U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [3U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [3U]))))),58);
        vcdp->fullQuad(c+7569,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0]),58);
        vcdp->fullQuad(c+7571,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[1]),58);
        vcdp->fullQuad(c+7573,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[2]),58);
        vcdp->fullQuad(c+7575,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[3]),58);
        vcdp->fullQuad(c+7633,((((QData)((IData)((0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [0U] 
                                                             >> 0x30U))))) 
                                 << 0x31U) | (((QData)((IData)(
                                                               (1U 
                                                                & ((3U 
                                                                    == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [0U] 
                                                                               >> 0x39U)))
                                                                    : (IData)(
                                                                              (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [0U] 
                                                                               >> 0x2fU)))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                              [0U] 
                                                                              >> 0x2dU))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((2U 
                                                                          == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x39U)))
                                                                          : (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x2cU)))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x20U))))) 
                                                        << 0x21U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0U 
                                                                                == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x39U)))
                                                                                : (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x1fU)))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((0xfffffff0U 
                                                                              & ((IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                             | (((1U 
                                                                                == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x39U)))) 
                                                                                << 3U))))))))))),58);
        vcdp->fullQuad(c+7649,(((1U & (IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [0U] 
                                               >> 0x39U)))
                                 ? (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U) : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->fullQuad(c+7665,((((QData)((IData)((0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [1U] 
                                                             >> 0x30U))))) 
                                 << 0x31U) | (((QData)((IData)(
                                                               (1U 
                                                                & ((3U 
                                                                    == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [1U] 
                                                                               >> 0x39U)))
                                                                    : (IData)(
                                                                              (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [1U] 
                                                                               >> 0x2fU)))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                              [1U] 
                                                                              >> 0x2dU))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((2U 
                                                                          == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x39U)))
                                                                          : (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x2cU)))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x20U))))) 
                                                        << 0x21U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0U 
                                                                                == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x39U)))
                                                                                : (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x1fU)))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((0xfffffff0U 
                                                                              & ((IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                             | (((1U 
                                                                                == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x39U)))) 
                                                                                << 3U))))))))))),58);
        vcdp->fullQuad(c+7681,(((1U & (IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [1U] 
                                               >> 0x39U)))
                                 ? (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U) : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->fullQuad(c+7697,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                                 ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
                                     ? ((VL_ULL(0x1fffffffffffff8) 
                                         & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                            << 3U)) 
                                        | (QData)((IData)(
                                                          (7U 
                                                           & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 1U)))))
                                     : ((VL_ULL(0x1fffffffffffff8) 
                                         & (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                            << 3U)) 
                                        | (QData)((IData)(
                                                          ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                            [0U] 
                                                            << 2U) 
                                                           | ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                               [1U] 
                                                               << 1U) 
                                                              | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                              [2U]))))))
                                 : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),57);
        vcdp->fullQuad(c+7713,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [0U] + vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [0U]) + (QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7729,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [0U] 
                                                  + 
                                                  vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [0U]) 
                                                 + (QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullQuad(c+7737,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [1U] + vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [1U]) + (QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7753,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [1U] 
                                                  + 
                                                  vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [1U]) 
                                                 + (QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullQuad(c+7761,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [2U] + vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [2U]) + (QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7777,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [2U] 
                                                  + 
                                                  vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [2U]) 
                                                 + (QData)((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullBus(c+7785,((7U & ((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                             >> 2U) 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+7793,((7U & ((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__opgrp_out_ready) 
                                             >> 3U) 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+7801,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                                ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                    ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                    : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))
                                : 0U)),5);
        vcdp->fullBus(c+7809,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                                ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                    ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                    : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)
                                : 0xffffffffU)),32);
        vcdp->fullBus(c+7817,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)),32);
        vcdp->fullBus(c+7825,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))),5);
        vcdp->fullQuad(c+7833,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_result),64);
        vcdp->fullQuad(c+7849,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D),57);
        vcdp->fullQuad(c+7865,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB),54);
        vcdp->fullQuad(c+7881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm),54);
        vcdp->fullBus(c+7897,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S),6);
        vcdp->fullBit(c+7905,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S));
        vcdp->fullBit(c+7913,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S));
        vcdp->fullQuad(c+7921,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3),58);
        vcdp->fullBus(c+7937,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0]),2);
        vcdp->fullBus(c+7938,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1]),2);
        vcdp->fullBus(c+7939,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2]),2);
        vcdp->fullBus(c+7940,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[3]),2);
        vcdp->fullBus(c+7969,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[0]),2);
        vcdp->fullBus(c+7970,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[1]),2);
        vcdp->fullBus(c+7971,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[2]),2);
        vcdp->fullBus(c+7972,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[3]),2);
        vcdp->fullQuad(c+8001,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB),58);
        vcdp->fullQuad(c+8017,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D),58);
        vcdp->fullQuad(c+8033,((((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                  ? 1U : (1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))
                                 ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB
                                 : (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U))),58);
        vcdp->fullBit(c+8049,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[0]));
        vcdp->fullBit(c+8050,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[1]));
        vcdp->fullBit(c+8051,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[2]));
        vcdp->fullBit(c+8052,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[3]));
        vcdp->fullBit(c+8081,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[0]));
        vcdp->fullBit(c+8082,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[1]));
        vcdp->fullBit(c+8083,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[2]));
        vcdp->fullBit(c+8084,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[3]));
        vcdp->fullBit(c+8113,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[0]));
        vcdp->fullBit(c+8114,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[1]));
        vcdp->fullBit(c+8115,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[2]));
        vcdp->fullBit(c+8116,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[3]));
        vcdp->fullBus(c+8145,((0x1fffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S)
                                           ? ((((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                                 ? 
                                                ((0x2000U 
                                                  & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 2U)) 
                                                 | ((0x1000U 
                                                     & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                        << 1U)) 
                                                    | ((0x800U 
                                                        & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)) 
                                                       | (0x7ffU 
                                                          & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                             >> 1U)))))
                                                 : 
                                                ((0x2000U 
                                                  & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 2U)) 
                                                 | ((0x1000U 
                                                     & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                        << 1U)) 
                                                    | (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))) 
                                               + ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
                                                   : 
                                                  ((0x2000U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                         >> 0xbU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((~ 
                                                           ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                            >> 0xbU)) 
                                                          << 0xcU)) 
                                                      | (0xfffU 
                                                         & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP))))))) 
                                              + ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                                  ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                                                  : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))
                                           : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))),13);
        vcdp->fullBus(c+8153,((0x1fffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                           ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                                           : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))),13);
        vcdp->fullBus(c+8161,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE),32);
        vcdp->fullBus(c+8169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS),32);
        vcdp->fullBit(c+8177,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                              [0U]));
        vcdp->fullBit(c+8185,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                              [0U]));
        vcdp->fullBit(c+8193,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [0U]));
        vcdp->fullBus(c+8201,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [0U]),2);
        vcdp->fullBus(c+8209,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->fullBit(c+8217,((1U & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [0U] >> 1U) | 
                                     vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [0U]))));
        vcdp->fullBit(c+8225,((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                               [0U] & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                        [0U] >> 1U) 
                                       | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [0U]))));
        vcdp->fullBit(c+8233,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->fullBit(c+8241,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                              [1U]));
        vcdp->fullBit(c+8249,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                              [1U]));
        vcdp->fullBit(c+8257,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [1U]));
        vcdp->fullBus(c+8265,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [1U]),2);
        vcdp->fullBus(c+8273,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->fullBit(c+8281,((1U & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [1U] >> 1U) | 
                                     vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [1U]))));
        vcdp->fullBit(c+8289,((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                               [1U] & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                        [1U] >> 1U) 
                                       | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [1U]))));
        vcdp->fullBit(c+8297,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->fullBit(c+8305,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                              [2U]));
        vcdp->fullBit(c+8313,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                              [2U]));
        vcdp->fullBit(c+8321,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [2U]));
        vcdp->fullBus(c+8329,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [2U]),2);
        vcdp->fullBus(c+8337,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->fullBit(c+8345,((1U & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [2U] >> 1U) | 
                                     vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [2U]))));
        vcdp->fullBit(c+8353,((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                               [2U] & ((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                        [2U] >> 1U) 
                                       | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [2U]))));
        vcdp->fullBit(c+8361,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->fullBit(c+8369,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Sign_res_D));
        vcdp->fullBit(c+8377,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_OF_S));
        vcdp->fullBit(c+8385,((1U & ((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                                     & ((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                        & ((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                           & ((~ ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                  & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                              & ((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)) 
                                                 & ((~ 
                                                     ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                      & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                         & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))) 
                                                       & ((0U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                           ? 
                                                          (VL_ULL(0) 
                                                           != vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)
                                                           : 
                                                          (((1U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                            & (~ (IData)(
                                                                         (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                          >> 0x38U)))) 
                                                           | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 0xcU)))))))))))));
        vcdp->fullBit(c+8393,(((0U != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                               | (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S))));
        vcdp->fullQuad(c+8401,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D),53);
        vcdp->fullBus(c+8417,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D),11);
        __Vtemp849[0U] = 0U;
        __Vtemp849[1U] = (0xffe00000U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp849[2U] = ((0x1fffffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp849[3U] = (0x1fffffU & ((IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp850, __Vtemp849, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->fullQuad(c+8425,((VL_ULL(0x1fffffffffffff) 
                                & (((QData)((IData)(
                                                    (0x3fffU 
                                                     & __Vtemp850[3U]))) 
                                    << 0x27U) | (((QData)((IData)(
                                                                  __Vtemp850[2U])) 
                                                  << 7U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp850[1U])) 
                                                    >> 0x19U))))),53);
        __Vtemp853[0U] = 0U;
        __Vtemp853[1U] = (0xffe00000U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp853[2U] = ((0x1fffffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp853[3U] = (0x1fffffU & ((IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp854, __Vtemp853, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->fullQuad(c+8441,((VL_ULL(0x1ffffffffffffff) 
                                & (((QData)((IData)(
                                                    __Vtemp854[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp854[0U]))))),57);
        vcdp->fullBus(c+8457,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D),2);
        vcdp->fullBit(c+8465,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D));
        vcdp->fullQuad(c+8473,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D),57);
        vcdp->fullQuad(c+8489,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D),53);
        vcdp->fullQuad(c+8505,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D),54);
        vcdp->fullBit(c+8521,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S));
        vcdp->fullBit(c+8529,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S));
        vcdp->fullBit(c+8537,((1U & (IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                             >> 0x35U)))));
        vcdp->fullQuad(c+8545,((((QData)((IData)(((3U 
                                                   == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                  & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               ((2U 
                                                                 == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                               << 0x2aU) 
                                              | (QData)((IData)(
                                                                ((((0U 
                                                                    == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                   & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)) 
                                                                  << 0x1dU) 
                                                                 | ((1U 
                                                                     == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                    & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))))))),53);
        vcdp->fullQuad(c+8561,((VL_ULL(0xfffffffffffff) 
                                & ((1U & (IData)((vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                  >> 0x35U)))
                                    ? (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                       >> 1U) : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D))),52);
        vcdp->fullBus(c+8577,((0x7ffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D) 
                                         + (1U & (IData)(
                                                         (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                          >> 0x35U)))))),11);
        vcdp->fullQuad(c+8585,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_before_format_ctl_D),52);
        vcdp->fullBus(c+8601,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_before_format_ctl_D),11);
        vcdp->fullBus(c+8609,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result),32);
        vcdp->fullBus(c+8617,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO),5);
        vcdp->fullArray(c+8625,(vlTOPp->fp_wrapper__DOT__fpregister__DOT__registers),1024);
        vcdp->fullBus(c+8881,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),2);
        vcdp->fullBus(c+8889,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+8897,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBit(c+8905,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q));
        vcdp->fullBus(c+8913,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q),5);
        vcdp->fullBit(c+8921,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                     >> 3U))));
        vcdp->fullBus(c+8929,((7U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))),3);
        vcdp->fullBit(c+8937,((1U & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                     >> 4U))));
        vcdp->fullBit(c+8945,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
        vcdp->fullBit(c+8953,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
        vcdp->fullBus(c+8961,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q),2);
        vcdp->fullBit(c+8969,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q));
        vcdp->fullBus(c+8977,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP),12);
        vcdp->fullBus(c+8985,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP),12);
        vcdp->fullQuad(c+8993,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),53);
        vcdp->fullQuad(c+9009,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),53);
        vcdp->fullBus(c+9025,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP),13);
        vcdp->fullBit(c+9033,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP));
        vcdp->fullBus(c+9041,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP),3);
        vcdp->fullBit(c+9049,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S));
        vcdp->fullBit(c+9057,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S));
        vcdp->fullBit(c+9065,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP));
        vcdp->fullBit(c+9073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP));
        vcdp->fullBit(c+9081,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP));
        vcdp->fullBit(c+9089,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP));
        vcdp->fullBit(c+9097,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP));
        vcdp->fullBit(c+9105,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP));
        vcdp->fullBit(c+9113,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP));
        vcdp->fullBit(c+9121,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB));
        vcdp->fullBit(c+9129,((0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))));
        vcdp->fullBit(c+9137,((0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9145,((1U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9153,((2U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9161,((3U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9169,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S));
        vcdp->fullBit(c+9177,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S));
        vcdp->fullQuad(c+9185,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP),58);
        vcdp->fullQuad(c+9201,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP),57);
        vcdp->fullQuad(c+9217,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),54);
        vcdp->fullQuad(c+9233,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),54);
        vcdp->fullBus(c+9249,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S),2);
        vcdp->fullBus(c+9257,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S),6);
        vcdp->fullBus(c+9265,((0x1fU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                        >> 1U))),6);
        vcdp->fullBus(c+9273,((0xfU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                       >> 2U))),6);
        vcdp->fullBus(c+9281,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S),6);
        vcdp->fullBit(c+9289,((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))));
        vcdp->fullBus(c+9297,((3U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),2);
        vcdp->fullBus(c+9305,((7U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),3);
        vcdp->fullBus(c+9313,((0xfU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),4);
        vcdp->fullBus(c+9321,((0x1fU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),5);
        vcdp->fullBus(c+9329,((0x3fU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),6);
        vcdp->fullBus(c+9337,((0x7fU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),7);
        vcdp->fullBus(c+9345,((0xffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),8);
        vcdp->fullBus(c+9353,((0x1ffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),9);
        vcdp->fullBus(c+9361,((0x3ffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),10);
        vcdp->fullBus(c+9369,((0x7ffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),11);
        vcdp->fullBus(c+9377,((0xfffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),12);
        vcdp->fullBus(c+9385,((0x1fffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),13);
        vcdp->fullBus(c+9393,((0x3fffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),14);
        vcdp->fullBus(c+9401,((0x7fffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),15);
        vcdp->fullBus(c+9409,((0xffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),16);
        vcdp->fullBus(c+9417,((0x1ffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),17);
        vcdp->fullBus(c+9425,((0x3ffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),18);
        vcdp->fullBus(c+9433,((0x7ffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),19);
        vcdp->fullBus(c+9441,((0xfffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),20);
        vcdp->fullBus(c+9449,((0x1fffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),21);
        vcdp->fullBus(c+9457,((0x3fffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),22);
        vcdp->fullBus(c+9465,((0x7fffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),23);
        vcdp->fullBus(c+9473,((0xffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),24);
        vcdp->fullBus(c+9481,((0x1ffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),25);
        vcdp->fullBus(c+9489,((0x3ffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),26);
        vcdp->fullBus(c+9497,((0x7ffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),27);
        vcdp->fullBus(c+9505,((0xfffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),28);
        vcdp->fullBus(c+9513,((0x1fffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),29);
        vcdp->fullBus(c+9521,((0x3fffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),30);
        vcdp->fullBus(c+9529,((0x7fffffffU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),31);
        vcdp->fullBus(c+9537,((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),32);
        vcdp->fullQuad(c+9545,((VL_ULL(0x1ffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),33);
        vcdp->fullQuad(c+9561,((VL_ULL(0x3ffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),34);
        vcdp->fullQuad(c+9577,((VL_ULL(0x7ffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),35);
        vcdp->fullQuad(c+9593,((VL_ULL(0xfffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),36);
        vcdp->fullQuad(c+9609,((VL_ULL(0x1fffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),37);
        vcdp->fullQuad(c+9625,((VL_ULL(0x3fffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),38);
        vcdp->fullQuad(c+9641,((VL_ULL(0x7fffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),39);
        vcdp->fullQuad(c+9657,((VL_ULL(0xffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),40);
        vcdp->fullQuad(c+9673,((VL_ULL(0x1ffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),41);
        vcdp->fullQuad(c+9689,((VL_ULL(0x3ffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),42);
        vcdp->fullQuad(c+9705,((VL_ULL(0x7ffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),43);
        vcdp->fullQuad(c+9721,((VL_ULL(0xfffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),44);
        vcdp->fullQuad(c+9737,((VL_ULL(0x1fffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),45);
        vcdp->fullQuad(c+9753,((VL_ULL(0x3fffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),46);
        vcdp->fullQuad(c+9769,((VL_ULL(0x7fffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),47);
        vcdp->fullQuad(c+9785,((VL_ULL(0xffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),48);
        vcdp->fullQuad(c+9801,((VL_ULL(0x1ffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),49);
        vcdp->fullQuad(c+9817,((VL_ULL(0x3ffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),50);
        vcdp->fullQuad(c+9833,((VL_ULL(0x7ffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),51);
        vcdp->fullQuad(c+9849,((VL_ULL(0xfffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),52);
        vcdp->fullQuad(c+9865,((VL_ULL(0x1fffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),53);
        vcdp->fullQuad(c+9881,((VL_ULL(0x3fffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),54);
        vcdp->fullQuad(c+9897,((VL_ULL(0x7fffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),55);
        vcdp->fullQuad(c+9913,((VL_ULL(0xffffffffffffff) 
                                & vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),56);
        vcdp->fullQuad(c+9929,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                 ? VL_ULL(0) : vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->fullBit(c+9945,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                ? 1U : (1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))));
        vcdp->fullBus(c+9953,((0x1fffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                           ? ((0x2000U 
                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                  << 2U)) 
                                              | ((0x1000U 
                                                  & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 1U)) 
                                                 | ((0x800U 
                                                     & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)) 
                                                    | (0x7ffU 
                                                       & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                          >> 1U)))))
                                           : ((0x2000U 
                                               & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                  << 2U)) 
                                              | ((0x1000U 
                                                  & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))))),13);
        vcdp->fullBus(c+9961,((0x1fffU & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                           ? (1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
                                           : ((0x2000U 
                                               & ((~ 
                                                   ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                    >> 0xbU)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                       >> 0xbU)) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP)))))))),13);
        vcdp->fullBit(c+9969,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
                                ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP)
                                : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)
                                    ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP)
                                    : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                                        ? (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP)) 
                                           | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) 
                                              & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP)))
                                        : ((~ ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                               & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                           & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                               ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                  & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                               : ((~ 
                                                   ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                    & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                                  & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                     & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))))))))));
        vcdp->fullBit(c+9977,(((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                               & ((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                  & ((~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                     & ((~ ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                        & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                            ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                               & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                            : ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                               & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP)))))))));
        vcdp->fullBus(c+9985,((0x1fffU & ((IData)(0x35U) 
                                          + (0xfffU 
                                             & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),13);
        vcdp->fullBus(c+9993,((0x3ffU & ((IData)(0x18U) 
                                         + (0x1ffU 
                                            & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->fullBus(c+10001,((0x7fU & ((IData)(0xbU) 
                                         + (0x3fU & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),7);
        vcdp->fullBus(c+10009,((0x3ffU & ((IData)(8U) 
                                          + (0x1ffU 
                                             & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->fullBus(c+10017,((0x1fffU & ((IData)(2U) 
                                           + (~ VL_EXTENDS_II(13,13, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))))),13);
        vcdp->fullBus(c+10025,((0x1fffU & (VL_EXTENDS_II(13,13, (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                           - (IData)(1U)))),13);
        vcdp->fullBus(c+10033,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+10041,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+10049,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q),32);
        vcdp->fullBus(c+10057,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q),5);
        vcdp->fullBit(c+10065,(vlTOPp->clk_i));
        vcdp->fullBit(c+10073,(vlTOPp->rst_ni));
        vcdp->fullBus(c+10081,(vlTOPp->instr_i),32);
        vcdp->fullBus(c+10089,(vlTOPp->result_o),32);
        vcdp->fullBit(c+10097,(vlTOPp->illegal_insn));
        vcdp->fullBit(c+10105,(vlTOPp->in_valid_i));
        vcdp->fullBit(c+10113,(vlTOPp->in_ready_o));
        vcdp->fullBit(c+10121,(vlTOPp->flush_i));
        vcdp->fullBit(c+10129,(vlTOPp->status_o));
        vcdp->fullBit(c+10137,(vlTOPp->tag_o));
        vcdp->fullBit(c+10145,(vlTOPp->out_valid_o));
        vcdp->fullBit(c+10153,(vlTOPp->out_ready_i));
        vcdp->fullBit(c+10161,(vlTOPp->busy_o));
        vcdp->fullBus(c+10169,((0x1fU & (vlTOPp->instr_i 
                                         >> 0xfU))),5);
        vcdp->fullBus(c+10177,((0x1fU & (vlTOPp->instr_i 
                                         >> 0x14U))),5);
        vcdp->fullBus(c+10185,((0x1fU & (vlTOPp->instr_i 
                                         >> 0x1bU))),5);
        vcdp->fullBus(c+10193,((0x1fU & (vlTOPp->instr_i 
                                         >> 7U))),5);
        vcdp->fullBus(c+10201,(vlTOPp->fp_wrapper__DOT__fpregister__DOT__registers[
                               (0x1fU & (vlTOPp->instr_i 
                                         >> 0xfU))]),32);
        vcdp->fullBus(c+10209,(vlTOPp->fp_wrapper__DOT__fpregister__DOT__registers[
                               (0x1fU & (vlTOPp->instr_i 
                                         >> 0x14U))]),32);
        vcdp->fullBus(c+10217,(vlTOPp->fp_wrapper__DOT__fpregister__DOT__registers[
                               (0x1fU & (vlTOPp->instr_i 
                                         >> 0x1bU))]),32);
        vcdp->fullBus(c+10225,((7U & (vlTOPp->instr_i 
                                      >> 0xcU))),3);
        vcdp->fullBit(c+10233,((7U == (7U & (vlTOPp->instr_i 
                                             >> 0xcU)))));
        vcdp->fullBus(c+10241,((3U & (((IData)(vlTOPp->out_ready_i) 
                                       & (IData)(vlTOPp->out_valid_o))
                                       ? ((1U & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                           ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                           : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                       : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
        vcdp->fullBus(c+10249,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid)
                                 ? ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                     ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                                     : ((((((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                            & (0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                           & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                           ? ((2U == 
                                               (7U 
                                                & (vlTOPp->instr_i 
                                                   >> 0xcU))) 
                                              & (3U 
                                                 != (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)))
                                           : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                         << 0x1fU) 
                                        | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))
                                 : 0xffffffffU)),32);
        vcdp->fullBus(c+10257,(((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                 ? vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                                 : ((((((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                        & (0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                       & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                       ? ((2U == (7U 
                                                  & (vlTOPp->instr_i 
                                                     >> 0xcU))) 
                                          & (3U != (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)))
                                       : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                     << 0x1fU) | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))),32);
        vcdp->fullBit(c+10265,(((((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                  & (0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                 & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                 ? ((2U == (7U & (vlTOPp->instr_i 
                                                  >> 0xcU))) 
                                    & (3U != (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)))
                                 : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign))));
        vcdp->fullBus(c+10273,(((((((0U == vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                    & (0U == (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                   & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                   ? ((2U == (7U & 
                                              (vlTOPp->instr_i 
                                               >> 0xcU))) 
                                      & (3U != (IData)(vlTOPp->fp_wrapper__DOT____Vcellout__fpdecoder__fp_alu_operator_o)))
                                   : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                 << 0x1fU) | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs)),32);
        vcdp->fullBit(c+10281,((1U & ((0x4000U & vlTOPp->instr_i)
                                       ? ((vlTOPp->instr_i 
                                           >> 0xdU) 
                                          | ((vlTOPp->instr_i 
                                              >> 0xcU) 
                                             | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits) 
                                                >> 1U)))
                                       : ((0x2000U 
                                           & vlTOPp->instr_i)
                                           ? ((0x1000U 
                                               & vlTOPp->instr_i)
                                               ? ((0U 
                                                   != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                                                  & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)))
                                               : ((0U 
                                                   != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                                                  & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)))
                                           : ((~ (vlTOPp->instr_i 
                                                  >> 0xcU)) 
                                              & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits) 
                                                  >> 1U) 
                                                 & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits) 
                                                    | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs))))))));
        vcdp->fullBus(c+10289,((7U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                       & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                       ? (vlTOPp->instr_i 
                                          >> 0xcU) : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)))),3);
        vcdp->fullBus(c+10297,(((1U & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                        >> 3U) & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                  >> 0xbU)))
                                 ? 0x7fc00000U : ((8U 
                                                   & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                                   ? (IData)(
                                                             (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                                    ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->instr_i 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                      ? (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                                      : (IData)(
                                                                (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                                 >> 0x20U)))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->instr_i 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                       ? (IData)(
                                                                 (vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                                  >> 0x20U))
                                                       : (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands))
                                                      : 0x80800001U)))))),32);
        vcdp->fullBit(c+10305,((1U & ((0x4000U & vlTOPp->instr_i)
                                       ? ((vlTOPp->instr_i 
                                           >> 0xdU) 
                                          | ((vlTOPp->instr_i 
                                              >> 0xcU) 
                                             | ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                >> 1U)))
                                       : ((0x2000U 
                                           & vlTOPp->instr_i)
                                           ? ((0x1000U 
                                               & vlTOPp->instr_i)
                                               ? ((0U 
                                                   != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                  & (~ (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign)))
                                               : ((0U 
                                                   != (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                  & (IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign)))
                                           : ((~ (vlTOPp->instr_i 
                                                  >> 0xcU)) 
                                              & (((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                  >> 1U) 
                                                 & ((IData)(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                    | vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs))))))));
        vcdp->fullBus(c+10313,(0x20U),32);
        vcdp->fullBus(c+10321,(5U),32);
        vcdp->fullBus(c+10329,(3U),32);
        vcdp->fullBus(c+10337,(4U),32);
        vcdp->fullBus(c+10345,(2U),32);
        vcdp->fullBus(c+10353,(0U),3);
        vcdp->fullBus(c+10361,(vlTOPp->fp_wrapper__DOT__int_fmt_i),2);
        vcdp->fullBit(c+10369,(vlTOPp->fp_wrapper__DOT__vectorial_op_i));
        vcdp->fullBit(c+10377,(vlTOPp->fp_wrapper__DOT__tag_i));
        vcdp->fullBus(c+10385,(2U),32);
        vcdp->fullBus(c+10393,(0x20U),32);
        vcdp->fullQuad(c+10401,(VL_ULL(0x10302)),43);
        __Vtemp856[0U] = 0x556aa554U;
        __Vtemp856[1U] = 0x2aaU;
        __Vtemp856[2U] = 0U;
        __Vtemp856[3U] = 0U;
        __Vtemp856[4U] = 0U;
        __Vtemp856[5U] = 0U;
        __Vtemp856[6U] = 0U;
        __Vtemp856[7U] = 0U;
        __Vtemp856[8U] = 0U;
        __Vtemp856[9U] = 0U;
        __Vtemp856[0xaU] = 0U;
        __Vtemp856[0xbU] = 0U;
        __Vtemp856[0xcU] = 0U;
        __Vtemp856[0xdU] = 0U;
        __Vtemp856[0xeU] = 0U;
        __Vtemp856[0xfU] = 0U;
        __Vtemp856[0x10U] = 0U;
        __Vtemp856[0x11U] = 0U;
        __Vtemp856[0x12U] = 0U;
        __Vtemp856[0x13U] = 0U;
        __Vtemp856[0x14U] = 0U;
        __Vtemp856[0x15U] = 0U;
        vcdp->fullArray(c+10417,(__Vtemp856),682);
        vcdp->fullBus(c+10593,(0x20U),32);
        vcdp->fullBus(c+10601,(0x40U),32);
        vcdp->fullBus(c+10609,(0x10U),32);
        vcdp->fullBus(c+10617,(8U),32);
        vcdp->fullBit(c+10625,(0U));
        vcdp->fullBit(c+10633,(1U));
        vcdp->fullBus(c+10641,(0U),2);
        vcdp->fullBit(c+10649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBus(c+10657,(0U),32);
        vcdp->fullBus(c+10665,(1U),32);
        vcdp->fullBus(c+10673,(0U),2);
        vcdp->fullBit(c+10681,(0U));
        vcdp->fullBus(c+10689,(0x10U),5);
        vcdp->fullBus(c+10697,(2U),4);
        __Vtemp857[0U] = 0U;
        __Vtemp857[1U] = 0U;
        __Vtemp857[2U] = 0U;
        __Vtemp857[3U] = 0U;
        __Vtemp857[4U] = 0U;
        vcdp->fullArray(c+10705,(__Vtemp857),160);
        vcdp->fullBus(c+10745,(0x155U),10);
        vcdp->fullBus(c+10753,(0U),2);
        vcdp->fullBus(c+10761,(0U),3);
        vcdp->fullBit(c+10769,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBus(c+10777,(7U),32);
        vcdp->fullBus(c+10785,(9U),32);
        vcdp->fullBit(c+10793,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBus(c+10801,(0xbU),32);
        vcdp->fullBit(c+10809,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+10817,(6U),32);
        vcdp->fullBus(c+10825,(0xdU),32);
        vcdp->fullBus(c+10833,(0U),2);
        vcdp->fullBus(c+10841,(0U),3);
        vcdp->fullBus(c+10849,(0U),2);
        vcdp->fullBit(c+10857,(1U));
        vcdp->fullBus(c+10865,(1U),32);
        vcdp->fullBus(c+10873,(1U),10);
        vcdp->fullBit(c+10881,(0U));
        vcdp->fullBus(c+10889,(3U),32);
        vcdp->fullBus(c+10897,(0U),3);
        vcdp->fullBus(c+10905,(0U),2);
        vcdp->fullBus(c+10913,(0x17U),32);
        vcdp->fullBus(c+10921,(0x7fU),32);
        vcdp->fullBus(c+10929,(0x18U),32);
        vcdp->fullBus(c+10937,(0x33U),32);
        vcdp->fullBus(c+10945,(0xaU),32);
        vcdp->fullBus(c+10953,(0U),32);
        vcdp->fullBus(c+10961,(0U),3);
        vcdp->fullBus(c+10969,(0x1fU),32);
        vcdp->fullBus(c+10977,(1U),2);
        vcdp->fullBus(c+10985,(0x10U),5);
        vcdp->fullBus(c+10993,(2U),4);
        __Vtemp858[0U] = 0U;
        __Vtemp858[1U] = 0U;
        __Vtemp858[2U] = 0U;
        __Vtemp858[3U] = 0U;
        __Vtemp858[4U] = 0U;
        vcdp->fullArray(c+11001,(__Vtemp858),160);
        vcdp->fullBus(c+11041,(0x2aaU),10);
        vcdp->fullBus(c+11049,(0U),2);
        vcdp->fullBit(c+11057,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11065,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11073,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11081,(1U),2);
        vcdp->fullBus(c+11089,(0x10U),5);
        vcdp->fullBus(c+11097,(2U),4);
        vcdp->fullBus(c+11105,(0U),2);
        vcdp->fullBus(c+11113,(0U),5);
        vcdp->fullBus(c+11121,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        vcdp->fullBus(c+11129,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        vcdp->fullBus(c+11137,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),32);
        vcdp->fullBus(c+11145,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),32);
        vcdp->fullBus(c+11153,(5U),32);
        vcdp->fullBus(c+11161,(0x10U),5);
        vcdp->fullBus(c+11169,(2U),4);
        vcdp->fullBus(c+11177,(0x10U),5);
        vcdp->fullBus(c+11185,(2U),4);
        vcdp->fullBus(c+11193,(0x10U),5);
        vcdp->fullBus(c+11201,(0x10U),5);
        vcdp->fullBus(c+11209,(0U),2);
        vcdp->fullBus(c+11217,(0U),6);
        vcdp->fullBus(c+11225,(0x35U),32);
        vcdp->fullQuad(c+11233,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58),58);
        vcdp->fullQuad(c+11249,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59),59);
        vcdp->fullQuad(c+11265,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60),60);
        vcdp->fullQuad(c+11281,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20),62);
        vcdp->fullQuad(c+11297,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3),58);
        vcdp->fullQuad(c+11313,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3),58);
        vcdp->fullBit(c+11329,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO));
        vcdp->fullQuad(c+11337,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D),58);
        vcdp->fullQuad(c+11353,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D),58);
        vcdp->fullBit(c+11369,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S));
        vcdp->fullQuad(c+11377,(VL_ULL(0x3ffffffffffffff)),58);
        vcdp->fullBus(c+11393,(0x3aU),32);
        vcdp->fullBus(c+11401,(2U),2);
        vcdp->fullBus(c+11409,(0x10U),5);
        vcdp->fullBus(c+11417,(2U),4);
        __Vtemp859[0U] = 0U;
        __Vtemp859[1U] = 0U;
        __Vtemp859[2U] = 0U;
        __Vtemp859[3U] = 0U;
        __Vtemp859[4U] = 0U;
        vcdp->fullArray(c+11425,(__Vtemp859),160);
        vcdp->fullBus(c+11465,(0x155U),10);
        vcdp->fullBus(c+11473,(0U),2);
        vcdp->fullBit(c+11481,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11489,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11497,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11505,(2U),2);
        vcdp->fullBus(c+11513,(0U),3);
        vcdp->fullBus(c+11521,(0U),2);
        vcdp->fullBit(c+11529,(0U));
        vcdp->fullBus(c+11537,(2U),32);
        vcdp->fullBus(c+11545,(0U),3);
        vcdp->fullBus(c+11553,(0U),2);
        vcdp->fullBus(c+11561,(0U),3);
        vcdp->fullBus(c+11569,(3U),2);
        vcdp->fullBus(c+11577,(0x10U),5);
        vcdp->fullBus(c+11585,(2U),4);
        __Vtemp860[0U] = 0U;
        __Vtemp860[1U] = 0U;
        __Vtemp860[2U] = 0U;
        __Vtemp860[3U] = 0U;
        __Vtemp860[4U] = 0U;
        vcdp->fullArray(c+11593,(__Vtemp860),160);
        vcdp->fullBus(c+11633,(0x2aaU),10);
        vcdp->fullBus(c+11641,(0U),2);
        vcdp->fullBit(c+11649,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11657,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11665,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11673,(3U),2);
        vcdp->fullBus(c+11681,(0x10U),5);
        vcdp->fullBus(c+11689,(2U),4);
        vcdp->fullBus(c+11697,(0U),2);
        vcdp->fullBus(c+11705,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        vcdp->fullBus(c+11713,(vlTOPp->fp_wrapper__DOT__fpnewtop__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        vcdp->fullBus(c+11721,(0x10U),5);
        vcdp->fullBus(c+11729,(2U),4);
        vcdp->fullBus(c+11737,(0x10U),5);
        vcdp->fullBus(c+11745,(2U),4);
        vcdp->fullBus(c+11753,(0x10U),5);
        vcdp->fullBus(c+11761,(0x10U),5);
        vcdp->fullBus(c+11769,(2U),4);
        vcdp->fullBus(c+11777,(0U),2);
        vcdp->fullQuad(c+11785,(VL_ULL(0x800000017)),64);
        vcdp->fullBus(c+11801,(0x28U),32);
        vcdp->fullBus(c+11809,(0x10U),5);
        vcdp->fullBus(c+11817,(0x34U),32);
        vcdp->fullBus(c+11825,(0xffU),8);
        vcdp->fullBus(c+11833,(0x400000U),23);
        vcdp->fullBus(c+11841,(0x7ffU),11);
        vcdp->fullQuad(c+11849,(VL_ULL(0x8000000000000)),52);
        vcdp->fullBus(c+11865,(0x1fU),5);
        vcdp->fullBus(c+11873,(0x200U),10);
        vcdp->fullBus(c+11881,(2U),2);
        vcdp->fullBus(c+11889,(0x40U),7);
        vcdp->fullBus(c+11897,(0U),3);
        __Vtemp861[0U] = 0x17U;
        __Vtemp861[1U] = 8U;
        __Vtemp861[2U] = 0x34U;
        __Vtemp861[3U] = 0xbU;
        __Vtemp861[4U] = 0xaU;
        __Vtemp861[5U] = 5U;
        __Vtemp861[6U] = 2U;
        __Vtemp861[7U] = 5U;
        __Vtemp861[8U] = 7U;
        __Vtemp861[9U] = 8U;
        vcdp->fullArray(c+11905,(__Vtemp861),320);
        vcdp->fullBus(c+11985,(0x18U),5);
        vcdp->fullQuad(c+11993,(VL_ULL(0x20383)),43);
        vcdp->fullQuad(c+12009,(VL_ULL(0x20782)),43);
        vcdp->fullQuad(c+12025,(VL_ULL(0x10302)),43);
        vcdp->fullQuad(c+12041,(VL_ULL(0x207ff)),43);
        vcdp->fullQuad(c+12057,(VL_ULL(0x1077e)),43);
        vcdp->fullQuad(c+12073,(VL_ULL(0x10716)),43);
        __Vtemp862[0U] = 0x556aa554U;
        __Vtemp862[1U] = 0x2aaU;
        __Vtemp862[2U] = 0U;
        __Vtemp862[3U] = 0U;
        __Vtemp862[4U] = 0U;
        __Vtemp862[5U] = 0U;
        __Vtemp862[6U] = 0U;
        __Vtemp862[7U] = 0U;
        __Vtemp862[8U] = 0U;
        __Vtemp862[9U] = 0U;
        __Vtemp862[0xaU] = 0U;
        __Vtemp862[0xbU] = 0U;
        __Vtemp862[0xcU] = 0U;
        __Vtemp862[0xdU] = 0U;
        __Vtemp862[0xeU] = 0U;
        __Vtemp862[0xfU] = 0U;
        __Vtemp862[0x10U] = 0U;
        __Vtemp862[0x11U] = 0U;
        __Vtemp862[0x12U] = 0U;
        __Vtemp862[0x13U] = 0U;
        __Vtemp862[0x14U] = 0U;
        __Vtemp862[0x15U] = 0U;
        vcdp->fullArray(c+12089,(__Vtemp862),682);
        __Vtemp863[0U] = 0x55400554U;
        __Vtemp863[1U] = 0x6aaU;
        __Vtemp863[2U] = 0U;
        __Vtemp863[3U] = 0U;
        __Vtemp863[4U] = 0U;
        __Vtemp863[5U] = 0U;
        __Vtemp863[6U] = 0x400U;
        __Vtemp863[7U] = 0U;
        __Vtemp863[8U] = 0U;
        __Vtemp863[9U] = 0U;
        __Vtemp863[0xaU] = 0U;
        __Vtemp863[0xbU] = 0x400U;
        __Vtemp863[0xcU] = 0U;
        __Vtemp863[0xdU] = 0U;
        __Vtemp863[0xeU] = 0U;
        __Vtemp863[0xfU] = 0U;
        __Vtemp863[0x10U] = 0x400U;
        __Vtemp863[0x11U] = 0U;
        __Vtemp863[0x12U] = 0U;
        __Vtemp863[0x13U] = 0U;
        __Vtemp863[0x14U] = 0U;
        __Vtemp863[0x15U] = 0U;
        vcdp->fullArray(c+12265,(__Vtemp863),682);
        vcdp->fullBus(c+12441,(3U),32);
        vcdp->fullBus(c+12449,(1U),3);
        vcdp->fullBus(c+12457,(2U),3);
        vcdp->fullBus(c+12465,(3U),3);
        vcdp->fullBus(c+12473,(6U),32);
        vcdp->fullBus(c+12481,(2U),32);
        vcdp->fullBus(c+12489,(0x40U),32);
        vcdp->fullBus(c+12497,(0x34U),32);
        vcdp->fullBus(c+12505,(0xbU),32);
        vcdp->fullBus(c+12513,(0x3ffU),32);
        vcdp->fullBus(c+12521,(0x400U),11);
        vcdp->fullBus(c+12529,(0x1ffU),32);
        vcdp->fullBus(c+12537,(0U),11);
        vcdp->fullBus(c+12545,(1U),13);
        vcdp->fullQuad(c+12553,(VL_ULL(0)),52);
        vcdp->fullQuad(c+12569,(VL_ULL(0)),64);
        vcdp->fullQuad(c+12585,(VL_ULL(0x8000000000000000)),64);
        vcdp->fullQuad(c+12601,(VL_ULL(0x7ff8000000000000)),64);
        vcdp->fullBus(c+12617,(0x17U),32);
        vcdp->fullBus(c+12625,(8U),32);
        vcdp->fullBus(c+12633,(0x7fU),32);
        vcdp->fullBus(c+12641,(0x80U),8);
        vcdp->fullBus(c+12649,(0x3fU),32);
        vcdp->fullBus(c+12657,(0U),8);
        vcdp->fullBus(c+12665,(0U),23);
        vcdp->fullBus(c+12673,(0x80000000U),32);
        vcdp->fullBus(c+12681,(0x7fc00000U),32);
        vcdp->fullBus(c+12689,(0x10U),32);
        vcdp->fullBus(c+12697,(0xaU),32);
        vcdp->fullBus(c+12705,(5U),32);
        vcdp->fullBus(c+12713,(0xfU),32);
        vcdp->fullBus(c+12721,(7U),32);
        vcdp->fullBus(c+12729,(0U),10);
        vcdp->fullBus(c+12737,(0U),16);
        vcdp->fullBus(c+12745,(0x8000U),16);
        vcdp->fullBus(c+12753,(0x7e00U),16);
        vcdp->fullBus(c+12761,(0U),7);
        vcdp->fullBus(c+12769,(0x7fc0U),16);
    }
}
