// Lean compiler output
// Module: Lean.Elab.Syntax
// Imports: Init Lean.Elab.Command Lean.Parser.Syntax Lean.Elab.Util
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
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__7;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48;
lean_object* l_List_reverse___rarg(lean_object*);
uint8_t l_Lean_Syntax_isQuot(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__9;
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__25;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_toParserDescr_process___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__17(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind___closed__1;
size_t lean_usize_add(size_t, size_t);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_toParserDescr_process___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_resolveSyntaxKind___closed__1;
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__50;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_Elab_Command_resolveSyntaxKind___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSeq___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__16;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__3;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__25;
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterTRAux___at_Lean_resolveGlobalConstCore___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46;
extern lean_object* l_Lean_Parser_leadPrec;
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__3;
static lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__5;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax(lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__19;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__1;
lean_object* lean_io_error_to_string(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__3;
static lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__3;
extern uint32_t l_Lean_idBeginEscape;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__6;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTRAux___at_Lean_resolveGlobalConstCore___spec__2(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__5;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__41;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__23;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__72;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__2;
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__13;
static lean_object* l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6;
uint8_t l_Lean_Parser_leadingIdentBehavior(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__60;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74;
static lean_object* l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__2;
lean_object* l_Lean_Parser_getParserAliasInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_ensureNoPrec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__12;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6;
lean_object* lean_environment_find(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4;
static lean_object* l_Lean_Elab_Command_checkRuleKind___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__15;
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__19;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7___boxed(lean_object**);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2(lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__76;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28;
uint8_t l_Char_isDigit(uint32_t);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__78;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__5;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__6;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Level_PP_Result_quote___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__15;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__14;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52;
extern lean_object* l_instInhabitedNat;
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Command_elabSyntax___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__8;
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__5;
lean_object* lean_array_get_size(lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Command_elabCommand___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
static lean_object* l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33;
uint8_t l_Char_isWhitespace(uint32_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__6;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSeq___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNotFirst(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__13;
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__2;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5;
LEAN_EXPORT lean_object* l_String_mapAux___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__2(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
lean_object* l_Lean_addTrace___at_Lean_Elab_Command_elabCommand___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_strLitToPattern(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__80;
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__1;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__11;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__11;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_visit___closed__1;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_checkRuleKind___closed__1;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__2;
LEAN_EXPORT uint8_t l_Lean_Elab_Command_checkRuleKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_checkRuleKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__54;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__6;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__70;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__8;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__22;
LEAN_EXPORT lean_object* l_panic___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__5(lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__4;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__4;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_toParserDescr_processAlias___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_resolveSyntaxKind(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__17;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__17;
static lean_object* l_Lean_Elab_Term_checkLeftRec___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__8;
extern lean_object* l_Lean_LocalContext_empty;
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__2;
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__18(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__65;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptPrecedence___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__39;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__4;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8;
lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addAliasInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__1;
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__4;
static lean_object* l_Lean_Elab_Term_checkLeftRec___closed__4;
extern lean_object* l_Lean_inheritedTraceOptions;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__10;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36;
static lean_object* l_Lean_Elab_Term_addCategoryInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_toParserDescr_process___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1(lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Command_elabSyntax___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_push___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__19;
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__11;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9;
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Unhygienic_instMonadQuotationUnhygienic___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__3;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__4;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__14;
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__9;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax(lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__5(size_t, size_t, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5___rarg(lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__21;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__12;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__2;
lean_object* l_Lean_Unhygienic_run___rarg(lean_object*);
lean_object* l_String_capitalize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_ensureUnaryOutput(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830_(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__13;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__7;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__3;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__44;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_strLitToPattern___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__18;
static lean_object* l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__1;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange(lean_object*);
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__20;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__15;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__64;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_ensureNoPrec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__10;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__9;
static lean_object* l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNestedParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__1;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__8;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__17;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__6;
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14;
extern lean_object* l_Lean_Parser_maxPrec;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__57;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__1;
lean_object* l_Lean_Elab_Command_runTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__10;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__1(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__7;
static lean_object* l_Lean_Elab_Term_checkLeftRec___closed__2;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__6;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__7;
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7;
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__8;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__4;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__7;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__12;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__16;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__68;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24;
lean_object* l_Array_unzip___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__12;
uint8_t l_Array_isEmpty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___closed__3;
static lean_object* l_Lean_Elab_Term_addCategoryInfo___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__6;
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__4;
lean_object* l_Lean_evalOptPrio(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12;
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__10;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__4;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__3;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__10;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__11;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at_Lean_Elab_Command_resolveSyntaxKind___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__7;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__8___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalPrec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__3;
lean_object* l_Lean_Parser_ensureUnaryParserAlias(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830____closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__8;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__43;
static lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__4;
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___closed__1;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15;
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__10___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3;
lean_object* l_Lean_Parser_registerParserCategory(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__4(size_t, size_t, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__61;
lean_object* l_Lean_Syntax_getQuotContent(lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__15;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_appendCatName(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__10;
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__5;
static lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__2;
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
uint8_t l_Lean_Name_isStr(lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__15;
static lean_object* l_Lean_Elab_Command_elabSyntax___closed__4;
LEAN_EXPORT lean_object* l_Lean_setEnv___at_Lean_Elab_Command_elabDeclareSyntaxCat___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__69;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11;
uint8_t l_String_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_toParserDescr_processAlias___spec__3(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3;
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
extern lean_object* l_Lean_Elab_Term_instMonadTermElabM;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__59;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__28;
lean_object* l_Lean_Elab_Command_withMacroExpansion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___rarg(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax___boxed(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__4(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__18;
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isParserCategory(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__3;
static lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__4;
lean_object* l_Lean_Parser_ensureConstantParserAlias(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Command_elabCommand___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__5;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__13;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_checkLeftRec___closed__3;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__18;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_expandDeclId___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__26;
lean_object* l_instInhabitedReaderT___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__4;
lean_object* l_Lean_quoteNameMk(lean_object*);
uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_beqLeadingIdentBehavior____x40_Lean_Parser_Basic___hyg_9358_(uint8_t, uint8_t);
static lean_object* l_Lean_Elab_Command_elabSyntax___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__11;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2___rarg(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__9;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__58;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2;
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__1;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__75;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_exprToSyntax___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__14;
static lean_object* l_Lean_Elab_Command_elabSyntax___closed__2;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__5;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14;
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__7;
lean_object* l_Lean_Parser_isParserAlias(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__1;
lean_object* l_List_mapTRAux___at_Lean_mkConstWithLevelParams___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_appendCatName___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__12;
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__42;
lean_object* l_Lean_Name_getPrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__16;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__22;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__16;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__49;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__6;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8___rarg(lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__53;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__13;
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8___rarg(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__3;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptPrecedence(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_isValidAtom___boxed(lean_object*);
uint8_t l_Lean_isIdFirst(uint32_t);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__16;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14;
lean_object* l_CallerInfo_mkPanicMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__9___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__55;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___closed__1;
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__3;
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_Lean_Parser_ensureBinaryParserAlias(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__6;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
lean_object* lean_mk_syntax_ident(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__7;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__7;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_toParserDescr_isValidAtom(lean_object*);
static lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___closed__1;
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3;
static lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7___closed__2;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37;
static lean_object* l_Lean_Elab_Term_toParserDescr_process___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at_Lean_Elab_Command_elabDeclareSyntaxCat___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__77;
static lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__13;
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2;
uint8_t l_List_isEmpty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__2;
static lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind___closed__2;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__79;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___closed__19;
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___boxed(lean_object**);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__73;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNotFirst___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__56;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__66;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__4;
static lean_object* l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__2;
static lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2;
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__24;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__2;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__63;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2;
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__7;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12;
static lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16;
static lean_object* l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__3;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7;
static lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__71;
static lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__2;
static lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1;
static lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__1;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkUnusedBaseName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addCategoryInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptPrecedence(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Syntax_isNone(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_6, x_7);
lean_dec(x_6);
x_9 = l_Lean_evalPrec(x_8, x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandOptPrecedence___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandOptPrecedence(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Parser", 6);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Term", 4);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("app", 3);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.binary", 18);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__10;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr", 11);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("binary", 6);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__18;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("null", 4);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__22;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("quotedName", 10);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("name", 4);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__26;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("`andthen", 8);
return x_1;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; size_t x_57; size_t x_58; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_array_uget(x_15, x_4);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_5, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
lean_inc(x_10);
x_21 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_exprToSyntax___spec__1___rarg(x_10, x_11, x_12);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_10, 10);
lean_inc(x_24);
x_25 = lean_st_ref_get(x_11, x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_environment_main_module(x_28);
x_30 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15;
x_31 = l_Lean_addMacroScope(x_29, x_30, x_24);
x_32 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11;
x_33 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21;
lean_inc(x_22);
x_34 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_32);
lean_ctor_set(x_34, 2, x_31);
lean_ctor_set(x_34, 3, x_33);
x_35 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28;
lean_inc(x_22);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_22);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_38 = lean_array_push(x_37, x_36);
x_39 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27;
lean_inc(x_22);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_22);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
x_41 = lean_array_push(x_37, x_40);
x_42 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
lean_inc(x_22);
x_43 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_43, 0, x_22);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_41);
x_44 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_45 = lean_array_push(x_44, x_43);
x_46 = lean_array_push(x_45, x_19);
x_47 = lean_array_push(x_46, x_17);
x_48 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_22);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_22);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_49, 2, x_47);
x_50 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_51 = lean_array_push(x_50, x_34);
x_52 = lean_array_push(x_51, x_49);
x_53 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_54 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_54, 0, x_22);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_54, 2, x_52);
x_55 = lean_nat_add(x_20, x_18);
lean_dec(x_18);
lean_dec(x_20);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = 1;
x_58 = lean_usize_add(x_4, x_57);
x_4 = x_58;
x_5 = x_56;
x_12 = x_27;
goto _start;
}
}
}
static lean_object* _init_l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_instInhabitedNat;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2___closed__1;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_unsupportedSyntaxExceptionId;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg), 1, 0);
return x_7;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("term", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Init.PanicAux", 13);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("getElem!", 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__7;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(47u);
x_2 = lean_unsigned_to_nat(36u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__5;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__8;
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__9;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("index out of bounds", 19);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__10;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__11;
x_3 = l_CallerInfo_mkPanicMessage(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_dec_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_36; 
x_36 = lean_nat_dec_lt(x_10, x_9);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12;
x_38 = l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_14 = x_39;
x_15 = x_40;
goto block_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_array_fget(x_1, x_10);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_14 = x_42;
x_15 = x_43;
goto block_35;
}
block_35:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_16 = l_Array_toSubarray___rarg(x_1, x_12, x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_ctor_get(x_16, 2);
lean_inc(x_18);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
x_21 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_22 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__3;
x_23 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1(x_22, x_16, x_19, x_21, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_16);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_23, 0, x_28);
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_6);
x_44 = lean_nat_dec_lt(x_10, x_9);
lean_dec(x_9);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_1);
x_45 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12;
x_46 = l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_8);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_array_fget(x_1, x_10);
lean_dec(x_1);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_8);
return x_49;
}
}
}
else
{
lean_object* x_50; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_50 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg(x_8);
return x_50;
}
}
}
LEAN_EXPORT lean_object* l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = lean_st_ref_get(x_9, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_st_ref_set(x_3, x_11, x_13);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNotFirst___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_12);
x_13 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 1);
x_16 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 2);
lean_inc(x_14);
lean_dec(x_2);
x_17 = 0;
x_18 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*1 + 1, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*1 + 2, x_16);
x_19 = lean_apply_9(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNotFirst(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNotFirst___rarg), 10, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("UnhygienicMain", 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.unary", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unary", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__9;
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("group", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14;
x_3 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14;
x_2 = l_Lean_quoteNameMk(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__16;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("`", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_ensureUnaryOutput___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__2;
x_7 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7;
x_8 = l_Lean_addMacroScope(x_6, x_7, x_5);
x_9 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5;
x_10 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12;
lean_inc(x_2);
x_11 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
x_12 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_13 = lean_array_push(x_12, x_11);
x_14 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__15;
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__17;
x_16 = lean_array_push(x_15, x_1);
x_17 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_2);
x_18 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_18, 2, x_16);
x_19 = lean_array_push(x_13, x_18);
x_20 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_4);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
x_24 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_25 = l_String_intercalate(x_24, x_23);
x_26 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
x_28 = lean_box(2);
x_29 = l_Lean_Syntax_mkNameLit(x_27, x_28);
x_30 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_31 = lean_array_push(x_30, x_29);
x_32 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_33 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_31);
x_34 = lean_array_push(x_12, x_33);
x_35 = lean_array_push(x_34, x_1);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_2);
x_37 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_35);
x_38 = lean_array_push(x_13, x_37);
x_39 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_2);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_4);
return x_41;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_ensureUnaryOutput___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Level_PP_Result_quote___spec__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_ensureUnaryOutput(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1), 4, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Lean_Elab_Term_ensureUnaryOutput___closed__1;
x_8 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Unhygienic_instMonadQuotationUnhygienic___spec__2___rarg), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
x_9 = l_Lean_Unhygienic_run___rarg(x_8);
return x_9;
}
else
{
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_withNestedParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_12);
lean_ctor_set_uint8(x_2, sizeof(void*)*1 + 1, x_12);
x_13 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 2);
lean_inc(x_14);
lean_dec(x_2);
x_16 = 0;
x_17 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 1, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*1 + 2, x_15);
x_18 = lean_apply_9(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_addCategoryInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Category", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_addCategoryInfo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_2 = l_Lean_Elab_Term_addCategoryInfo___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addCategoryInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_Elab_Term_addCategoryInfo___closed__2;
x_11 = l_Lean_Name_append(x_10, x_2);
x_12 = lean_st_ref_get(x_8, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_11);
x_17 = l_Lean_Environment_contains(x_16, x_11);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_box(0);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
lean_free_object(x_12);
x_19 = lean_box(0);
x_20 = l_Lean_Expr_const___override(x_11, x_19);
x_21 = lean_box(0);
x_22 = lean_box(0);
x_23 = 0;
x_24 = l_Lean_Elab_Term_addTermInfo_x27(x_1, x_20, x_21, x_21, x_22, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_11);
x_28 = l_Lean_Environment_contains(x_27, x_11);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_26);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_31 = lean_box(0);
x_32 = l_Lean_Expr_const___override(x_11, x_31);
x_33 = lean_box(0);
x_34 = lean_box(0);
x_35 = 0;
x_36 = l_Lean_Elab_Term_addTermInfo_x27(x_1, x_32, x_33, x_33, x_34, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addAliasInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 6);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*2);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_st_ref_get(x_8, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
lean_inc(x_26);
x_27 = l_Lean_Environment_contains(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = lean_box(0);
lean_ctor_set(x_21, 0, x_28);
return x_21;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
lean_free_object(x_21);
x_29 = lean_box(0);
x_30 = l_Lean_Expr_const___override(x_26, x_29);
x_31 = lean_box(0);
x_32 = lean_box(0);
x_33 = 0;
x_34 = l_Lean_Elab_Term_addTermInfo_x27(x_1, x_30, x_31, x_31, x_32, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_2, 0);
lean_inc(x_38);
lean_dec(x_2);
lean_inc(x_38);
x_39 = l_Lean_Environment_contains(x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_42 = lean_box(0);
x_43 = l_Lean_Expr_const___override(x_38, x_42);
x_44 = lean_box(0);
x_45 = lean_box(0);
x_46 = 0;
x_47 = l_Lean_Elab_Term_addTermInfo_x27(x_1, x_43, x_44, x_44, x_45, x_46, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
return x_47;
}
}
}
}
}
static lean_object* _init_l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_inheritedTraceOptions;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___closed__1;
x_14 = lean_st_ref_get(x_13, x_12);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_8, 2);
x_18 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_16, x_17, x_1);
lean_dec(x_16);
x_19 = lean_box(x_18);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_ctor_get(x_8, 2);
x_23 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_20, x_22, x_1);
lean_dec(x_20);
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_12 = lean_ctor_get(x_9, 5);
x_13 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_7, x_8, x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_take(x_10, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_20 = lean_ctor_get(x_17, 3);
x_21 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_22 = 0;
x_23 = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_14);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*3, x_22);
lean_inc(x_12);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_12);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_PersistentArray_push___rarg(x_20, x_24);
lean_ctor_set(x_17, 3, x_25);
x_26 = lean_st_ref_set(x_10, x_17, x_18);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_33 = lean_ctor_get(x_17, 0);
x_34 = lean_ctor_get(x_17, 1);
x_35 = lean_ctor_get(x_17, 2);
x_36 = lean_ctor_get(x_17, 3);
x_37 = lean_ctor_get(x_17, 4);
x_38 = lean_ctor_get(x_17, 5);
x_39 = lean_ctor_get(x_17, 6);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_17);
x_40 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_41 = 0;
x_42 = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_14);
lean_ctor_set(x_42, 2, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*3, x_41);
lean_inc(x_12);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_12);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_PersistentArray_push___rarg(x_36, x_43);
x_45 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_45, 0, x_33);
lean_ctor_set(x_45, 1, x_34);
lean_ctor_set(x_45, 2, x_35);
lean_ctor_set(x_45, 3, x_44);
lean_ctor_set(x_45, 4, x_37);
lean_ctor_set(x_45, 5, x_38);
lean_ctor_set(x_45, 6, x_39);
x_46 = lean_st_ref_set(x_10, x_45, x_18);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
x_49 = lean_box(0);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
lean_inc(x_15);
x_17 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_15);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_1 = x_14;
x_10 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_16);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3(x_15, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_1 = x_14;
x_10 = x_26;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_27 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_17);
lean_ctor_set(x_28, 2, x_18);
lean_ctor_set(x_28, 3, x_19);
lean_ctor_set(x_28, 4, x_20);
lean_ctor_set(x_28, 5, x_27);
lean_ctor_set(x_28, 6, x_22);
lean_ctor_set(x_28, 7, x_23);
lean_ctor_set(x_28, 8, x_24);
lean_ctor_set(x_28, 9, x_25);
lean_ctor_set(x_28, 10, x_26);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_28, x_10, x_11);
lean_dec(x_10);
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_maxRecDepthErrorMessage;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_expandMacroImpl_x3f(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_free_object(x_6);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_15, x_3, x_16);
lean_dec(x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_20, x_3, x_16);
lean_dec(x_20);
return x_21;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_6, 0, x_24);
lean_ctor_set(x_15, 0, x_6);
x_25 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_15, x_3, x_22);
lean_dec(x_15);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_dec(x_15);
lean_ctor_set(x_6, 0, x_26);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_6);
x_28 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_27, x_3, x_22);
lean_dec(x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_6, 0);
lean_inc(x_29);
lean_dec(x_6);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_dec(x_5);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 1, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_32);
x_35 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_34, x_3, x_31);
lean_dec(x_34);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_5, 1);
lean_inc(x_36);
lean_dec(x_5);
x_37 = lean_ctor_get(x_30, 0);
lean_inc(x_37);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_38 = x_30;
} else {
 lean_dec_ref(x_30);
 x_38 = lean_box(0);
}
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_37);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(1, 1, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
x_41 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_40, x_3, x_36);
lean_dec(x_40);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Environment_contains(x_1, x_2);
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_ResolveName_resolveNamespace(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_ResolveName_resolveGlobalName(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_8, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_8, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 5);
lean_inc(x_17);
x_18 = lean_ctor_get(x_8, 6);
lean_inc(x_18);
x_19 = lean_ctor_get(x_8, 7);
lean_inc(x_19);
x_20 = lean_ctor_get(x_8, 10);
lean_inc(x_20);
lean_inc(x_14);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_21, 0, x_14);
lean_inc(x_18);
x_22 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_22, 0, x_18);
lean_inc(x_14);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_23, 0, x_14);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_14);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_24, 0, x_14);
lean_closure_set(x_24, 1, x_18);
lean_closure_set(x_24, 2, x_19);
lean_inc(x_14);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_25, 0, x_14);
lean_closure_set(x_25, 1, x_18);
lean_closure_set(x_25, 2, x_19);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
lean_ctor_set(x_26, 4, x_25);
x_27 = lean_st_ref_get(x_9, x_13);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_environment_main_module(x_14);
x_32 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_20);
lean_ctor_set(x_32, 3, x_15);
lean_ctor_set(x_32, 4, x_16);
lean_ctor_set(x_32, 5, x_17);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_30);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_apply_2(x_1, x_32, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_st_ref_take(x_9, x_29);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = !lean_is_exclusive(x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_40, 1);
lean_dec(x_43);
lean_ctor_set(x_40, 1, x_38);
x_44 = lean_st_ref_set(x_9, x_40, x_41);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_dec(x_37);
x_47 = l_List_reverse___rarg(x_46);
x_48 = l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4(x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_45);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
lean_ctor_set(x_48, 0, x_36);
return x_48;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_36);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_53 = lean_ctor_get(x_40, 0);
x_54 = lean_ctor_get(x_40, 2);
x_55 = lean_ctor_get(x_40, 3);
x_56 = lean_ctor_get(x_40, 4);
x_57 = lean_ctor_get(x_40, 5);
x_58 = lean_ctor_get(x_40, 6);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_40);
x_59 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_59, 0, x_53);
lean_ctor_set(x_59, 1, x_38);
lean_ctor_set(x_59, 2, x_54);
lean_ctor_set(x_59, 3, x_55);
lean_ctor_set(x_59, 4, x_56);
lean_ctor_set(x_59, 5, x_57);
lean_ctor_set(x_59, 6, x_58);
x_60 = lean_st_ref_set(x_9, x_59, x_41);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_ctor_get(x_37, 1);
lean_inc(x_62);
lean_dec(x_37);
x_63 = l_List_reverse___rarg(x_62);
x_64 = l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4(x_63, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_61);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_66 = x_64;
} else {
 lean_dec_ref(x_64);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_36);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_35, 0);
