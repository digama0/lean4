// Lean compiler output
// Module: Init.Conv
// Imports: Init.NotationExtra
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_Lean_Parser_Tactic_Conv_convApply_____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__13;
lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__6;
lean_object* l_Lean_Parser_Tactic_Conv_convSeq;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__5;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5;
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__24;
extern lean_object* l_Lean_nullKind;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__6;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_delta___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_convIntro______;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__1;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_convTraceState;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_reduce___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__18;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_convApply_____closed__2;
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_simpMatch___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_enterArg___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convApply_____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__10;
lean_object* l_Lean_Parser_Tactic_Conv_nestedConv;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__32;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_convTraceState___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__6;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convTraceState___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convApply_____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__23;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__19;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_enterArg;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convDone___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__35;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__3;
lean_object* l_Lean_Parser_Tactic_Conv_simp;
static lean_object* l_Lean_Parser_Tactic_Conv_convApply_____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_reduce___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convErw_____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__24;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convIntro_________closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convDone___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__26;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__20;
static lean_object* l_Lean_Parser_Tactic_Conv_convIntro_________closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__10;
lean_object* l_Lean_Parser_Tactic_Conv_convRight;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_pattern___closed__3;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convSkip___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_convSkip___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convIntro_________closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convErw_____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_erewrite___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_convIntro_________closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_delta___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__31;
static lean_object* l_Lean_Parser_Tactic_Conv_enterArg___closed__1;
lean_object* l_Lean_Parser_Tactic_Conv_paren;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed;
static lean_object* l_Lean_Parser_Tactic_Conv_erewrite___closed__1;
extern lean_object* l_Lean_Parser_Tactic_simpStar;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__14;
lean_object* l_Lean_Parser_Tactic_Conv_whnf;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convTraceState___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__3;
lean_object* l_Lean_Parser_Tactic_Conv_convSkip;
static lean_object* l_Lean_Parser_Tactic_Conv_erewrite___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convIntro_________closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__23;
lean_object* l_Lean_Parser_Tactic_Conv_rewrite;
extern lean_object* l_Lean_Parser_Tactic_rwRuleSeq;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_enterArg___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23;
static lean_object* l_Lean_Parser_Tactic_Conv_convIntro_________closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__34;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_change___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_lhs___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__27;
static lean_object* l_Lean_Parser_Tactic_Conv_convDone___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__3;
lean_object* l_Lean_Parser_Tactic_Conv_ext;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convTraceState___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_erewrite___closed__3;
lean_object* l_Lean_Parser_Tactic_Conv_convArgs;
static lean_object* l_Lean_Parser_Tactic_Conv_convErw_____closed__5;
lean_object* l_Lean_Parser_Tactic_Conv_conv_quot;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__1;
lean_object* l_Lean_Parser_Tactic_Conv_convRw__;
static lean_object* l_Lean_Parser_Tactic_Conv_convSkip___closed__4;
lean_object* l_Lean_Parser_Tactic_Conv_conv;
static lean_object* l_Lean_Parser_Tactic_Conv_erewrite___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_convTraceState___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_delta___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7;
lean_object* l_Lean_Parser_Tactic_Conv_congr;
extern lean_object* l_Lean_Parser_Tactic_simpLemma;
lean_object* l_Lean_Parser_Tactic_Conv_convLeft;
static lean_object* l_Lean_Parser_Tactic_Conv_delta___closed__3;
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convErw_____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__18;
static lean_object* l_Lean_Parser_Tactic_Conv_reduce___closed__3;
lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__5;
lean_object* l_Lean_Parser_Tactic_Conv_change;
static lean_object* l_Lean_Parser_Tactic_Conv_pattern___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_pattern___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__1;
lean_object* l_Lean_Parser_Tactic_Conv_simpMatch;
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_pattern___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__14;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__30;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__28;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_convErw_____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_convErw_____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__21;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_enterArg___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__23;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_pattern___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simpMatch___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convSkip___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_simpMatch___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_lhs;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simpMatch___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_erewrite___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_delta___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
lean_object* l_Lean_Parser_Tactic_Conv_convErw__;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_pattern___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__7;
lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic;
extern lean_object* l_Lean_Parser_Tactic_simpErase;
static lean_object* l_Lean_Parser_Tactic_Conv_convSkip___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__25;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__17;
static lean_object* l_Lean_Parser_Tactic_Conv_convArgs___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convLeft___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convDone___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__21;
lean_object* l_Lean_Parser_Tactic_Conv_reduce;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convDone___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_congr___closed__3;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_pattern;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8;
lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__29;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_rhs___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__11;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__22;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__33;
static lean_object* l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_rhs;
lean_object* l_Lean_Parser_Tactic_Conv_erewrite;
static lean_object* l_Lean_Parser_Tactic_Conv_whnf___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_delta___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convApply_____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_convRw_____closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_simp___closed__20;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__2;
static lean_object* l_Lean_Parser_Tactic_Conv_paren___closed__6;
static lean_object* l_Lean_Parser_Tactic_Conv_arg___closed__2;
lean_object* l_Lean_Parser_Tactic_Conv_delta;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20;
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_637_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_550_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_794_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_867_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_721_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_950_(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedConv___closed__1;
lean_object* l_Lean_Parser_Tactic_Conv_convApply__;
static lean_object* l_Lean_Parser_Tactic_Conv_convSeq___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__19;
static lean_object* l_Lean_Parser_Tactic_Conv_simpMatch___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1;
lean_object* l_Lean_Parser_Tactic_Conv_arg;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__5;
static lean_object* l_Lean_Parser_Tactic_Conv_convRight___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__14;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedConv___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__18;
lean_object* l_Lean_Parser_Tactic_Conv_nestedTacticCore;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__8;
static lean_object* l_Lean_Parser_Tactic_Conv_reduce___closed__1;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__3;
static lean_object* l_Lean_Parser_Tactic_Conv_conv___closed__9;
static lean_object* l_Lean_Parser_Tactic_Conv_ext___closed__12;
static lean_object* l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__9;
lean_object* l_Lean_Parser_Tactic_Conv_convDone;
static lean_object* l_Lean_Parser_Tactic_Conv_conv_quot___closed__15;
static lean_object* l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Term");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("quot");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__6;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("`(conv|");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__11;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("incQuotDepth");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conv");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__16;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__14;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__18;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__12;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__8;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__22;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_quot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__23;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Conv");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSeq1Indented");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("withPosition");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many1");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("group");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("colGe");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optional");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(";");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSeqBracketed");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("{");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__17;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("}");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1;
x_2 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSeq");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("orelse");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_convSeq___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq1Indented;
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__1;
x_2 = l_Lean_Parser_Tactic_Conv_convSeq___closed__2;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq___closed__5;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSeq() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conv ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__2;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" at ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__4;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ident");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__5;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__3;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" in ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__12;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("term");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__15;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__13;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__11;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" => ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__20;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__19;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__22;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__1;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__23;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_conv___closed__24;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("lhs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_lhs___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_lhs___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_lhs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_lhs___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rhs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_rhs___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_rhs___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rhs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_rhs___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("whnf");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_whnf___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_whnf___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_whnf___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_whnf___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_whnf() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_whnf___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_reduce___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("reduce");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_reduce___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_reduce___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_reduce___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_reduce___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_reduce___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_reduce___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_reduce___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_reduce() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_reduce___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("congr");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_congr___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_congr___closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_congr() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_congr___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arg");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_arg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arg ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("num");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_arg___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_arg___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_arg___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_arg___closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_arg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_arg___closed__9;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ext");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ext ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_ext___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("colGt");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_ext___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__9;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_ext___closed__6;
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_ext___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_ext___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_ext___closed__12;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_ext() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_ext___closed__13;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("change");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_change___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("change ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_change___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_change___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_change___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_change___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_change() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_change___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("delta");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_delta___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("delta ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_delta___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_delta___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_delta___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_delta___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_delta() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_delta___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pattern");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_pattern___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pattern ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_pattern___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_pattern___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_pattern___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_pattern___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_pattern() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_pattern___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rewrite");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rewrite ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_rewrite___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_rewrite___closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_rewrite___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_rewrite() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_rewrite___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("erewrite");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_erewrite___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("erewrite ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_erewrite___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_erewrite___closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_erewrite___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_erewrite___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_erewrite() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_erewrite___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("(");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("config");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__7;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__6;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" := ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__10;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__9;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__12;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__13;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("only ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__18() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__17;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__16;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__19;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__21;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_simpErase;
x_3 = l_Lean_Parser_Tactic_simpLemma;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_simpStar;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__23;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__25;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(",");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__24;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__27;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__26;
x_4 = 0;
x_5 = lean_alloc_ctor(10, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__22;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__28;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__30;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__29;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__31;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__32;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__20;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__33;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__34;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simp() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__35;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simpMatch");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_simpMatch___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simpMatch ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simpMatch___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_simpMatch___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_simpMatch___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_simpMatch() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_simpMatch___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nestedTacticCore");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tactic'");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSeq");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__5;
x_3 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__9;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__10;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nestedTactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5;
x_3 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedTactic() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nestedConv");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convSeqBracketed;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_nestedConv() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__3;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("paren");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_paren___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_paren___closed__3;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_paren___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__20;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_paren___closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_paren() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_paren___closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conv·._");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("·");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(".");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7;
x_3 = l_Lean_Parser_Tactic_Conv_convSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("null");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_Syntax_getHeadInfo_x3f(x_9);
lean_dec(x_9);
x_16 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_inc(x_14);
x_17 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
lean_inc(x_14);
x_19 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_21 = lean_array_push(x_20, x_17);
x_22 = lean_array_push(x_21, x_11);
x_23 = lean_array_push(x_22, x_19);
x_24 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_27 = lean_array_push(x_26, x_25);
x_28 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_29 = lean_array_push(x_27, x_28);
x_30 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_33 = lean_array_push(x_32, x_31);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
lean_inc(x_14);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_14);
lean_ctor_set(x_37, 1, x_36);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_14);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_array_push(x_20, x_39);
x_41 = lean_array_push(x_40, x_35);
x_42 = lean_array_push(x_41, x_37);
x_43 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_array_push(x_32, x_44);
x_46 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_12, 0, x_47);
return x_12;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_14);
x_48 = lean_ctor_get(x_15, 0);
lean_inc(x_48);
lean_dec(x_15);
x_49 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_push(x_20, x_50);
x_52 = lean_array_push(x_51, x_35);
x_53 = lean_array_push(x_52, x_37);
x_54 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_array_push(x_32, x_55);
x_57 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
lean_ctor_set(x_12, 0, x_58);
return x_12;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_59 = lean_ctor_get(x_12, 0);
x_60 = lean_ctor_get(x_12, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_12);
x_61 = l_Lean_Syntax_getHeadInfo_x3f(x_9);
lean_dec(x_9);
x_62 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_inc(x_59);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
lean_inc(x_59);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_67 = lean_array_push(x_66, x_63);
x_68 = lean_array_push(x_67, x_11);
x_69 = lean_array_push(x_68, x_65);
x_70 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_73 = lean_array_push(x_72, x_71);
x_74 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_75 = lean_array_push(x_73, x_74);
x_76 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_79 = lean_array_push(x_78, x_77);
x_80 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9;
lean_inc(x_59);
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_59);
lean_ctor_set(x_83, 1, x_82);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_84 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_59);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_push(x_66, x_85);
x_87 = lean_array_push(x_86, x_81);
x_88 = lean_array_push(x_87, x_83);
x_89 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = lean_array_push(x_78, x_90);
x_92 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_60);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_59);
x_95 = lean_ctor_get(x_61, 0);
lean_inc(x_95);
lean_dec(x_61);
x_96 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3;
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_push(x_66, x_97);
x_99 = lean_array_push(x_98, x_81);
x_100 = lean_array_push(x_99, x_83);
x_101 = l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2;
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_array_push(x_78, x_102);
x_104 = l_Lean_Parser_Tactic_Conv_nestedConv___closed__2;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_60);
return x_106;
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convRw_");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convRw_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rw ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convRw_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convRw_____closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convRw_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convRw_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRw__() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convRw_____closed__6;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_550_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convRw_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_16 = lean_array_push(x_15, x_14);
x_17 = lean_array_push(x_16, x_9);
x_18 = l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = l_Lean_Parser_Tactic_Conv_rewrite___closed__1;
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_25 = lean_array_push(x_24, x_23);
x_26 = lean_array_push(x_25, x_9);
x_27 = l_Lean_Parser_Tactic_Conv_rewrite___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convErw_");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convErw_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("erw ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convErw_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convErw_____closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convErw_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convErw_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convErw__() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convErw_____closed__6;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_637_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convErw_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Parser_Tactic_Conv_erewrite___closed__1;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_16 = lean_array_push(x_15, x_14);
x_17 = lean_array_push(x_16, x_9);
x_18 = l_Lean_Parser_Tactic_Conv_erewrite___closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = l_Lean_Parser_Tactic_Conv_erewrite___closed__1;
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_25 = lean_array_push(x_24, x_23);
x_26 = lean_array_push(x_25, x_9);
x_27 = l_Lean_Parser_Tactic_Conv_erewrite___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convArgs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convArgs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("args");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convArgs___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convArgs___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convArgs___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convArgs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convArgs___closed__5;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_721_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convArgs___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_Lean_Parser_Tactic_Conv_congr___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_Lean_Parser_Tactic_Conv_congr___closed__1;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_congr___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convLeft");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convLeft___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("left");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convLeft___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convLeft___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convLeft___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convLeft() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convLeft___closed__5;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_794_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convLeft___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_Lean_Parser_Tactic_Conv_lhs___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_Lean_Parser_Tactic_Conv_lhs___closed__1;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_lhs___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convRight");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convRight___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("right");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convRight___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convRight___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convRight___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convRight() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convRight___closed__5;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_867_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convRight___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_Lean_Parser_Tactic_Conv_rhs___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_Lean_Parser_Tactic_Conv_rhs___closed__1;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_rhs___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convIntro___");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("intro ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_ext___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convIntro______() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__6;
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_950_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convIntro_________closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Parser_Tactic_Conv_ext___closed__1;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_16 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4;
x_17 = l_Array_append___rarg(x_16, x_15);
x_18 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_21 = lean_array_push(x_20, x_14);
x_22 = lean_array_push(x_21, x_19);
x_23 = l_Lean_Parser_Tactic_Conv_ext___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_10, 0, x_24);
return x_10;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
x_27 = l_Lean_Parser_Tactic_Conv_ext___closed__1;
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_30 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4;
x_31 = l_Array_append___rarg(x_30, x_29);
x_32 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_35 = lean_array_push(x_34, x_28);
x_36 = lean_array_push(x_35, x_33);
x_37 = l_Lean_Parser_Tactic_Conv_ext___closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_26);
return x_39;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("enterArg");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_enterArg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_conv___closed__8;
x_3 = l_Lean_Parser_Tactic_Conv_arg___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_enterArg___closed__1;
x_2 = l_Lean_Parser_Tactic_Conv_enterArg___closed__2;
x_3 = l_Lean_Parser_Tactic_Conv_enterArg___closed__3;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_enterArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_enterArg___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convEnter[__]");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("enter ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__22;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_ext___closed__9;
x_3 = l_Lean_Parser_Tactic_Conv_enterArg;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__6;
x_2 = l_Lean_Parser_Tactic_Conv_simp___closed__27;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__26;
x_4 = 0;
x_5 = lean_alloc_ctor(11, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__5;
x_3 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__8;
x_3 = l_Lean_Parser_Tactic_Conv_simp___closed__31;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__9;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__10;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("enter");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("numLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = lean_unsigned_to_nat(1u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_Syntax_getNumArgs(x_9);
x_14 = lean_nat_dec_le(x_8, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_2);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Syntax_getArg(x_9, x_17);
x_19 = l_Lean_Parser_Tactic_Conv_enterArg___closed__2;
lean_inc(x_18);
x_20 = l_Lean_Syntax_isOfKind(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_2);
x_21 = lean_box(1);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_24 = lean_nat_sub(x_13, x_17);
lean_dec(x_13);
x_25 = l_Array_extract___rarg(x_23, x_8, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_10);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_Syntax_getArgs(x_26);
lean_dec(x_26);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_inc(x_30);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1;
lean_inc(x_30);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_30);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_Parser_Tactic_Conv_simp___closed__21;
lean_inc(x_30);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_38 = lean_array_push(x_37, x_18);
x_39 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_Lean_Parser_Tactic_Conv_simp___closed__30;
lean_inc(x_30);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_30);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2;
x_44 = lean_array_push(x_43, x_34);
x_45 = lean_array_push(x_44, x_36);
lean_inc(x_45);
x_46 = lean_array_push(x_45, x_40);
lean_inc(x_42);
x_47 = lean_array_push(x_46, x_42);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_4);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19;
lean_inc(x_30);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_30);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_push(x_37, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_39);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_54 = lean_array_push(x_53, x_48);
x_55 = lean_array_push(x_54, x_52);
x_56 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4;
x_59 = l_Array_append___rarg(x_58, x_27);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_39);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_array_push(x_45, x_60);
x_62 = lean_array_push(x_61, x_42);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_push(x_53, x_63);
x_65 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_66 = lean_array_push(x_64, x_65);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_56);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_push(x_53, x_57);
x_69 = lean_array_push(x_68, x_67);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_39);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_array_push(x_37, x_70);
x_72 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_array_push(x_37, x_73);
x_75 = l_Lean_Parser_Tactic_Conv_convSeq___closed__2;
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_30);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_80 = lean_array_push(x_79, x_32);
x_81 = lean_array_push(x_80, x_76);
x_82 = lean_array_push(x_81, x_78);
x_83 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_28, 0, x_84);
return x_28;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_85 = lean_ctor_get(x_28, 0);
x_86 = lean_ctor_get(x_28, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_28);
x_87 = l_Lean_Parser_Tactic_Conv_simp___closed__5;
lean_inc(x_85);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1;
lean_inc(x_85);
x_90 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_89);
x_91 = l_Lean_Parser_Tactic_Conv_simp___closed__21;
lean_inc(x_85);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_85);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_94 = lean_array_push(x_93, x_18);
x_95 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = l_Lean_Parser_Tactic_Conv_simp___closed__30;
lean_inc(x_85);
x_98 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_98, 0, x_85);
lean_ctor_set(x_98, 1, x_97);
x_99 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2;
x_100 = lean_array_push(x_99, x_90);
x_101 = lean_array_push(x_100, x_92);
lean_inc(x_101);
x_102 = lean_array_push(x_101, x_96);
lean_inc(x_98);
x_103 = lean_array_push(x_102, x_98);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_4);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19;
lean_inc(x_85);
x_106 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_106, 0, x_85);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_array_push(x_93, x_106);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_95);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_110 = lean_array_push(x_109, x_104);
x_111 = lean_array_push(x_110, x_108);
x_112 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
x_114 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4;
x_115 = l_Array_append___rarg(x_114, x_27);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_95);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_101, x_116);
x_118 = lean_array_push(x_117, x_98);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_4);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_array_push(x_109, x_119);
x_121 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_122 = lean_array_push(x_120, x_121);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_112);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_array_push(x_109, x_113);
x_125 = lean_array_push(x_124, x_123);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_95);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_array_push(x_93, x_126);
x_128 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6;
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = lean_array_push(x_93, x_129);
x_131 = l_Lean_Parser_Tactic_Conv_convSeq___closed__2;
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_130);
x_133 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__19;
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_85);
lean_ctor_set(x_134, 1, x_133);
x_135 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_136 = lean_array_push(x_135, x_88);
x_137 = lean_array_push(x_136, x_132);
x_138 = lean_array_push(x_137, x_134);
x_139 = l_Lean_Parser_Tactic_Conv_paren___closed__2;
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_86);
return x_141;
}
}
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_142 = lean_unsigned_to_nat(0u);
x_143 = l_Lean_Syntax_getArg(x_9, x_142);
lean_dec(x_9);
x_144 = l_Lean_Parser_Tactic_Conv_enterArg___closed__2;
lean_inc(x_143);
x_145 = l_Lean_Syntax_isOfKind(x_143, x_144);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_143);
lean_dec(x_2);
x_146 = lean_box(1);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_3);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_148 = l_Lean_Syntax_getArg(x_143, x_142);
lean_dec(x_143);
x_149 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__4;
lean_inc(x_148);
x_150 = l_Lean_Syntax_isOfKind(x_148, x_149);
if (x_150 == 0)
{
lean_object* x_151; uint8_t x_152; 
x_151 = l_Lean_Parser_Tactic_Conv_conv___closed__7;
lean_inc(x_148);
x_152 = l_Lean_Syntax_isOfKind(x_148, x_151);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_148);
lean_dec(x_2);
x_153 = lean_box(1);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_3);
return x_154;
}
else
{
lean_object* x_155; uint8_t x_156; 
x_155 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = l_Lean_Parser_Tactic_Conv_ext___closed__1;
x_159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
x_160 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_161 = lean_array_push(x_160, x_148);
x_162 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_165 = lean_array_push(x_164, x_159);
x_166 = lean_array_push(x_165, x_163);
x_167 = l_Lean_Parser_Tactic_Conv_ext___closed__2;
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
lean_ctor_set(x_155, 0, x_168);
return x_155;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_169 = lean_ctor_get(x_155, 0);
x_170 = lean_ctor_get(x_155, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_155);
x_171 = l_Lean_Parser_Tactic_Conv_ext___closed__1;
x_172 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_172, 0, x_169);
lean_ctor_set(x_172, 1, x_171);
x_173 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_174 = lean_array_push(x_173, x_148);
x_175 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
x_177 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_178 = lean_array_push(x_177, x_172);
x_179 = lean_array_push(x_178, x_176);
x_180 = l_Lean_Parser_Tactic_Conv_ext___closed__2;
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_179);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_170);
return x_182;
}
}
}
else
{
lean_object* x_183; uint8_t x_184; 
x_183 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_184 = !lean_is_exclusive(x_183);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_185 = lean_ctor_get(x_183, 0);
x_186 = l_Lean_Parser_Tactic_Conv_arg___closed__1;
x_187 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
x_188 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_189 = lean_array_push(x_188, x_187);
x_190 = lean_array_push(x_189, x_148);
x_191 = l_Lean_Parser_Tactic_Conv_arg___closed__2;
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_190);
lean_ctor_set(x_183, 0, x_192);
return x_183;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_193 = lean_ctor_get(x_183, 0);
x_194 = lean_ctor_get(x_183, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_183);
x_195 = l_Lean_Parser_Tactic_Conv_arg___closed__1;
x_196 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_195);
x_197 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_198 = lean_array_push(x_197, x_196);
x_199 = lean_array_push(x_198, x_148);
x_200 = l_Lean_Parser_Tactic_Conv_arg___closed__2;
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_199);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_194);
return x_202;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convSkip");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convSkip___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("skip");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSkip___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convSkip___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convSkip___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convSkip() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convSkip___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("=>");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSeq1Indented");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticRfl");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rfl");
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convSkip___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7;
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_18 = lean_array_push(x_17, x_16);
x_19 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6;
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_24 = lean_array_push(x_22, x_23);
x_25 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_17, x_26);
x_28 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_array_push(x_17, x_29);
x_31 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_push(x_17, x_32);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_37 = lean_array_push(x_36, x_12);
x_38 = lean_array_push(x_37, x_14);
x_39 = lean_array_push(x_38, x_35);
x_40 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_8, 0, x_41);
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_42 = lean_ctor_get(x_8, 0);
x_43 = lean_ctor_get(x_8, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_8);
x_44 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
lean_inc(x_42);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_42);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7;
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_51 = lean_array_push(x_50, x_49);
x_52 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_55 = lean_array_push(x_54, x_53);
x_56 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_57 = lean_array_push(x_55, x_56);
x_58 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_array_push(x_50, x_59);
x_61 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = lean_array_push(x_50, x_62);
x_64 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_array_push(x_50, x_65);
x_67 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_70 = lean_array_push(x_69, x_45);
x_71 = lean_array_push(x_70, x_47);
x_72 = lean_array_push(x_71, x_68);
x_73 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_43);
return x_75;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convDone___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convDone");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convDone___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convDone___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convDone___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("done");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convDone___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convDone___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convDone___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convDone___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convDone___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convDone() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convDone___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_convDone___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convDone___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_convDone___closed__3;
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_18 = lean_array_push(x_17, x_16);
x_19 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1;
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_24 = lean_array_push(x_22, x_23);
x_25 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_17, x_26);
x_28 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_array_push(x_17, x_29);
x_31 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_push(x_17, x_32);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_37 = lean_array_push(x_36, x_12);
x_38 = lean_array_push(x_37, x_14);
x_39 = lean_array_push(x_38, x_35);
x_40 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_8, 0, x_41);
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_42 = lean_ctor_get(x_8, 0);
x_43 = lean_ctor_get(x_8, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_8);
x_44 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3;
lean_inc(x_42);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_42);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Parser_Tactic_Conv_convDone___closed__3;
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_51 = lean_array_push(x_50, x_49);
x_52 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_55 = lean_array_push(x_54, x_53);
x_56 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_57 = lean_array_push(x_55, x_56);
x_58 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_array_push(x_50, x_59);
x_61 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = lean_array_push(x_50, x_62);
x_64 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_array_push(x_50, x_65);
x_67 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_70 = lean_array_push(x_69, x_45);
x_71 = lean_array_push(x_70, x_47);
x_72 = lean_array_push(x_71, x_68);
x_73 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_43);
return x_75;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convTraceState");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("traceState");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convTraceState() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__3;
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_18 = lean_array_push(x_17, x_16);
x_19 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1;
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_24 = lean_array_push(x_22, x_23);
x_25 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_17, x_26);
x_28 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_array_push(x_17, x_29);
x_31 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_push(x_17, x_32);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_37 = lean_array_push(x_36, x_12);
x_38 = lean_array_push(x_37, x_14);
x_39 = lean_array_push(x_38, x_35);
x_40 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_8, 0, x_41);
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_42 = lean_ctor_get(x_8, 0);
x_43 = lean_ctor_get(x_8, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_8);
x_44 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3;
lean_inc(x_42);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_42);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Parser_Tactic_Conv_convTraceState___closed__3;
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_51 = lean_array_push(x_50, x_49);
x_52 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_55 = lean_array_push(x_54, x_53);
x_56 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_57 = lean_array_push(x_55, x_56);
x_58 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_array_push(x_50, x_59);
x_61 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = lean_array_push(x_50, x_62);
x_64 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_array_push(x_50, x_65);
x_67 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_70 = lean_array_push(x_69, x_45);
x_71 = lean_array_push(x_70, x_47);
x_72 = lean_array_push(x_71, x_68);
x_73 = l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_43);
return x_75;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("convApply_");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4;
x_2 = l_Lean_Parser_Tactic_Conv_convApply_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("apply ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convApply_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_conv_quot___closed__10;
x_2 = l_Lean_Parser_Tactic_Conv_convApply_____closed__4;
x_3 = l_Lean_Parser_Tactic_Conv_conv___closed__16;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_Conv_convApply_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Tactic_Conv_convApply_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_convApply__() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_Conv_convApply_____closed__6;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("apply");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2;
x_2 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Parser_Tactic_Conv_convApply_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
lean_inc(x_12);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_12);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1;
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_array_push(x_20, x_9);
x_22 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_array_push(x_19, x_23);
x_25 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_26 = lean_array_push(x_24, x_25);
x_27 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_30 = lean_array_push(x_29, x_28);
x_31 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_push(x_29, x_32);
x_34 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_array_push(x_29, x_35);
x_37 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_40 = lean_array_push(x_39, x_14);
x_41 = lean_array_push(x_40, x_16);
x_42 = lean_array_push(x_41, x_38);
x_43 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
lean_ctor_set(x_10, 0, x_44);
return x_10;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_45 = lean_ctor_get(x_10, 0);
x_46 = lean_ctor_get(x_10, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_10);
x_47 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3;
lean_inc(x_45);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1;
lean_inc(x_45);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1;
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_45);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6;
x_54 = lean_array_push(x_53, x_52);
x_55 = lean_array_push(x_54, x_9);
x_56 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_array_push(x_53, x_57);
x_59 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5;
x_60 = lean_array_push(x_58, x_59);
x_61 = l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12;
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7;
x_64 = lean_array_push(x_63, x_62);
x_65 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2;
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = lean_array_push(x_63, x_66);
x_68 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4;
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_array_push(x_63, x_69);
x_71 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2;
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3;
x_74 = lean_array_push(x_73, x_48);
x_75 = lean_array_push(x_74, x_50);
x_76 = lean_array_push(x_75, x_72);
x_77 = l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2;
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_46);
return x_79;
}
}
}
}
lean_object* initialize_Init_NotationExtra(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Conv(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_NotationExtra(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__1 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__1);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__2 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__2);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__3 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__3);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__4 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__4);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__5 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__5);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__6 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__6);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__7 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__7);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__8 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__8);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__9 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__9);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__10 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__10);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__11 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__11);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__12 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__12);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__13 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__13);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__14 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__14);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__15 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__15);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__16 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__16);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__17 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__17);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__18 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__18);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__19 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__19);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__20 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__20);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__21 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__21);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__22 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__22);
l_Lean_Parser_Tactic_Conv_conv_quot___closed__23 = _init_l_Lean_Parser_Tactic_Conv_conv_quot___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot___closed__23);
l_Lean_Parser_Tactic_Conv_conv_quot = _init_l_Lean_Parser_Tactic_Conv_conv_quot();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_quot);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__1);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__2);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__3);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__4);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__5);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__6);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__7);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__8);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__9);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__10);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__11);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__12);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__13);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__14);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__15);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__16);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__17);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__18);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__19);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__20);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__21);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__22);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__23);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__24);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__25);
l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26 = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented___closed__26);
l_Lean_Parser_Tactic_Conv_convSeq1Indented = _init_l_Lean_Parser_Tactic_Conv_convSeq1Indented();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq1Indented);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__1);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__2);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__3);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__4);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__5);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__6);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__7);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__8);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__9);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__10);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__11);
l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12 = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed___closed__12);
l_Lean_Parser_Tactic_Conv_convSeqBracketed = _init_l_Lean_Parser_Tactic_Conv_convSeqBracketed();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeqBracketed);
l_Lean_Parser_Tactic_Conv_convSeq___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__1);
l_Lean_Parser_Tactic_Conv_convSeq___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__2);
l_Lean_Parser_Tactic_Conv_convSeq___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__3);
l_Lean_Parser_Tactic_Conv_convSeq___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__4);
l_Lean_Parser_Tactic_Conv_convSeq___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__5);
l_Lean_Parser_Tactic_Conv_convSeq___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convSeq___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq___closed__6);
l_Lean_Parser_Tactic_Conv_convSeq = _init_l_Lean_Parser_Tactic_Conv_convSeq();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSeq);
l_Lean_Parser_Tactic_Conv_conv___closed__1 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__1);
l_Lean_Parser_Tactic_Conv_conv___closed__2 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__2);
l_Lean_Parser_Tactic_Conv_conv___closed__3 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__3);
l_Lean_Parser_Tactic_Conv_conv___closed__4 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__4);
l_Lean_Parser_Tactic_Conv_conv___closed__5 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__5);
l_Lean_Parser_Tactic_Conv_conv___closed__6 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__6);
l_Lean_Parser_Tactic_Conv_conv___closed__7 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__7);
l_Lean_Parser_Tactic_Conv_conv___closed__8 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__8);
l_Lean_Parser_Tactic_Conv_conv___closed__9 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__9);
l_Lean_Parser_Tactic_Conv_conv___closed__10 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__10);
l_Lean_Parser_Tactic_Conv_conv___closed__11 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__11);
l_Lean_Parser_Tactic_Conv_conv___closed__12 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__12);
l_Lean_Parser_Tactic_Conv_conv___closed__13 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__13);
l_Lean_Parser_Tactic_Conv_conv___closed__14 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__14);
l_Lean_Parser_Tactic_Conv_conv___closed__15 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__15);
l_Lean_Parser_Tactic_Conv_conv___closed__16 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__16);
l_Lean_Parser_Tactic_Conv_conv___closed__17 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__17);
l_Lean_Parser_Tactic_Conv_conv___closed__18 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__18);
l_Lean_Parser_Tactic_Conv_conv___closed__19 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__19);
l_Lean_Parser_Tactic_Conv_conv___closed__20 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__20);
l_Lean_Parser_Tactic_Conv_conv___closed__21 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__21);
l_Lean_Parser_Tactic_Conv_conv___closed__22 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__22);
l_Lean_Parser_Tactic_Conv_conv___closed__23 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__23);
l_Lean_Parser_Tactic_Conv_conv___closed__24 = _init_l_Lean_Parser_Tactic_Conv_conv___closed__24();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv___closed__24);
l_Lean_Parser_Tactic_Conv_conv = _init_l_Lean_Parser_Tactic_Conv_conv();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv);
l_Lean_Parser_Tactic_Conv_lhs___closed__1 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__1);
l_Lean_Parser_Tactic_Conv_lhs___closed__2 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__2);
l_Lean_Parser_Tactic_Conv_lhs___closed__3 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__3);
l_Lean_Parser_Tactic_Conv_lhs___closed__4 = _init_l_Lean_Parser_Tactic_Conv_lhs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs___closed__4);
l_Lean_Parser_Tactic_Conv_lhs = _init_l_Lean_Parser_Tactic_Conv_lhs();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_lhs);
l_Lean_Parser_Tactic_Conv_rhs___closed__1 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__1);
l_Lean_Parser_Tactic_Conv_rhs___closed__2 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__2);
l_Lean_Parser_Tactic_Conv_rhs___closed__3 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__3);
l_Lean_Parser_Tactic_Conv_rhs___closed__4 = _init_l_Lean_Parser_Tactic_Conv_rhs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs___closed__4);
l_Lean_Parser_Tactic_Conv_rhs = _init_l_Lean_Parser_Tactic_Conv_rhs();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rhs);
l_Lean_Parser_Tactic_Conv_whnf___closed__1 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__1);
l_Lean_Parser_Tactic_Conv_whnf___closed__2 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__2);
l_Lean_Parser_Tactic_Conv_whnf___closed__3 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__3);
l_Lean_Parser_Tactic_Conv_whnf___closed__4 = _init_l_Lean_Parser_Tactic_Conv_whnf___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf___closed__4);
l_Lean_Parser_Tactic_Conv_whnf = _init_l_Lean_Parser_Tactic_Conv_whnf();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_whnf);
l_Lean_Parser_Tactic_Conv_reduce___closed__1 = _init_l_Lean_Parser_Tactic_Conv_reduce___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_reduce___closed__1);
l_Lean_Parser_Tactic_Conv_reduce___closed__2 = _init_l_Lean_Parser_Tactic_Conv_reduce___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_reduce___closed__2);
l_Lean_Parser_Tactic_Conv_reduce___closed__3 = _init_l_Lean_Parser_Tactic_Conv_reduce___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_reduce___closed__3);
l_Lean_Parser_Tactic_Conv_reduce___closed__4 = _init_l_Lean_Parser_Tactic_Conv_reduce___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_reduce___closed__4);
l_Lean_Parser_Tactic_Conv_reduce = _init_l_Lean_Parser_Tactic_Conv_reduce();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_reduce);
l_Lean_Parser_Tactic_Conv_congr___closed__1 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__1);
l_Lean_Parser_Tactic_Conv_congr___closed__2 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__2);
l_Lean_Parser_Tactic_Conv_congr___closed__3 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__3);
l_Lean_Parser_Tactic_Conv_congr___closed__4 = _init_l_Lean_Parser_Tactic_Conv_congr___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr___closed__4);
l_Lean_Parser_Tactic_Conv_congr = _init_l_Lean_Parser_Tactic_Conv_congr();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_congr);
l_Lean_Parser_Tactic_Conv_arg___closed__1 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__1);
l_Lean_Parser_Tactic_Conv_arg___closed__2 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__2);
l_Lean_Parser_Tactic_Conv_arg___closed__3 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__3);
l_Lean_Parser_Tactic_Conv_arg___closed__4 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__4);
l_Lean_Parser_Tactic_Conv_arg___closed__5 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__5);
l_Lean_Parser_Tactic_Conv_arg___closed__6 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__6);
l_Lean_Parser_Tactic_Conv_arg___closed__7 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__7);
l_Lean_Parser_Tactic_Conv_arg___closed__8 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__8);
l_Lean_Parser_Tactic_Conv_arg___closed__9 = _init_l_Lean_Parser_Tactic_Conv_arg___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg___closed__9);
l_Lean_Parser_Tactic_Conv_arg = _init_l_Lean_Parser_Tactic_Conv_arg();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_arg);
l_Lean_Parser_Tactic_Conv_ext___closed__1 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__1);
l_Lean_Parser_Tactic_Conv_ext___closed__2 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__2);
l_Lean_Parser_Tactic_Conv_ext___closed__3 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__3);
l_Lean_Parser_Tactic_Conv_ext___closed__4 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__4);
l_Lean_Parser_Tactic_Conv_ext___closed__5 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__5);
l_Lean_Parser_Tactic_Conv_ext___closed__6 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__6);
l_Lean_Parser_Tactic_Conv_ext___closed__7 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__7);
l_Lean_Parser_Tactic_Conv_ext___closed__8 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__8);
l_Lean_Parser_Tactic_Conv_ext___closed__9 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__9);
l_Lean_Parser_Tactic_Conv_ext___closed__10 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__10);
l_Lean_Parser_Tactic_Conv_ext___closed__11 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__11);
l_Lean_Parser_Tactic_Conv_ext___closed__12 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__12);
l_Lean_Parser_Tactic_Conv_ext___closed__13 = _init_l_Lean_Parser_Tactic_Conv_ext___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext___closed__13);
l_Lean_Parser_Tactic_Conv_ext = _init_l_Lean_Parser_Tactic_Conv_ext();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_ext);
l_Lean_Parser_Tactic_Conv_change___closed__1 = _init_l_Lean_Parser_Tactic_Conv_change___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__1);
l_Lean_Parser_Tactic_Conv_change___closed__2 = _init_l_Lean_Parser_Tactic_Conv_change___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__2);
l_Lean_Parser_Tactic_Conv_change___closed__3 = _init_l_Lean_Parser_Tactic_Conv_change___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__3);
l_Lean_Parser_Tactic_Conv_change___closed__4 = _init_l_Lean_Parser_Tactic_Conv_change___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__4);
l_Lean_Parser_Tactic_Conv_change___closed__5 = _init_l_Lean_Parser_Tactic_Conv_change___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__5);
l_Lean_Parser_Tactic_Conv_change___closed__6 = _init_l_Lean_Parser_Tactic_Conv_change___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change___closed__6);
l_Lean_Parser_Tactic_Conv_change = _init_l_Lean_Parser_Tactic_Conv_change();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_change);
l_Lean_Parser_Tactic_Conv_delta___closed__1 = _init_l_Lean_Parser_Tactic_Conv_delta___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta___closed__1);
l_Lean_Parser_Tactic_Conv_delta___closed__2 = _init_l_Lean_Parser_Tactic_Conv_delta___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta___closed__2);
l_Lean_Parser_Tactic_Conv_delta___closed__3 = _init_l_Lean_Parser_Tactic_Conv_delta___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta___closed__3);
l_Lean_Parser_Tactic_Conv_delta___closed__4 = _init_l_Lean_Parser_Tactic_Conv_delta___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta___closed__4);
l_Lean_Parser_Tactic_Conv_delta___closed__5 = _init_l_Lean_Parser_Tactic_Conv_delta___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta___closed__5);
l_Lean_Parser_Tactic_Conv_delta___closed__6 = _init_l_Lean_Parser_Tactic_Conv_delta___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta___closed__6);
l_Lean_Parser_Tactic_Conv_delta = _init_l_Lean_Parser_Tactic_Conv_delta();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_delta);
l_Lean_Parser_Tactic_Conv_pattern___closed__1 = _init_l_Lean_Parser_Tactic_Conv_pattern___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern___closed__1);
l_Lean_Parser_Tactic_Conv_pattern___closed__2 = _init_l_Lean_Parser_Tactic_Conv_pattern___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern___closed__2);
l_Lean_Parser_Tactic_Conv_pattern___closed__3 = _init_l_Lean_Parser_Tactic_Conv_pattern___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern___closed__3);
l_Lean_Parser_Tactic_Conv_pattern___closed__4 = _init_l_Lean_Parser_Tactic_Conv_pattern___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern___closed__4);
l_Lean_Parser_Tactic_Conv_pattern___closed__5 = _init_l_Lean_Parser_Tactic_Conv_pattern___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern___closed__5);
l_Lean_Parser_Tactic_Conv_pattern___closed__6 = _init_l_Lean_Parser_Tactic_Conv_pattern___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern___closed__6);
l_Lean_Parser_Tactic_Conv_pattern = _init_l_Lean_Parser_Tactic_Conv_pattern();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_pattern);
l_Lean_Parser_Tactic_Conv_rewrite___closed__1 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__1);
l_Lean_Parser_Tactic_Conv_rewrite___closed__2 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__2);
l_Lean_Parser_Tactic_Conv_rewrite___closed__3 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__3);
l_Lean_Parser_Tactic_Conv_rewrite___closed__4 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__4);
l_Lean_Parser_Tactic_Conv_rewrite___closed__5 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__5);
l_Lean_Parser_Tactic_Conv_rewrite___closed__6 = _init_l_Lean_Parser_Tactic_Conv_rewrite___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite___closed__6);
l_Lean_Parser_Tactic_Conv_rewrite = _init_l_Lean_Parser_Tactic_Conv_rewrite();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_rewrite);
l_Lean_Parser_Tactic_Conv_erewrite___closed__1 = _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite___closed__1);
l_Lean_Parser_Tactic_Conv_erewrite___closed__2 = _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite___closed__2);
l_Lean_Parser_Tactic_Conv_erewrite___closed__3 = _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite___closed__3);
l_Lean_Parser_Tactic_Conv_erewrite___closed__4 = _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite___closed__4);
l_Lean_Parser_Tactic_Conv_erewrite___closed__5 = _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite___closed__5);
l_Lean_Parser_Tactic_Conv_erewrite___closed__6 = _init_l_Lean_Parser_Tactic_Conv_erewrite___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite___closed__6);
l_Lean_Parser_Tactic_Conv_erewrite = _init_l_Lean_Parser_Tactic_Conv_erewrite();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_erewrite);
l_Lean_Parser_Tactic_Conv_simp___closed__1 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__1);
l_Lean_Parser_Tactic_Conv_simp___closed__2 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__2);
l_Lean_Parser_Tactic_Conv_simp___closed__3 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__3);
l_Lean_Parser_Tactic_Conv_simp___closed__4 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__4);
l_Lean_Parser_Tactic_Conv_simp___closed__5 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__5);
l_Lean_Parser_Tactic_Conv_simp___closed__6 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__6);
l_Lean_Parser_Tactic_Conv_simp___closed__7 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__7);
l_Lean_Parser_Tactic_Conv_simp___closed__8 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__8);
l_Lean_Parser_Tactic_Conv_simp___closed__9 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__9);
l_Lean_Parser_Tactic_Conv_simp___closed__10 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__10);
l_Lean_Parser_Tactic_Conv_simp___closed__11 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__11);
l_Lean_Parser_Tactic_Conv_simp___closed__12 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__12);
l_Lean_Parser_Tactic_Conv_simp___closed__13 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__13);
l_Lean_Parser_Tactic_Conv_simp___closed__14 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__14();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__14);
l_Lean_Parser_Tactic_Conv_simp___closed__15 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__15();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__15);
l_Lean_Parser_Tactic_Conv_simp___closed__16 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__16();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__16);
l_Lean_Parser_Tactic_Conv_simp___closed__17 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__17();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__17);
l_Lean_Parser_Tactic_Conv_simp___closed__18 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__18();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__18);
l_Lean_Parser_Tactic_Conv_simp___closed__19 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__19();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__19);
l_Lean_Parser_Tactic_Conv_simp___closed__20 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__20();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__20);
l_Lean_Parser_Tactic_Conv_simp___closed__21 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__21();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__21);
l_Lean_Parser_Tactic_Conv_simp___closed__22 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__22();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__22);
l_Lean_Parser_Tactic_Conv_simp___closed__23 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__23();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__23);
l_Lean_Parser_Tactic_Conv_simp___closed__24 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__24();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__24);
l_Lean_Parser_Tactic_Conv_simp___closed__25 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__25();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__25);
l_Lean_Parser_Tactic_Conv_simp___closed__26 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__26();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__26);
l_Lean_Parser_Tactic_Conv_simp___closed__27 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__27();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__27);
l_Lean_Parser_Tactic_Conv_simp___closed__28 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__28();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__28);
l_Lean_Parser_Tactic_Conv_simp___closed__29 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__29();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__29);
l_Lean_Parser_Tactic_Conv_simp___closed__30 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__30();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__30);
l_Lean_Parser_Tactic_Conv_simp___closed__31 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__31();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__31);
l_Lean_Parser_Tactic_Conv_simp___closed__32 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__32();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__32);
l_Lean_Parser_Tactic_Conv_simp___closed__33 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__33();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__33);
l_Lean_Parser_Tactic_Conv_simp___closed__34 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__34();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__34);
l_Lean_Parser_Tactic_Conv_simp___closed__35 = _init_l_Lean_Parser_Tactic_Conv_simp___closed__35();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp___closed__35);
l_Lean_Parser_Tactic_Conv_simp = _init_l_Lean_Parser_Tactic_Conv_simp();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simp);
l_Lean_Parser_Tactic_Conv_simpMatch___closed__1 = _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simpMatch___closed__1);
l_Lean_Parser_Tactic_Conv_simpMatch___closed__2 = _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simpMatch___closed__2);
l_Lean_Parser_Tactic_Conv_simpMatch___closed__3 = _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simpMatch___closed__3);
l_Lean_Parser_Tactic_Conv_simpMatch___closed__4 = _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simpMatch___closed__4);
l_Lean_Parser_Tactic_Conv_simpMatch___closed__5 = _init_l_Lean_Parser_Tactic_Conv_simpMatch___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simpMatch___closed__5);
l_Lean_Parser_Tactic_Conv_simpMatch = _init_l_Lean_Parser_Tactic_Conv_simpMatch();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_simpMatch);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__1 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__1);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__2);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__3);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__4 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__4);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__5 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__5);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__6);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__7 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__7);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__8);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__9 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__9);
l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__10 = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore___closed__10);
l_Lean_Parser_Tactic_Conv_nestedTacticCore = _init_l_Lean_Parser_Tactic_Conv_nestedTacticCore();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTacticCore);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__1);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__2);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__3);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__4);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__5);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__6);
l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7 = _init_l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic___closed__7);
l_Lean_Parser_Tactic_Conv_nestedTactic = _init_l_Lean_Parser_Tactic_Conv_nestedTactic();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedTactic);
l_Lean_Parser_Tactic_Conv_nestedConv___closed__1 = _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv___closed__1);
l_Lean_Parser_Tactic_Conv_nestedConv___closed__2 = _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv___closed__2);
l_Lean_Parser_Tactic_Conv_nestedConv___closed__3 = _init_l_Lean_Parser_Tactic_Conv_nestedConv___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv___closed__3);
l_Lean_Parser_Tactic_Conv_nestedConv = _init_l_Lean_Parser_Tactic_Conv_nestedConv();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_nestedConv);
l_Lean_Parser_Tactic_Conv_paren___closed__1 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__1);
l_Lean_Parser_Tactic_Conv_paren___closed__2 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__2);
l_Lean_Parser_Tactic_Conv_paren___closed__3 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__3);
l_Lean_Parser_Tactic_Conv_paren___closed__4 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__4);
l_Lean_Parser_Tactic_Conv_paren___closed__5 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__5);
l_Lean_Parser_Tactic_Conv_paren___closed__6 = _init_l_Lean_Parser_Tactic_Conv_paren___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren___closed__6);
l_Lean_Parser_Tactic_Conv_paren = _init_l_Lean_Parser_Tactic_Conv_paren();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_paren);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__1);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__2);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__3);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__4);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__5);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__6);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__7);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__8);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9 = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e_____closed__9);
l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__ = _init_l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_conv_xb7_x2e__);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__1);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__2);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__3);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__4);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__5);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__6);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_421____closed__7);
l_Lean_Parser_Tactic_Conv_convRw_____closed__1 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__1);
l_Lean_Parser_Tactic_Conv_convRw_____closed__2 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__2);
l_Lean_Parser_Tactic_Conv_convRw_____closed__3 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__3);
l_Lean_Parser_Tactic_Conv_convRw_____closed__4 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__4);
l_Lean_Parser_Tactic_Conv_convRw_____closed__5 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__5);
l_Lean_Parser_Tactic_Conv_convRw_____closed__6 = _init_l_Lean_Parser_Tactic_Conv_convRw_____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw_____closed__6);
l_Lean_Parser_Tactic_Conv_convRw__ = _init_l_Lean_Parser_Tactic_Conv_convRw__();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRw__);
l_Lean_Parser_Tactic_Conv_convErw_____closed__1 = _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw_____closed__1);
l_Lean_Parser_Tactic_Conv_convErw_____closed__2 = _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw_____closed__2);
l_Lean_Parser_Tactic_Conv_convErw_____closed__3 = _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw_____closed__3);
l_Lean_Parser_Tactic_Conv_convErw_____closed__4 = _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw_____closed__4);
l_Lean_Parser_Tactic_Conv_convErw_____closed__5 = _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw_____closed__5);
l_Lean_Parser_Tactic_Conv_convErw_____closed__6 = _init_l_Lean_Parser_Tactic_Conv_convErw_____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw_____closed__6);
l_Lean_Parser_Tactic_Conv_convErw__ = _init_l_Lean_Parser_Tactic_Conv_convErw__();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convErw__);
l_Lean_Parser_Tactic_Conv_convArgs___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__1);
l_Lean_Parser_Tactic_Conv_convArgs___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__2);
l_Lean_Parser_Tactic_Conv_convArgs___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__3);
l_Lean_Parser_Tactic_Conv_convArgs___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__4);
l_Lean_Parser_Tactic_Conv_convArgs___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convArgs___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs___closed__5);
l_Lean_Parser_Tactic_Conv_convArgs = _init_l_Lean_Parser_Tactic_Conv_convArgs();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convArgs);
l_Lean_Parser_Tactic_Conv_convLeft___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__1);
l_Lean_Parser_Tactic_Conv_convLeft___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__2);
l_Lean_Parser_Tactic_Conv_convLeft___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__3);
l_Lean_Parser_Tactic_Conv_convLeft___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__4);
l_Lean_Parser_Tactic_Conv_convLeft___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convLeft___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft___closed__5);
l_Lean_Parser_Tactic_Conv_convLeft = _init_l_Lean_Parser_Tactic_Conv_convLeft();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convLeft);
l_Lean_Parser_Tactic_Conv_convRight___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__1);
l_Lean_Parser_Tactic_Conv_convRight___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__2);
l_Lean_Parser_Tactic_Conv_convRight___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__3);
l_Lean_Parser_Tactic_Conv_convRight___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__4);
l_Lean_Parser_Tactic_Conv_convRight___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convRight___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight___closed__5);
l_Lean_Parser_Tactic_Conv_convRight = _init_l_Lean_Parser_Tactic_Conv_convRight();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convRight);
l_Lean_Parser_Tactic_Conv_convIntro_________closed__1 = _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro_________closed__1);
l_Lean_Parser_Tactic_Conv_convIntro_________closed__2 = _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro_________closed__2);
l_Lean_Parser_Tactic_Conv_convIntro_________closed__3 = _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro_________closed__3);
l_Lean_Parser_Tactic_Conv_convIntro_________closed__4 = _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro_________closed__4);
l_Lean_Parser_Tactic_Conv_convIntro_________closed__5 = _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro_________closed__5);
l_Lean_Parser_Tactic_Conv_convIntro_________closed__6 = _init_l_Lean_Parser_Tactic_Conv_convIntro_________closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro_________closed__6);
l_Lean_Parser_Tactic_Conv_convIntro______ = _init_l_Lean_Parser_Tactic_Conv_convIntro______();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convIntro______);
l_Lean_Parser_Tactic_Conv_enterArg___closed__1 = _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_enterArg___closed__1);
l_Lean_Parser_Tactic_Conv_enterArg___closed__2 = _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_enterArg___closed__2);
l_Lean_Parser_Tactic_Conv_enterArg___closed__3 = _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_enterArg___closed__3);
l_Lean_Parser_Tactic_Conv_enterArg___closed__4 = _init_l_Lean_Parser_Tactic_Conv_enterArg___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_enterArg___closed__4);
l_Lean_Parser_Tactic_Conv_enterArg = _init_l_Lean_Parser_Tactic_Conv_enterArg();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_enterArg);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__1);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__2);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__3);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__4);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__5);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__6 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__6);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__7 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__7);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__8 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__8);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__9 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__9);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__10 = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d___closed__10);
l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d = _init_l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convEnter_x5b_____x5d);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__1);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__2);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__3 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__3);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__4 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1069____closed__4);
l_Lean_Parser_Tactic_Conv_convSkip___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSkip___closed__1);
l_Lean_Parser_Tactic_Conv_convSkip___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSkip___closed__2);
l_Lean_Parser_Tactic_Conv_convSkip___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSkip___closed__3);
l_Lean_Parser_Tactic_Conv_convSkip___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSkip___closed__4);
l_Lean_Parser_Tactic_Conv_convSkip___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convSkip___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSkip___closed__5);
l_Lean_Parser_Tactic_Conv_convSkip = _init_l_Lean_Parser_Tactic_Conv_convSkip();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convSkip);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__1);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__2);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__3 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__3);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__4);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__5 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__5);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__6);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1499____closed__7);
l_Lean_Parser_Tactic_Conv_convDone___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convDone___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convDone___closed__1);
l_Lean_Parser_Tactic_Conv_convDone___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convDone___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convDone___closed__2);
l_Lean_Parser_Tactic_Conv_convDone___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convDone___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convDone___closed__3);
l_Lean_Parser_Tactic_Conv_convDone___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convDone___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convDone___closed__4);
l_Lean_Parser_Tactic_Conv_convDone___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convDone___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convDone___closed__5);
l_Lean_Parser_Tactic_Conv_convDone = _init_l_Lean_Parser_Tactic_Conv_convDone();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convDone);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1610____closed__1);
l_Lean_Parser_Tactic_Conv_convTraceState___closed__1 = _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convTraceState___closed__1);
l_Lean_Parser_Tactic_Conv_convTraceState___closed__2 = _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convTraceState___closed__2);
l_Lean_Parser_Tactic_Conv_convTraceState___closed__3 = _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convTraceState___closed__3);
l_Lean_Parser_Tactic_Conv_convTraceState___closed__4 = _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convTraceState___closed__4);
l_Lean_Parser_Tactic_Conv_convTraceState___closed__5 = _init_l_Lean_Parser_Tactic_Conv_convTraceState___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convTraceState___closed__5);
l_Lean_Parser_Tactic_Conv_convTraceState = _init_l_Lean_Parser_Tactic_Conv_convTraceState();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convTraceState);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1721____closed__1);
l_Lean_Parser_Tactic_Conv_convApply_____closed__1 = _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply_____closed__1);
l_Lean_Parser_Tactic_Conv_convApply_____closed__2 = _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply_____closed__2);
l_Lean_Parser_Tactic_Conv_convApply_____closed__3 = _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply_____closed__3);
l_Lean_Parser_Tactic_Conv_convApply_____closed__4 = _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply_____closed__4);
l_Lean_Parser_Tactic_Conv_convApply_____closed__5 = _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply_____closed__5);
l_Lean_Parser_Tactic_Conv_convApply_____closed__6 = _init_l_Lean_Parser_Tactic_Conv_convApply_____closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply_____closed__6);
l_Lean_Parser_Tactic_Conv_convApply__ = _init_l_Lean_Parser_Tactic_Conv_convApply__();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_convApply__);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__1);
l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2 = _init_l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_Conv_myMacro____x40_Init_Conv___hyg_1837____closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