lean_inc(x_68);
lean_dec(x_35);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_maxRecDepthErrorMessage;
x_72 = lean_string_dec_eq(x_70, x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_70);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__5(x_69, x_74, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
return x_75;
}
else
{
lean_object* x_76; 
lean_dec(x_70);
x_76 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7(x_69, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8___rarg(x_29);
return x_77;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_27 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_17);
lean_ctor_set(x_28, 2, x_18);
lean_ctor_set(x_28, 3, x_19);
lean_ctor_set(x_28, 4, x_20);
lean_ctor_set(x_28, 5, x_27);
lean_ctor_set(x_28, 6, x_22);
lean_ctor_set(x_28, 7, x_23);
lean_ctor_set(x_28, 8, x_24);
lean_ctor_set(x_28, 9, x_25);
lean_ctor_set(x_28, 10, x_26);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_28, x_10, x_11);
lean_dec(x_10);
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = 1;
x_17 = lean_box(x_16);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_markAsTrailingParser(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_23, 0, x_27);
return x_23;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = 1;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid occurrence of '", 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("', parser algorithm does not allow this form of left recursion", 62);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_dec(x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Elab_Term_addCategoryInfo(x_1, x_2, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandOptPrecedence___boxed), 3, 1);
lean_closure_set(x_18, 0, x_17);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_19 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_15);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_3, sizeof(void*)*1 + 1);
lean_dec(x_3);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(3u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
lean_dec(x_1);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_2);
x_25 = l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__2;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__4;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(x_23, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_ctor_get(x_19, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_19, 1);
lean_inc(x_35);
lean_dec(x_19);
x_36 = lean_box(0);
x_37 = l_Lean_Elab_Term_checkLeftRec___lambda__1(x_34, x_36, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_35);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
return x_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_3);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_getId(x_14);
lean_dec(x_14);
x_16 = lean_erase_macro_scopes(x_15);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_19 = 0;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_12);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Term_checkLeftRec___lambda__2(x_1, x_16, x_2, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_23;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Syntax", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_2 = l_Lean_Elab_Term_checkLeftRec___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("cat", 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_checkLeftRec___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_checkLeftRec___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_inc(x_1);
x_15 = l_Lean_Syntax_getKind(x_1);
x_16 = l_Lean_Elab_Term_checkLeftRec___closed__4;
x_17 = lean_name_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_10);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
lean_inc(x_2);
x_22 = l_Lean_Elab_Term_checkLeftRec___lambda__3(x_1, x_2, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forM___at_Lean_Elab_Term_checkLeftRec___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_checkLeftRec___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkLeftRec___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_checkLeftRec___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
static lean_object* _init_l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("TrailingParserDescr", 19);
return x_1;
}
}
static lean_object* _init_l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("TrailingParser", 14);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_1);
x_7 = lean_environment_find(x_1, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_ConstantInfo_type(x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 4)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_dec(x_14);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_20 = lean_string_dec_eq(x_14, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1;
x_22 = lean_string_dec_eq(x_14, x_21);
lean_dec(x_14);
if (x_22 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_27);
lean_ctor_set(x_2, 0, x_26);
return x_2;
}
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_14);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_31);
lean_ctor_set(x_2, 0, x_30);
return x_2;
}
}
}
case 1:
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_dec(x_12);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_dec(x_13);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_37 = lean_string_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_dec(x_34);
lean_dec(x_33);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
x_40 = lean_string_dec_eq(x_34, x_39);
lean_dec(x_34);
if (x_40 == 0)
{
lean_dec(x_33);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_42; uint8_t x_43; 
x_42 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2;
x_43 = lean_string_dec_eq(x_33, x_42);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = lean_string_dec_eq(x_33, x_39);
lean_dec(x_33);
if (x_44 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = 0;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_5);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_49);
lean_ctor_set(x_2, 0, x_48);
return x_2;
}
}
else
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_33);
x_50 = 0;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_5);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_53);
lean_ctor_set(x_2, 0, x_52);
return x_2;
}
}
}
}
else
{
lean_dec(x_32);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
default: 
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
else
{
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
else
{
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_2, 0);
x_60 = lean_ctor_get(x_2, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_2);
lean_inc(x_59);
lean_inc(x_1);
x_61 = lean_environment_find(x_1, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_61, 0);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_ConstantInfo_type(x_63);
lean_dec(x_63);
if (lean_obj_tag(x_64) == 4)
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
lean_dec(x_64);
if (lean_obj_tag(x_65) == 1)
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
if (lean_obj_tag(x_66) == 1)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
switch (lean_obj_tag(x_67)) {
case 0:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_71 = lean_string_dec_eq(x_69, x_70);
lean_dec(x_69);
if (x_71 == 0)
{
lean_dec(x_68);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_73; uint8_t x_74; 
x_73 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_74 = lean_string_dec_eq(x_68, x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1;
x_76 = lean_string_dec_eq(x_68, x_75);
lean_dec(x_68);
if (x_76 == 0)
{
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
uint8_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = 1;
x_79 = lean_box(x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_59);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_60);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
else
{
uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_68);
x_83 = 1;
x_84 = lean_box(x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_59);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_60);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
case 1:
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_67, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_65, 1);
lean_inc(x_89);
lean_dec(x_65);
x_90 = lean_ctor_get(x_66, 1);
lean_inc(x_90);
lean_dec(x_66);
x_91 = lean_ctor_get(x_67, 1);
lean_inc(x_91);
lean_dec(x_67);
x_92 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_93 = lean_string_dec_eq(x_91, x_92);
lean_dec(x_91);
if (x_93 == 0)
{
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_95; uint8_t x_96; 
x_95 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
x_96 = lean_string_dec_eq(x_90, x_95);
lean_dec(x_90);
if (x_96 == 0)
{
lean_dec(x_89);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_98; uint8_t x_99; 
x_98 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2;
x_99 = lean_string_dec_eq(x_89, x_98);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = lean_string_dec_eq(x_89, x_95);
lean_dec(x_89);
if (x_100 == 0)
{
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
uint8_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = 0;
x_103 = lean_box(x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_59);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_60);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
else
{
uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_89);
x_107 = 0;
x_108 = lean_box(x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_59);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_1, x_60);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
else
{
lean_dec(x_88);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
default: 
{
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
}
else
{
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
else
{
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
else
{
lean_dec(x_64);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1(x_3, x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resolveParserName___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_apply_2(x_4, lean_box(0), x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_box(0);
lean_inc(x_4);
lean_inc(x_1);
x_10 = l_Lean_Elab_resolveGlobalConstWithInfos___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_9);
lean_inc(x_7);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resolveParserName___rarg___lambda__2), 4, 3);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_7);
lean_inc(x_7);
x_12 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_11);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resolveParserName___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_apply_3(x_14, lean_box(0), x_12, x_13);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resolveParserName___rarg___lambda__4), 2, 1);
lean_closure_set(x_16, 0, x_1);
x_17 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resolveParserName___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_resolveParserName___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 5);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_SourceInfo_fromRef(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg___boxed), 3, 0);
return x_7;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("paren", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("(", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("withAnnotateTerm", 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("with_annotate_term", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("explicit", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("@", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.nonReservedSymbol", 29);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__11;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("nonReservedSymbol", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(")", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("false", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__22;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Bool", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__25;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__28;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isStrLit_x3f(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_1);
x_14 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___rarg(x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_8, x_9, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_8, 10);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_st_ref_get(x_9, x_18);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_environment_main_module(x_23);
x_25 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_17);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
lean_inc(x_17);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_17);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Lean_Syntax_getArg(x_1, x_29);
lean_dec(x_1);
x_31 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
lean_inc(x_17);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_17);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14;
lean_inc(x_19);
lean_inc(x_24);
x_34 = l_Lean_addMacroScope(x_24, x_33, x_19);
x_35 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12;
x_36 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19;
lean_inc(x_17);
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_17);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_39 = lean_array_push(x_38, x_32);
x_40 = lean_array_push(x_39, x_37);
x_41 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
lean_inc(x_17);
x_42 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_42, 0, x_17);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set(x_42, 2, x_40);
x_43 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_44 = lean_array_push(x_43, x_28);
x_45 = lean_array_push(x_44, x_30);
x_46 = lean_array_push(x_45, x_42);
x_47 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
lean_inc(x_17);
x_48 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_48, 0, x_17);
lean_ctor_set(x_48, 1, x_47);
lean_ctor_set(x_48, 2, x_46);
x_49 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_50 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_17);
x_51 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_51, 0, x_17);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_50);
x_52 = lean_array_push(x_38, x_48);
x_53 = lean_array_push(x_52, x_51);
lean_inc(x_17);
x_54 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_54, 0, x_17);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_53);
x_55 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_17);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_17);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_array_push(x_43, x_26);
x_58 = lean_array_push(x_57, x_54);
x_59 = lean_array_push(x_58, x_56);
x_60 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_17);
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_17);
lean_ctor_set(x_61, 1, x_60);
lean_ctor_set(x_61, 2, x_59);
x_62 = lean_box(2);
x_63 = l_Lean_Syntax_mkStrLit(x_15, x_62);
lean_dec(x_15);
x_64 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24;
x_65 = l_Lean_addMacroScope(x_24, x_64, x_19);
x_66 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23;
x_67 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29;
lean_inc(x_17);
x_68 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_68, 0, x_17);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_65);
lean_ctor_set(x_68, 3, x_67);
x_69 = lean_array_push(x_38, x_63);
x_70 = lean_array_push(x_69, x_68);
lean_inc(x_17);
x_71 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_71, 0, x_17);
lean_ctor_set(x_71, 1, x_49);
lean_ctor_set(x_71, 2, x_70);
x_72 = lean_array_push(x_38, x_61);
x_73 = lean_array_push(x_72, x_71);
x_74 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_75 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_75, 0, x_17);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_75, 2, x_73);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_11);
lean_ctor_set(x_20, 0, x_76);
return x_20;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_77 = lean_ctor_get(x_20, 0);
x_78 = lean_ctor_get(x_20, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_20);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_environment_main_module(x_79);
x_81 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_17);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_17);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
lean_inc(x_17);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_17);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Lean_Syntax_getArg(x_1, x_85);
lean_dec(x_1);
x_87 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
lean_inc(x_17);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_17);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14;
lean_inc(x_19);
lean_inc(x_80);
x_90 = l_Lean_addMacroScope(x_80, x_89, x_19);
x_91 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12;
x_92 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19;
lean_inc(x_17);
x_93 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_93, 0, x_17);
lean_ctor_set(x_93, 1, x_91);
lean_ctor_set(x_93, 2, x_90);
lean_ctor_set(x_93, 3, x_92);
x_94 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_95 = lean_array_push(x_94, x_88);
x_96 = lean_array_push(x_95, x_93);
x_97 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
lean_inc(x_17);
x_98 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_98, 0, x_17);
lean_ctor_set(x_98, 1, x_97);
lean_ctor_set(x_98, 2, x_96);
x_99 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_100 = lean_array_push(x_99, x_84);
x_101 = lean_array_push(x_100, x_86);
x_102 = lean_array_push(x_101, x_98);
x_103 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
lean_inc(x_17);
x_104 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_104, 0, x_17);
lean_ctor_set(x_104, 1, x_103);
lean_ctor_set(x_104, 2, x_102);
x_105 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_106 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_17);
x_107 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_107, 0, x_17);
lean_ctor_set(x_107, 1, x_105);
lean_ctor_set(x_107, 2, x_106);
x_108 = lean_array_push(x_94, x_104);
x_109 = lean_array_push(x_108, x_107);
lean_inc(x_17);
x_110 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_110, 0, x_17);
lean_ctor_set(x_110, 1, x_105);
lean_ctor_set(x_110, 2, x_109);
x_111 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_17);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_17);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_array_push(x_99, x_82);
x_114 = lean_array_push(x_113, x_110);
x_115 = lean_array_push(x_114, x_112);
x_116 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_17);
x_117 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_117, 0, x_17);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set(x_117, 2, x_115);
x_118 = lean_box(2);
x_119 = l_Lean_Syntax_mkStrLit(x_15, x_118);
lean_dec(x_15);
x_120 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24;
x_121 = l_Lean_addMacroScope(x_80, x_120, x_19);
x_122 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23;
x_123 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29;
lean_inc(x_17);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_17);
lean_ctor_set(x_124, 1, x_122);
lean_ctor_set(x_124, 2, x_121);
lean_ctor_set(x_124, 3, x_123);
x_125 = lean_array_push(x_94, x_119);
x_126 = lean_array_push(x_125, x_124);
lean_inc(x_17);
x_127 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_127, 0, x_17);
lean_ctor_set(x_127, 1, x_105);
lean_ctor_set(x_127, 2, x_126);
x_128 = lean_array_push(x_94, x_117);
x_129 = lean_array_push(x_128, x_127);
x_130 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_131 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_131, 0, x_17);
lean_ctor_set(x_131, 1, x_130);
lean_ctor_set(x_131, 2, x_129);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_11);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_78);
return x_133;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processNonReserved___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_toParserDescr_processNonReserved(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_toParserDescr_isValidAtom(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_9; 
x_9 = l_String_isEmpty(x_1);
if (x_9 == 0)
{
lean_object* x_10; uint32_t x_11; uint32_t x_12; uint8_t x_13; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_string_utf8_get(x_1, x_10);
x_12 = 39;
x_13 = lean_uint32_dec_eq(x_11, x_12);
if (x_13 == 0)
{
uint32_t x_14; uint8_t x_15; 
x_14 = 34;
x_15 = lean_uint32_dec_eq(x_11, x_14);
if (x_15 == 0)
{
uint32_t x_16; uint8_t x_17; 
x_16 = 96;
x_17 = lean_uint32_dec_eq(x_11, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_box(0);
x_2 = x_18;
goto block_8;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_string_utf8_byte_size(x_1);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
uint32_t x_22; uint8_t x_23; 
x_22 = lean_string_utf8_get(x_1, x_20);
x_23 = l_Lean_isIdFirst(x_22);
if (x_23 == 0)
{
uint32_t x_24; uint8_t x_25; 
x_24 = l_Lean_idBeginEscape;
x_25 = lean_uint32_dec_eq(x_22, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_box(0);
x_2 = x_26;
goto block_8;
}
else
{
uint8_t x_27; 
x_27 = 0;
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = 0;
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = 0;
return x_29;
}
}
}
else
{
uint8_t x_30; 
x_30 = 0;
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = 0;
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = 0;
return x_32;
}
block_8:
{
lean_object* x_3; uint32_t x_4; uint8_t x_5; 
lean_dec(x_2);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_string_utf8_get(x_1, x_3);
x_5 = l_Char_isDigit(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_isValidAtom___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_toParserDescr_isValidAtom(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.symbol", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("symbol", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__7;
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_64; uint8_t x_65; uint8_t x_66; 
x_64 = lean_ctor_get_uint8(x_3, sizeof(void*)*1 + 2);
x_65 = 0;
x_66 = l___private_Lean_Parser_Basic_0__Lean_Parser_beqLeadingIdentBehavior____x40_Lean_Parser_Basic___hyg_9358_(x_64, x_65);
if (x_66 == 0)
{
uint8_t x_67; 
x_67 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_box(0);
x_12 = x_68;
goto block_63;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_inc(x_9);
x_69 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_9, x_10, x_11);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_9, 10);
lean_inc(x_72);
lean_dec(x_9);
x_73 = lean_st_ref_get(x_10, x_71);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_environment_main_module(x_76);
x_78 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14;
lean_inc(x_72);
lean_inc(x_77);
x_79 = l_Lean_addMacroScope(x_77, x_78, x_72);
x_80 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12;
x_81 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19;
lean_inc(x_70);
x_82 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_82, 0, x_70);
lean_ctor_set(x_82, 1, x_80);
lean_ctor_set(x_82, 2, x_79);
lean_ctor_set(x_82, 3, x_81);
x_83 = lean_box(2);
x_84 = l_Lean_Syntax_mkStrLit(x_1, x_83);
x_85 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24;
x_86 = l_Lean_addMacroScope(x_77, x_85, x_72);
x_87 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23;
x_88 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29;
lean_inc(x_70);
x_89 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_89, 0, x_70);
lean_ctor_set(x_89, 1, x_87);
lean_ctor_set(x_89, 2, x_86);
lean_ctor_set(x_89, 3, x_88);
x_90 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_91 = lean_array_push(x_90, x_84);
x_92 = lean_array_push(x_91, x_89);
x_93 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_70);
x_94 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_94, 0, x_70);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_94, 2, x_92);
x_95 = lean_array_push(x_90, x_82);
x_96 = lean_array_push(x_95, x_94);
x_97 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_98 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_98, 0, x_70);
lean_ctor_set(x_98, 1, x_97);
lean_ctor_set(x_98, 2, x_96);
x_99 = lean_unsigned_to_nat(1u);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_73, 0, x_100);
return x_73;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_101 = lean_ctor_get(x_73, 0);
x_102 = lean_ctor_get(x_73, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_73);
x_103 = lean_ctor_get(x_101, 0);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_environment_main_module(x_103);
x_105 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14;
lean_inc(x_72);
lean_inc(x_104);
x_106 = l_Lean_addMacroScope(x_104, x_105, x_72);
x_107 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12;
x_108 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19;
lean_inc(x_70);
x_109 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_109, 0, x_70);
lean_ctor_set(x_109, 1, x_107);
lean_ctor_set(x_109, 2, x_106);
lean_ctor_set(x_109, 3, x_108);
x_110 = lean_box(2);
x_111 = l_Lean_Syntax_mkStrLit(x_1, x_110);
x_112 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24;
x_113 = l_Lean_addMacroScope(x_104, x_112, x_72);
x_114 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23;
x_115 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29;
lean_inc(x_70);
x_116 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_116, 0, x_70);
lean_ctor_set(x_116, 1, x_114);
lean_ctor_set(x_116, 2, x_113);
lean_ctor_set(x_116, 3, x_115);
x_117 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_118 = lean_array_push(x_117, x_111);
x_119 = lean_array_push(x_118, x_116);
x_120 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_70);
x_121 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_121, 0, x_70);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_121, 2, x_119);
x_122 = lean_array_push(x_117, x_109);
x_123 = lean_array_push(x_122, x_121);
x_124 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_125 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_125, 0, x_70);
lean_ctor_set(x_125, 1, x_124);
lean_ctor_set(x_125, 2, x_123);
x_126 = lean_unsigned_to_nat(1u);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_102);
return x_128;
}
}
}
else
{
lean_object* x_129; 
x_129 = lean_box(0);
x_12 = x_129;
goto block_63;
}
block_63:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_12);
lean_inc(x_9);
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_9, 10);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_st_ref_get(x_10, x_15);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_environment_main_module(x_20);
x_22 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5;
x_23 = l_Lean_addMacroScope(x_21, x_22, x_16);
x_24 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3;
x_25 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10;
lean_inc(x_14);
x_26 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_box(2);
x_28 = l_Lean_Syntax_mkStrLit(x_1, x_27);
x_29 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_30 = lean_array_push(x_29, x_28);
x_31 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_14);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_30);
x_33 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_34 = lean_array_push(x_33, x_26);
x_35 = lean_array_push(x_34, x_32);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_37 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_37, 0, x_14);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_35);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_17, 0, x_39);
return x_17;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_40 = lean_ctor_get(x_17, 0);
x_41 = lean_ctor_get(x_17, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_17);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_environment_main_module(x_42);
x_44 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5;
x_45 = l_Lean_addMacroScope(x_43, x_44, x_16);
x_46 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3;
x_47 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10;
lean_inc(x_14);
x_48 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_48, 0, x_14);
lean_ctor_set(x_48, 1, x_46);
lean_ctor_set(x_48, 2, x_45);
lean_ctor_set(x_48, 3, x_47);
x_49 = lean_box(2);
x_50 = l_Lean_Syntax_mkStrLit(x_1, x_49);
x_51 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_52 = lean_array_push(x_51, x_50);
x_53 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_14);
x_54 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_54, 0, x_14);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_54, 2, x_52);
x_55 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_56 = lean_array_push(x_55, x_48);
x_57 = lean_array_push(x_56, x_54);
x_58 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_59 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_59, 0, x_14);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_57);
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_41);
return x_62;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid atom", 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAtom___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAtom___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAtom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isStrLit_x3f(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__1___rarg(x_10);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_toParserDescr_isValidAtom(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_15);
x_17 = l_Lean_Elab_Term_toParserDescr_processAtom___closed__2;
x_18 = l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(x_1, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_23 = lean_box(0);
x_24 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1(x_15, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_15);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.cat", 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_checkLeftRec___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_checkLeftRec___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__6;
x_2 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_112; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandOptPrecedence___boxed), 3, 1);
lean_closure_set(x_15, 0, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_112 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1(x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_115 = l_Lean_Elab_Term_addCategoryInfo(x_1, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_114);
if (lean_obj_tag(x_113) == 0)
{
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
lean_dec(x_115);
x_117 = lean_unsigned_to_nat(0u);
x_16 = x_117;
x_17 = x_116;
goto block_111;
}
else
{
uint8_t x_118; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
x_118 = !lean_is_exclusive(x_115);
if (x_118 == 0)
{
return x_115;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_115, 0);
x_120 = lean_ctor_get(x_115, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_115);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_113, 0);
lean_inc(x_122);
lean_dec(x_113);
x_123 = lean_ctor_get(x_115, 1);
lean_inc(x_123);
lean_dec(x_115);
x_16 = x_122;
x_17 = x_123;
goto block_111;
}
else
{
uint8_t x_124; 
lean_dec(x_113);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
x_124 = !lean_is_exclusive(x_115);
if (x_124 == 0)
{
return x_115;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_115, 0);
x_126 = lean_ctor_get(x_115, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_115);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_128 = !lean_is_exclusive(x_112);
if (x_128 == 0)
{
return x_112;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_112, 0);
x_130 = lean_ctor_get(x_112, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_112);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
block_111:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_inc(x_10);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_10, x_11, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_10, 10);
lean_inc(x_21);
lean_dec(x_10);
x_22 = lean_st_ref_get(x_11, x_20);
lean_dec(x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_environment_main_module(x_25);
x_27 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4;
x_28 = l_Lean_addMacroScope(x_26, x_27, x_21);
x_29 = lean_box(0);
x_30 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3;
x_31 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9;
lean_inc(x_19);
x_32 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_31);
lean_inc(x_2);
x_33 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_29, x_2);
x_34 = l_Nat_repr(x_16);
x_35 = lean_box(2);
x_36 = l_Lean_Syntax_mkNumLit(x_34, x_35);
x_37 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_38 = lean_array_push(x_37, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_39 = l_Lean_quoteNameMk(x_2);
x_40 = lean_array_push(x_37, x_39);
x_41 = lean_array_push(x_40, x_36);
x_42 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_19);
x_43 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_43, 0, x_19);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_41);
x_44 = lean_array_push(x_38, x_43);
x_45 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_46 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_46, 0, x_19);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_13);
lean_ctor_set(x_22, 0, x_47);
return x_22;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_2);
x_48 = lean_ctor_get(x_33, 0);
lean_inc(x_48);
lean_dec(x_33);
x_49 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_50 = l_String_intercalate(x_49, x_48);
x_51 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_52 = lean_string_append(x_51, x_50);
lean_dec(x_50);
x_53 = l_Lean_Syntax_mkNameLit(x_52, x_35);
x_54 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_55 = lean_array_push(x_54, x_53);
x_56 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_57 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_57, 0, x_35);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_57, 2, x_55);
x_58 = lean_array_push(x_37, x_57);
x_59 = lean_array_push(x_58, x_36);
x_60 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_19);
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_19);
lean_ctor_set(x_61, 1, x_60);
lean_ctor_set(x_61, 2, x_59);
x_62 = lean_array_push(x_38, x_61);
x_63 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_64 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_64, 0, x_19);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_62);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_13);
lean_ctor_set(x_22, 0, x_65);
return x_22;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_66 = lean_ctor_get(x_22, 0);
x_67 = lean_ctor_get(x_22, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_22);
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_environment_main_module(x_68);
x_70 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4;
x_71 = l_Lean_addMacroScope(x_69, x_70, x_21);
x_72 = lean_box(0);
x_73 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3;
x_74 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9;
lean_inc(x_19);
x_75 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_75, 0, x_19);
lean_ctor_set(x_75, 1, x_73);
lean_ctor_set(x_75, 2, x_71);
lean_ctor_set(x_75, 3, x_74);
lean_inc(x_2);
x_76 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_72, x_2);
x_77 = l_Nat_repr(x_16);
x_78 = lean_box(2);
x_79 = l_Lean_Syntax_mkNumLit(x_77, x_78);
x_80 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_81 = lean_array_push(x_80, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_82 = l_Lean_quoteNameMk(x_2);
x_83 = lean_array_push(x_80, x_82);
x_84 = lean_array_push(x_83, x_79);
x_85 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_19);
x_86 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_86, 0, x_19);
lean_ctor_set(x_86, 1, x_85);
lean_ctor_set(x_86, 2, x_84);
x_87 = lean_array_push(x_81, x_86);
x_88 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_89 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_89, 0, x_19);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_89, 2, x_87);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_13);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_67);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
x_92 = lean_ctor_get(x_76, 0);
lean_inc(x_92);
lean_dec(x_76);
x_93 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_94 = l_String_intercalate(x_93, x_92);
x_95 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_96 = lean_string_append(x_95, x_94);
lean_dec(x_94);
x_97 = l_Lean_Syntax_mkNameLit(x_96, x_78);
x_98 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_99 = lean_array_push(x_98, x_97);
x_100 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_101 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_101, 0, x_78);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_101, 2, x_99);
x_102 = lean_array_push(x_80, x_101);
x_103 = lean_array_push(x_102, x_79);
x_104 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_19);
x_105 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_105, 0, x_19);
lean_ctor_set(x_105, 1, x_104);
lean_ctor_set(x_105, 2, x_103);
x_106 = lean_array_push(x_81, x_105);
x_107 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_108 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_108, 0, x_19);
lean_ctor_set(x_108, 1, x_107);
lean_ctor_set(x_108, 2, x_106);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_13);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_67);
return x_110;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid atomic left recursive syntax", 36);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_getId(x_12);
lean_dec(x_12);
x_14 = lean_erase_macro_scopes(x_13);
x_15 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1(x_1, x_14, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = lean_name_eq(x_14, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1(x_1, x_14, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_14);
x_22 = l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2;
x_23 = l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(x_1, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
return x_13;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected precedence", 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_ensureNoPrec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__2;
x_15 = l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(x_12, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_ensureNoPrec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 5);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 5);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_dec(x_1);
lean_ctor_set(x_7, 5, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
x_22 = lean_ctor_get(x_7, 8);
x_23 = lean_ctor_get(x_7, 9);
x_24 = lean_ctor_get(x_7, 10);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_25 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_19);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_15);
lean_ctor_set(x_26, 2, x_16);
lean_ctor_set(x_26, 3, x_17);
lean_ctor_set(x_26, 4, x_18);
lean_ctor_set(x_26, 5, x_25);
lean_ctor_set(x_26, 6, x_20);
lean_ctor_set(x_26, 7, x_21);
lean_ctor_set(x_26, 8, x_22);
lean_ctor_set(x_26, 9, x_23);
lean_ctor_set(x_26, 10, x_24);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3(x_2, x_3, x_4, x_5, x_6, x_26, x_8, x_9);
lean_dec(x_8);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_toParserDescr_process___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_toParserDescr_process___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_6, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 4);
lean_inc(x_14);
x_15 = lean_ctor_get(x_6, 5);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 6);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 7);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 10);
lean_inc(x_18);
lean_inc(x_12);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_19, 0, x_12);
lean_inc(x_16);
x_20 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_20, 0, x_16);
lean_inc(x_12);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_21, 0, x_12);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_12);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_22, 0, x_12);
lean_closure_set(x_22, 1, x_16);
lean_closure_set(x_22, 2, x_17);
lean_inc(x_12);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_23, 0, x_12);
lean_closure_set(x_23, 1, x_16);
lean_closure_set(x_23, 2, x_17);
x_24 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_22);
lean_ctor_set(x_24, 4, x_23);
x_25 = lean_st_ref_get(x_7, x_11);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_environment_main_module(x_12);
x_30 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_18);
lean_ctor_set(x_30, 3, x_13);
lean_ctor_set(x_30, 4, x_14);
lean_ctor_set(x_30, 5, x_15);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_apply_2(x_1, x_30, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_st_ref_take(x_7, x_27);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_41 = lean_ctor_get(x_38, 1);
lean_dec(x_41);
lean_ctor_set(x_38, 1, x_36);
x_42 = lean_st_ref_set(x_7, x_38, x_39);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_dec(x_35);
x_45 = l_List_reverse___rarg(x_44);
x_46 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
lean_ctor_set(x_46, 0, x_34);
return x_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_34);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_51 = lean_ctor_get(x_38, 0);
x_52 = lean_ctor_get(x_38, 2);
x_53 = lean_ctor_get(x_38, 3);
x_54 = lean_ctor_get(x_38, 4);
x_55 = lean_ctor_get(x_38, 5);
x_56 = lean_ctor_get(x_38, 6);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_38);
x_57 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_57, 0, x_51);
lean_ctor_set(x_57, 1, x_36);
lean_ctor_set(x_57, 2, x_52);
lean_ctor_set(x_57, 3, x_53);
lean_ctor_set(x_57, 4, x_54);
lean_ctor_set(x_57, 5, x_55);
lean_ctor_set(x_57, 6, x_56);
x_58 = lean_st_ref_set(x_7, x_57, x_39);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_ctor_get(x_35, 1);
lean_inc(x_60);
lean_dec(x_35);
x_61 = l_List_reverse___rarg(x_60);
x_62 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_59);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_64 = x_62;
} else {
 lean_dec_ref(x_62);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_34);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_33, 0);
lean_inc(x_66);
lean_dec(x_33);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_maxRecDepthErrorMessage;
x_70 = lean_string_dec_eq(x_68, x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_68);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__2(x_67, x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
return x_73;
}
else
{
lean_object* x_74; 
lean_dec(x_68);
x_74 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_toParserDescr_process___spec__4(x_67, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_74;
}
}
else
{
lean_object* x_75; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5___rarg(x_27);
return x_75;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_27 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_17);
lean_ctor_set(x_28, 2, x_18);
lean_ctor_set(x_28, 3, x_19);
lean_ctor_set(x_28, 4, x_20);
lean_ctor_set(x_28, 5, x_27);
lean_ctor_set(x_28, 6, x_22);
lean_ctor_set(x_28, 7, x_23);
lean_ctor_set(x_28, 8, x_24);
lean_ctor_set(x_28, 9, x_25);
lean_ctor_set(x_28, 10, x_26);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_28, x_10, x_11);
lean_dec(x_10);
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("choice", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("sepBy", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("sepBy1", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("atom", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("nonReserved", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_checkLeftRec___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected syntax kind of category `syntax`: ", 45);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_process___closed__14;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_process___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_process___closed__16;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_process(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
lean_inc(x_1);
x_11 = l_Lean_Syntax_getKind(x_1);
x_12 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_13 = lean_name_eq(x_11, x_12);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 5);
x_16 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_15);
lean_ctor_set(x_8, 5, x_16);
if (x_13 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_Elab_Term_toParserDescr_process___closed__2;
x_18 = lean_name_eq(x_11, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Elab_Term_toParserDescr_process___closed__3;
x_20 = lean_name_eq(x_11, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Elab_Term_checkLeftRec___closed__4;
x_22 = lean_name_eq(x_11, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_Elab_Term_toParserDescr_process___closed__4;
x_24 = lean_name_eq(x_11, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_Elab_Term_toParserDescr_process___closed__5;
x_26 = lean_name_eq(x_11, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_Elab_Term_toParserDescr_process___closed__7;
x_28 = lean_name_eq(x_11, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_Elab_Term_toParserDescr_process___closed__9;
x_30 = lean_name_eq(x_11, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_Elab_Term_toParserDescr_process___closed__11;
x_32 = lean_name_eq(x_11, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_Elab_Term_toParserDescr_process___closed__13;
x_34 = lean_name_eq(x_11, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_inc(x_1);
x_35 = lean_alloc_closure((void*)(l_Lean_Macro_expandMacro_x3f), 3, 1);
lean_closure_set(x_35, 0, x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_36 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_toParserDescr_process___spec__1(x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_39, 0, x_11);
x_40 = l_Lean_Elab_Term_toParserDescr_process___closed__15;
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_Lean_Elab_Term_toParserDescr_process___closed__17;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__6(x_1, x_43, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_38);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_11);
lean_dec(x_1);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_dec(x_36);
x_46 = lean_ctor_get(x_37, 0);
lean_inc(x_46);
lean_dec(x_37);
x_1 = x_46;
x_10 = x_45;
goto _start;
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_36);
if (x_48 == 0)
{
return x_36;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_36, 0);
x_50 = lean_ctor_get(x_36, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_36);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; 
lean_dec(x_11);
x_52 = l_Lean_Elab_Term_toParserDescr_processNonReserved(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_52;
}
}
else
{
lean_object* x_53; 
lean_dec(x_11);
x_53 = l_Lean_Elab_Term_toParserDescr_processAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_53;
}
}
else
{
lean_object* x_54; 
lean_dec(x_11);
x_54 = l_Lean_Elab_Term_toParserDescr_processSepBy1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_54;
}
}
else
{
lean_object* x_55; 
lean_dec(x_11);
x_55 = l_Lean_Elab_Term_toParserDescr_processSepBy(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_11);
x_56 = lean_unsigned_to_nat(0u);
x_57 = l_Lean_Syntax_getArg(x_1, x_56);
x_58 = lean_unsigned_to_nat(2u);
x_59 = l_Lean_Syntax_getArg(x_1, x_58);
x_60 = lean_unsigned_to_nat(4u);
x_61 = l_Lean_Syntax_getArg(x_1, x_60);
lean_dec(x_1);
x_62 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_63 = lean_array_push(x_62, x_59);
x_64 = lean_array_push(x_63, x_61);
x_65 = l_Lean_Elab_Term_toParserDescr_processAlias(x_57, x_64, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_11);
x_66 = lean_unsigned_to_nat(0u);
x_67 = l_Lean_Syntax_getArg(x_1, x_66);
x_68 = lean_unsigned_to_nat(2u);
x_69 = l_Lean_Syntax_getArg(x_1, x_68);
lean_dec(x_1);
x_70 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_71 = lean_array_push(x_70, x_69);
x_72 = l_Lean_Elab_Term_toParserDescr_processAlias(x_67, x_71, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_72;
}
}
else
{
lean_object* x_73; 
lean_dec(x_11);
x_73 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_11);
x_74 = lean_unsigned_to_nat(1u);
x_75 = l_Lean_Syntax_getArg(x_1, x_74);
lean_dec(x_1);
x_1 = x_75;
goto _start;
}
}
else
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_11);
x_77 = lean_unsigned_to_nat(0u);
x_78 = l_Lean_Syntax_getArg(x_1, x_77);
lean_dec(x_1);
x_1 = x_78;
goto _start;
}
}
else
{
lean_object* x_80; 
lean_dec(x_11);
x_80 = l_Lean_Elab_Term_toParserDescr_processSeq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_81 = lean_ctor_get(x_8, 0);
x_82 = lean_ctor_get(x_8, 1);
x_83 = lean_ctor_get(x_8, 2);
x_84 = lean_ctor_get(x_8, 3);
x_85 = lean_ctor_get(x_8, 4);
x_86 = lean_ctor_get(x_8, 5);
x_87 = lean_ctor_get(x_8, 6);
x_88 = lean_ctor_get(x_8, 7);
x_89 = lean_ctor_get(x_8, 8);
x_90 = lean_ctor_get(x_8, 9);
x_91 = lean_ctor_get(x_8, 10);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_8);
x_92 = l_Lean_replaceRef(x_1, x_86);
lean_dec(x_86);
x_93 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_93, 0, x_81);
lean_ctor_set(x_93, 1, x_82);
lean_ctor_set(x_93, 2, x_83);
lean_ctor_set(x_93, 3, x_84);
lean_ctor_set(x_93, 4, x_85);
lean_ctor_set(x_93, 5, x_92);
lean_ctor_set(x_93, 6, x_87);
lean_ctor_set(x_93, 7, x_88);
lean_ctor_set(x_93, 8, x_89);
lean_ctor_set(x_93, 9, x_90);
lean_ctor_set(x_93, 10, x_91);
if (x_13 == 0)
{
lean_object* x_94; uint8_t x_95; 
x_94 = l_Lean_Elab_Term_toParserDescr_process___closed__2;
x_95 = lean_name_eq(x_11, x_94);
if (x_95 == 0)
{
lean_object* x_96; uint8_t x_97; 
x_96 = l_Lean_Elab_Term_toParserDescr_process___closed__3;
x_97 = lean_name_eq(x_11, x_96);
if (x_97 == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = l_Lean_Elab_Term_checkLeftRec___closed__4;
x_99 = lean_name_eq(x_11, x_98);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = l_Lean_Elab_Term_toParserDescr_process___closed__4;
x_101 = lean_name_eq(x_11, x_100);
if (x_101 == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = l_Lean_Elab_Term_toParserDescr_process___closed__5;
x_103 = lean_name_eq(x_11, x_102);
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; 
x_104 = l_Lean_Elab_Term_toParserDescr_process___closed__7;
x_105 = lean_name_eq(x_11, x_104);
if (x_105 == 0)
{
lean_object* x_106; uint8_t x_107; 
x_106 = l_Lean_Elab_Term_toParserDescr_process___closed__9;
x_107 = lean_name_eq(x_11, x_106);
if (x_107 == 0)
{
lean_object* x_108; uint8_t x_109; 
x_108 = l_Lean_Elab_Term_toParserDescr_process___closed__11;
x_109 = lean_name_eq(x_11, x_108);
if (x_109 == 0)
{
lean_object* x_110; uint8_t x_111; 
x_110 = l_Lean_Elab_Term_toParserDescr_process___closed__13;
x_111 = lean_name_eq(x_11, x_110);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
lean_inc(x_1);
x_112 = lean_alloc_closure((void*)(l_Lean_Macro_expandMacro_x3f), 3, 1);
lean_closure_set(x_112, 0, x_1);
lean_inc(x_9);
lean_inc(x_93);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_113 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_toParserDescr_process___spec__1(x_112, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_116, 0, x_11);
x_117 = l_Lean_Elab_Term_toParserDescr_process___closed__15;
x_118 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
x_119 = l_Lean_Elab_Term_toParserDescr_process___closed__17;
x_120 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_process___spec__6(x_1, x_120, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_115);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_11);
lean_dec(x_1);
x_122 = lean_ctor_get(x_113, 1);
lean_inc(x_122);
lean_dec(x_113);
x_123 = lean_ctor_get(x_114, 0);
lean_inc(x_123);
lean_dec(x_114);
x_1 = x_123;
x_8 = x_93;
x_10 = x_122;
goto _start;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_93);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_125 = lean_ctor_get(x_113, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_113, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_127 = x_113;
} else {
 lean_dec_ref(x_113);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; 
lean_dec(x_11);
x_129 = l_Lean_Elab_Term_toParserDescr_processNonReserved(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_129;
}
}
else
{
lean_object* x_130; 
lean_dec(x_11);
x_130 = l_Lean_Elab_Term_toParserDescr_processAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
return x_130;
}
}
else
{
lean_object* x_131; 
lean_dec(x_11);
x_131 = l_Lean_Elab_Term_toParserDescr_processSepBy1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
lean_dec(x_1);
return x_131;
}
}
else
{
lean_object* x_132; 
lean_dec(x_11);
x_132 = l_Lean_Elab_Term_toParserDescr_processSepBy(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
lean_dec(x_1);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_11);
x_133 = lean_unsigned_to_nat(0u);
x_134 = l_Lean_Syntax_getArg(x_1, x_133);
x_135 = lean_unsigned_to_nat(2u);
x_136 = l_Lean_Syntax_getArg(x_1, x_135);
x_137 = lean_unsigned_to_nat(4u);
x_138 = l_Lean_Syntax_getArg(x_1, x_137);
lean_dec(x_1);
x_139 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_140 = lean_array_push(x_139, x_136);
x_141 = lean_array_push(x_140, x_138);
x_142 = l_Lean_Elab_Term_toParserDescr_processAlias(x_134, x_141, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_11);
x_143 = lean_unsigned_to_nat(0u);
x_144 = l_Lean_Syntax_getArg(x_1, x_143);
x_145 = lean_unsigned_to_nat(2u);
x_146 = l_Lean_Syntax_getArg(x_1, x_145);
lean_dec(x_1);
x_147 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_148 = lean_array_push(x_147, x_146);
x_149 = l_Lean_Elab_Term_toParserDescr_processAlias(x_144, x_148, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
return x_149;
}
}
else
{
lean_object* x_150; 
lean_dec(x_11);
x_150 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_11);
x_151 = lean_unsigned_to_nat(1u);
x_152 = l_Lean_Syntax_getArg(x_1, x_151);
lean_dec(x_1);
x_1 = x_152;
x_8 = x_93;
goto _start;
}
}
else
{
lean_object* x_154; lean_object* x_155; 
lean_dec(x_11);
x_154 = lean_unsigned_to_nat(0u);
x_155 = l_Lean_Syntax_getArg(x_1, x_154);
lean_dec(x_1);
x_1 = x_155;
x_8 = x_93;
goto _start;
}
}
else
{
lean_object* x_157; 
lean_dec(x_11);
x_157 = l_Lean_Elab_Term_toParserDescr_processSeq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_93, x_9, x_10);
return x_157;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.sepBy1", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__6;
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27;
x_3 = l_Lean_mkCIdentFrom(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("true", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26;
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__13;
x_3 = l_Lean_mkCIdentFrom(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_146; lean_object* x_147; uint8_t x_148; lean_object* x_149; 
x_146 = lean_unsigned_to_nat(5u);
x_147 = l_Lean_Syntax_getArg(x_1, x_146);
x_148 = l_Lean_Syntax_isNone(x_147);
lean_dec(x_147);
lean_inc(x_11);
x_149 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_11, x_12, x_13);
if (x_148 == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = 1;
x_14 = x_152;
x_15 = x_150;
x_16 = x_151;
goto block_145;
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_153 = lean_ctor_get(x_149, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_149, 1);
lean_inc(x_154);
lean_dec(x_149);
x_155 = 0;
x_14 = x_155;
x_15 = x_153;
x_16 = x_154;
goto block_145;
}
block_145:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_11, 10);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_st_ref_get(x_12, x_16);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_environment_main_module(x_21);
x_23 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_15);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
lean_inc(x_15);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_Syntax_getArg(x_1, x_27);
x_29 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
lean_inc(x_15);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_15);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4;
x_32 = l_Lean_addMacroScope(x_22, x_31, x_17);
x_33 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3;
x_34 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9;
lean_inc(x_15);
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_15);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_32);
lean_ctor_set(x_35, 3, x_34);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_37 = lean_array_push(x_36, x_30);
x_38 = lean_array_push(x_37, x_35);
x_39 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
lean_inc(x_15);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_15);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
x_41 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_42 = lean_array_push(x_41, x_26);
x_43 = lean_array_push(x_42, x_28);
x_44 = lean_array_push(x_43, x_40);
x_45 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
lean_inc(x_15);
x_46 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_46, 0, x_15);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_44);
x_47 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_48 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_15);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_15);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_48);
x_50 = lean_array_push(x_36, x_46);
x_51 = lean_array_push(x_50, x_49);
lean_inc(x_15);
x_52 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_52, 0, x_15);
lean_ctor_set(x_52, 1, x_47);
lean_ctor_set(x_52, 2, x_51);
x_53 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_15);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_15);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_push(x_41, x_24);
x_56 = lean_array_push(x_55, x_52);
x_57 = lean_array_push(x_56, x_54);
x_58 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_15);
x_59 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_59, 0, x_15);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_57);
x_60 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
x_61 = lean_array_push(x_60, x_2);
x_62 = lean_array_push(x_61, x_3);
x_63 = lean_array_push(x_62, x_4);
x_64 = lean_array_push(x_36, x_59);
if (x_14 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11;
x_66 = lean_array_push(x_63, x_65);
lean_inc(x_15);
x_67 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_67, 0, x_15);
lean_ctor_set(x_67, 1, x_47);
lean_ctor_set(x_67, 2, x_66);
x_68 = lean_array_push(x_64, x_67);
x_69 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_70 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_70, 0, x_15);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_70, 2, x_68);
x_71 = lean_unsigned_to_nat(1u);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
lean_ctor_set(x_18, 0, x_72);
return x_18;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14;
x_74 = lean_array_push(x_63, x_73);
lean_inc(x_15);
x_75 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_75, 0, x_15);
lean_ctor_set(x_75, 1, x_47);
lean_ctor_set(x_75, 2, x_74);
x_76 = lean_array_push(x_64, x_75);
x_77 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_78 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_78, 0, x_15);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_78, 2, x_76);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
lean_ctor_set(x_18, 0, x_80);
return x_18;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_81 = lean_ctor_get(x_18, 0);
x_82 = lean_ctor_get(x_18, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_18);
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_environment_main_module(x_83);
x_85 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_15);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_15);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
lean_inc(x_15);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_15);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_unsigned_to_nat(0u);
x_90 = l_Lean_Syntax_getArg(x_1, x_89);
x_91 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
lean_inc(x_15);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_15);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4;
x_94 = l_Lean_addMacroScope(x_84, x_93, x_17);
x_95 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3;
x_96 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9;
lean_inc(x_15);
x_97 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_97, 0, x_15);
lean_ctor_set(x_97, 1, x_95);
lean_ctor_set(x_97, 2, x_94);
lean_ctor_set(x_97, 3, x_96);
x_98 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_99 = lean_array_push(x_98, x_92);
x_100 = lean_array_push(x_99, x_97);
x_101 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
lean_inc(x_15);
x_102 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_102, 0, x_15);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_102, 2, x_100);
x_103 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_104 = lean_array_push(x_103, x_88);
x_105 = lean_array_push(x_104, x_90);
x_106 = lean_array_push(x_105, x_102);
x_107 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
lean_inc(x_15);
x_108 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_108, 0, x_15);
lean_ctor_set(x_108, 1, x_107);
lean_ctor_set(x_108, 2, x_106);
x_109 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_110 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_15);
x_111 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_111, 0, x_15);
lean_ctor_set(x_111, 1, x_109);
lean_ctor_set(x_111, 2, x_110);
x_112 = lean_array_push(x_98, x_108);
x_113 = lean_array_push(x_112, x_111);
lean_inc(x_15);
x_114 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_114, 0, x_15);
lean_ctor_set(x_114, 1, x_109);
lean_ctor_set(x_114, 2, x_113);
x_115 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_15);
x_116 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_116, 0, x_15);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_103, x_86);
x_118 = lean_array_push(x_117, x_114);
x_119 = lean_array_push(x_118, x_116);
x_120 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_15);
x_121 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_121, 0, x_15);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_121, 2, x_119);
x_122 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
x_123 = lean_array_push(x_122, x_2);
x_124 = lean_array_push(x_123, x_3);
x_125 = lean_array_push(x_124, x_4);
x_126 = lean_array_push(x_98, x_121);
if (x_14 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_127 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11;
x_128 = lean_array_push(x_125, x_127);
lean_inc(x_15);
x_129 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_129, 0, x_15);
lean_ctor_set(x_129, 1, x_109);
lean_ctor_set(x_129, 2, x_128);
x_130 = lean_array_push(x_126, x_129);
x_131 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_132 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_132, 0, x_15);
lean_ctor_set(x_132, 1, x_131);
lean_ctor_set(x_132, 2, x_130);
x_133 = lean_unsigned_to_nat(1u);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_82);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_136 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14;
x_137 = lean_array_push(x_125, x_136);
lean_inc(x_15);
x_138 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_138, 0, x_15);
lean_ctor_set(x_138, 1, x_109);
lean_ctor_set(x_138, 2, x_137);
x_139 = lean_array_push(x_126, x_138);
x_140 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_141 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_141, 0, x_15);
lean_ctor_set(x_141, 1, x_140);
lean_ctor_set(x_141, 2, x_139);
x_142 = lean_unsigned_to_nat(1u);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_82);
return x_144;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 2);
x_15 = 0;
x_16 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 2, x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_16);
x_17 = l_Lean_Elab_Term_toParserDescr_process(x_12, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_ensureUnaryOutput(x_18);
x_21 = lean_unsigned_to_nat(3u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_unsigned_to_nat(4u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = l_Lean_Syntax_isNone(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_Syntax_getArg(x_24, x_11);
lean_dec(x_24);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_27 = l_Lean_Elab_Term_toParserDescr_process(x_26, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_ensureUnaryOutput(x_28);
x_31 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1(x_1, x_20, x_22, x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_24);
lean_dec(x_16);
lean_inc(x_8);
x_36 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_8, x_9, x_19);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_8, 10);
lean_inc(x_39);
x_40 = lean_st_ref_get(x_9, x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_environment_main_module(x_43);
x_45 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5;
x_46 = l_Lean_addMacroScope(x_44, x_45, x_39);
x_47 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3;
x_48 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10;
lean_inc(x_37);
x_49 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_49, 0, x_37);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_46);
lean_ctor_set(x_49, 3, x_48);
x_50 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
lean_inc(x_22);
x_51 = lean_array_push(x_50, x_22);
x_52 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_37);
x_53 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_51);
x_54 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_55 = lean_array_push(x_54, x_49);
x_56 = lean_array_push(x_55, x_53);
x_57 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_58 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_58, 0, x_37);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_56);
x_59 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1(x_1, x_20, x_22, x_58, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = !lean_is_exclusive(x_17);
if (x_60 == 0)
{
return x_17;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_17, 0);
x_62 = lean_ctor_get(x_17, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_17);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.sepBy", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_process___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__6;
x_2 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_146; lean_object* x_147; uint8_t x_148; lean_object* x_149; 
x_146 = lean_unsigned_to_nat(5u);
x_147 = l_Lean_Syntax_getArg(x_1, x_146);
x_148 = l_Lean_Syntax_isNone(x_147);
lean_dec(x_147);
lean_inc(x_11);
x_149 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_11, x_12, x_13);
if (x_148 == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = 1;
x_14 = x_152;
x_15 = x_150;
x_16 = x_151;
goto block_145;
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_153 = lean_ctor_get(x_149, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_149, 1);
lean_inc(x_154);
lean_dec(x_149);
x_155 = 0;
x_14 = x_155;
x_15 = x_153;
x_16 = x_154;
goto block_145;
}
block_145:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_11, 10);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_st_ref_get(x_12, x_16);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_environment_main_module(x_21);
x_23 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_15);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
lean_inc(x_15);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_Syntax_getArg(x_1, x_27);
x_29 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
lean_inc(x_15);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_15);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4;
x_32 = l_Lean_addMacroScope(x_22, x_31, x_17);
x_33 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3;
x_34 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9;
lean_inc(x_15);
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_15);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_32);
lean_ctor_set(x_35, 3, x_34);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_37 = lean_array_push(x_36, x_30);
x_38 = lean_array_push(x_37, x_35);
x_39 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
lean_inc(x_15);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_15);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
x_41 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_42 = lean_array_push(x_41, x_26);
x_43 = lean_array_push(x_42, x_28);
x_44 = lean_array_push(x_43, x_40);
x_45 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
lean_inc(x_15);
x_46 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_46, 0, x_15);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_44);
x_47 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_48 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_15);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_15);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_48);
x_50 = lean_array_push(x_36, x_46);
x_51 = lean_array_push(x_50, x_49);
lean_inc(x_15);
x_52 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_52, 0, x_15);
lean_ctor_set(x_52, 1, x_47);
lean_ctor_set(x_52, 2, x_51);
x_53 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_15);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_15);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_push(x_41, x_24);
x_56 = lean_array_push(x_55, x_52);
x_57 = lean_array_push(x_56, x_54);
x_58 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_15);
x_59 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_59, 0, x_15);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_57);
x_60 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
x_61 = lean_array_push(x_60, x_2);
x_62 = lean_array_push(x_61, x_3);
x_63 = lean_array_push(x_62, x_4);
x_64 = lean_array_push(x_36, x_59);
if (x_14 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11;
x_66 = lean_array_push(x_63, x_65);
lean_inc(x_15);
x_67 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_67, 0, x_15);
lean_ctor_set(x_67, 1, x_47);
lean_ctor_set(x_67, 2, x_66);
x_68 = lean_array_push(x_64, x_67);
x_69 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_70 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_70, 0, x_15);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_70, 2, x_68);
x_71 = lean_unsigned_to_nat(1u);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
lean_ctor_set(x_18, 0, x_72);
return x_18;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14;
x_74 = lean_array_push(x_63, x_73);
lean_inc(x_15);
x_75 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_75, 0, x_15);
lean_ctor_set(x_75, 1, x_47);
lean_ctor_set(x_75, 2, x_74);
x_76 = lean_array_push(x_64, x_75);
x_77 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_78 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_78, 0, x_15);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_78, 2, x_76);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
lean_ctor_set(x_18, 0, x_80);
return x_18;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_81 = lean_ctor_get(x_18, 0);
x_82 = lean_ctor_get(x_18, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_18);
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_environment_main_module(x_83);
x_85 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_15);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_15);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6;
lean_inc(x_15);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_15);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_unsigned_to_nat(0u);
x_90 = l_Lean_Syntax_getArg(x_1, x_89);
x_91 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9;
lean_inc(x_15);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_15);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4;
x_94 = l_Lean_addMacroScope(x_84, x_93, x_17);
x_95 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3;
x_96 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9;
lean_inc(x_15);
x_97 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_97, 0, x_15);
lean_ctor_set(x_97, 1, x_95);
lean_ctor_set(x_97, 2, x_94);
lean_ctor_set(x_97, 3, x_96);
x_98 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_99 = lean_array_push(x_98, x_92);
x_100 = lean_array_push(x_99, x_97);
x_101 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8;
lean_inc(x_15);
x_102 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_102, 0, x_15);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_102, 2, x_100);
x_103 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_104 = lean_array_push(x_103, x_88);
x_105 = lean_array_push(x_104, x_90);
x_106 = lean_array_push(x_105, x_102);
x_107 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5;
lean_inc(x_15);
x_108 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_108, 0, x_15);
lean_ctor_set(x_108, 1, x_107);
lean_ctor_set(x_108, 2, x_106);
x_109 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_110 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_15);
x_111 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_111, 0, x_15);
lean_ctor_set(x_111, 1, x_109);
lean_ctor_set(x_111, 2, x_110);
x_112 = lean_array_push(x_98, x_108);
x_113 = lean_array_push(x_112, x_111);
lean_inc(x_15);
x_114 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_114, 0, x_15);
lean_ctor_set(x_114, 1, x_109);
lean_ctor_set(x_114, 2, x_113);
x_115 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_15);
x_116 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_116, 0, x_15);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_103, x_86);
x_118 = lean_array_push(x_117, x_114);
x_119 = lean_array_push(x_118, x_116);
x_120 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_15);
x_121 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_121, 0, x_15);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_121, 2, x_119);
x_122 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
x_123 = lean_array_push(x_122, x_2);
x_124 = lean_array_push(x_123, x_3);
x_125 = lean_array_push(x_124, x_4);
x_126 = lean_array_push(x_98, x_121);
if (x_14 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_127 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11;
x_128 = lean_array_push(x_125, x_127);
lean_inc(x_15);
x_129 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_129, 0, x_15);
lean_ctor_set(x_129, 1, x_109);
lean_ctor_set(x_129, 2, x_128);
x_130 = lean_array_push(x_126, x_129);
x_131 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_132 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_132, 0, x_15);
lean_ctor_set(x_132, 1, x_131);
lean_ctor_set(x_132, 2, x_130);
x_133 = lean_unsigned_to_nat(1u);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_82);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_136 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14;
x_137 = lean_array_push(x_125, x_136);
lean_inc(x_15);
x_138 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_138, 0, x_15);
lean_ctor_set(x_138, 1, x_109);
lean_ctor_set(x_138, 2, x_137);
x_139 = lean_array_push(x_126, x_138);
x_140 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_141 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_141, 0, x_15);
lean_ctor_set(x_141, 1, x_140);
lean_ctor_set(x_141, 2, x_139);
x_142 = lean_unsigned_to_nat(1u);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_82);
return x_144;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_2, sizeof(void*)*1 + 2);
x_15 = 0;
x_16 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 2, x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_16);
x_17 = l_Lean_Elab_Term_toParserDescr_process(x_12, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_ensureUnaryOutput(x_18);
x_21 = lean_unsigned_to_nat(3u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_unsigned_to_nat(4u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = l_Lean_Syntax_isNone(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_Syntax_getArg(x_24, x_11);
lean_dec(x_24);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_27 = l_Lean_Elab_Term_toParserDescr_process(x_26, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_ensureUnaryOutput(x_28);
x_31 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1(x_1, x_20, x_22, x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_24);
lean_dec(x_16);
lean_inc(x_8);
x_36 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_8, x_9, x_19);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_8, 10);
lean_inc(x_39);
x_40 = lean_st_ref_get(x_9, x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_environment_main_module(x_43);
x_45 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5;
x_46 = l_Lean_addMacroScope(x_44, x_45, x_39);
x_47 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3;
x_48 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10;
lean_inc(x_37);
x_49 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_49, 0, x_37);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_46);
lean_ctor_set(x_49, 3, x_48);
x_50 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
lean_inc(x_22);
x_51 = lean_array_push(x_50, x_22);
x_52 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_37);
x_53 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_51);
x_54 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_55 = lean_array_push(x_54, x_49);
x_56 = lean_array_push(x_55, x_53);
x_57 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_58 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_58, 0, x_37);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_56);
x_59 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1(x_1, x_20, x_22, x_58, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_60 = !lean_is_exclusive(x_17);
if (x_60 == 0)
{
return x_17;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_17, 0);
x_62 = lean_ctor_get(x_17, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_17);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_2, x_1);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_array_uget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_3, x_2, x_16);
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 2);
x_20 = 0;
lean_inc(x_18);
x_21 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 1, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 2, x_19);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l_Lean_Elab_Term_toParserDescr_process(x_15, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = lean_usize_add(x_2, x_25);
x_27 = lean_array_uset(x_17, x_2, x_23);
x_2 = x_26;
x_3 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
return x_22;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_instMonadTermElabM;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__1;
x_2 = lean_box(0);
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__2;
x_2 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__3;
x_12 = lean_panic_fn(x_11, x_1);
x_13 = lean_apply_9(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_toParserDescr_processAlias___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_nat_add(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__5(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = l_Lean_Elab_Term_ensureUnaryOutput(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Elab.Syntax", 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Elab.Term.toParserDescr.processAlias", 41);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(184u);
x_2 = lean_unsigned_to_nat(21u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__2;
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__5;
x_3 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unreachable code has been reached", 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__7;
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__8;
x_3 = l_CallerInfo_mkPanicMessage(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.const", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__10;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__10;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__11;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("const", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__15;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__15;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAlias(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = l_Lean_Syntax_getId(x_1);
x_13 = lean_erase_macro_scopes(x_12);
x_14 = lean_st_ref_get(x_10, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_9, 5);
lean_inc(x_16);
x_17 = l_Lean_Parser_getParserAliasInfo(x_13, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_18);
x_20 = l_Lean_Elab_Term_addAliasInfo(x_1, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_array_get_size(x_2);
x_23 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_24 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__1(x_23, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_242; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_242 = lean_ctor_get(x_18, 1);
lean_inc(x_242);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; 
lean_dec(x_18);
x_243 = l_Array_unzip___rarg(x_26);
lean_dec(x_26);
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
lean_dec(x_243);
x_246 = lean_array_get_size(x_245);
x_247 = lean_unsigned_to_nat(0u);
x_248 = lean_nat_dec_lt(x_247, x_246);
if (x_248 == 0)
{
lean_dec(x_246);
lean_dec(x_245);
x_28 = x_244;
x_29 = x_247;
goto block_241;
}
else
{
uint8_t x_249; 
x_249 = lean_nat_dec_le(x_246, x_246);
if (x_249 == 0)
{
lean_dec(x_246);
lean_dec(x_245);
x_28 = x_244;
x_29 = x_247;
goto block_241;
}
else
{
size_t x_250; lean_object* x_251; 
x_250 = lean_usize_of_nat(x_246);
lean_dec(x_246);
x_251 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_toParserDescr_processAlias___spec__3(x_245, x_24, x_250, x_247);
lean_dec(x_245);
x_28 = x_244;
x_29 = x_251;
goto block_241;
}
}
}
else
{
uint8_t x_252; 
x_252 = lean_ctor_get_uint8(x_18, sizeof(void*)*2);
lean_dec(x_18);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; size_t x_255; lean_object* x_256; 
x_253 = lean_ctor_get(x_242, 0);
lean_inc(x_253);
lean_dec(x_242);
x_254 = lean_array_get_size(x_26);
x_255 = lean_usize_of_nat(x_254);
lean_dec(x_254);
x_256 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__4(x_255, x_24, x_26);
x_28 = x_256;
x_29 = x_253;
goto block_241;
}
else
{
lean_object* x_257; lean_object* x_258; size_t x_259; lean_object* x_260; 
x_257 = lean_ctor_get(x_242, 0);
lean_inc(x_257);
lean_dec(x_242);
x_258 = lean_array_get_size(x_26);
x_259 = lean_usize_of_nat(x_258);
lean_dec(x_258);
x_260 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__5(x_259, x_24, x_26);
x_28 = x_260;
x_29 = x_257;
goto block_241;
}
}
block_241:
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_array_get_size(x_28);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_dec_eq(x_30, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_dec_eq(x_30, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_nat_dec_eq(x_30, x_35);
lean_dec(x_30);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_13);
x_37 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__9;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_38 = l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2(x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_40);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_41;
}
else
{
uint8_t x_42; 
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_38);
if (x_42 == 0)
{
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_38, 0);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_38);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_array_fget(x_28, x_31);
x_47 = lean_array_fget(x_28, x_33);
lean_dec(x_28);
x_48 = lean_st_ref_get(x_10, x_27);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
lean_inc(x_13);
x_50 = l_Lean_Parser_ensureBinaryParserAlias(x_13, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_16);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_9);
x_52 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_9, x_10, x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_9, 10);
lean_inc(x_55);
x_56 = lean_st_ref_get(x_10, x_54);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_environment_main_module(x_59);
x_61 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15;
x_62 = l_Lean_addMacroScope(x_60, x_61, x_55);
x_63 = lean_box(0);
x_64 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11;
x_65 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21;
lean_inc(x_53);
x_66 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_66, 0, x_53);
lean_ctor_set(x_66, 1, x_64);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_65);
lean_inc(x_13);
x_67 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_63, x_13);
x_68 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_69 = lean_array_push(x_68, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_70 = l_Lean_quoteNameMk(x_13);
x_71 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_72 = lean_array_push(x_71, x_70);
x_73 = lean_array_push(x_72, x_46);
x_74 = lean_array_push(x_73, x_47);
x_75 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_53);
x_76 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_76, 0, x_53);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_74);
x_77 = lean_array_push(x_69, x_76);
x_78 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_79 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_79, 0, x_53);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set(x_79, 2, x_77);
x_80 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_79, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_13);
x_81 = lean_ctor_get(x_67, 0);
lean_inc(x_81);
lean_dec(x_67);
x_82 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_83 = l_String_intercalate(x_82, x_81);
x_84 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_85 = lean_string_append(x_84, x_83);
lean_dec(x_83);
x_86 = lean_box(2);
x_87 = l_Lean_Syntax_mkNameLit(x_85, x_86);
x_88 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_89 = lean_array_push(x_88, x_87);
x_90 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_91 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_91, 0, x_86);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_91, 2, x_89);
x_92 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_93 = lean_array_push(x_92, x_91);
x_94 = lean_array_push(x_93, x_46);
x_95 = lean_array_push(x_94, x_47);
x_96 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_53);
x_97 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_97, 0, x_53);
lean_ctor_set(x_97, 1, x_96);
lean_ctor_set(x_97, 2, x_95);
x_98 = lean_array_push(x_69, x_97);
x_99 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_100 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_100, 0, x_53);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_100, 2, x_98);
x_101 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_101;
}
}
else
{
uint8_t x_102; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_29);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_102 = !lean_is_exclusive(x_50);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_50, 0);
x_104 = lean_io_error_to_string(x_103);
x_105 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_16);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_50, 0, x_107);
return x_50;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_108 = lean_ctor_get(x_50, 0);
x_109 = lean_ctor_get(x_50, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_50);
x_110 = lean_io_error_to_string(x_108);
x_111 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_111, 0, x_110);
x_112 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_112, 0, x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_16);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_109);
return x_114;
}
}
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_30);
x_115 = lean_array_fget(x_28, x_31);
lean_dec(x_28);
x_116 = lean_st_ref_get(x_10, x_27);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
lean_dec(x_116);
lean_inc(x_13);
x_118 = l_Lean_Parser_ensureUnaryParserAlias(x_13, x_117);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_16);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
lean_inc(x_9);
x_120 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_9, x_10, x_119);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_9, 10);
lean_inc(x_123);
x_124 = lean_st_ref_get(x_10, x_122);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_environment_main_module(x_127);
x_129 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7;
x_130 = l_Lean_addMacroScope(x_128, x_129, x_123);
x_131 = lean_box(0);
x_132 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5;
x_133 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12;
lean_inc(x_121);
x_134 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_134, 0, x_121);
lean_ctor_set(x_134, 1, x_132);
lean_ctor_set(x_134, 2, x_130);
lean_ctor_set(x_134, 3, x_133);
lean_inc(x_13);
x_135 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_131, x_13);
x_136 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_137 = lean_array_push(x_136, x_134);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_138 = l_Lean_quoteNameMk(x_13);
x_139 = lean_array_push(x_136, x_138);
x_140 = lean_array_push(x_139, x_115);
x_141 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_121);
x_142 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_142, 0, x_121);
lean_ctor_set(x_142, 1, x_141);
lean_ctor_set(x_142, 2, x_140);
x_143 = lean_array_push(x_137, x_142);
x_144 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_145 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_145, 0, x_121);
lean_ctor_set(x_145, 1, x_144);
lean_ctor_set(x_145, 2, x_143);
x_146 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_145, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_126);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_13);
x_147 = lean_ctor_get(x_135, 0);
lean_inc(x_147);
lean_dec(x_135);
x_148 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_149 = l_String_intercalate(x_148, x_147);
x_150 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_151 = lean_string_append(x_150, x_149);
lean_dec(x_149);
x_152 = lean_box(2);
x_153 = l_Lean_Syntax_mkNameLit(x_151, x_152);
x_154 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_155 = lean_array_push(x_154, x_153);
x_156 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_157 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_157, 0, x_152);
lean_ctor_set(x_157, 1, x_156);
lean_ctor_set(x_157, 2, x_155);
x_158 = lean_array_push(x_136, x_157);
x_159 = lean_array_push(x_158, x_115);
x_160 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_121);
x_161 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_161, 0, x_121);
lean_ctor_set(x_161, 1, x_160);
lean_ctor_set(x_161, 2, x_159);
x_162 = lean_array_push(x_137, x_161);
x_163 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_164 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_164, 0, x_121);
lean_ctor_set(x_164, 1, x_163);
lean_ctor_set(x_164, 2, x_162);
x_165 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_164, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_126);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_165;
}
}
else
{
uint8_t x_166; 
lean_dec(x_115);
lean_dec(x_29);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_166 = !lean_is_exclusive(x_118);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_167 = lean_ctor_get(x_118, 0);
x_168 = lean_io_error_to_string(x_167);
x_169 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_169, 0, x_168);
x_170 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_16);
lean_ctor_set(x_171, 1, x_170);
lean_ctor_set(x_118, 0, x_171);
return x_118;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_172 = lean_ctor_get(x_118, 0);
x_173 = lean_ctor_get(x_118, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_118);
x_174 = lean_io_error_to_string(x_172);
x_175 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_175, 0, x_174);
x_176 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_16);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_173);
return x_178;
}
}
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_30);
lean_dec(x_28);
x_179 = lean_st_ref_get(x_10, x_27);
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
lean_inc(x_13);
x_181 = l_Lean_Parser_ensureConstantParserAlias(x_13, x_180);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_16);
x_182 = lean_ctor_get(x_181, 1);
lean_inc(x_182);
lean_dec(x_181);
lean_inc(x_9);
x_183 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_9, x_10, x_182);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
lean_dec(x_183);
x_186 = lean_ctor_get(x_9, 10);
lean_inc(x_186);
x_187 = lean_st_ref_get(x_10, x_185);
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_ctor_get(x_188, 0);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lean_environment_main_module(x_190);
x_192 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__14;
x_193 = l_Lean_addMacroScope(x_191, x_192, x_186);
x_194 = lean_box(0);
x_195 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__12;
x_196 = l_Lean_Elab_Term_toParserDescr_processAlias___closed__19;
lean_inc(x_184);
x_197 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_197, 0, x_184);
lean_ctor_set(x_197, 1, x_195);
lean_ctor_set(x_197, 2, x_193);
lean_ctor_set(x_197, 3, x_196);
lean_inc(x_13);
x_198 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_194, x_13);
x_199 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_200 = lean_array_push(x_199, x_197);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_201 = l_Lean_quoteNameMk(x_13);
x_202 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_203 = lean_array_push(x_202, x_201);
x_204 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_184);
x_205 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_205, 0, x_184);
lean_ctor_set(x_205, 1, x_204);
lean_ctor_set(x_205, 2, x_203);
x_206 = lean_array_push(x_200, x_205);
x_207 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_208 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_208, 0, x_184);
lean_ctor_set(x_208, 1, x_207);
lean_ctor_set(x_208, 2, x_206);
x_209 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_208, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_189);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_209;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_13);
x_210 = lean_ctor_get(x_198, 0);
lean_inc(x_210);
lean_dec(x_198);
x_211 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_212 = l_String_intercalate(x_211, x_210);
x_213 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_214 = lean_string_append(x_213, x_212);
lean_dec(x_212);
x_215 = lean_box(2);
x_216 = l_Lean_Syntax_mkNameLit(x_214, x_215);
x_217 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_218 = lean_array_push(x_217, x_216);
x_219 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_220 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_220, 0, x_215);
lean_ctor_set(x_220, 1, x_219);
lean_ctor_set(x_220, 2, x_218);
x_221 = lean_array_push(x_217, x_220);
x_222 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_184);
x_223 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_223, 0, x_184);
lean_ctor_set(x_223, 1, x_222);
lean_ctor_set(x_223, 2, x_221);
x_224 = lean_array_push(x_200, x_223);
x_225 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_226 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_226, 0, x_184);
lean_ctor_set(x_226, 1, x_225);
lean_ctor_set(x_226, 2, x_224);
x_227 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_29, x_226, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_189);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_dec(x_29);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_228 = !lean_is_exclusive(x_181);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_229 = lean_ctor_get(x_181, 0);
x_230 = lean_io_error_to_string(x_229);
x_231 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_231, 0, x_230);
x_232 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_232, 0, x_231);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_16);
lean_ctor_set(x_233, 1, x_232);
lean_ctor_set(x_181, 0, x_233);
return x_181;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_234 = lean_ctor_get(x_181, 0);
x_235 = lean_ctor_get(x_181, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_181);
x_236 = lean_io_error_to_string(x_234);
x_237 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_237, 0, x_236);
x_238 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_238, 0, x_237);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_16);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_235);
return x_240;
}
}
}
}
}
else
{
uint8_t x_261; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_261 = !lean_is_exclusive(x_25);
if (x_261 == 0)
{
return x_25;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_25, 0);
x_263 = lean_ctor_get(x_25, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_25);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
return x_264;
}
}
}
else
{
uint8_t x_265; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_265 = !lean_is_exclusive(x_20);
if (x_265 == 0)
{
return x_20;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_20, 0);
x_267 = lean_ctor_get(x_20, 1);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_20);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_27 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_28, 0, x_16);
lean_ctor_set(x_28, 1, x_17);
lean_ctor_set(x_28, 2, x_18);
lean_ctor_set(x_28, 3, x_19);
lean_ctor_set(x_28, 4, x_20);
lean_ctor_set(x_28, 5, x_27);
lean_ctor_set(x_28, 6, x_22);
lean_ctor_set(x_28, 7, x_23);
lean_ctor_set(x_28, 8, x_24);
lean_ctor_set(x_28, 9, x_25);
lean_ctor_set(x_28, 10, x_26);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_28, x_10, x_11);
lean_dec(x_10);
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_8, 6);
lean_inc(x_15);
x_16 = lean_ctor_get(x_8, 7);
lean_inc(x_16);
lean_dec(x_8);
x_17 = l_Lean_ResolveName_resolveGlobalName(x_14, x_15, x_16, x_1);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_8, 6);
lean_inc(x_21);
x_22 = lean_ctor_get(x_8, 7);
lean_inc(x_22);
lean_dec(x_8);
x_23 = l_Lean_ResolveName_resolveGlobalName(x_20, x_21, x_22, x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unknown constant '", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_box(0);
x_12 = l_Lean_Expr_const___override(x_1, x_11);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Elab_Term_checkLeftRec___spec__10(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_List_mapTRAux___at_Lean_resolveGlobalConstCore___spec__2(x_1, x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_inc(x_8);
lean_inc(x_1);
x_11 = l_Lean_resolveGlobalName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = l_List_filterTRAux___at_Lean_resolveGlobalConstCore___spec__1(x_12, x_14);
x_16 = l_List_isEmpty___rarg(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = lean_box(0);
x_18 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6___lambda__1(x_15, x_14, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_15);
x_19 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("expected identifier", 19);
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
x_13 = l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(x_12);
x_14 = l_List_isEmpty___rarg(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 5);
x_18 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
lean_dec(x_1);
lean_ctor_set(x_8, 5, x_18);
x_19 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
x_24 = lean_ctor_get(x_8, 4);
x_25 = lean_ctor_get(x_8, 5);
x_26 = lean_ctor_get(x_8, 6);
x_27 = lean_ctor_get(x_8, 7);
x_28 = lean_ctor_get(x_8, 8);
x_29 = lean_ctor_get(x_8, 9);
x_30 = lean_ctor_get(x_8, 10);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_31 = l_Lean_replaceRef(x_1, x_25);
lean_dec(x_25);
lean_dec(x_1);
x_32 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_21);
lean_ctor_set(x_32, 2, x_22);
lean_ctor_set(x_32, 3, x_23);
lean_ctor_set(x_32, 4, x_24);
lean_ctor_set(x_32, 5, x_31);
lean_ctor_set(x_32, 6, x_26);
lean_ctor_set(x_32, 7, x_27);
lean_ctor_set(x_32, 8, x_28);
lean_ctor_set(x_32, 9, x_29);
lean_ctor_set(x_32, 10, x_30);
x_33 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_32, x_9, x_10);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__3;
x_35 = l_Lean_throwErrorAt___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__4(x_1, x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_35;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_1);
x_16 = lean_environment_find(x_15, x_1);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_11);
x_17 = lean_box(0);
x_18 = l_Lean_Expr_const___override(x_1, x_17);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_24;
}
else
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
lean_ctor_set(x_11, 0, x_25);
return x_11;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_1);
x_29 = lean_environment_find(x_28, x_1);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_box(0);
x_31 = l_Lean_Expr_const___override(x_1, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12(x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_27);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_1);
x_38 = lean_ctor_get(x_29, 0);
lean_inc(x_38);
lean_dec(x_29);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_27);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_1);
x_11 = l_Lean_getConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_ConstantInfo_levelParams(x_13);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = l_List_mapTRAux___at_Lean_mkConstWithLevelParams___spec__1(x_14, x_15);
x_17 = l_Lean_Expr_const___override(x_1, x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = l_Lean_ConstantInfo_levelParams(x_18);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = l_List_mapTRAux___at_Lean_mkConstWithLevelParams___spec__1(x_20, x_21);
x_23 = l_Lean_Expr_const___override(x_1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_11);
if (x_25 == 0)
{
return x_11;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 6);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_st_ref_take(x_9, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_23, 6);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_23, 6);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_24, 1);
x_30 = l_Lean_PersistentArray_push___rarg(x_29, x_1);
lean_ctor_set(x_24, 1, x_30);
x_31 = lean_st_ref_set(x_9, x_23, x_25);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get_uint8(x_24, sizeof(void*)*2);
x_39 = lean_ctor_get(x_24, 0);
x_40 = lean_ctor_get(x_24, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_24);
x_41 = l_Lean_PersistentArray_push___rarg(x_40, x_1);
x_42 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set_uint8(x_42, sizeof(void*)*2, x_38);
lean_ctor_set(x_23, 6, x_42);
x_43 = lean_st_ref_set(x_9, x_23, x_25);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
x_46 = lean_box(0);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_48 = lean_ctor_get(x_23, 0);
x_49 = lean_ctor_get(x_23, 1);
x_50 = lean_ctor_get(x_23, 2);
x_51 = lean_ctor_get(x_23, 3);
x_52 = lean_ctor_get(x_23, 4);
x_53 = lean_ctor_get(x_23, 5);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_23);
x_54 = lean_ctor_get_uint8(x_24, sizeof(void*)*2);
x_55 = lean_ctor_get(x_24, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_24, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_57 = x_24;
} else {
 lean_dec_ref(x_24);
 x_57 = lean_box(0);
}
x_58 = l_Lean_PersistentArray_push___rarg(x_56, x_1);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 2, 1);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_55);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set_uint8(x_59, sizeof(void*)*2, x_54);
x_60 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_60, 0, x_48);
lean_ctor_set(x_60, 1, x_49);
lean_ctor_set(x_60, 2, x_50);
lean_ctor_set(x_60, 3, x_51);
lean_ctor_set(x_60, 4, x_52);
lean_ctor_set(x_60, 5, x_53);
lean_ctor_set(x_60, 6, x_59);
x_61 = lean_st_ref_set(x_9, x_60, x_25);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
x_64 = lean_box(0);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__3() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__2;
x_3 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 6);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get_uint8(x_13, sizeof(void*)*2);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__3;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__14(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__10(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
x_18 = l_Lean_LocalContext_empty;
x_19 = 0;
x_20 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_3);
lean_ctor_set(x_20, 3, x_14);
lean_ctor_set_uint8(x_20, sizeof(void*)*4, x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Lean_Elab_addConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__9(x_1, x_15, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_box(0);
x_3 = x_16;
x_4 = x_19;
x_13 = x_18;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_12 = l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_10, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 6);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get_uint8(x_17, sizeof(void*)*2);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_15, 0);
lean_dec(x_20);
lean_ctor_set(x_15, 0, x_13);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_box(0);
lean_inc(x_13);
x_25 = l_List_forIn_loop___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__15(x_1, x_2, x_13, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_13);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_13);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_12);
if (x_34 == 0)
{
return x_12;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_12, 0);
x_36 = lean_ctor_get(x_12, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_12);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_1);
x_7 = lean_environment_find(x_1, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_ConstantInfo_type(x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 4)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_dec(x_14);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_20 = lean_string_dec_eq(x_14, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1;
x_22 = lean_string_dec_eq(x_14, x_21);
lean_dec(x_14);
if (x_22 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_6);
lean_ctor_set(x_2, 1, x_27);
lean_ctor_set(x_2, 0, x_26);
return x_2;
}
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_14);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_6);
lean_ctor_set(x_2, 1, x_31);
lean_ctor_set(x_2, 0, x_30);
return x_2;
}
}
}
case 1:
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_dec(x_12);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_dec(x_13);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_37 = lean_string_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_dec(x_34);
lean_dec(x_33);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
x_40 = lean_string_dec_eq(x_34, x_39);
lean_dec(x_34);
if (x_40 == 0)
{
lean_dec(x_33);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_42; uint8_t x_43; 
x_42 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2;
x_43 = lean_string_dec_eq(x_33, x_42);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = lean_string_dec_eq(x_33, x_39);
lean_dec(x_33);
if (x_44 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = 0;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_5);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_6);
lean_ctor_set(x_2, 1, x_49);
lean_ctor_set(x_2, 0, x_48);
return x_2;
}
}
else
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_33);
x_50 = 0;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_5);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_6);
lean_ctor_set(x_2, 1, x_53);
lean_ctor_set(x_2, 0, x_52);
return x_2;
}
}
}
}
else
{
lean_dec(x_32);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
default: 
{
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
}
else
{
lean_dec(x_12);
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
else
{
lean_dec(x_11);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
else
{
lean_dec(x_10);
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_2, 0);
x_60 = lean_ctor_get(x_2, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_2);
lean_inc(x_59);
lean_inc(x_1);
x_61 = lean_environment_find(x_1, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_61, 0);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_ConstantInfo_type(x_63);
lean_dec(x_63);
if (lean_obj_tag(x_64) == 4)
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
lean_dec(x_64);
if (lean_obj_tag(x_65) == 1)
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
if (lean_obj_tag(x_66) == 1)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
switch (lean_obj_tag(x_67)) {
case 0:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_71 = lean_string_dec_eq(x_69, x_70);
lean_dec(x_69);
if (x_71 == 0)
{
lean_dec(x_68);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_73; uint8_t x_74; 
x_73 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_74 = lean_string_dec_eq(x_68, x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1;
x_76 = lean_string_dec_eq(x_68, x_75);
lean_dec(x_68);
if (x_76 == 0)
{
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
uint8_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = 1;
x_79 = lean_box(x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_59);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_60);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
else
{
uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_68);
x_83 = 1;
x_84 = lean_box(x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_59);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_60);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
case 1:
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_67, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_65, 1);
lean_inc(x_89);
lean_dec(x_65);
x_90 = lean_ctor_get(x_66, 1);
lean_inc(x_90);
lean_dec(x_66);
x_91 = lean_ctor_get(x_67, 1);
lean_inc(x_91);
lean_dec(x_67);
x_92 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1;
x_93 = lean_string_dec_eq(x_91, x_92);
lean_dec(x_91);
if (x_93 == 0)
{
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_95; uint8_t x_96; 
x_95 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
x_96 = lean_string_dec_eq(x_90, x_95);
lean_dec(x_90);
if (x_96 == 0)
{
lean_dec(x_89);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
lean_object* x_98; uint8_t x_99; 
x_98 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2;
x_99 = lean_string_dec_eq(x_89, x_98);
if (x_99 == 0)
{
uint8_t x_100; 
x_100 = lean_string_dec_eq(x_89, x_95);
lean_dec(x_89);
if (x_100 == 0)
{
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
else
{
uint8_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = 0;
x_103 = lean_box(x_102);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_59);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_60);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
else
{
uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_89);
x_107 = 0;
x_108 = lean_box(x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_59);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_1, x_60);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
else
{
lean_dec(x_88);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
default: 
{
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
}
else
{
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
else
{
lean_dec(x_65);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
else
{
lean_dec(x_64);
lean_dec(x_59);
x_2 = x_60;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_resolveParserName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
lean_inc(x_9);
x_12 = l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_9, x_14);
lean_dec(x_9);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_18, x_13);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_List_filterMap___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__16(x_22, x_13);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_9);
x_25 = !lean_is_exclusive(x_12);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_12, 0);
lean_dec(x_26);
x_27 = lean_box(0);
lean_ctor_set_tag(x_12, 0);
lean_ctor_set(x_12, 0, x_27);
return x_12;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_12, 1);
lean_inc(x_28);
lean_dec(x_12);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unknown parser declaration/category/alias '", 43);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.parser", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("parser", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__9;
x_2 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ambiguous parser declaration ", 29);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processNullaryOrCat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_12);
x_13 = l_Lean_Elab_Term_resolveParserName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Syntax_getId(x_12);
x_17 = lean_erase_macro_scopes(x_16);
x_18 = lean_st_ref_get(x_9, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_17);
x_22 = l_Lean_Parser_isParserCategory(x_21, x_17);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_st_ref_get(x_9, x_20);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Parser_isParserAlias(x_17, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_12);
lean_dec(x_1);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_29, 0, x_17);
x_30 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__2;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_28);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_17);
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_dec(x_25);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_36 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
lean_dec(x_1);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_39 = l_Lean_Elab_Term_toParserDescr_processAlias(x_12, x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_37);
return x_39;
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 0);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_36);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_17);
lean_dec(x_12);
x_44 = l_Lean_Elab_Term_toParserDescr_processParserCategory(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_12);
x_45 = lean_ctor_get(x_14, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
x_47 = lean_unbox(x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_14, 1);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_14);
x_49 = lean_ctor_get(x_13, 1);
lean_inc(x_49);
lean_dec(x_13);
x_50 = !lean_is_exclusive(x_45);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_45, 0);
x_52 = lean_ctor_get(x_45, 1);
lean_dec(x_52);
lean_inc(x_9);
lean_inc(x_8);
x_53 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_49);
lean_dec(x_1);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
lean_inc(x_8);
x_55 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_8, x_9, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_ctor_get(x_8, 10);
lean_inc(x_58);
lean_dec(x_8);
x_59 = lean_st_ref_get(x_9, x_57);
lean_dec(x_9);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_environment_main_module(x_62);
x_64 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7;
x_65 = l_Lean_addMacroScope(x_63, x_64, x_58);
x_66 = lean_box(0);
x_67 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5;
x_68 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12;
lean_inc(x_56);
x_69 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_69, 0, x_56);
lean_ctor_set(x_69, 1, x_67);
lean_ctor_set(x_69, 2, x_65);
lean_ctor_set(x_69, 3, x_68);
lean_inc(x_51);
x_70 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_66, x_51);
x_71 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_72 = lean_array_push(x_71, x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_73 = l_Lean_quoteNameMk(x_51);
x_74 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_75 = lean_array_push(x_74, x_73);
x_76 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_56);
x_77 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_77, 0, x_56);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_77, 2, x_75);
x_78 = lean_array_push(x_72, x_77);
x_79 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_80 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_80, 0, x_56);
lean_ctor_set(x_80, 1, x_79);
lean_ctor_set(x_80, 2, x_78);
x_81 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_45, 1, x_81);
lean_ctor_set(x_45, 0, x_80);
lean_ctor_set(x_59, 0, x_45);
return x_59;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_51);
x_82 = lean_ctor_get(x_70, 0);
lean_inc(x_82);
lean_dec(x_70);
x_83 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_84 = l_String_intercalate(x_83, x_82);
x_85 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_86 = lean_string_append(x_85, x_84);
lean_dec(x_84);
x_87 = lean_box(2);
x_88 = l_Lean_Syntax_mkNameLit(x_86, x_87);
x_89 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_90 = lean_array_push(x_89, x_88);
x_91 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_92 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set(x_92, 2, x_90);
x_93 = lean_array_push(x_89, x_92);
x_94 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_56);
x_95 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_95, 0, x_56);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_93);
x_96 = lean_array_push(x_72, x_95);
x_97 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_98 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_98, 0, x_56);
lean_ctor_set(x_98, 1, x_97);
lean_ctor_set(x_98, 2, x_96);
x_99 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_45, 1, x_99);
lean_ctor_set(x_45, 0, x_98);
lean_ctor_set(x_59, 0, x_45);
return x_59;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_100 = lean_ctor_get(x_59, 0);
x_101 = lean_ctor_get(x_59, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_59);
x_102 = lean_ctor_get(x_100, 0);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_environment_main_module(x_102);
x_104 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7;
x_105 = l_Lean_addMacroScope(x_103, x_104, x_58);
x_106 = lean_box(0);
x_107 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5;
x_108 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12;
lean_inc(x_56);
x_109 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_109, 0, x_56);
lean_ctor_set(x_109, 1, x_107);
lean_ctor_set(x_109, 2, x_105);
lean_ctor_set(x_109, 3, x_108);
lean_inc(x_51);
x_110 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_106, x_51);
x_111 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_112 = lean_array_push(x_111, x_109);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_113 = l_Lean_quoteNameMk(x_51);
x_114 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_115 = lean_array_push(x_114, x_113);
x_116 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_56);
x_117 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_117, 0, x_56);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set(x_117, 2, x_115);
x_118 = lean_array_push(x_112, x_117);
x_119 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_120 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_120, 0, x_56);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_120, 2, x_118);
x_121 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_45, 1, x_121);
lean_ctor_set(x_45, 0, x_120);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_45);
lean_ctor_set(x_122, 1, x_101);
return x_122;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_51);
x_123 = lean_ctor_get(x_110, 0);
lean_inc(x_123);
lean_dec(x_110);
x_124 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_125 = l_String_intercalate(x_124, x_123);
x_126 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_127 = lean_string_append(x_126, x_125);
lean_dec(x_125);
x_128 = lean_box(2);
x_129 = l_Lean_Syntax_mkNameLit(x_127, x_128);
x_130 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_131 = lean_array_push(x_130, x_129);
x_132 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_133 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_133, 0, x_128);
lean_ctor_set(x_133, 1, x_132);
lean_ctor_set(x_133, 2, x_131);
x_134 = lean_array_push(x_130, x_133);
x_135 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_56);
x_136 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_136, 0, x_56);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_136, 2, x_134);
x_137 = lean_array_push(x_112, x_136);
x_138 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_139 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_139, 0, x_56);
lean_ctor_set(x_139, 1, x_138);
lean_ctor_set(x_139, 2, x_137);
x_140 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_45, 1, x_140);
lean_ctor_set(x_45, 0, x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_45);
lean_ctor_set(x_141, 1, x_101);
return x_141;
}
}
}
else
{
uint8_t x_142; 
lean_free_object(x_45);
lean_dec(x_51);
lean_dec(x_9);
lean_dec(x_8);
x_142 = !lean_is_exclusive(x_53);
if (x_142 == 0)
{
return x_53;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_53, 0);
x_144 = lean_ctor_get(x_53, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_53);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_45, 0);
lean_inc(x_146);
lean_dec(x_45);
lean_inc(x_9);
lean_inc(x_8);
x_147 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_49);
lean_dec(x_1);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_148 = lean_ctor_get(x_147, 1);
lean_inc(x_148);
lean_dec(x_147);
lean_inc(x_8);
x_149 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_toParserDescr_processNonReserved___spec__2___rarg(x_8, x_9, x_148);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_ctor_get(x_8, 10);
lean_inc(x_152);
lean_dec(x_8);
x_153 = lean_st_ref_get(x_9, x_151);
lean_dec(x_9);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_156 = x_153;
} else {
 lean_dec_ref(x_153);
 x_156 = lean_box(0);
}
x_157 = lean_ctor_get(x_154, 0);
lean_inc(x_157);
lean_dec(x_154);
x_158 = lean_environment_main_module(x_157);
x_159 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7;
x_160 = l_Lean_addMacroScope(x_158, x_159, x_152);
x_161 = lean_box(0);
x_162 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5;
x_163 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12;
lean_inc(x_150);
x_164 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_164, 0, x_150);
lean_ctor_set(x_164, 1, x_162);
lean_ctor_set(x_164, 2, x_160);
lean_ctor_set(x_164, 3, x_163);
lean_inc(x_146);
x_165 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_161, x_146);
x_166 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_167 = lean_array_push(x_166, x_164);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_168 = l_Lean_quoteNameMk(x_146);
x_169 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_170 = lean_array_push(x_169, x_168);
x_171 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_150);
x_172 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_172, 0, x_150);
lean_ctor_set(x_172, 1, x_171);
lean_ctor_set(x_172, 2, x_170);
x_173 = lean_array_push(x_167, x_172);
x_174 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_175 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_175, 0, x_150);
lean_ctor_set(x_175, 1, x_174);
lean_ctor_set(x_175, 2, x_173);
x_176 = lean_unsigned_to_nat(1u);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
if (lean_is_scalar(x_156)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_156;
}
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_155);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_146);
x_179 = lean_ctor_get(x_165, 0);
lean_inc(x_179);
lean_dec(x_165);
x_180 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_181 = l_String_intercalate(x_180, x_179);
x_182 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_183 = lean_string_append(x_182, x_181);
lean_dec(x_181);
x_184 = lean_box(2);
x_185 = l_Lean_Syntax_mkNameLit(x_183, x_184);
x_186 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_187 = lean_array_push(x_186, x_185);
x_188 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
x_189 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_189, 0, x_184);
lean_ctor_set(x_189, 1, x_188);
lean_ctor_set(x_189, 2, x_187);
x_190 = lean_array_push(x_186, x_189);
x_191 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
lean_inc(x_150);
x_192 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_192, 0, x_150);
lean_ctor_set(x_192, 1, x_191);
lean_ctor_set(x_192, 2, x_190);
x_193 = lean_array_push(x_167, x_192);
x_194 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
x_195 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_195, 0, x_150);
lean_ctor_set(x_195, 1, x_194);
lean_ctor_set(x_195, 2, x_193);
x_196 = lean_unsigned_to_nat(1u);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
if (lean_is_scalar(x_156)) {
 x_198 = lean_alloc_ctor(0, 2, 0);
} else {
 x_198 = x_156;
}
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_155);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_146);
lean_dec(x_9);
lean_dec(x_8);
x_199 = lean_ctor_get(x_147, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_147, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_201 = x_147;
} else {
 lean_dec_ref(x_147);
 x_201 = lean_box(0);
}
if (lean_is_scalar(x_201)) {
 x_202 = lean_alloc_ctor(1, 2, 0);
} else {
 x_202 = x_201;
}
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_200);
return x_202;
}
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_48);
lean_dec(x_45);
lean_dec(x_1);
x_203 = lean_ctor_get(x_13, 1);
lean_inc(x_203);
lean_dec(x_13);
x_204 = lean_box(0);
x_205 = l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__17(x_14, x_204);
x_206 = l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__18(x_205, x_204);
x_207 = l_Lean_MessageData_ofList(x_206);
lean_dec(x_206);
x_208 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14;
x_209 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
x_210 = l_Lean_Elab_Term_toParserDescr_process___closed__17;
x_211 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
x_212 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(x_211, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_203);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_212;
}
}
else
{
lean_object* x_213; 
x_213 = lean_ctor_get(x_14, 1);
lean_inc(x_213);
if (lean_obj_tag(x_213) == 0)
{
lean_object* x_214; uint8_t x_215; 
lean_dec(x_14);
x_214 = lean_ctor_get(x_13, 1);
lean_inc(x_214);
lean_dec(x_13);
x_215 = !lean_is_exclusive(x_45);
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_45, 0);
x_217 = lean_ctor_get(x_45, 1);
lean_dec(x_217);
x_218 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_214);
if (lean_obj_tag(x_218) == 0)
{
uint8_t x_219; 
x_219 = !lean_is_exclusive(x_218);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_218, 0);
lean_dec(x_220);
x_221 = l_Lean_mkIdentFrom(x_1, x_216);
x_222 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_45, 1, x_222);
lean_ctor_set(x_45, 0, x_221);
lean_ctor_set(x_218, 0, x_45);
return x_218;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_223 = lean_ctor_get(x_218, 1);
lean_inc(x_223);
lean_dec(x_218);
x_224 = l_Lean_mkIdentFrom(x_1, x_216);
x_225 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_45, 1, x_225);
lean_ctor_set(x_45, 0, x_224);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_45);
lean_ctor_set(x_226, 1, x_223);
return x_226;
}
}
else
{
uint8_t x_227; 
lean_free_object(x_45);
lean_dec(x_216);
lean_dec(x_1);
x_227 = !lean_is_exclusive(x_218);
if (x_227 == 0)
{
return x_218;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_218, 0);
x_229 = lean_ctor_get(x_218, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_218);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
return x_230;
}
}
}
else
{
lean_object* x_231; lean_object* x_232; 
x_231 = lean_ctor_get(x_45, 0);
lean_inc(x_231);
lean_dec(x_45);
x_232 = l_Lean_Elab_Term_toParserDescr_ensureNoPrec(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_214);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_233 = lean_ctor_get(x_232, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_234 = x_232;
} else {
 lean_dec_ref(x_232);
 x_234 = lean_box(0);
}
x_235 = l_Lean_mkIdentFrom(x_1, x_231);
x_236 = lean_unsigned_to_nat(1u);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set(x_237, 1, x_236);
if (lean_is_scalar(x_234)) {
 x_238 = lean_alloc_ctor(0, 2, 0);
} else {
 x_238 = x_234;
}
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_233);
return x_238;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_231);
lean_dec(x_1);
x_239 = lean_ctor_get(x_232, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_232, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_241 = x_232;
} else {
 lean_dec_ref(x_232);
 x_241 = lean_box(0);
}
if (lean_is_scalar(x_241)) {
 x_242 = lean_alloc_ctor(1, 2, 0);
} else {
 x_242 = x_241;
}
lean_ctor_set(x_242, 0, x_239);
lean_ctor_set(x_242, 1, x_240);
return x_242;
}
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_213);
lean_dec(x_45);
lean_dec(x_1);
x_243 = lean_ctor_get(x_13, 1);
lean_inc(x_243);
lean_dec(x_13);
x_244 = lean_box(0);
x_245 = l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__17(x_14, x_244);
x_246 = l_List_mapTRAux___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__18(x_245, x_244);
x_247 = l_Lean_MessageData_ofList(x_246);
lean_dec(x_246);
x_248 = l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14;
x_249 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
x_250 = l_Lean_Elab_Term_toParserDescr_process___closed__17;
x_251 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(x_251, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_243);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_252;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_3, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_3, x_18);
lean_dec(x_3);
x_20 = lean_array_fget(x_2, x_4);
x_21 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_7, 0);
x_23 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 2);
x_25 = 0;
lean_inc(x_22);
x_26 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*1 + 1, x_23);
lean_ctor_set_uint8(x_26, sizeof(void*)*1 + 2, x_24);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_27 = l_Lean_Elab_Term_toParserDescr_process(x_20, x_26, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_nat_add(x_4, x_18);
lean_dec(x_4);
x_31 = lean_array_push(x_6, x_28);
x_3 = x_19;
x_4 = x_30;
x_5 = lean_box(0);
x_6 = x_31;
x_15 = x_29;
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_33 = !lean_is_exclusive(x_27);
if (x_33 == 0)
{
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_27, 0);
x_35 = lean_ctor_get(x_27, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_27);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_7, 0);
x_38 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
x_39 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 2);
x_40 = lean_nat_dec_eq(x_4, x_16);
lean_inc(x_37);
x_41 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 1, x_38);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 2, x_39);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_42 = l_Lean_Elab_Term_toParserDescr_process(x_20, x_41, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_nat_add(x_4, x_18);
lean_dec(x_4);
x_46 = lean_array_push(x_6, x_43);
x_3 = x_19;
x_4 = x_45;
x_5 = lean_box(0);
x_6 = x_46;
x_15 = x_44;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_42);
if (x_48 == 0)
{
return x_42;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_42, 0);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_42);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
lean_object* x_52; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_6);
lean_ctor_set(x_52, 1, x_15);
return x_52;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__2(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_2, x_1);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_array_uget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_3, x_2, x_16);
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*1 + 2);
x_20 = 0;
lean_inc(x_18);
x_21 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 1, x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 2, x_19);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l_Lean_Elab_Term_toParserDescr_process(x_15, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = lean_usize_add(x_2, x_25);
x_27 = lean_array_uset(x_17, x_2, x_23);
x_2 = x_26;
x_3 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_22);
if (x_29 == 0)
{
return x_22;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_22, 0);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_22);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSeq___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_eraseIdx___rarg(x_1, x_12);
x_14 = lean_array_get_size(x_13);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__2(x_15, x_16, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSeq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Syntax_getArgs(x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l_Lean_Elab_Term_checkLeftRec(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_array_get_size(x_11);
x_19 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Array_mapIdxM_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__1(x_11, x_11, x_18, x_12, lean_box(0), x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
lean_dec(x_2);
lean_dec(x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_dec(x_14);
x_29 = lean_array_get_size(x_11);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_dec_eq(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_1);
x_32 = lean_box(0);
x_33 = l_Lean_Elab_Term_toParserDescr_processSeq___lambda__1(x_11, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_28);
lean_dec(x_2);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_11);
x_34 = l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2;
x_35 = l_Lean_throwErrorAt___at_Lean_Elab_Term_checkLeftRec___spec__9(x_1, x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_28);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_14);
if (x_40 == 0)
{
return x_14;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_14, 0);
x_42 = lean_ctor_get(x_14, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_14);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_toParserDescr_process___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_toParserDescr_process___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_toParserDescr_process___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_process___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_toParserDescr_processSepBy1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSepBy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_toParserDescr_processSepBy(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__1(x_13, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_toParserDescr_processAlias___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_toParserDescr_processAlias___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__4(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processAlias___spec__5(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_toParserDescr_processAlias___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_resolveGlobalName___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__6___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_getConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_addConstInfo___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_forIn_loop___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_resolveGlobalConstWithInfos___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Array_mapIdxM_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_toParserDescr_processSeq___spec__2(x_13, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr_processSeq___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_toParserDescr_processSeq___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_toParserDescr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_14 = l_Lean_Parser_leadingIdentBehavior(x_13, x_2);
lean_dec(x_13);
x_15 = 1;
x_16 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 1, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 2, x_14);
x_17 = lean_box(0);
x_18 = lean_st_ref_get(x_8, x_12);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_mk_ref(x_17, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_8);
lean_inc(x_21);
x_23 = l_Lean_Elab_Term_toParserDescr_process(x_1, x_16, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_st_ref_get(x_8, x_25);
lean_dec(x_8);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_st_ref_get(x_21, x_27);
lean_dec(x_21);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_24);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 0);
x_32 = lean_ctor_get(x_24, 1);
lean_dec(x_32);
lean_ctor_set(x_24, 1, x_31);
lean_ctor_set(x_28, 0, x_24);
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_24, 0);
lean_inc(x_34);
lean_dec(x_24);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_28, 0, x_35);
return x_28;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_28, 0);
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_28);
x_38 = lean_ctor_get(x_24, 0);
lean_inc(x_38);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_39 = x_24;
} else {
 lean_dec_ref(x_24);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_36);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_21);
lean_dec(x_8);
x_42 = !lean_is_exclusive(x_23);
if (x_42 == 0)
{
return x_23;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_Command_getRef(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_SourceInfo_fromRef(x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = l_Lean_SourceInfo_fromRef(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("`(", 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("|", 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("quot", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Command", 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("declaration", 11);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("declModifiers", 13);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("attributes", 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("@[", 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("attrInstance", 12);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("attrKind", 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Attr", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("simple", 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__19;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("termParser", 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__23;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("]", 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("def", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("declId", 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_3 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("optDeclSig", 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("typeSpec", 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(":", 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.ParserDescr", 16);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__39;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__42;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__41;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__43;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("declValSimple", 13);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(":=", 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.ParserDescr.node", 21);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__49;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("node", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__54;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__53;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__55;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__57() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("`Lean.Parser.Term.quot", 22);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__58() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("num", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__58;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_maxPrec;
x_2 = l_Nat_repr(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__60;
x_2 = lean_box(2);
x_3 = l_Lean_Syntax_mkNumLit(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.ParserDescr.binary", 23);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__64() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__63;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__66() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__65;
x_2 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.ParserDescr.symbol", 23);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__68() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__69() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__68;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__70() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__71() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__70;
x_2 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__72() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("str", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__73() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__72;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.ParserDescr.cat", 20);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__75() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__76() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__75;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__77() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__78() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__77;
x_2 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__79() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("0", 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__80() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\")\"", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__2;
x_9 = lean_string_append(x_7, x_8);
x_10 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__4;
x_11 = l_Lean_Name_append(x_1, x_10);
x_12 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_2, x_3, x_4);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Command_getMainModule___rarg(x_3, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_22 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_13);
x_23 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_23, 0, x_13);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
x_24 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13;
lean_inc(x_13);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
lean_inc(x_23);
x_27 = lean_array_push(x_26, x_23);
x_28 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__17;
lean_inc(x_13);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_27);
x_30 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__25;
lean_inc(x_16);
lean_inc(x_19);
x_31 = l_Lean_addMacroScope(x_19, x_30, x_16);
x_32 = lean_box(0);
x_33 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__24;
lean_inc(x_13);
x_34 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_34, 0, x_13);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_34, 2, x_31);
lean_ctor_set(x_34, 3, x_32);
x_35 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_36 = lean_array_push(x_35, x_34);
lean_inc(x_23);
x_37 = lean_array_push(x_36, x_23);
x_38 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__21;
lean_inc(x_13);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_13);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_37);
x_40 = lean_array_push(x_35, x_29);
x_41 = lean_array_push(x_40, x_39);
x_42 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__15;
lean_inc(x_13);
x_43 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_43, 0, x_13);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_41);
x_44 = lean_array_push(x_26, x_43);
lean_inc(x_13);
x_45 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_45, 0, x_13);
lean_ctor_set(x_45, 1, x_21);
lean_ctor_set(x_45, 2, x_44);
x_46 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26;
lean_inc(x_13);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_13);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_49 = lean_array_push(x_48, x_25);
x_50 = lean_array_push(x_49, x_45);
x_51 = lean_array_push(x_50, x_47);
x_52 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__12;
lean_inc(x_13);
x_53 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_53, 0, x_13);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_51);
x_54 = lean_array_push(x_26, x_53);
lean_inc(x_13);
x_55 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_55, 0, x_13);
lean_ctor_set(x_55, 1, x_21);
lean_ctor_set(x_55, 2, x_54);
x_56 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27;
lean_inc(x_23);
x_57 = lean_array_push(x_56, x_23);
x_58 = lean_array_push(x_57, x_55);
lean_inc(x_23);
x_59 = lean_array_push(x_58, x_23);
lean_inc(x_23);
x_60 = lean_array_push(x_59, x_23);
lean_inc(x_23);
x_61 = lean_array_push(x_60, x_23);
lean_inc(x_23);
x_62 = lean_array_push(x_61, x_23);
x_63 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10;
lean_inc(x_13);
x_64 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_64, 0, x_13);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_62);
x_65 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
lean_inc(x_13);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_13);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_11);
x_67 = lean_mk_syntax_ident(x_11);
x_68 = lean_array_push(x_35, x_67);
x_69 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32;
x_70 = lean_array_push(x_68, x_69);
x_71 = lean_box(2);
x_72 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31;
x_73 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
lean_ctor_set(x_73, 2, x_70);
x_74 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37;
lean_inc(x_13);
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_13);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16;
lean_inc(x_16);
lean_inc(x_19);
x_77 = l_Lean_addMacroScope(x_19, x_76, x_16);
x_78 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40;
x_79 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__44;
lean_inc(x_13);
x_80 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_80, 0, x_13);
lean_ctor_set(x_80, 1, x_78);
lean_ctor_set(x_80, 2, x_77);
lean_ctor_set(x_80, 3, x_79);
x_81 = lean_array_push(x_35, x_75);
x_82 = lean_array_push(x_81, x_80);
x_83 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36;
lean_inc(x_13);
x_84 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_84, 0, x_13);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_84, 2, x_82);
x_85 = lean_array_push(x_26, x_84);
lean_inc(x_13);
x_86 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_86, 0, x_13);
lean_ctor_set(x_86, 1, x_21);
lean_ctor_set(x_86, 2, x_85);
lean_inc(x_23);
x_87 = lean_array_push(x_35, x_23);
x_88 = lean_array_push(x_87, x_86);
x_89 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34;
lean_inc(x_13);
x_90 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_90, 0, x_13);
lean_ctor_set(x_90, 1, x_89);
lean_ctor_set(x_90, 2, x_88);
x_91 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47;
lean_inc(x_13);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_13);
lean_ctor_set(x_92, 1, x_91);
x_93 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52;
lean_inc(x_16);
lean_inc(x_19);
x_94 = l_Lean_addMacroScope(x_19, x_93, x_16);
x_95 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__50;
x_96 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__56;
lean_inc(x_13);
x_97 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_97, 0, x_13);
lean_ctor_set(x_97, 1, x_95);
lean_ctor_set(x_97, 2, x_94);
lean_ctor_set(x_97, 3, x_96);
x_98 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__57;
lean_inc(x_13);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_13);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_26, x_99);
x_101 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27;
lean_inc(x_13);
x_102 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_102, 0, x_13);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_102, 2, x_100);
x_103 = lean_array_push(x_26, x_102);
x_104 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25;
lean_inc(x_13);
x_105 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_105, 0, x_13);
lean_ctor_set(x_105, 1, x_104);
lean_ctor_set(x_105, 2, x_103);
x_106 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3;
lean_inc(x_13);
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_13);
lean_ctor_set(x_107, 1, x_106);
lean_inc(x_11);
x_108 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_32, x_11);
x_109 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17;
lean_inc(x_16);
lean_inc(x_19);
x_110 = l_Lean_addMacroScope(x_19, x_109, x_16);
x_111 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__64;
x_112 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__66;
lean_inc(x_13);
x_113 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_113, 0, x_13);
lean_ctor_set(x_113, 1, x_111);
lean_ctor_set(x_113, 2, x_110);
lean_ctor_set(x_113, 3, x_112);
x_114 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28;
lean_inc(x_13);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_13);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_array_push(x_26, x_115);
lean_inc(x_13);
x_117 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_117, 0, x_13);
lean_ctor_set(x_117, 1, x_101);
lean_ctor_set(x_117, 2, x_116);
x_118 = lean_array_push(x_26, x_117);
lean_inc(x_13);
x_119 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_119, 0, x_13);
lean_ctor_set(x_119, 1, x_104);
lean_ctor_set(x_119, 2, x_118);
x_120 = l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6;
lean_inc(x_16);
lean_inc(x_19);
x_121 = l_Lean_addMacroScope(x_19, x_120, x_16);
x_122 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__69;
x_123 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__71;
lean_inc(x_13);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_13);
lean_ctor_set(x_124, 1, x_122);
lean_ctor_set(x_124, 2, x_121);
lean_ctor_set(x_124, 3, x_123);
x_125 = l_Lean_Syntax_mkStrLit(x_9, x_71);
lean_dec(x_9);
x_126 = lean_array_push(x_26, x_125);
lean_inc(x_13);
x_127 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_127, 0, x_13);
lean_ctor_set(x_127, 1, x_21);
lean_ctor_set(x_127, 2, x_126);
x_128 = lean_array_push(x_35, x_124);
lean_inc(x_128);
x_129 = lean_array_push(x_128, x_127);
x_130 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8;
lean_inc(x_13);
x_131 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_131, 0, x_13);
lean_ctor_set(x_131, 1, x_130);
lean_ctor_set(x_131, 2, x_129);
x_132 = lean_array_push(x_35, x_131);
lean_inc(x_23);
x_133 = lean_array_push(x_132, x_23);
lean_inc(x_13);
x_134 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_134, 0, x_13);
lean_ctor_set(x_134, 1, x_21);
lean_ctor_set(x_134, 2, x_133);
x_135 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20;
lean_inc(x_13);
x_136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_136, 0, x_13);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_array_push(x_48, x_107);
lean_inc(x_137);
x_138 = lean_array_push(x_137, x_134);
lean_inc(x_136);
x_139 = lean_array_push(x_138, x_136);
x_140 = l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2;
lean_inc(x_13);
x_141 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_141, 0, x_13);
lean_ctor_set(x_141, 1, x_140);
lean_ctor_set(x_141, 2, x_139);
x_142 = l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5;
x_143 = l_Lean_addMacroScope(x_19, x_142, x_16);
x_144 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__76;
x_145 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__78;
lean_inc(x_13);
x_146 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_146, 0, x_13);
lean_ctor_set(x_146, 1, x_144);
lean_ctor_set(x_146, 2, x_143);
lean_ctor_set(x_146, 3, x_145);
lean_inc(x_1);
x_147 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_32, x_1);
x_148 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__79;
lean_inc(x_13);
x_149 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_149, 0, x_13);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_array_push(x_26, x_149);
x_151 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__59;
lean_inc(x_13);
x_152 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_152, 0, x_13);
lean_ctor_set(x_152, 1, x_151);
lean_ctor_set(x_152, 2, x_150);
x_153 = lean_array_push(x_35, x_146);
x_154 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__80;
lean_inc(x_13);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_13);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_array_push(x_26, x_155);
x_157 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__73;
lean_inc(x_13);
x_158 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_158, 0, x_13);
lean_ctor_set(x_158, 1, x_157);
lean_ctor_set(x_158, 2, x_156);
x_159 = lean_array_push(x_26, x_158);
lean_inc(x_13);
x_160 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_160, 0, x_13);
lean_ctor_set(x_160, 1, x_21);
lean_ctor_set(x_160, 2, x_159);
x_161 = lean_array_push(x_128, x_160);
lean_inc(x_13);
x_162 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_162, 0, x_13);
lean_ctor_set(x_162, 1, x_130);
lean_ctor_set(x_162, 2, x_161);
x_163 = lean_array_push(x_35, x_162);
lean_inc(x_23);
x_164 = lean_array_push(x_163, x_23);
lean_inc(x_13);
x_165 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_165, 0, x_13);
lean_ctor_set(x_165, 1, x_21);
lean_ctor_set(x_165, 2, x_164);
lean_inc(x_137);
x_166 = lean_array_push(x_137, x_165);
lean_inc(x_136);
x_167 = lean_array_push(x_166, x_136);
lean_inc(x_13);
x_168 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_168, 0, x_13);
lean_ctor_set(x_168, 1, x_140);
lean_ctor_set(x_168, 2, x_167);
x_169 = lean_array_push(x_48, x_119);
x_170 = lean_array_push(x_35, x_113);
lean_inc(x_169);
x_171 = lean_array_push(x_169, x_141);
x_172 = lean_array_push(x_35, x_97);
x_173 = lean_array_push(x_48, x_105);
x_174 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__61;
x_175 = lean_array_push(x_173, x_174);
x_176 = lean_array_push(x_48, x_92);
x_177 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81;
x_178 = lean_array_push(x_177, x_66);
x_179 = lean_array_push(x_178, x_73);
x_180 = lean_array_push(x_179, x_90);
x_181 = lean_array_push(x_35, x_64);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_257; 
x_257 = l_Lean_quoteNameMk(x_11);
x_182 = x_257;
goto block_256;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
lean_dec(x_11);
x_258 = lean_ctor_get(x_108, 0);
lean_inc(x_258);
lean_dec(x_108);
x_259 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_260 = l_String_intercalate(x_259, x_258);
x_261 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_262 = lean_string_append(x_261, x_260);
lean_dec(x_260);
x_263 = l_Lean_Syntax_mkNameLit(x_262, x_71);
x_264 = lean_array_push(x_26, x_263);
x_265 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_265, 0, x_71);
lean_ctor_set(x_265, 1, x_104);
lean_ctor_set(x_265, 2, x_264);
x_182 = x_265;
goto block_256;
}
block_256:
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_array_push(x_48, x_182);
x_184 = lean_array_push(x_183, x_174);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_247; 
x_247 = l_Lean_quoteNameMk(x_1);
x_185 = x_247;
goto block_246;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_1);
x_248 = lean_ctor_get(x_147, 0);
lean_inc(x_248);
lean_dec(x_147);
x_249 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_250 = l_String_intercalate(x_249, x_248);
x_251 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_252 = lean_string_append(x_251, x_250);
lean_dec(x_250);
x_253 = l_Lean_Syntax_mkNameLit(x_252, x_71);
x_254 = lean_array_push(x_26, x_253);
x_255 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_255, 0, x_71);
lean_ctor_set(x_255, 1, x_104);
lean_ctor_set(x_255, 2, x_254);
x_185 = x_255;
goto block_246;
}
block_246:
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_186 = lean_array_push(x_35, x_185);
x_187 = lean_array_push(x_186, x_152);
lean_inc(x_13);
x_188 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_188, 0, x_13);
lean_ctor_set(x_188, 1, x_21);
lean_ctor_set(x_188, 2, x_187);
x_189 = lean_array_push(x_153, x_188);
lean_inc(x_13);
x_190 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_190, 0, x_13);
lean_ctor_set(x_190, 1, x_130);
lean_ctor_set(x_190, 2, x_189);
x_191 = lean_array_push(x_35, x_190);
lean_inc(x_23);
x_192 = lean_array_push(x_191, x_23);
lean_inc(x_13);
x_193 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_193, 0, x_13);
lean_ctor_set(x_193, 1, x_21);
lean_ctor_set(x_193, 2, x_192);
lean_inc(x_137);
x_194 = lean_array_push(x_137, x_193);
lean_inc(x_136);
x_195 = lean_array_push(x_194, x_136);
lean_inc(x_13);
x_196 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_196, 0, x_13);
lean_ctor_set(x_196, 1, x_140);
lean_ctor_set(x_196, 2, x_195);
x_197 = lean_array_push(x_169, x_196);
x_198 = lean_array_push(x_197, x_168);
lean_inc(x_13);
x_199 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_199, 0, x_13);
lean_ctor_set(x_199, 1, x_21);
lean_ctor_set(x_199, 2, x_198);
lean_inc(x_170);
x_200 = lean_array_push(x_170, x_199);
lean_inc(x_13);
x_201 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_201, 0, x_13);
lean_ctor_set(x_201, 1, x_130);
lean_ctor_set(x_201, 2, x_200);
x_202 = lean_array_push(x_35, x_201);
lean_inc(x_23);
x_203 = lean_array_push(x_202, x_23);
lean_inc(x_13);
x_204 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_204, 0, x_13);
lean_ctor_set(x_204, 1, x_21);
lean_ctor_set(x_204, 2, x_203);
lean_inc(x_137);
x_205 = lean_array_push(x_137, x_204);
lean_inc(x_136);
x_206 = lean_array_push(x_205, x_136);
lean_inc(x_13);
x_207 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_207, 0, x_13);
lean_ctor_set(x_207, 1, x_140);
lean_ctor_set(x_207, 2, x_206);
x_208 = lean_array_push(x_171, x_207);
lean_inc(x_13);
x_209 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_209, 0, x_13);
lean_ctor_set(x_209, 1, x_21);
lean_ctor_set(x_209, 2, x_208);
x_210 = lean_array_push(x_170, x_209);
lean_inc(x_13);
x_211 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_211, 0, x_13);
lean_ctor_set(x_211, 1, x_130);
lean_ctor_set(x_211, 2, x_210);
x_212 = lean_array_push(x_35, x_211);
lean_inc(x_23);
x_213 = lean_array_push(x_212, x_23);
lean_inc(x_13);
x_214 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_214, 0, x_13);
lean_ctor_set(x_214, 1, x_21);
lean_ctor_set(x_214, 2, x_213);
lean_inc(x_137);
x_215 = lean_array_push(x_137, x_214);
lean_inc(x_136);
x_216 = lean_array_push(x_215, x_136);
lean_inc(x_13);
x_217 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_217, 0, x_13);
lean_ctor_set(x_217, 1, x_140);
lean_ctor_set(x_217, 2, x_216);
x_218 = lean_array_push(x_184, x_217);
lean_inc(x_13);
x_219 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_219, 0, x_13);
lean_ctor_set(x_219, 1, x_21);
lean_ctor_set(x_219, 2, x_218);
lean_inc(x_172);
x_220 = lean_array_push(x_172, x_219);
lean_inc(x_13);
x_221 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_221, 0, x_13);
lean_ctor_set(x_221, 1, x_130);
lean_ctor_set(x_221, 2, x_220);
x_222 = lean_array_push(x_35, x_221);
lean_inc(x_23);
x_223 = lean_array_push(x_222, x_23);
lean_inc(x_13);
x_224 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_224, 0, x_13);
lean_ctor_set(x_224, 1, x_21);
lean_ctor_set(x_224, 2, x_223);
x_225 = lean_array_push(x_137, x_224);
x_226 = lean_array_push(x_225, x_136);
lean_inc(x_13);
x_227 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_227, 0, x_13);
lean_ctor_set(x_227, 1, x_140);
lean_ctor_set(x_227, 2, x_226);
x_228 = lean_array_push(x_175, x_227);
lean_inc(x_13);
x_229 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_229, 0, x_13);
lean_ctor_set(x_229, 1, x_21);
lean_ctor_set(x_229, 2, x_228);
x_230 = lean_array_push(x_172, x_229);
lean_inc(x_13);
x_231 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_231, 0, x_13);
lean_ctor_set(x_231, 1, x_130);
lean_ctor_set(x_231, 2, x_230);
x_232 = lean_array_push(x_176, x_231);
lean_inc(x_23);
x_233 = lean_array_push(x_232, x_23);
x_234 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46;
lean_inc(x_13);
x_235 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_235, 0, x_13);
lean_ctor_set(x_235, 1, x_234);
lean_ctor_set(x_235, 2, x_233);
x_236 = lean_array_push(x_180, x_235);
lean_inc(x_23);
x_237 = lean_array_push(x_236, x_23);
lean_inc(x_23);
x_238 = lean_array_push(x_237, x_23);
x_239 = lean_array_push(x_238, x_23);
x_240 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29;
lean_inc(x_13);
x_241 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_241, 0, x_13);
lean_ctor_set(x_241, 1, x_240);
lean_ctor_set(x_241, 2, x_239);
x_242 = lean_array_push(x_181, x_241);
x_243 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8;
x_244 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_244, 0, x_13);
lean_ctor_set(x_244, 1, x_243);
lean_ctor_set(x_244, 2, x_242);
x_245 = l_Lean_Elab_Command_elabCommand(x_244, x_2, x_3, x_20);
return x_245;
}
}
}
else
{
lean_object* x_266; lean_object* x_267; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_266 = lean_box(0);
x_267 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_4);
return x_267;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at_Lean_Elab_Command_elabDeclareSyntaxCat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_st_ref_take(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 0, x_1);
x_10 = lean_st_ref_set(x_3, x_6, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_6, 2);
x_19 = lean_ctor_get(x_6, 3);
x_20 = lean_ctor_get(x_6, 4);
x_21 = lean_ctor_get(x_6, 5);
x_22 = lean_ctor_get(x_6, 6);
x_23 = lean_ctor_get(x_6, 7);
x_24 = lean_ctor_get(x_6, 8);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
x_25 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_17);
lean_ctor_set(x_25, 2, x_18);
lean_ctor_set(x_25, 3, x_19);
lean_ctor_set(x_25, 4, x_20);
lean_ctor_set(x_25, 5, x_21);
lean_ctor_set(x_25, 6, x_22);
lean_ctor_set(x_25, 7, x_23);
lean_ctor_set(x_25, 8, x_24);
x_26 = lean_st_ref_set(x_3, x_25, x_7);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_root_", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.Parser.Category", 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_addCategoryInfo___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addCategoryInfo___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6;
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("term{}", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("{", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("}", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("structInst", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("optEllipsis", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_2 = l_Array_append___rarg(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("catBehaviorBoth", 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__19;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_getOptional_x3f(x_6);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_getId(x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
x_14 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
lean_inc(x_10);
x_15 = lean_name_append_after(x_10, x_14);
x_16 = l_Lean_Elab_Term_addCategoryInfo___closed__2;
lean_inc(x_10);
x_17 = l_Lean_Name_append(x_16, x_10);
x_18 = lean_st_ref_get(x_3, x_4);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_180; 
x_180 = lean_box(0);
x_19 = x_180;
goto block_179;
}
else
{
uint8_t x_181; 
x_181 = !lean_is_exclusive(x_7);
if (x_181 == 0)
{
x_19 = x_7;
goto block_179;
}
else
{
lean_object* x_182; lean_object* x_183; 
x_182 = lean_ctor_get(x_7, 0);
lean_inc(x_182);
lean_dec(x_7);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_182);
x_19 = x_183;
goto block_179;
}
}
block_179:
{
uint8_t x_20; 
if (x_13 == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_172 = l_Lean_Syntax_getArg(x_12, x_11);
lean_dec(x_12);
x_173 = l_Lean_Syntax_getKind(x_172);
x_174 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__20;
x_175 = lean_name_eq(x_173, x_174);
lean_dec(x_173);
if (x_175 == 0)
{
uint8_t x_176; 
x_176 = 1;
x_20 = x_176;
goto block_171;
}
else
{
uint8_t x_177; 
x_177 = 2;
x_20 = x_177;
goto block_171;
}
}
else
{
uint8_t x_178; 
lean_dec(x_12);
x_178 = 0;
x_20 = x_178;
goto block_171;
}
block_171:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_17);
lean_inc(x_10);
x_24 = l_Lean_Parser_registerParserCategory(x_23, x_15, x_10, x_20, x_17, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_setEnv___at_Lean_Elab_Command_elabDeclareSyntaxCat___spec__1(x_25, x_2, x_3, x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_2, x_3, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Elab_Command_getMainModule___rarg(x_3, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_39 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_30);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_30);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_39);
x_41 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
lean_inc(x_30);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_30);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2;
x_44 = l_Lean_Name_append(x_43, x_17);
x_45 = l_Lean_mkIdentFrom(x_9, x_44);
x_46 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_47 = lean_array_push(x_46, x_45);
x_48 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32;
x_49 = lean_array_push(x_47, x_48);
x_50 = lean_box(2);
x_51 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31;
x_52 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_52, 2, x_49);
x_53 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37;
lean_inc(x_30);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_30);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_addMacroScope(x_36, x_16, x_33);
x_56 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5;
x_57 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9;
lean_inc(x_30);
x_58 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_58, 0, x_30);
lean_ctor_set(x_58, 1, x_56);
lean_ctor_set(x_58, 2, x_55);
lean_ctor_set(x_58, 3, x_57);
x_59 = lean_array_push(x_46, x_54);
x_60 = lean_array_push(x_59, x_58);
x_61 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36;
lean_inc(x_30);
x_62 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_62, 0, x_30);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_62, 2, x_60);
x_63 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_64 = lean_array_push(x_63, x_62);
lean_inc(x_30);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_30);
lean_ctor_set(x_65, 1, x_38);
lean_ctor_set(x_65, 2, x_64);
lean_inc(x_40);
x_66 = lean_array_push(x_46, x_40);
x_67 = lean_array_push(x_66, x_65);
x_68 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34;
lean_inc(x_30);
x_69 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_69, 0, x_30);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_67);
x_70 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47;
lean_inc(x_30);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_30);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__12;
lean_inc(x_30);
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_30);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__13;
lean_inc(x_30);
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_30);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_73);
x_76 = lean_array_push(x_46, x_73);
lean_inc(x_75);
x_77 = lean_array_push(x_76, x_75);
x_78 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__11;
lean_inc(x_30);
x_79 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_79, 0, x_30);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set(x_79, 2, x_77);
lean_inc(x_40);
x_80 = lean_array_push(x_63, x_40);
x_81 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__17;
lean_inc(x_30);
x_82 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_82, 0, x_30);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_82, 2, x_80);
x_83 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27;
x_84 = lean_array_push(x_83, x_73);
lean_inc(x_40);
x_85 = lean_array_push(x_84, x_40);
lean_inc(x_40);
x_86 = lean_array_push(x_85, x_40);
x_87 = lean_array_push(x_86, x_82);
lean_inc(x_40);
x_88 = lean_array_push(x_87, x_40);
x_89 = lean_array_push(x_88, x_75);
x_90 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__15;
lean_inc(x_30);
x_91 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_91, 0, x_30);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_91, 2, x_89);
x_92 = lean_array_push(x_46, x_79);
x_93 = lean_array_push(x_92, x_91);
x_94 = l_Lean_Elab_Term_toParserDescr_process___closed__2;
lean_inc(x_30);
x_95 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_95, 0, x_30);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_93);
x_96 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_97 = lean_array_push(x_96, x_71);
x_98 = lean_array_push(x_97, x_95);
lean_inc(x_40);
x_99 = lean_array_push(x_98, x_40);
x_100 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46;
lean_inc(x_30);
x_101 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_101, 0, x_30);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_101, 2, x_99);
x_102 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81;
x_103 = lean_array_push(x_102, x_42);
x_104 = lean_array_push(x_103, x_52);
x_105 = lean_array_push(x_104, x_69);
x_106 = lean_array_push(x_105, x_101);
lean_inc(x_40);
x_107 = lean_array_push(x_106, x_40);
lean_inc(x_40);
x_108 = lean_array_push(x_107, x_40);
lean_inc(x_40);
x_109 = lean_array_push(x_108, x_40);
x_110 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29;
lean_inc(x_30);
x_111 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_111, 0, x_30);
lean_ctor_set(x_111, 1, x_110);
lean_ctor_set(x_111, 2, x_109);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_112 = l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__18;
lean_inc(x_30);
x_113 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_113, 0, x_30);
lean_ctor_set(x_113, 1, x_38);
lean_ctor_set(x_113, 2, x_112);
x_114 = lean_array_push(x_83, x_113);
lean_inc(x_40);
x_115 = lean_array_push(x_114, x_40);
lean_inc(x_40);
x_116 = lean_array_push(x_115, x_40);
lean_inc(x_40);
x_117 = lean_array_push(x_116, x_40);
lean_inc(x_40);
x_118 = lean_array_push(x_117, x_40);
x_119 = lean_array_push(x_118, x_40);
x_120 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10;
lean_inc(x_30);
x_121 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_121, 0, x_30);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_121, 2, x_119);
x_122 = lean_array_push(x_46, x_121);
x_123 = lean_array_push(x_122, x_111);
x_124 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8;
x_125 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_125, 0, x_30);
lean_ctor_set(x_125, 1, x_124);
lean_ctor_set(x_125, 2, x_123);
lean_inc(x_3);
lean_inc(x_2);
x_126 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser(x_10, x_2, x_3, x_37);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = l_Lean_Elab_Command_elabCommand(x_125, x_2, x_3, x_127);
return x_128;
}
else
{
uint8_t x_129; 
lean_dec(x_125);
lean_dec(x_3);
lean_dec(x_2);
x_129 = !lean_is_exclusive(x_126);
if (x_129 == 0)
{
return x_126;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_126, 0);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_126);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_133 = lean_ctor_get(x_19, 0);
lean_inc(x_133);
lean_dec(x_19);
x_134 = lean_array_push(x_63, x_133);
x_135 = l_Array_append___rarg(x_39, x_134);
lean_inc(x_30);
x_136 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_136, 0, x_30);
lean_ctor_set(x_136, 1, x_38);
lean_ctor_set(x_136, 2, x_135);
x_137 = lean_array_push(x_83, x_136);
lean_inc(x_40);
x_138 = lean_array_push(x_137, x_40);
lean_inc(x_40);
x_139 = lean_array_push(x_138, x_40);
lean_inc(x_40);
x_140 = lean_array_push(x_139, x_40);
lean_inc(x_40);
x_141 = lean_array_push(x_140, x_40);
x_142 = lean_array_push(x_141, x_40);
x_143 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10;
lean_inc(x_30);
x_144 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_144, 0, x_30);
lean_ctor_set(x_144, 1, x_143);
lean_ctor_set(x_144, 2, x_142);
x_145 = lean_array_push(x_46, x_144);
x_146 = lean_array_push(x_145, x_111);
x_147 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8;
x_148 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_148, 0, x_30);
lean_ctor_set(x_148, 1, x_147);
lean_ctor_set(x_148, 2, x_146);
lean_inc(x_3);
lean_inc(x_2);
x_149 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser(x_10, x_2, x_3, x_37);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
lean_dec(x_149);
x_151 = l_Lean_Elab_Command_elabCommand(x_148, x_2, x_3, x_150);
return x_151;
}
else
{
uint8_t x_152; 
lean_dec(x_148);
lean_dec(x_3);
lean_dec(x_2);
x_152 = !lean_is_exclusive(x_149);
if (x_152 == 0)
{
return x_149;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_149, 0);
x_154 = lean_ctor_get(x_149, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_149);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
}
else
{
uint8_t x_156; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
x_156 = !lean_is_exclusive(x_24);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_157 = lean_ctor_get(x_24, 0);
x_158 = lean_ctor_get(x_2, 6);
lean_inc(x_158);
lean_dec(x_2);
x_159 = lean_io_error_to_string(x_157);
x_160 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_160, 0, x_159);
x_161 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_161, 0, x_160);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_161);
lean_ctor_set(x_24, 0, x_162);
return x_24;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_163 = lean_ctor_get(x_24, 0);
x_164 = lean_ctor_get(x_24, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_24);
x_165 = lean_ctor_get(x_2, 6);
lean_inc(x_165);
lean_dec(x_2);
x_166 = lean_io_error_to_string(x_163);
x_167 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_168 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_168, 0, x_167);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_165);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_164);
return x_170;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at_Lean_Elab_Command_elabDeclareSyntaxCat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_setEnv___at_Lean_Elab_Command_elabDeclareSyntaxCat___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDeclareSyntaxCat___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabDeclareSyntaxCat(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("syntaxCat", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Elab", 4);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabDeclareSyntaxCat", 20);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_commandElabAttribute;
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDeclareSyntaxCat___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8;
x_3 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7;
x_5 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(270u);
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(285u);
x_2 = lean_unsigned_to_nat(17u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__1;
x_2 = lean_unsigned_to_nat(32u);
x_3 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__2;
x_4 = lean_unsigned_to_nat(17u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(270u);
x_2 = lean_unsigned_to_nat(36u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(270u);
x_2 = lean_unsigned_to_nat(56u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__4;
x_2 = lean_unsigned_to_nat(36u);
x_3 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__5;
x_4 = lean_unsigned_to_nat(56u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7;
x_3 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Elab_Command_mkNameFromParserSyntax_visit(x_6, x_4);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_string_utf8_at_end(x_2, x_1);
if (x_3 == 0)
{
uint32_t x_4; uint8_t x_5; 
x_4 = lean_string_utf8_get(x_2, x_1);
x_5 = l_Char_isWhitespace(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_string_utf8_set(x_2, x_1, x_4);
x_7 = lean_string_utf8_next(x_6, x_1);
lean_dec(x_1);
x_1 = x_7;
x_2 = x_6;
goto _start;
}
else
{
uint32_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 95;
x_10 = lean_string_utf8_set(x_2, x_1, x_9);
x_11 = lean_string_utf8_next(x_10, x_1);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_10;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_mkNameFromParserSyntax_visit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_visit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_isStrLit_x3f(x_1);
if (lean_obj_tag(x_3) == 0)
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_Elab_Term_checkLeftRec___closed__4;
x_7 = lean_name_eq(x_4, x_6);
lean_dec(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_5);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_5);
return x_2;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_le(x_8, x_8);
if (x_11 == 0)
{
lean_dec(x_8);
lean_dec(x_5);
return x_2;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__1(x_5, x_12, x_13, x_2);
lean_dec(x_5);
return x_14;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = l_Lean_Elab_Command_mkNameFromParserSyntax_visit___closed__1;
x_16 = lean_string_append(x_2, x_15);
return x_16;
}
}
else
{
lean_dec(x_1);
return x_2;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
lean_dec(x_3);
x_18 = l_String_trim(x_17);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_String_mapAux___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__2(x_19, x_18);
x_21 = l_String_capitalize(x_20);
x_22 = lean_string_append(x_2, x_21);
lean_dec(x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_mkNameFromParserSyntax_visit___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_appendCatName(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_string_append(x_3, x_2);
return x_4;
}
else
{
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax_appendCatName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Command_mkNameFromParserSyntax_appendCatName(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkNameFromParserSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = l_Lean_Elab_Term_toParserDescr_process___closed__16;
x_6 = l_Lean_Elab_Command_mkNameFromParserSyntax_visit(x_2, x_5);
x_7 = l_Lean_Elab_Command_mkNameFromParserSyntax_appendCatName(x_1, x_6);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = l_Lean_Name_str___override(x_8, x_7);
x_10 = l_Lean_Elab_mkUnusedBaseName(x_9, x_3, x_4);
return x_10;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_4 = lean_name_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Term_toParserDescr_process___closed__2;
x_6 = lean_name_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Elab_Term_toParserDescr_process___closed__3;
x_8 = lean_name_eq(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_1);
x_9 = l_Lean_Elab_Term_toParserDescr_process___closed__11;
x_10 = lean_name_eq(x_2, x_9);
lean_dec(x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
lean_dec(x_1);
x_1 = x_12;
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_1 = x_15;
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_2);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
x_19 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = 0;
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = l_Lean_Syntax_getNumArgs(x_1);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_21, x_22);
lean_dec(x_21);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
lean_dec(x_23);
lean_dec(x_1);
x_1 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
static lean_object* _init_l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("failed", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_Parser_isValidSyntaxNodeKind(x_9, x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_free_object(x_5);
lean_dec(x_1);
x_11 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2;
x_12 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_11, x_2, x_3, x_8);
return x_12;
}
else
{
lean_dec(x_2);
lean_ctor_set(x_5, 0, x_1);
return x_5;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_1);
x_16 = l_Lean_Parser_isValidSyntaxNodeKind(x_15, x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2;
x_18 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_17, x_2, x_3, x_14);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_14);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at_Lean_Elab_Command_resolveSyntaxKind___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2(x_1, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_1);
x_8 = l_Lean_Name_append(x_2, x_1);
lean_dec(x_2);
lean_inc(x_3);
x_9 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2(x_8, x_3, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_2 = x_7;
x_5 = x_10;
goto _start;
}
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2;
x_13 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_12, x_3, x_4, x_5);
lean_dec(x_4);
return x_13;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_resolveSyntaxKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid syntax node kind '", 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_resolveSyntaxKind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_resolveSyntaxKind___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_resolveSyntaxKind(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Lean_Elab_Command_getScope___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 2);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at_Lean_Elab_Command_resolveSyntaxKind___spec__1(x_1, x_8, x_2, x_3, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Command_resolveSyntaxKind___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_15, x_2, x_3, x_10);
lean_dec(x_3);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Command_elabSyntax___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_13 = lean_array_fget(x_1, x_4);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_18 = lean_array_push(x_5, x_16);
x_3 = x_12;
x_4 = x_17;
x_5 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_5);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_sequenceMap_loop___at_Lean_Elab_Command_elabSyntax___spec__3(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6(x_2, x_3, x_4, x_8);
lean_dec(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_20 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_9);
lean_ctor_set(x_20, 7, x_19);
x_21 = l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6(x_2, x_20, x_4, x_8);
lean_dec(x_4);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Elab_Command_getScope___rarg(x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Command_getScope___rarg(x_3, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 3);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_8);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_17, 0, x_8);
lean_inc(x_12);
x_18 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_18, 0, x_12);
lean_inc(x_8);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_19, 0, x_8);
lean_inc(x_16);
lean_inc(x_12);
lean_inc(x_8);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_20, 0, x_8);
lean_closure_set(x_20, 1, x_12);
lean_closure_set(x_20, 2, x_16);
lean_inc(x_8);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_21, 0, x_8);
lean_closure_set(x_21, 1, x_12);
lean_closure_set(x_21, 2, x_16);
x_22 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_22, 3, x_20);
lean_ctor_set(x_22, 4, x_21);
x_23 = l_Lean_Elab_Command_getRef(x_2, x_3, x_15);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_29);
x_30 = lean_st_ref_get(x_3, x_28);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 4);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_st_ref_get(x_3, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 3);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_environment_main_module(x_8);
x_39 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_27);
lean_ctor_set(x_39, 3, x_29);
lean_ctor_set(x_39, 4, x_33);
lean_ctor_set(x_39, 5, x_24);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_apply_2(x_1, x_39, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_st_ref_take(x_3, x_36);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_47, 3);
lean_dec(x_50);
lean_ctor_set(x_47, 3, x_45);
x_51 = lean_st_ref_set(x_3, x_47, x_48);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_dec(x_44);
x_54 = l_List_reverse___rarg(x_53);
x_55 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__9(x_54, x_2, x_3, x_52);
lean_dec(x_3);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
lean_ctor_set(x_55, 0, x_43);
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_43);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_60 = lean_ctor_get(x_47, 0);
x_61 = lean_ctor_get(x_47, 1);
x_62 = lean_ctor_get(x_47, 2);
x_63 = lean_ctor_get(x_47, 4);
x_64 = lean_ctor_get(x_47, 5);
x_65 = lean_ctor_get(x_47, 6);
x_66 = lean_ctor_get(x_47, 7);
x_67 = lean_ctor_get(x_47, 8);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_47);
x_68 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_68, 0, x_60);
lean_ctor_set(x_68, 1, x_61);
lean_ctor_set(x_68, 2, x_62);
lean_ctor_set(x_68, 3, x_45);
lean_ctor_set(x_68, 4, x_63);
lean_ctor_set(x_68, 5, x_64);
lean_ctor_set(x_68, 6, x_65);
lean_ctor_set(x_68, 7, x_66);
lean_ctor_set(x_68, 8, x_67);
x_69 = lean_st_ref_set(x_3, x_68, x_48);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get(x_44, 1);
lean_inc(x_71);
lean_dec(x_44);
x_72 = l_List_reverse___rarg(x_71);
x_73 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__9(x_72, x_2, x_3, x_70);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_43);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_42, 0);
lean_inc(x_77);
lean_dec(x_42);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_maxRecDepthErrorMessage;
x_81 = lean_string_dec_eq(x_79, x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_82, 0, x_79);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__5(x_78, x_83, x_2, x_3, x_36);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_79);
x_85 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__7(x_78, x_2, x_3, x_36);
lean_dec(x_3);
lean_dec(x_2);
return x_85;
}
}
else
{
lean_object* x_86; 
lean_dec(x_3);
lean_dec(x_2);
x_86 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8___rarg(x_36);
return x_86;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_20 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_9);
lean_ctor_set(x_20, 7, x_19);
x_21 = l_Lean_throwError___at_Lean_Elab_Command_resolveSyntaxKind___spec__3(x_2, x_20, x_4, x_8);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Elab_Command_getScope___rarg(x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Command_getScope___rarg(x_3, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 3);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_8);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_17, 0, x_8);
lean_inc(x_12);
x_18 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_18, 0, x_12);
lean_inc(x_8);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_19, 0, x_8);
lean_inc(x_16);
lean_inc(x_12);
lean_inc(x_8);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_20, 0, x_8);
lean_closure_set(x_20, 1, x_12);
lean_closure_set(x_20, 2, x_16);
lean_inc(x_8);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_checkLeftRec___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_21, 0, x_8);
lean_closure_set(x_21, 1, x_12);
lean_closure_set(x_21, 2, x_16);
x_22 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_22, 3, x_20);
lean_ctor_set(x_22, 4, x_21);
x_23 = l_Lean_Elab_Command_getRef(x_2, x_3, x_15);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_29);
x_30 = lean_st_ref_get(x_3, x_28);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 4);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_st_ref_get(x_3, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 3);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_environment_main_module(x_8);
x_39 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_27);
lean_ctor_set(x_39, 3, x_29);
lean_ctor_set(x_39, 4, x_33);
lean_ctor_set(x_39, 5, x_24);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_apply_2(x_1, x_39, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_st_ref_take(x_3, x_36);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_47, 3);
lean_dec(x_50);
lean_ctor_set(x_47, 3, x_45);
x_51 = lean_st_ref_set(x_3, x_47, x_48);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
lean_dec(x_44);
x_54 = l_List_reverse___rarg(x_53);
x_55 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__9(x_54, x_2, x_3, x_52);
lean_dec(x_3);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
lean_ctor_set(x_55, 0, x_43);
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_43);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_60 = lean_ctor_get(x_47, 0);
x_61 = lean_ctor_get(x_47, 1);
x_62 = lean_ctor_get(x_47, 2);
x_63 = lean_ctor_get(x_47, 4);
x_64 = lean_ctor_get(x_47, 5);
x_65 = lean_ctor_get(x_47, 6);
x_66 = lean_ctor_get(x_47, 7);
x_67 = lean_ctor_get(x_47, 8);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_47);
x_68 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_68, 0, x_60);
lean_ctor_set(x_68, 1, x_61);
lean_ctor_set(x_68, 2, x_62);
lean_ctor_set(x_68, 3, x_45);
lean_ctor_set(x_68, 4, x_63);
lean_ctor_set(x_68, 5, x_64);
lean_ctor_set(x_68, 6, x_65);
lean_ctor_set(x_68, 7, x_66);
lean_ctor_set(x_68, 8, x_67);
x_69 = lean_st_ref_set(x_3, x_68, x_48);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get(x_44, 1);
lean_inc(x_71);
lean_dec(x_44);
x_72 = l_List_reverse___rarg(x_71);
x_73 = l_List_forM___at_Lean_Elab_Command_elabCommand___spec__9(x_72, x_2, x_3, x_70);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_43);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_42, 0);
lean_inc(x_77);
lean_dec(x_42);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_maxRecDepthErrorMessage;
x_81 = lean_string_dec_eq(x_79, x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_82, 0, x_79);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__10(x_78, x_83, x_2, x_3, x_36);
lean_dec(x_3);
lean_dec(x_78);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_79);
x_85 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__11(x_78, x_2, x_3, x_36);
lean_dec(x_3);
lean_dec(x_2);
return x_85;
}
}
else
{
lean_object* x_86; 
lean_dec(x_3);
lean_dec(x_2);
x_86 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12___rarg(x_36);
return x_86;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_expandDeclId___spec__4(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_20 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_9);
lean_ctor_set(x_20, 7, x_19);
x_21 = l_Lean_throwError___at_Lean_Elab_Command_expandDeclId___spec__4(x_2, x_20, x_4, x_8);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_toParserDescr(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1;
x_7 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Command_elabCommand___spec__7(x_6, x_3, x_4, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand), 4, 1);
lean_closure_set(x_11, 0, x_2);
x_12 = l_Lean_Elab_Command_withMacroExpansion___rarg(x_1, x_2, x_11, x_3, x_4, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
lean_inc(x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
x_15 = l_Lean_addTrace___at_Lean_Elab_Command_elabCommand___spec__8(x_6, x_14, x_3, x_4, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_2);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand), 4, 1);
lean_closure_set(x_17, 0, x_2);
x_18 = l_Lean_Elab_Command_withMacroExpansion___rarg(x_1, x_2, x_17, x_3, x_4, x_16);
return x_18;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(",", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.node", 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean.TrailingParserDescr", 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__7;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.trailingNode", 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__10;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("trailingNode", 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_alloc_closure((void*)(l_Lean_evalOptPrio), 3, 1);
lean_closure_set(x_20, 0, x_1);
lean_inc(x_18);
lean_inc(x_17);
x_21 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__4(x_20, x_17, x_18, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Command_getScope___rarg(x_18, x_23);
if (lean_obj_tag(x_14) == 0)
{
x_25 = x_15;
goto block_380;
}
else
{
lean_object* x_381; 
lean_dec(x_15);
x_381 = lean_ctor_get(x_14, 0);
lean_inc(x_381);
x_25 = x_381;
goto block_380;
}
block_380:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_26, 2);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_16);
x_29 = l_Lean_Name_append(x_28, x_16);
lean_dec(x_28);
x_30 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3;
lean_inc(x_2);
x_31 = lean_name_append_after(x_2, x_30);
lean_inc(x_25);
x_32 = l_Lean_mkIdentFrom(x_25, x_31);
x_33 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabSyntax___lambda__2___boxed), 10, 2);
lean_closure_set(x_33, 0, x_3);
lean_closure_set(x_33, 1, x_2);
lean_inc(x_17);
x_34 = l_Lean_Elab_Command_runTermElabM___rarg(x_33, x_17, x_18, x_27);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_374; 
x_374 = l_Lean_mkIdentFrom(x_25, x_16);
x_39 = x_374;
goto block_373;
}
else
{
lean_object* x_375; 
lean_dec(x_25);
lean_dec(x_16);
x_375 = lean_ctor_get(x_14, 0);
lean_inc(x_375);
lean_dec(x_14);
x_39 = x_375;
goto block_373;
}
block_373:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_40 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_17, x_18, x_36);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Elab_Command_getCurrMacroScope(x_17, x_18, x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_Lean_Elab_Command_getMainModule___rarg(x_18, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14;
lean_inc(x_4);
x_48 = l_Lean_Name_str___override(x_4, x_47);
x_49 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18;
x_50 = l_Lean_Name_str___override(x_5, x_49);
x_51 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20;
x_52 = l_Lean_Name_str___override(x_50, x_51);
x_53 = l_Nat_repr(x_22);
x_54 = lean_box(2);
x_55 = l_Lean_Syntax_mkNumLit(x_53, x_54);
x_56 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_57 = lean_array_push(x_56, x_55);
lean_inc(x_6);
lean_inc(x_41);
x_58 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_58, 0, x_41);
lean_ctor_set(x_58, 1, x_6);
lean_ctor_set(x_58, 2, x_57);
x_59 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_60 = lean_array_push(x_59, x_32);
x_61 = lean_array_push(x_60, x_58);
lean_inc(x_41);
x_62 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_62, 0, x_41);
lean_ctor_set(x_62, 1, x_52);
lean_ctor_set(x_62, 2, x_61);
x_63 = lean_array_push(x_59, x_7);
x_64 = lean_array_push(x_63, x_62);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_41);
lean_ctor_set(x_65, 1, x_48);
lean_ctor_set(x_65, 2, x_64);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_371; 
x_371 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_66 = x_371;
goto block_370;
}
else
{
lean_object* x_372; 
x_372 = lean_ctor_get(x_13, 0);
lean_inc(x_372);
lean_dec(x_13);
x_66 = x_372;
goto block_370;
}
block_370:
{
lean_object* x_67; lean_object* x_68; 
x_67 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__1;
x_68 = l_Lean_Syntax_TSepArray_push___rarg(x_67, x_66, x_65);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_69 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_17, x_18, x_46);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Lean_Elab_Command_getCurrMacroScope(x_17, x_18, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Elab_Command_getMainModule___rarg(x_18, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7;
lean_inc(x_9);
x_79 = l_Lean_Name_str___override(x_9, x_78);
x_80 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9;
lean_inc(x_9);
x_81 = l_Lean_Name_str___override(x_9, x_80);
x_82 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11;
lean_inc(x_4);
x_83 = l_Lean_Name_str___override(x_4, x_82);
x_84 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13;
lean_inc(x_70);
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_70);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_87 = l_Array_append___rarg(x_86, x_68);
lean_inc(x_6);
lean_inc(x_70);
x_88 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_88, 0, x_70);
lean_ctor_set(x_88, 1, x_6);
lean_ctor_set(x_88, 2, x_87);
x_89 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26;
lean_inc(x_70);
x_90 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_90, 0, x_70);
lean_ctor_set(x_90, 1, x_89);
x_91 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_92 = lean_array_push(x_91, x_85);
x_93 = lean_array_push(x_92, x_88);
x_94 = lean_array_push(x_93, x_90);
lean_inc(x_70);
x_95 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_95, 0, x_70);
lean_ctor_set(x_95, 1, x_83);
lean_ctor_set(x_95, 2, x_94);
x_96 = lean_array_push(x_56, x_95);
lean_inc(x_6);
lean_inc(x_70);
x_97 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_97, 0, x_70);
lean_ctor_set(x_97, 1, x_6);
lean_ctor_set(x_97, 2, x_96);
lean_inc(x_6);
lean_inc(x_70);
x_98 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_98, 0, x_70);
lean_ctor_set(x_98, 1, x_6);
lean_ctor_set(x_98, 2, x_86);
x_99 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
lean_inc(x_9);
x_100 = l_Lean_Name_str___override(x_9, x_99);
lean_inc(x_70);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_70);
lean_ctor_set(x_101, 1, x_99);
x_102 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30;
lean_inc(x_9);
x_103 = l_Lean_Name_str___override(x_9, x_102);
x_104 = lean_array_push(x_59, x_39);
lean_inc(x_98);
x_105 = lean_array_push(x_104, x_98);
lean_inc(x_70);
x_106 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_106, 0, x_70);
lean_ctor_set(x_106, 1, x_103);
lean_ctor_set(x_106, 2, x_105);
x_107 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33;
lean_inc(x_9);
x_108 = l_Lean_Name_str___override(x_9, x_107);
x_109 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35;
lean_inc(x_4);
x_110 = l_Lean_Name_str___override(x_4, x_109);
x_111 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37;
lean_inc(x_70);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_70);
lean_ctor_set(x_112, 1, x_111);
x_113 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_114 = l_Lean_Name_str___override(x_10, x_113);
lean_inc(x_73);
lean_inc(x_114);
lean_inc(x_76);
x_115 = l_Lean_addMacroScope(x_76, x_114, x_73);
x_116 = lean_box(0);
lean_inc(x_114);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
lean_inc(x_114);
x_118 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_118, 0, x_114);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_116);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_119);
x_121 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40;
lean_inc(x_70);
x_122 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_122, 0, x_70);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_122, 2, x_115);
lean_ctor_set(x_122, 3, x_120);
x_123 = lean_array_push(x_59, x_112);
x_124 = lean_array_push(x_123, x_122);
lean_inc(x_70);
x_125 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_125, 0, x_70);
lean_ctor_set(x_125, 1, x_110);
lean_ctor_set(x_125, 2, x_124);
x_126 = lean_array_push(x_56, x_125);
lean_inc(x_6);
lean_inc(x_70);
x_127 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_127, 0, x_70);
lean_ctor_set(x_127, 1, x_6);
lean_ctor_set(x_127, 2, x_126);
lean_inc(x_98);
x_128 = lean_array_push(x_59, x_98);
x_129 = lean_array_push(x_128, x_127);
lean_inc(x_70);
x_130 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_130, 0, x_70);
lean_ctor_set(x_130, 1, x_108);
lean_ctor_set(x_130, 2, x_129);
x_131 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45;
x_132 = l_Lean_Name_str___override(x_9, x_131);
x_133 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47;
lean_inc(x_70);
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_70);
lean_ctor_set(x_134, 1, x_133);
x_135 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7;
lean_inc(x_4);
x_136 = l_Lean_Name_str___override(x_4, x_135);
x_137 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__5;
x_138 = l_Lean_addMacroScope(x_76, x_137, x_73);
x_139 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51;
x_140 = l_Lean_Name_str___override(x_114, x_139);
lean_inc(x_140);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_116);
x_142 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_142, 0, x_140);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_116);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_143);
x_145 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__4;
lean_inc(x_70);
x_146 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_146, 0, x_70);
lean_ctor_set(x_146, 1, x_145);
lean_ctor_set(x_146, 2, x_138);
lean_ctor_set(x_146, 3, x_144);
lean_inc(x_29);
x_147 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_116, x_29);
x_148 = l_Nat_repr(x_11);
x_149 = l_Lean_Syntax_mkNumLit(x_148, x_54);
x_150 = lean_array_push(x_59, x_146);
x_151 = lean_array_push(x_91, x_134);
x_152 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81;
x_153 = lean_array_push(x_152, x_101);
x_154 = lean_array_push(x_153, x_106);
x_155 = lean_array_push(x_154, x_130);
if (lean_obj_tag(x_12) == 0)
{
x_156 = x_86;
goto block_213;
}
else
{
lean_object* x_214; lean_object* x_215; 
x_214 = lean_ctor_get(x_12, 0);
lean_inc(x_214);
lean_dec(x_12);
x_215 = lean_array_push(x_56, x_214);
x_156 = x_215;
goto block_213;
}
block_213:
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_157 = l_Array_append___rarg(x_86, x_156);
lean_inc(x_6);
lean_inc(x_70);
x_158 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_158, 0, x_70);
lean_ctor_set(x_158, 1, x_6);
lean_ctor_set(x_158, 2, x_157);
x_159 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27;
x_160 = lean_array_push(x_159, x_158);
x_161 = lean_array_push(x_160, x_97);
lean_inc(x_98);
x_162 = lean_array_push(x_161, x_98);
lean_inc(x_98);
x_163 = lean_array_push(x_162, x_98);
lean_inc(x_98);
x_164 = lean_array_push(x_163, x_98);
lean_inc(x_98);
x_165 = lean_array_push(x_164, x_98);
lean_inc(x_70);
x_166 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_166, 0, x_70);
lean_ctor_set(x_166, 1, x_81);
lean_ctor_set(x_166, 2, x_165);
x_167 = lean_array_push(x_59, x_166);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_4);
x_168 = l_Lean_quoteNameMk(x_29);
x_169 = lean_array_push(x_91, x_168);
x_170 = lean_array_push(x_169, x_149);
x_171 = lean_array_push(x_170, x_37);
lean_inc(x_70);
x_172 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_172, 0, x_70);
lean_ctor_set(x_172, 1, x_6);
lean_ctor_set(x_172, 2, x_171);
x_173 = lean_array_push(x_150, x_172);
lean_inc(x_70);
x_174 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_174, 0, x_70);
lean_ctor_set(x_174, 1, x_136);
lean_ctor_set(x_174, 2, x_173);
x_175 = lean_array_push(x_151, x_174);
lean_inc(x_98);
x_176 = lean_array_push(x_175, x_98);
lean_inc(x_70);
x_177 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_177, 0, x_70);
lean_ctor_set(x_177, 1, x_132);
lean_ctor_set(x_177, 2, x_176);
x_178 = lean_array_push(x_155, x_177);
lean_inc(x_98);
x_179 = lean_array_push(x_178, x_98);
lean_inc(x_98);
x_180 = lean_array_push(x_179, x_98);
x_181 = lean_array_push(x_180, x_98);
lean_inc(x_70);
x_182 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_182, 0, x_70);
lean_ctor_set(x_182, 1, x_100);
lean_ctor_set(x_182, 2, x_181);
x_183 = lean_array_push(x_167, x_182);
x_184 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_184, 0, x_70);
lean_ctor_set(x_184, 1, x_79);
lean_ctor_set(x_184, 2, x_183);
x_185 = l_Lean_Elab_Command_elabSyntax___lambda__3(x_8, x_184, x_17, x_18, x_77);
return x_185;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_29);
x_186 = lean_ctor_get(x_147, 0);
lean_inc(x_186);
lean_dec(x_147);
x_187 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24;
x_188 = l_Lean_Name_str___override(x_4, x_187);
x_189 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_190 = l_String_intercalate(x_189, x_186);
x_191 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_192 = lean_string_append(x_191, x_190);
lean_dec(x_190);
x_193 = l_Lean_Syntax_mkNameLit(x_192, x_54);
x_194 = lean_array_push(x_56, x_193);
x_195 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_195, 0, x_54);
lean_ctor_set(x_195, 1, x_188);
lean_ctor_set(x_195, 2, x_194);
x_196 = lean_array_push(x_91, x_195);
x_197 = lean_array_push(x_196, x_149);
x_198 = lean_array_push(x_197, x_37);
lean_inc(x_70);
x_199 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_199, 0, x_70);
lean_ctor_set(x_199, 1, x_6);
lean_ctor_set(x_199, 2, x_198);
x_200 = lean_array_push(x_150, x_199);
lean_inc(x_70);
x_201 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_201, 0, x_70);
lean_ctor_set(x_201, 1, x_136);
lean_ctor_set(x_201, 2, x_200);
x_202 = lean_array_push(x_151, x_201);
lean_inc(x_98);
x_203 = lean_array_push(x_202, x_98);
lean_inc(x_70);
x_204 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_204, 0, x_70);
lean_ctor_set(x_204, 1, x_132);
lean_ctor_set(x_204, 2, x_203);
x_205 = lean_array_push(x_155, x_204);
lean_inc(x_98);
x_206 = lean_array_push(x_205, x_98);
lean_inc(x_98);
x_207 = lean_array_push(x_206, x_98);
x_208 = lean_array_push(x_207, x_98);
lean_inc(x_70);
x_209 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_209, 0, x_70);
lean_ctor_set(x_209, 1, x_100);
lean_ctor_set(x_209, 2, x_208);
x_210 = lean_array_push(x_167, x_209);
x_211 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_211, 0, x_70);
lean_ctor_set(x_211, 1, x_79);
lean_ctor_set(x_211, 2, x_210);
x_212 = l_Lean_Elab_Command_elabSyntax___lambda__3(x_8, x_211, x_17, x_18, x_77);
return x_212;
}
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_216 = lean_ctor_get(x_38, 0);
lean_inc(x_216);
lean_dec(x_38);
x_217 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_17, x_18, x_46);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = l_Lean_Elab_Command_getCurrMacroScope(x_17, x_18, x_219);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l_Lean_Elab_Command_getMainModule___rarg(x_18, x_222);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
lean_dec(x_223);
x_226 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7;
lean_inc(x_9);
x_227 = l_Lean_Name_str___override(x_9, x_226);
x_228 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9;
lean_inc(x_9);
x_229 = l_Lean_Name_str___override(x_9, x_228);
x_230 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11;
lean_inc(x_4);
x_231 = l_Lean_Name_str___override(x_4, x_230);
x_232 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13;
lean_inc(x_218);
x_233 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_233, 0, x_218);
lean_ctor_set(x_233, 1, x_232);
x_234 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_235 = l_Array_append___rarg(x_234, x_68);
lean_inc(x_6);
lean_inc(x_218);
x_236 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_236, 0, x_218);
lean_ctor_set(x_236, 1, x_6);
lean_ctor_set(x_236, 2, x_235);
x_237 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26;
lean_inc(x_218);
x_238 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_238, 0, x_218);
lean_ctor_set(x_238, 1, x_237);
x_239 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_240 = lean_array_push(x_239, x_233);
x_241 = lean_array_push(x_240, x_236);
x_242 = lean_array_push(x_241, x_238);
lean_inc(x_218);
x_243 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_243, 0, x_218);
lean_ctor_set(x_243, 1, x_231);
lean_ctor_set(x_243, 2, x_242);
x_244 = lean_array_push(x_56, x_243);
lean_inc(x_6);
lean_inc(x_218);
x_245 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_245, 0, x_218);
lean_ctor_set(x_245, 1, x_6);
lean_ctor_set(x_245, 2, x_244);
lean_inc(x_6);
lean_inc(x_218);
x_246 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_246, 0, x_218);
lean_ctor_set(x_246, 1, x_6);
lean_ctor_set(x_246, 2, x_234);
x_247 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
lean_inc(x_9);
x_248 = l_Lean_Name_str___override(x_9, x_247);
lean_inc(x_218);
x_249 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_249, 0, x_218);
lean_ctor_set(x_249, 1, x_247);
x_250 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30;
lean_inc(x_9);
x_251 = l_Lean_Name_str___override(x_9, x_250);
x_252 = lean_array_push(x_59, x_39);
lean_inc(x_246);
x_253 = lean_array_push(x_252, x_246);
lean_inc(x_218);
x_254 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_254, 0, x_218);
lean_ctor_set(x_254, 1, x_251);
lean_ctor_set(x_254, 2, x_253);
x_255 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33;
lean_inc(x_9);
x_256 = l_Lean_Name_str___override(x_9, x_255);
x_257 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35;
lean_inc(x_4);
x_258 = l_Lean_Name_str___override(x_4, x_257);
x_259 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37;
lean_inc(x_218);
x_260 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_260, 0, x_218);
lean_ctor_set(x_260, 1, x_259);
x_261 = l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1;
lean_inc(x_10);
x_262 = l_Lean_Name_str___override(x_10, x_261);
lean_inc(x_221);
lean_inc(x_262);
lean_inc(x_224);
x_263 = l_Lean_addMacroScope(x_224, x_262, x_221);
x_264 = lean_box(0);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_262);
lean_ctor_set(x_265, 1, x_264);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_264);
x_267 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__8;
lean_inc(x_218);
x_268 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_268, 0, x_218);
lean_ctor_set(x_268, 1, x_267);
lean_ctor_set(x_268, 2, x_263);
lean_ctor_set(x_268, 3, x_266);
x_269 = lean_array_push(x_59, x_260);
x_270 = lean_array_push(x_269, x_268);
lean_inc(x_218);
x_271 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_271, 0, x_218);
lean_ctor_set(x_271, 1, x_258);
lean_ctor_set(x_271, 2, x_270);
x_272 = lean_array_push(x_56, x_271);
lean_inc(x_6);
lean_inc(x_218);
x_273 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_273, 0, x_218);
lean_ctor_set(x_273, 1, x_6);
lean_ctor_set(x_273, 2, x_272);
lean_inc(x_246);
x_274 = lean_array_push(x_59, x_246);
x_275 = lean_array_push(x_274, x_273);
lean_inc(x_218);
x_276 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_276, 0, x_218);
lean_ctor_set(x_276, 1, x_256);
lean_ctor_set(x_276, 2, x_275);
x_277 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45;
x_278 = l_Lean_Name_str___override(x_9, x_277);
x_279 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47;
lean_inc(x_218);
x_280 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_280, 0, x_218);
lean_ctor_set(x_280, 1, x_279);
x_281 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7;
lean_inc(x_4);
x_282 = l_Lean_Name_str___override(x_4, x_281);
x_283 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__13;
x_284 = l_Lean_addMacroScope(x_224, x_283, x_221);
x_285 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_286 = l_Lean_Name_str___override(x_10, x_285);
x_287 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12;
x_288 = l_Lean_Name_str___override(x_286, x_287);
lean_inc(x_288);
x_289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_264);
x_290 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_290, 0, x_288);
x_291 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_291, 0, x_290);
lean_ctor_set(x_291, 1, x_264);
x_292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_292, 0, x_289);
lean_ctor_set(x_292, 1, x_291);
x_293 = l_Lean_Elab_Command_elabSyntax___lambda__4___closed__11;
lean_inc(x_218);
x_294 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_294, 0, x_218);
lean_ctor_set(x_294, 1, x_293);
lean_ctor_set(x_294, 2, x_284);
lean_ctor_set(x_294, 3, x_292);
lean_inc(x_29);
x_295 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_264, x_29);
x_296 = l_Nat_repr(x_11);
x_297 = l_Lean_Syntax_mkNumLit(x_296, x_54);
x_298 = l_Nat_repr(x_216);
x_299 = l_Lean_Syntax_mkNumLit(x_298, x_54);
x_300 = lean_array_push(x_59, x_294);
x_301 = lean_array_push(x_239, x_280);
x_302 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81;
x_303 = lean_array_push(x_302, x_249);
x_304 = lean_array_push(x_303, x_254);
x_305 = lean_array_push(x_304, x_276);
if (lean_obj_tag(x_12) == 0)
{
x_306 = x_234;
goto block_367;
}
else
{
lean_object* x_368; lean_object* x_369; 
x_368 = lean_ctor_get(x_12, 0);
lean_inc(x_368);
lean_dec(x_12);
x_369 = lean_array_push(x_56, x_368);
x_306 = x_369;
goto block_367;
}
block_367:
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_307 = l_Array_append___rarg(x_234, x_306);
lean_inc(x_6);
lean_inc(x_218);
x_308 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_308, 0, x_218);
lean_ctor_set(x_308, 1, x_6);
lean_ctor_set(x_308, 2, x_307);
x_309 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27;
x_310 = lean_array_push(x_309, x_308);
x_311 = lean_array_push(x_310, x_245);
lean_inc(x_246);
x_312 = lean_array_push(x_311, x_246);
lean_inc(x_246);
x_313 = lean_array_push(x_312, x_246);
lean_inc(x_246);
x_314 = lean_array_push(x_313, x_246);
lean_inc(x_246);
x_315 = lean_array_push(x_314, x_246);
lean_inc(x_218);
x_316 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_316, 0, x_218);
lean_ctor_set(x_316, 1, x_229);
lean_ctor_set(x_316, 2, x_315);
x_317 = lean_array_push(x_59, x_316);
if (lean_obj_tag(x_295) == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_4);
x_318 = l_Lean_quoteNameMk(x_29);
x_319 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
x_320 = lean_array_push(x_319, x_318);
x_321 = lean_array_push(x_320, x_297);
x_322 = lean_array_push(x_321, x_299);
x_323 = lean_array_push(x_322, x_37);
lean_inc(x_218);
x_324 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_324, 0, x_218);
lean_ctor_set(x_324, 1, x_6);
lean_ctor_set(x_324, 2, x_323);
x_325 = lean_array_push(x_300, x_324);
lean_inc(x_218);
x_326 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_326, 0, x_218);
lean_ctor_set(x_326, 1, x_282);
lean_ctor_set(x_326, 2, x_325);
x_327 = lean_array_push(x_301, x_326);
lean_inc(x_246);
x_328 = lean_array_push(x_327, x_246);
lean_inc(x_218);
x_329 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_329, 0, x_218);
lean_ctor_set(x_329, 1, x_278);
lean_ctor_set(x_329, 2, x_328);
x_330 = lean_array_push(x_305, x_329);
lean_inc(x_246);
x_331 = lean_array_push(x_330, x_246);
lean_inc(x_246);
x_332 = lean_array_push(x_331, x_246);
x_333 = lean_array_push(x_332, x_246);
lean_inc(x_218);
x_334 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_334, 0, x_218);
lean_ctor_set(x_334, 1, x_248);
lean_ctor_set(x_334, 2, x_333);
x_335 = lean_array_push(x_317, x_334);
x_336 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_336, 0, x_218);
lean_ctor_set(x_336, 1, x_227);
lean_ctor_set(x_336, 2, x_335);
x_337 = l_Lean_Elab_Command_elabSyntax___lambda__3(x_8, x_336, x_17, x_18, x_225);
return x_337;
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_29);
x_338 = lean_ctor_get(x_295, 0);
lean_inc(x_338);
lean_dec(x_295);
x_339 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24;
x_340 = l_Lean_Name_str___override(x_4, x_339);
x_341 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_342 = l_String_intercalate(x_341, x_338);
x_343 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_344 = lean_string_append(x_343, x_342);
lean_dec(x_342);
x_345 = l_Lean_Syntax_mkNameLit(x_344, x_54);
x_346 = lean_array_push(x_56, x_345);
x_347 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_347, 0, x_54);
lean_ctor_set(x_347, 1, x_340);
lean_ctor_set(x_347, 2, x_346);
x_348 = l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10;
x_349 = lean_array_push(x_348, x_347);
x_350 = lean_array_push(x_349, x_297);
x_351 = lean_array_push(x_350, x_299);
x_352 = lean_array_push(x_351, x_37);
lean_inc(x_218);
x_353 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_353, 0, x_218);
lean_ctor_set(x_353, 1, x_6);
lean_ctor_set(x_353, 2, x_352);
x_354 = lean_array_push(x_300, x_353);
lean_inc(x_218);
x_355 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_355, 0, x_218);
lean_ctor_set(x_355, 1, x_282);
lean_ctor_set(x_355, 2, x_354);
x_356 = lean_array_push(x_301, x_355);
lean_inc(x_246);
x_357 = lean_array_push(x_356, x_246);
lean_inc(x_218);
x_358 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_358, 0, x_218);
lean_ctor_set(x_358, 1, x_278);
lean_ctor_set(x_358, 2, x_357);
x_359 = lean_array_push(x_305, x_358);
lean_inc(x_246);
x_360 = lean_array_push(x_359, x_246);
lean_inc(x_246);
x_361 = lean_array_push(x_360, x_246);
x_362 = lean_array_push(x_361, x_246);
lean_inc(x_218);
x_363 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_363, 0, x_218);
lean_ctor_set(x_363, 1, x_248);
lean_ctor_set(x_363, 2, x_362);
x_364 = lean_array_push(x_317, x_363);
x_365 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_365, 0, x_218);
lean_ctor_set(x_365, 1, x_227);
lean_ctor_set(x_365, 2, x_364);
x_366 = l_Lean_Elab_Command_elabSyntax___lambda__3(x_8, x_365, x_17, x_18, x_225);
return x_366;
}
}
}
}
}
}
else
{
uint8_t x_376; 
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_376 = !lean_is_exclusive(x_34);
if (x_376 == 0)
{
return x_34;
}
else
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_377 = lean_ctor_get(x_34, 0);
x_378 = lean_ctor_get(x_34, 1);
lean_inc(x_378);
lean_inc(x_377);
lean_dec(x_34);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_377);
lean_ctor_set(x_379, 1, x_378);
return x_379;
}
}
}
}
else
{
uint8_t x_382; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_382 = !lean_is_exclusive(x_21);
if (x_382 == 0)
{
return x_21;
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_383 = lean_ctor_get(x_21, 0);
x_384 = lean_ctor_get(x_21, 1);
lean_inc(x_384);
lean_inc(x_383);
lean_dec(x_21);
x_385 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
return x_385;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_inc(x_3);
lean_inc(x_2);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Command_mkNameFromParserSyntax), 4, 2);
lean_closure_set(x_19, 0, x_2);
lean_closure_set(x_19, 1, x_3);
lean_inc(x_17);
lean_inc(x_16);
x_20 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__9(x_19, x_16, x_17, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Command_elabSyntax___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15, x_11, x_12, x_13, x_14, x_21, x_16, x_17, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 0);
lean_inc(x_28);
x_29 = l_Lean_Syntax_getId(x_28);
lean_dec(x_28);
x_30 = l_Lean_Elab_Command_elabSyntax___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15, x_11, x_12, x_13, x_14, x_29, x_16, x_17, x_18);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
lean_inc(x_2);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Term_addCategoryInfo), 9, 2);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_inc(x_17);
x_21 = l_Lean_Elab_Command_liftTermElabM___rarg(x_20, x_17, x_18, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_box(2);
x_24 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_25 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_3);
lean_inc(x_25);
x_26 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_isAtomLikeSyntax(x_25);
if (x_26 == 0)
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = l_Lean_Parser_leadPrec;
x_28 = l_Lean_Elab_Command_elabSyntax___lambda__5(x_4, x_2, x_25, x_5, x_6, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_27, x_17, x_18, x_22);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
lean_inc(x_29);
lean_dec(x_15);
x_30 = lean_alloc_closure((void*)(l_Lean_evalPrec), 3, 1);
lean_closure_set(x_30, 0, x_29);
lean_inc(x_18);
lean_inc(x_17);
x_31 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__4(x_30, x_17, x_18, x_22);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Command_elabSyntax___lambda__5(x_4, x_2, x_25, x_5, x_6, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_32, x_17, x_18, x_33);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
else
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Lean_Parser_maxPrec;
x_40 = l_Lean_Elab_Command_elabSyntax___lambda__5(x_4, x_2, x_25, x_5, x_6, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_39, x_17, x_18, x_22);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
lean_inc(x_41);
lean_dec(x_15);
x_42 = lean_alloc_closure((void*)(l_Lean_evalPrec), 3, 1);
lean_closure_set(x_42, 0, x_41);
lean_inc(x_18);
lean_inc(x_17);
x_43 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Command_elabSyntax___spec__4(x_42, x_17, x_18, x_22);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Elab_Command_elabSyntax___lambda__5(x_4, x_2, x_25, x_5, x_6, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_44, x_17, x_18, x_45);
return x_46;
}
else
{
uint8_t x_47; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_43);
if (x_47 == 0)
{
return x_43;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_43, 0);
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_43);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_21);
if (x_51 == 0)
{
return x_21;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_21, 0);
x_53 = lean_ctor_get(x_21, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_21);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabSyntax___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__7___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unknown category '", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__7___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
x_18 = lean_unsigned_to_nat(7u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
x_20 = l_Lean_Syntax_getArgs(x_19);
lean_dec(x_19);
x_21 = l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1;
x_22 = l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2(x_20, x_21);
lean_dec(x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_17);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(9u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
lean_dec(x_1);
x_27 = l_Lean_Syntax_getId(x_26);
x_28 = lean_erase_macro_scopes(x_27);
x_29 = lean_st_ref_get(x_16, x_17);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_28);
x_33 = l_Lean_Parser_isParserCategory(x_32, x_28);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_24);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_34, 0, x_28);
x_35 = l_Lean_Elab_Command_elabSyntax___lambda__7___closed__3;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__13(x_26, x_38, x_15, x_16, x_31);
lean_dec(x_16);
lean_dec(x_26);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
x_45 = l_Lean_Elab_Command_elabSyntax___lambda__6(x_26, x_28, x_24, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_44, x_15, x_16, x_31);
return x_45;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("namedPrio", 9);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_12);
x_17 = lean_unsigned_to_nat(6u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
x_19 = l_Lean_Syntax_isNone(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_unsigned_to_nat(1u);
lean_inc(x_18);
x_21 = l_Lean_Syntax_matchesNull(x_18, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_16);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Syntax_getArg(x_18, x_23);
lean_dec(x_18);
x_25 = l_Lean_Elab_Command_elabSyntax___lambda__8___closed__1;
lean_inc(x_6);
x_26 = l_Lean_Name_str___override(x_6, x_25);
lean_inc(x_24);
x_27 = l_Lean_Syntax_isOfKind(x_24, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_16);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_unsigned_to_nat(3u);
x_30 = l_Lean_Syntax_getArg(x_24, x_29);
lean_dec(x_24);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_box(0);
x_33 = l_Lean_Elab_Command_elabSyntax___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13, x_10, x_11, x_32, x_31, x_14, x_15, x_16);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_18);
x_34 = lean_box(0);
x_35 = lean_box(0);
x_36 = l_Lean_Elab_Command_elabSyntax___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13, x_10, x_11, x_35, x_34, x_14, x_15, x_16);
return x_36;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__9___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("namedName", 9);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_11);
x_16 = lean_unsigned_to_nat(5u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = l_Lean_Syntax_isNone(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(1u);
lean_inc(x_17);
x_20 = l_Lean_Syntax_matchesNull(x_17, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_15);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_17, x_22);
lean_dec(x_17);
x_24 = l_Lean_Elab_Command_elabSyntax___lambda__9___closed__1;
lean_inc(x_6);
x_25 = l_Lean_Name_str___override(x_6, x_24);
lean_inc(x_23);
x_26 = l_Lean_Syntax_isOfKind(x_23, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_15);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_unsigned_to_nat(3u);
x_29 = l_Lean_Syntax_getArg(x_23, x_28);
lean_dec(x_23);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_box(0);
x_32 = l_Lean_Elab_Command_elabSyntax___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_12, x_31, x_30, x_13, x_14, x_15);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_17);
x_33 = lean_box(0);
x_34 = lean_box(0);
x_35 = l_Lean_Elab_Command_elabSyntax___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_12, x_34, x_33, x_13, x_14, x_15);
return x_35;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___lambda__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("precedence", 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5;
lean_inc(x_2);
x_15 = l_Lean_Name_str___override(x_2, x_14);
x_16 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16;
lean_inc(x_15);
x_17 = l_Lean_Name_str___override(x_15, x_16);
lean_inc(x_13);
x_18 = l_Lean_Syntax_isOfKind(x_13, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_unsigned_to_nat(3u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = lean_unsigned_to_nat(4u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
x_24 = l_Lean_Syntax_isNone(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_unsigned_to_nat(1u);
lean_inc(x_23);
x_26 = l_Lean_Syntax_matchesNull(x_23, x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_11);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Syntax_getArg(x_23, x_28);
lean_dec(x_23);
x_30 = l_Lean_Elab_Command_elabSyntax___lambda__10___closed__1;
lean_inc(x_2);
x_31 = l_Lean_Name_str___override(x_2, x_30);
lean_inc(x_29);
x_32 = l_Lean_Syntax_isOfKind(x_29, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_29);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_11);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = l_Lean_Syntax_getArg(x_29, x_25);
lean_dec(x_29);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_box(0);
x_37 = l_Lean_Elab_Command_elabSyntax___lambda__9(x_1, x_15, x_2, x_13, x_3, x_4, x_5, x_6, x_8, x_21, x_36, x_35, x_9, x_10, x_11);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_23);
x_38 = lean_box(0);
x_39 = lean_box(0);
x_40 = l_Lean_Elab_Command_elabSyntax___lambda__9(x_1, x_15, x_2, x_13, x_3, x_4, x_5, x_6, x_8, x_21, x_39, x_38, x_9, x_10, x_11);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_6);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_inc(x_12);
x_14 = l_Lean_Syntax_matchesNull(x_12, x_11);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_12, x_16);
lean_dec(x_12);
x_18 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5;
lean_inc(x_2);
x_19 = l_Lean_Name_str___override(x_2, x_18);
x_20 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11;
x_21 = l_Lean_Name_str___override(x_19, x_20);
lean_inc(x_17);
x_22 = l_Lean_Syntax_isOfKind(x_17, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_10);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = l_Lean_Syntax_getArg(x_17, x_11);
lean_dec(x_17);
x_25 = l_Lean_Syntax_getArgs(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_box(0);
x_28 = l_Lean_Elab_Command_elabSyntax___lambda__10(x_1, x_2, x_3, x_4, x_5, x_7, x_27, x_26, x_8, x_9, x_10);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_12);
x_29 = lean_box(0);
x_30 = lean_box(0);
x_31 = l_Lean_Elab_Command_elabSyntax___lambda__10(x_1, x_2, x_3, x_4, x_5, x_7, x_30, x_29, x_8, x_9, x_10);
return x_31;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("syntax", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l_Lean_Elab_Command_elabSyntax___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("docComment", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntax___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l_Lean_Elab_Command_elabSyntax___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Command_elabSyntax___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_isNone(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(1u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_matchesNull(x_9, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_4);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_Lean_Syntax_getArg(x_9, x_8);
lean_dec(x_9);
x_15 = l_Lean_Elab_Command_elabSyntax___closed__4;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_14);
x_19 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_20 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_21 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_22 = lean_box(0);
lean_inc(x_1);
x_23 = l_Lean_Elab_Command_elabSyntax___lambda__11(x_1, x_19, x_1, x_20, x_21, x_22, x_18, x_2, x_3, x_4);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_9);
x_24 = lean_box(0);
x_25 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_26 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_27 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_28 = lean_box(0);
lean_inc(x_1);
x_29 = l_Lean_Elab_Command_elabSyntax___lambda__11(x_1, x_25, x_1, x_26, x_27, x_28, x_24, x_2, x_3, x_4);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Command_elabSyntax___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_sequenceMap_loop___at_Lean_Elab_Command_elabSyntax___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_elabSyntax___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__8(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__10(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Command_elabSyntax___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__12(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabSyntax___spec__13(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Command_elabSyntax___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__4___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
lean_object* x_20; 
x_20 = l_Lean_Elab_Command_elabSyntax___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__5___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_Lean_Elab_Command_elabSyntax___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__6___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
lean_object* x_20; 
x_20 = l_Lean_Elab_Command_elabSyntax___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntax___lambda__7___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
lean_object* x_18; 
x_18 = l_Lean_Elab_Command_elabSyntax___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_18;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabSyntax", 10);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5;
x_2 = l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabSyntax), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8;
x_3 = l_Lean_Elab_Command_elabSyntax___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(343u);
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(376u);
x_2 = lean_unsigned_to_nat(43u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__1;
x_2 = lean_unsigned_to_nat(31u);
x_3 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__2;
x_4 = lean_unsigned_to_nat(43u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(343u);
x_2 = lean_unsigned_to_nat(35u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(343u);
x_2 = lean_unsigned_to_nat(45u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__4;
x_2 = lean_unsigned_to_nat(35u);
x_3 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__5;
x_4 = lean_unsigned_to_nat(45u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_box(2);
x_11 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_12 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_1);
x_13 = lean_box(0);
x_14 = l_Lean_Elab_Term_toParserDescr(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ident", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ParserDescr.nodeWithAntiquot", 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("nodeWithAntiquot", 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13;
x_2 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(2u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__2;
lean_inc(x_12);
x_14 = l_Lean_Syntax_isOfKind(x_12, x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unsigned_to_nat(4u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = l_Lean_Syntax_getArgs(x_17);
lean_dec(x_17);
x_19 = l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1;
x_20 = l_Array_sequenceMap___at_Lean_Elab_Command_elabSyntax___spec__2(x_18, x_19);
lean_dec(x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_10);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__1___boxed), 9, 1);
lean_closure_set(x_23, 0, x_22);
lean_inc(x_8);
x_24 = l_Lean_Elab_Command_runTermElabM___rarg(x_23, x_8, x_9, x_10);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Command_getScope___rarg(x_9, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_29, 2);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Syntax_getId(x_12);
lean_inc(x_32);
x_33 = l_Lean_Name_append(x_31, x_32);
lean_dec(x_31);
x_34 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_8, x_9, x_30);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Command_getCurrMacroScope(x_8, x_9, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Elab_Command_getMainModule___rarg(x_9, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7;
lean_inc(x_2);
x_44 = l_Lean_Name_str___override(x_2, x_43);
x_45 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9;
lean_inc(x_2);
x_46 = l_Lean_Name_str___override(x_2, x_45);
x_47 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_48 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_35);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_35);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 2, x_48);
x_50 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28;
lean_inc(x_2);
x_51 = l_Lean_Name_str___override(x_2, x_50);
lean_inc(x_35);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_35);
lean_ctor_set(x_52, 1, x_50);
x_53 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30;
lean_inc(x_2);
x_54 = l_Lean_Name_str___override(x_2, x_53);
x_55 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_56 = lean_array_push(x_55, x_12);
lean_inc(x_49);
x_57 = lean_array_push(x_56, x_49);
lean_inc(x_35);
x_58 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_58, 0, x_35);
lean_ctor_set(x_58, 1, x_54);
lean_ctor_set(x_58, 2, x_57);
x_59 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33;
lean_inc(x_2);
x_60 = l_Lean_Name_str___override(x_2, x_59);
x_61 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5;
x_62 = l_Lean_Name_str___override(x_3, x_61);
x_63 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35;
lean_inc(x_62);
x_64 = l_Lean_Name_str___override(x_62, x_63);
x_65 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37;
lean_inc(x_35);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_35);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12;
x_68 = l_Lean_Name_str___override(x_4, x_67);
lean_inc(x_38);
lean_inc(x_68);
lean_inc(x_41);
x_69 = l_Lean_addMacroScope(x_41, x_68, x_38);
x_70 = lean_box(0);
lean_inc(x_68);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
lean_inc(x_68);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_68);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_70);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40;
lean_inc(x_35);
x_76 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_76, 0, x_35);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_69);
lean_ctor_set(x_76, 3, x_74);
x_77 = lean_array_push(x_55, x_66);
x_78 = lean_array_push(x_77, x_76);
lean_inc(x_35);
x_79 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_79, 0, x_35);
lean_ctor_set(x_79, 1, x_64);
lean_ctor_set(x_79, 2, x_78);
x_80 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29;
x_81 = lean_array_push(x_80, x_79);
lean_inc(x_35);
x_82 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_82, 0, x_35);
lean_ctor_set(x_82, 1, x_47);
lean_ctor_set(x_82, 2, x_81);
lean_inc(x_49);
x_83 = lean_array_push(x_55, x_49);
x_84 = lean_array_push(x_83, x_82);
lean_inc(x_35);
x_85 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_85, 0, x_35);
lean_ctor_set(x_85, 1, x_60);
lean_ctor_set(x_85, 2, x_84);
x_86 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45;
x_87 = l_Lean_Name_str___override(x_2, x_86);
x_88 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47;
lean_inc(x_35);
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_35);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7;
lean_inc(x_62);
x_91 = l_Lean_Name_str___override(x_62, x_90);
x_92 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__7;
x_93 = l_Lean_addMacroScope(x_41, x_92, x_38);
x_94 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6;
x_95 = l_Lean_Name_str___override(x_68, x_94);
lean_inc(x_95);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_70);
x_97 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_97, 0, x_95);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_70);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__5;
lean_inc(x_35);
x_101 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_101, 0, x_35);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_101, 2, x_93);
lean_ctor_set(x_101, 3, x_99);
x_102 = 1;
x_103 = l_Lean_Name_toString(x_32, x_102);
x_104 = lean_box(2);
x_105 = l_Lean_Syntax_mkStrLit(x_103, x_104);
lean_dec(x_103);
lean_inc(x_33);
x_106 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_70, x_33);
x_107 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30;
x_108 = lean_array_push(x_107, x_105);
x_109 = lean_array_push(x_55, x_101);
x_110 = lean_array_push(x_107, x_89);
x_111 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81;
x_112 = lean_array_push(x_111, x_52);
x_113 = lean_array_push(x_112, x_58);
x_114 = lean_array_push(x_113, x_85);
if (lean_obj_tag(x_7) == 0)
{
x_115 = x_48;
goto block_172;
}
else
{
lean_object* x_173; lean_object* x_174; 
x_173 = lean_ctor_get(x_7, 0);
lean_inc(x_173);
lean_dec(x_7);
x_174 = lean_array_push(x_80, x_173);
x_115 = x_174;
goto block_172;
}
block_172:
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_116 = l_Array_append___rarg(x_48, x_115);
lean_inc(x_35);
x_117 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_117, 0, x_35);
lean_ctor_set(x_117, 1, x_47);
lean_ctor_set(x_117, 2, x_116);
x_118 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27;
x_119 = lean_array_push(x_118, x_117);
lean_inc(x_49);
x_120 = lean_array_push(x_119, x_49);
lean_inc(x_49);
x_121 = lean_array_push(x_120, x_49);
lean_inc(x_49);
x_122 = lean_array_push(x_121, x_49);
lean_inc(x_49);
x_123 = lean_array_push(x_122, x_49);
lean_inc(x_49);
x_124 = lean_array_push(x_123, x_49);
lean_inc(x_35);
x_125 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_125, 0, x_35);
lean_ctor_set(x_125, 1, x_46);
lean_ctor_set(x_125, 2, x_124);
x_126 = lean_array_push(x_55, x_125);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_62);
x_127 = l_Lean_quoteNameMk(x_33);
x_128 = lean_array_push(x_108, x_127);
x_129 = lean_array_push(x_128, x_27);
lean_inc(x_35);
x_130 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_130, 0, x_35);
lean_ctor_set(x_130, 1, x_47);
lean_ctor_set(x_130, 2, x_129);
x_131 = lean_array_push(x_109, x_130);
lean_inc(x_35);
x_132 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_132, 0, x_35);
lean_ctor_set(x_132, 1, x_91);
lean_ctor_set(x_132, 2, x_131);
x_133 = lean_array_push(x_110, x_132);
lean_inc(x_49);
x_134 = lean_array_push(x_133, x_49);
lean_inc(x_35);
x_135 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_135, 0, x_35);
lean_ctor_set(x_135, 1, x_87);
lean_ctor_set(x_135, 2, x_134);
x_136 = lean_array_push(x_114, x_135);
lean_inc(x_49);
x_137 = lean_array_push(x_136, x_49);
lean_inc(x_49);
x_138 = lean_array_push(x_137, x_49);
x_139 = lean_array_push(x_138, x_49);
lean_inc(x_35);
x_140 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_140, 0, x_35);
lean_ctor_set(x_140, 1, x_51);
lean_ctor_set(x_140, 2, x_139);
x_141 = lean_array_push(x_126, x_140);
x_142 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_142, 0, x_35);
lean_ctor_set(x_142, 1, x_44);
lean_ctor_set(x_142, 2, x_141);
lean_inc(x_142);
x_143 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand), 4, 1);
lean_closure_set(x_143, 0, x_142);
x_144 = l_Lean_Elab_Command_withMacroExpansion___rarg(x_5, x_142, x_143, x_8, x_9, x_42);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_33);
x_145 = lean_ctor_get(x_106, 0);
lean_inc(x_145);
lean_dec(x_106);
x_146 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24;
x_147 = l_Lean_Name_str___override(x_62, x_146);
x_148 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18;
x_149 = l_String_intercalate(x_148, x_145);
x_150 = l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19;
x_151 = lean_string_append(x_150, x_149);
lean_dec(x_149);
x_152 = l_Lean_Syntax_mkNameLit(x_151, x_104);
x_153 = lean_array_push(x_80, x_152);
x_154 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_154, 0, x_104);
lean_ctor_set(x_154, 1, x_147);
lean_ctor_set(x_154, 2, x_153);
x_155 = lean_array_push(x_108, x_154);
x_156 = lean_array_push(x_155, x_27);
lean_inc(x_35);
x_157 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_157, 0, x_35);
lean_ctor_set(x_157, 1, x_47);
lean_ctor_set(x_157, 2, x_156);
x_158 = lean_array_push(x_109, x_157);
lean_inc(x_35);
x_159 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_159, 0, x_35);
lean_ctor_set(x_159, 1, x_91);
lean_ctor_set(x_159, 2, x_158);
x_160 = lean_array_push(x_110, x_159);
lean_inc(x_49);
x_161 = lean_array_push(x_160, x_49);
lean_inc(x_35);
x_162 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_162, 0, x_35);
lean_ctor_set(x_162, 1, x_87);
lean_ctor_set(x_162, 2, x_161);
x_163 = lean_array_push(x_114, x_162);
lean_inc(x_49);
x_164 = lean_array_push(x_163, x_49);
lean_inc(x_49);
x_165 = lean_array_push(x_164, x_49);
x_166 = lean_array_push(x_165, x_49);
lean_inc(x_35);
x_167 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_167, 0, x_35);
lean_ctor_set(x_167, 1, x_51);
lean_ctor_set(x_167, 2, x_166);
x_168 = lean_array_push(x_126, x_167);
x_169 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_169, 0, x_35);
lean_ctor_set(x_169, 1, x_44);
lean_ctor_set(x_169, 2, x_168);
lean_inc(x_169);
x_170 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand), 4, 1);
lean_closure_set(x_170, 0, x_169);
x_171 = l_Lean_Elab_Command_withMacroExpansion___rarg(x_5, x_169, x_170, x_8, x_9, x_42);
return x_171;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_175 = !lean_is_exclusive(x_24);
if (x_175 == 0)
{
return x_24;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_24, 0);
x_177 = lean_ctor_get(x_24, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_24);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("syntaxAbbrev", 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_2 = l_Lean_Elab_Command_elabSyntaxAbbrev___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_isNone(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(1u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_matchesNull(x_9, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_4);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_Lean_Syntax_getArg(x_9, x_8);
lean_dec(x_9);
x_15 = l_Lean_Elab_Command_elabSyntax___closed__4;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabSyntax___spec__1___rarg(x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_14);
x_19 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_20 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_21 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_22 = lean_box(0);
lean_inc(x_1);
x_23 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2(x_1, x_19, x_20, x_21, x_1, x_22, x_18, x_2, x_3, x_4);
lean_dec(x_1);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_9);
x_24 = lean_box(0);
x_25 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6;
x_26 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4;
x_27 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2;
x_28 = lean_box(0);
lean_inc(x_1);
x_29 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2(x_1, x_25, x_26, x_27, x_1, x_28, x_24, x_2, x_3, x_4);
lean_dec(x_1);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabSyntaxAbbrev", 16);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5;
x_2 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabSyntaxAbbrev), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8;
x_3 = l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(378u);
x_2 = lean_unsigned_to_nat(37u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(384u);
x_2 = lean_unsigned_to_nat(49u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__1;
x_2 = lean_unsigned_to_nat(37u);
x_3 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__2;
x_4 = lean_unsigned_to_nat(49u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(378u);
x_2 = lean_unsigned_to_nat(41u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(378u);
x_2 = lean_unsigned_to_nat(57u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__4;
x_2 = lean_unsigned_to_nat(41u);
x_3 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__5;
x_4 = lean_unsigned_to_nat(57u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkRuleKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("antiquot", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkRuleKind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_checkRuleKind___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_checkRuleKind(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_name_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_Elab_Command_checkRuleKind___closed__2;
x_5 = l_Lean_Name_append(x_2, x_4);
x_6 = lean_name_eq(x_1, x_5);
lean_dec(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_checkRuleKind___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Command_checkRuleKind(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Syntax_getQuotContent(x_1);
x_7 = l_Lean_Syntax_getKind(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_Command_inferMacroRulesAltKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("matchAlt", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_inferMacroRulesAltKind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6;
x_2 = l_Lean_Elab_Command_inferMacroRulesAltKind___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Command_inferMacroRulesAltKind___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
lean_inc(x_9);
x_10 = l_Lean_Syntax_matchesNull(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_11 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___rarg(x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_9, x_12);
lean_dec(x_9);
lean_inc(x_13);
x_14 = l_Lean_Syntax_matchesNull(x_13, x_8);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_2);
x_15 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___rarg(x_4);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Syntax_getArg(x_13, x_12);
lean_dec(x_13);
x_17 = l_Lean_Syntax_isQuot(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_18 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2___rarg(x_4);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_box(0);
x_24 = l_Lean_Elab_Command_inferMacroRulesAltKind___lambda__1(x_16, x_23, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_24;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_inferMacroRulesAltKind___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_inferMacroRulesAltKind___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_inferMacroRulesAltKind___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_eq(x_3, x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_10);
x_11 = l_Lean_Elab_Command_inferMacroRulesAltKind(x_10, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Command_checkRuleKind(x_12, x_1);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_array_push(x_5, x_10);
x_16 = 1;
x_17 = lean_usize_add(x_3, x_16);
x_3 = x_17;
x_5 = x_15;
x_8 = x_13;
goto _start;
}
else
{
size_t x_19; size_t x_20; 
lean_dec(x_10);
x_19 = 1;
x_20 = lean_usize_add(x_3, x_19);
x_3 = x_20;
x_8 = x_13;
goto _start;
}
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_7);
lean_dec(x_6);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_8);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_eq(x_3, x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_10);
x_11 = l_Lean_Elab_Command_inferMacroRulesAltKind(x_10, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Command_checkRuleKind(x_12, x_1);
lean_dec(x_12);
if (x_14 == 0)
{
size_t x_15; size_t x_16; 
lean_dec(x_10);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_3 = x_16;
x_8 = x_13;
goto _start;
}
else
{
lean_object* x_18; size_t x_19; size_t x_20; 
x_18 = lean_array_push(x_5, x_10);
x_19 = 1;
x_20 = lean_usize_add(x_3, x_19);
x_3 = x_20;
x_5 = x_18;
x_8 = x_13;
goto _start;
}
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_7);
lean_dec(x_6);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_8);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4(x_2, x_3, x_4, x_8);
lean_dec(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
x_19 = lean_ctor_get(x_3, 7);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_20 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_9);
lean_ctor_set(x_20, 7, x_19);
x_21 = l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4(x_2, x_20, x_4, x_8);
lean_dec(x_4);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid ", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" alternative, multiple interpretations for pattern (solution: specify node kind using `", 87);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" (kind := ...) ...`)", 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Elab_Term_toParserDescr_process___closed__2;
x_12 = lean_name_eq(x_6, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
lean_dec(x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_1);
if (x_14 == 0)
{
lean_object* x_73; 
x_73 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_15 = x_73;
x_16 = x_10;
goto block_72;
}
else
{
uint8_t x_74; 
x_74 = lean_nat_dec_le(x_1, x_1);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_15 = x_75;
x_16 = x_10;
goto block_72;
}
else
{
size_t x_76; size_t x_77; lean_object* x_78; lean_object* x_79; 
x_76 = 0;
x_77 = lean_usize_of_nat(x_1);
x_78 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_9);
lean_inc(x_8);
x_79 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__2(x_6, x_3, x_76, x_77, x_78, x_8, x_9, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_15 = x_80;
x_16 = x_81;
goto block_72;
}
else
{
uint8_t x_82; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_79);
if (x_82 == 0)
{
return x_79;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_79, 0);
x_84 = lean_ctor_get(x_79, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_79);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
}
block_72:
{
lean_object* x_17; lean_object* x_18; 
if (x_14 == 0)
{
lean_object* x_59; 
lean_dec(x_3);
lean_dec(x_1);
x_59 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_17 = x_59;
x_18 = x_16;
goto block_58;
}
else
{
uint8_t x_60; 
x_60 = lean_nat_dec_le(x_1, x_1);
if (x_60 == 0)
{
lean_object* x_61; 
lean_dec(x_3);
lean_dec(x_1);
x_61 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
x_17 = x_61;
x_18 = x_16;
goto block_58;
}
else
{
size_t x_62; size_t x_63; lean_object* x_64; lean_object* x_65; 
x_62 = 0;
x_63 = lean_usize_of_nat(x_1);
lean_dec(x_1);
x_64 = l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1;
lean_inc(x_9);
lean_inc(x_8);
x_65 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__1(x_6, x_3, x_62, x_63, x_64, x_8, x_9, x_16);
lean_dec(x_3);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_17 = x_66;
x_18 = x_67;
goto block_58;
}
else
{
uint8_t x_68; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_65);
if (x_68 == 0)
{
return x_65;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_65, 0);
x_70 = lean_ctor_get(x_65, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_65);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
}
block_58:
{
uint8_t x_19; 
x_19 = l_Array_isEmpty___rarg(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_6);
lean_inc(x_2);
lean_inc(x_9);
lean_inc(x_8);
x_21 = lean_apply_5(x_2, x_20, x_15, x_8, x_9, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
x_25 = lean_apply_5(x_2, x_24, x_17, x_8, x_9, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___spec__1(x_8, x_9, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Command_getCurrMacroScope(x_8, x_9, x_30);
lean_dec(x_8);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Elab_Command_getMainModule___rarg(x_9, x_32);
lean_dec(x_9);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
x_36 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_37 = lean_array_push(x_36, x_22);
x_38 = lean_array_push(x_37, x_26);
x_39 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_29);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
lean_ctor_set(x_33, 0, x_40);
return x_33;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_33, 1);
lean_inc(x_41);
lean_dec(x_33);
x_42 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31;
x_43 = lean_array_push(x_42, x_22);
x_44 = lean_array_push(x_43, x_26);
x_45 = l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23;
x_46 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_46, 0, x_29);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_41);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
x_48 = !lean_is_exclusive(x_25);
if (x_48 == 0)
{
return x_25;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_25, 0);
x_50 = lean_ctor_get(x_25, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_25);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_52 = !lean_is_exclusive(x_21);
if (x_52 == 0)
{
return x_21;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_21, 0);
x_54 = lean_ctor_get(x_21, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_21);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_17);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_6);
x_57 = lean_apply_5(x_2, x_56, x_15, x_8, x_9, x_18);
return x_57;
}
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = l_Lean_stringToMessageData(x_4);
lean_dec(x_4);
x_87 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__2;
lean_inc(x_86);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
x_89 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__4;
x_90 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_86);
x_92 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__6;
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Lean_throwErrorAt___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__3(x_5, x_93, x_8, x_9, x_10);
return x_94;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_28; uint8_t x_29; 
x_7 = lean_array_get_size(x_1);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_28, x_7);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12;
x_31 = l_panic___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__5(x_30);
x_8 = x_31;
goto block_27;
}
else
{
lean_object* x_32; 
x_32 = lean_array_fget(x_1, x_28);
x_8 = x_32;
goto block_27;
}
block_27:
{
lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_8);
x_9 = l_Lean_Elab_Command_inferMacroRulesAltKind(x_8, x_4, x_5, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Name_isStr(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1(x_7, x_3, x_1, x_2, x_8, x_10, x_13, x_4, x_5, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_inc(x_10);
x_15 = l_Lean_Name_getString_x21(x_10);
x_16 = l_Lean_Elab_Command_checkRuleKind___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1(x_7, x_3, x_1, x_2, x_8, x_10, x_18, x_4, x_5, x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = l_Lean_Name_getPrefix(x_10);
lean_dec(x_10);
x_21 = lean_box(0);
x_22 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1(x_7, x_3, x_1, x_2, x_8, x_20, x_21, x_4, x_5, x_11);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_9);
if (x_23 == 0)
{
return x_9;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_9, 0);
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_9);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__1(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__2(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_expandNoKindMacroRulesAux___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_strLitToPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_isStrLit_x3f(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_mkAtomFrom(x_1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_strLitToPattern___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_strLitToPattern(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1;
x_2 = l_Lean_Elab_Command_elabSyntax___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830____closed__1;
x_3 = 0;
x_4 = l_Lean_registerTraceClass(x_2, x_3, x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Parser_Syntax(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Util(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Syntax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__1);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__2);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__3);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__4);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__5);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__6);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__7);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__8);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__9);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__10 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__10();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__10);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__11);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__12);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__13);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__14);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__15);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__16);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__17);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__18 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__18();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__18);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__19 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__19();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__19);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__20);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__21);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__22 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__22();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__22);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__23);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__24);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__25);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__26 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__26();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__26);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__27);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__28);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__29);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__30);
l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31 = _init_l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31();
lean_mark_persistent(l_Subarray_forInUnsafe_loop___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__1___closed__31);
l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2___closed__1 = _init_l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2___closed__1();
lean_mark_persistent(l_panic___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__2___closed__1);
l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__1);
l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2 = _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___spec__3___rarg___closed__2);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__1 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__1);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__2 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__2);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__3 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__3);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__4 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__4);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__5 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__5);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__6 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__6);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__7 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__7);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__8 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__8);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__9 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__9);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__10 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__10);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__11 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__11);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Term_mkParserSeq___closed__12);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__1 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__1);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__2 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__2);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__3);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__4 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__4);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__5);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__6);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__7);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__8);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__9 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__9);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__10 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__10);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__11 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__11);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__12);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__13 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__13);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__14);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__15 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__15);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__16 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__16);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__17 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__17();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__17);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__18);
l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19 = _init_l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___lambda__1___closed__19);
l_Lean_Elab_Term_ensureUnaryOutput___closed__1 = _init_l_Lean_Elab_Term_ensureUnaryOutput___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_ensureUnaryOutput___closed__1);
l_Lean_Elab_Term_addCategoryInfo___closed__1 = _init_l_Lean_Elab_Term_addCategoryInfo___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_addCategoryInfo___closed__1);
l_Lean_Elab_Term_addCategoryInfo___closed__2 = _init_l_Lean_Elab_Term_addCategoryInfo___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_addCategoryInfo___closed__2);
l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___closed__1 = _init_l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___closed__1();
lean_mark_persistent(l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_checkLeftRec___spec__2___closed__1);
l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1 = _init_l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Elab_Term_checkLeftRec___spec__3___closed__1);
l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__1 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__1();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__1);
l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_checkLeftRec___spec__7___closed__2);
l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__1 = _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__1);
l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__2 = _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__2);
l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__3 = _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__3);
l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__4 = _init_l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___lambda__2___closed__4);
l_Lean_Elab_Term_checkLeftRec___closed__1 = _init_l_Lean_Elab_Term_checkLeftRec___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___closed__1);
l_Lean_Elab_Term_checkLeftRec___closed__2 = _init_l_Lean_Elab_Term_checkLeftRec___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___closed__2);
l_Lean_Elab_Term_checkLeftRec___closed__3 = _init_l_Lean_Elab_Term_checkLeftRec___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___closed__3);
l_Lean_Elab_Term_checkLeftRec___closed__4 = _init_l_Lean_Elab_Term_checkLeftRec___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_checkLeftRec___closed__4);
l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1 = _init_l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1();
lean_mark_persistent(l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__1);
l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2 = _init_l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2();
lean_mark_persistent(l_List_filterMap___at_Lean_Elab_Term_resolveParserName___spec__1___closed__2);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__1);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__2);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__3);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__4);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__5);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__6);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__7);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__8);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__9);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__10);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__11 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__11);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__12);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__13);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__14);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__15);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__16 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__16);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__17 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__17();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__17);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__18 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__18();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__18);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__19);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__20);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__21);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__22 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__22();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__22);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__23);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__24);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__25 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__25();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__25);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__26);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__27);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__28 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__28();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__28);
l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29 = _init_l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNonReserved___closed__29);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__1);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__2);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__3);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__4);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__5);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__6);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__7);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__8);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__9);
l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___lambda__1___closed__10);
l_Lean_Elab_Term_toParserDescr_processAtom___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___closed__1);
l_Lean_Elab_Term_toParserDescr_processAtom___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processAtom___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAtom___closed__2);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__1);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__2);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__3);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__4);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__5);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__6);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__7);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__8);
l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___lambda__1___closed__9);
l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__1);
l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processParserCategory___closed__2);
l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__1);
l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_ensureNoPrec___closed__2);
l_Lean_Elab_Term_toParserDescr_process___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__1);
l_Lean_Elab_Term_toParserDescr_process___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__2);
l_Lean_Elab_Term_toParserDescr_process___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__3);
l_Lean_Elab_Term_toParserDescr_process___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__4);
l_Lean_Elab_Term_toParserDescr_process___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__5);
l_Lean_Elab_Term_toParserDescr_process___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__6);
l_Lean_Elab_Term_toParserDescr_process___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__7);
l_Lean_Elab_Term_toParserDescr_process___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__8);
l_Lean_Elab_Term_toParserDescr_process___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__9);
l_Lean_Elab_Term_toParserDescr_process___closed__10 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__10);
l_Lean_Elab_Term_toParserDescr_process___closed__11 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__11);
l_Lean_Elab_Term_toParserDescr_process___closed__12 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__12);
l_Lean_Elab_Term_toParserDescr_process___closed__13 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__13);
l_Lean_Elab_Term_toParserDescr_process___closed__14 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__14);
l_Lean_Elab_Term_toParserDescr_process___closed__15 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__15);
l_Lean_Elab_Term_toParserDescr_process___closed__16 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__16);
l_Lean_Elab_Term_toParserDescr_process___closed__17 = _init_l_Lean_Elab_Term_toParserDescr_process___closed__17();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_process___closed__17);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__1);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__2);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__3);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__4);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__5);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__6);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__7);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__8);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__9);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__10);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__11);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__12 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__12);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__13 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__13);
l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy1___lambda__1___closed__14);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__1);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__2);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__3);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__4);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__5);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__6);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__7);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__8);
l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processSepBy___lambda__1___closed__9);
l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__1 = _init_l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__1();
lean_mark_persistent(l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__1);
l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__2 = _init_l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__2();
lean_mark_persistent(l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__2);
l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__3 = _init_l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__3();
lean_mark_persistent(l_panic___at_Lean_Elab_Term_toParserDescr_processAlias___spec__2___closed__3);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__1);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__2);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__3);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__4);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__5);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__6);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__7);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__8);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__9);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__10 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__10);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__11 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__11);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__12 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__12);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__13 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__13);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__14 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__14);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__15 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__15);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__16 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__16);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__17 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__17();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__17);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__18 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__18();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__18);
l_Lean_Elab_Term_toParserDescr_processAlias___closed__19 = _init_l_Lean_Elab_Term_toParserDescr_processAlias___closed__19();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processAlias___closed__19);
l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__1 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__1();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__1);
l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__2);
l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__3 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__3();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__3);
l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__8___closed__4);
l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__1 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__1);
l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__2 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__2();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__2);
l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__3 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__3();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__3___closed__3);
l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1 = _init_l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1();
lean_mark_persistent(l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__1);
l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__2 = _init_l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__2();
lean_mark_persistent(l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__2);
l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__3 = _init_l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__3();
lean_mark_persistent(l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_toParserDescr_processNullaryOrCat___spec__13___closed__3);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__1 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__1);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__2 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__2);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__3);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__4 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__4);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__5);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__6);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__7);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__8);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__9 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__9);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__10 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__10);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__11 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__11);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__12);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__13 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__13);
l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14 = _init_l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_toParserDescr_processNullaryOrCat___closed__14);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__1 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__1);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__2 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__2);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__3 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__3);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__4 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__4);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__5);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__6);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__7);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__8);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__9);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__10);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__11);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__12 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__12);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__13);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__14);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__15 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__15();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__15);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__16);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__17 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__17();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__17);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__18);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__19 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__19();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__19);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__20);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__21 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__21();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__21);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__22);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__23 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__23();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__23);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__24 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__24();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__24);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__25 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__25();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__25);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__26);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__27);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__28);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__29);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__30);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__31);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__32);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__33);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__34);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__35);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__36);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__37);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__38);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__39 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__39();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__39);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__40);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__41 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__41();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__41);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__42 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__42();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__42);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__43 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__43();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__43);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__44 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__44();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__44);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__45);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__46);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__47);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__48);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__49 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__49();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__49);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__50 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__50();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__50);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__51);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__52);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__53 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__53();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__53);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__54 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__54();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__54);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__55 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__55();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__55);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__56 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__56();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__56);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__57 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__57();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__57);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__58 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__58();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__58);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__59 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__59();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__59);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__60 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__60();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__60);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__61 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__61();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__61);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__62);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__63 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__63();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__63);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__64 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__64();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__64);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__65 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__65();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__65);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__66 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__66();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__66);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__67);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__68 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__68();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__68);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__69 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__69();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__69);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__70 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__70();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__70);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__71 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__71();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__71);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__72 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__72();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__72);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__73 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__73();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__73);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__74);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__75 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__75();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__75);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__76 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__76();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__76);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__77 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__77();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__77);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__78 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__78();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__78);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__79 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__79();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__79);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__80 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__80();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__80);
l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81 = _init_l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81();
lean_mark_persistent(l___private_Lean_Elab_Syntax_0__Lean_Elab_Command_declareSyntaxCatQuotParser___closed__81);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__10 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__10);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__11 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__11);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__12 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__12);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__13 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__13);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__14 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__14);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__15 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__15);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__16 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__16();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__16);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__17 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__17();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__17);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__18 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__18();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__18);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__19 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__19();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__19);
l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__20 = _init_l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__20();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclareSyntaxCat___closed__20);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__1);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__2);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__3);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__4);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__5);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__6);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__7);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__8);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat___closed__9);
res = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__1);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__2);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__3);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__4);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__5);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__6);
l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Command_elabDeclareSyntaxCat_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_mkNameFromParserSyntax_visit___closed__1 = _init_l_Lean_Elab_Command_mkNameFromParserSyntax_visit___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_mkNameFromParserSyntax_visit___closed__1);
l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__1 = _init_l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__1();
lean_mark_persistent(l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__1);
l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2 = _init_l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2();
lean_mark_persistent(l_Lean_Elab_checkSyntaxNodeKind___at_Lean_Elab_Command_resolveSyntaxKind___spec__2___closed__2);
l_Lean_Elab_Command_resolveSyntaxKind___closed__1 = _init_l_Lean_Elab_Command_resolveSyntaxKind___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_resolveSyntaxKind___closed__1);
l_Lean_Elab_Command_resolveSyntaxKind___closed__2 = _init_l_Lean_Elab_Command_resolveSyntaxKind___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_resolveSyntaxKind___closed__2);
l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__3___closed__1);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__1);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__2);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__3 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__3);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__4 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__4);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__5 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__5);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__6);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__7 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__7);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__8 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__8);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__9);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__10 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__10);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__11 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__11);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__12);
l_Lean_Elab_Command_elabSyntax___lambda__4___closed__13 = _init_l_Lean_Elab_Command_elabSyntax___lambda__4___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__4___closed__13);
l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__7___closed__1);
l_Lean_Elab_Command_elabSyntax___lambda__7___closed__2 = _init_l_Lean_Elab_Command_elabSyntax___lambda__7___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__7___closed__2);
l_Lean_Elab_Command_elabSyntax___lambda__7___closed__3 = _init_l_Lean_Elab_Command_elabSyntax___lambda__7___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__7___closed__3);
l_Lean_Elab_Command_elabSyntax___lambda__8___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___lambda__8___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__8___closed__1);
l_Lean_Elab_Command_elabSyntax___lambda__9___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___lambda__9___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__9___closed__1);
l_Lean_Elab_Command_elabSyntax___lambda__10___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___lambda__10___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___lambda__10___closed__1);
l_Lean_Elab_Command_elabSyntax___closed__1 = _init_l_Lean_Elab_Command_elabSyntax___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___closed__1);
l_Lean_Elab_Command_elabSyntax___closed__2 = _init_l_Lean_Elab_Command_elabSyntax___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___closed__2);
l_Lean_Elab_Command_elabSyntax___closed__3 = _init_l_Lean_Elab_Command_elabSyntax___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___closed__3);
l_Lean_Elab_Command_elabSyntax___closed__4 = _init_l_Lean_Elab_Command_elabSyntax___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntax___closed__4);
l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__1);
l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__2);
l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax___closed__3);
res = l___regBuiltin_Lean_Elab_Command_elabSyntax(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__1);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__2);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__3);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__4);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__5);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__6);
l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Command_elabSyntax_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__1 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__1);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__2 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__2);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__3);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__4 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__4);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__5 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__5);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__6);
l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__7 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___lambda__2___closed__7);
l_Lean_Elab_Command_elabSyntaxAbbrev___closed__1 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___closed__1);
l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2 = _init_l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabSyntaxAbbrev___closed__2);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__1);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__2);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev___closed__3);
res = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__1);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__2);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__3);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__4);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__5);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__6);
l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Command_elabSyntaxAbbrev_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_checkRuleKind___closed__1 = _init_l_Lean_Elab_Command_checkRuleKind___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkRuleKind___closed__1);
l_Lean_Elab_Command_checkRuleKind___closed__2 = _init_l_Lean_Elab_Command_checkRuleKind___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkRuleKind___closed__2);
l_Lean_Elab_Command_inferMacroRulesAltKind___closed__1 = _init_l_Lean_Elab_Command_inferMacroRulesAltKind___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_inferMacroRulesAltKind___closed__1);
l_Lean_Elab_Command_inferMacroRulesAltKind___closed__2 = _init_l_Lean_Elab_Command_inferMacroRulesAltKind___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_inferMacroRulesAltKind___closed__2);
l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__1 = _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__1);
l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__2 = _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__2);
l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__3 = _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__3);
l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__4 = _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__4);
l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__5 = _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__5);
l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__6 = _init_l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_expandNoKindMacroRulesAux___lambda__1___closed__6);
l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830____closed__1 = _init_l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830____closed__1();
lean_mark_persistent(l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830____closed__1);
res = l_Lean_Elab_Command_initFn____x40_Lean_Elab_Syntax___hyg_10830_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
