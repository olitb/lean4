// Lean compiler output
// Module: Lean.ParserCompiler
// Imports: Init Lean.Util.ReplaceExpr Lean.Meta.Basic Lean.Meta.WHNF Lean.ParserCompiler.Attribute Lean.Parser.Extension
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
lean_object* l_Lean_ParserCompiler_compileParser___rarg___closed__3;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__2(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__44(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_hasEval___rarg___closed__1;
lean_object* l_Lean_ParserCompiler_interpretParser_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashMap_inhabited___closed__1;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser___rarg___closed__5;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
lean_object* l_Lean_ParserCompiler_interpretParser___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_registerInitAttr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_Context_tyName___rarg(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30(lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCoreImp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__41(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32(lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_PersistentEnvExtension_modifyState___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__4;
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_interpretParser(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addAttribute(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__1;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
lean_object* l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__46___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__9;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser_match__1(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_Context_tyName(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___at_Lean_ParserCompiler_compileParserBody___spec__18(lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KernelException_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__6(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg(lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser___rarg___closed__2;
lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__11;
lean_object* l_Lean_ParserCompiler_compileParserBody_match__1(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_eval_const(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getValues___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkSimpleThunk___closed__1;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser___rarg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_Table_insert___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_preprocessParserBody(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___at_Lean_ParserCompiler_compileParserBody___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_object* l_Lean_ParserCompiler_interpretParser_match__1(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__3(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__3;
extern lean_object* l_Lean_Meta_State_inhabited___closed__1;
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_registerInitAttr___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_KeyedDeclsAttribute_init___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21(lean_object*);
lean_object* l_Lean_Environment_addAndCompile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_interpretParser___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__56(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16(lean_object*);
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__2;
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2(lean_object*);
lean_object* l_Lean_ParserCompiler_Context_tyName___rarg___boxed(lean_object*);
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
lean_object* l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__43(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser___rarg___closed__1;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
lean_object* l_Lean_ParserCompiler_compileParserBody_match__5(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody_match__4(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__7;
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__3;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__53___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___closed__5;
lean_object* l_ReaderT_inhabited___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___at_Lean_ParserCompiler_compileParserBody___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParser___rarg___closed__4;
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___at_Lean_ParserCompiler_compileParserBody___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_2__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_CoreM_inhabited___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_ReplaceImpl_initCache;
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__56___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__42(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_Context_tyName___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
return x_4;
}
}
lean_object* l_Lean_ParserCompiler_Context_tyName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_Context_tyName___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_Context_tyName___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_mkAppStx___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_4 = l_Lean_Expr_isConstOf(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_7 = lean_box(0);
x_8 = l_Lean_mkConst(x_6, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = 8192;
x_5 = l_Lean_Expr_ReplaceImpl_initCache;
x_6 = l_Lean_Expr_ReplaceImpl_replaceUnsafeM_visit(x_3, x_4, x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_ParserCompiler_preprocessParserBody(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_preprocessParserBody___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody_match__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_3, x_1, x_5, x_7);
return x_8;
}
case 6:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_5(x_2, x_1, x_9, x_10, x_11, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_4, x_1);
return x_15;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody_match__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody_match__6___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_mkAppStx___closed__3;
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = l_Lean_Expr_isConstOf(x_4, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_mkApp(x_1, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
static lean_object* _init_l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkLambdaFVars___at_Lean_ParserCompiler_compileParserBody___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Array_isEmpty___rarg(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_st_ref_get(x_4, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_6, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_HashMap_inhabited___closed__1;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
x_20 = 1;
x_21 = 0;
x_22 = l_Lean_MetavarContext_MkBinding_mkBinding(x_20, x_9, x_1, x_2, x_21, x_21, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
x_27 = lean_st_ref_take(x_6, x_16);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = !lean_is_exclusive(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_31 = lean_ctor_get(x_28, 2);
lean_dec(x_31);
lean_ctor_set(x_28, 2, x_26);
x_32 = lean_st_ref_set(x_6, x_28, x_29);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_ctor_get(x_24, 0);
lean_inc(x_34);
lean_dec(x_24);
x_35 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_34, x_3, x_4, x_5, x_6, x_33);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
lean_ctor_set(x_35, 0, x_25);
return x_35;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_25);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_40 = lean_ctor_get(x_28, 0);
x_41 = lean_ctor_get(x_28, 1);
x_42 = lean_ctor_get(x_28, 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_28);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_26);
lean_ctor_set(x_43, 3, x_42);
x_44 = lean_st_ref_set(x_6, x_43, x_29);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_ctor_get(x_24, 0);
lean_inc(x_46);
lean_dec(x_24);
x_47 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_46, x_3, x_4, x_5, x_6, x_45);
lean_dec(x_3);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_25);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_51 = lean_ctor_get(x_22, 1);
lean_inc(x_51);
lean_dec(x_22);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = l_Lean_Meta_setMCtx___at___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___spec__1(x_52, x_3, x_4, x_5, x_6, x_16);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_ctor_get(x_51, 1);
lean_inc(x_55);
lean_dec(x_51);
x_56 = lean_st_ref_take(x_6, x_54);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = !lean_is_exclusive(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_57, 2);
lean_dec(x_60);
lean_ctor_set(x_57, 2, x_55);
x_61 = lean_st_ref_set(x_6, x_57, x_58);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_64 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_63, x_3, x_4, x_5, x_6, x_62);
lean_dec(x_3);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = lean_ctor_get(x_57, 0);
x_66 = lean_ctor_get(x_57, 1);
x_67 = lean_ctor_get(x_57, 3);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_57);
x_68 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_55);
lean_ctor_set(x_68, 3, x_67);
x_69 = lean_st_ref_set(x_6, x_68, x_58);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l___private_Lean_Meta_Basic_0__Lean_Meta_liftMkBindingM___rarg___closed__3;
x_72 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_71, x_3, x_4, x_5, x_6, x_70);
lean_dec(x_3);
return x_72;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_3);
lean_dec(x_1);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_2);
lean_ctor_set(x_73, 1, x_7);
return x_73;
}
}
}
lean_object* l_Lean_Meta_lambdaLetTelescope___at_Lean_ParserCompiler_compileParserBody___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = 1;
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_lambdaLetTelescope___at_Lean_ParserCompiler_compileParserBody___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___at_Lean_ParserCompiler_compileParserBody___spec__18___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__34(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_5, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_5, x_15);
lean_dec(x_5);
x_17 = lean_array_fget(x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_mkSimpleThunk___closed__1;
x_26 = 0;
x_27 = l_Lean_mkForall(x_25, x_26, x_23, x_7);
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_7);
lean_ctor_set(x_37, 1, x_12);
return x_37;
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_nat_dec_lt(x_6, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_5);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_array_fget(x_4, x_6);
x_20 = lean_array_fget(x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_23 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_19, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_24, x_2, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_20, x_8, x_9, x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_6 = x_22;
x_7 = x_32;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_20, x_35, x_8, x_9, x_10, x_11, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_7, x_37, x_8, x_9, x_10, x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_6 = x_22;
x_7 = x_40;
x_12 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_23);
if (x_51 == 0)
{
return x_23;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_23, 0);
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_23);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_array_fget(x_3, x_5);
x_19 = lean_array_fget(x_4, x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_26 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_23, x_25, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_30 = l_Lean_Expr_isConstOf(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_19, x_7, x_8, x_9, x_10, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_5 = x_21;
x_6 = x_32;
x_11 = x_33;
goto _start;
}
else
{
uint8_t x_35; lean_object* x_36; 
x_35 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_36 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_19, x_35, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_6, x_37, x_7, x_8, x_9, x_10, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_5 = x_21;
x_6 = x_40;
x_11 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_36);
if (x_43 == 0)
{
return x_36;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_36, 0);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_26);
if (x_47 == 0)
{
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_22);
if (x_51 == 0)
{
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_22, 0);
x_53 = lean_ctor_get(x_22, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_22);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__2___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__1___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__3(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__5(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__7___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__6___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__8(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__8(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__12___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__11___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__13(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__11(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__17___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__16___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__18(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__14(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__22___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__21___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__23(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_3, x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_mkLambdaFVars___at_Lean_ParserCompiler_compileParserBody___spec__17(x_2, x_11, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__19(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__28(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__29(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__28___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__27___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__29(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__31(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__32(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__22(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__33(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__34(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__33___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__32___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__34(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__36(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__37(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__25(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__38(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__39(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__38___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__37___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__39(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__41(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__42(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__28(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__43(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__44(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__43___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__42___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__44(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__46(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__47(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__31(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__48(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__49(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__48___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__47___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__49(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__51(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__52(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_ParserCompiler_Context_tyName___rarg(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_10, x_11);
x_13 = lean_array_get_size(x_3);
lean_inc(x_12);
x_14 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__34(x_2, x_3, x_12, x_3, x_13, lean_box(0), x_12, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__53(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_1, x_12);
x_14 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
x_18 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_15, x_17);
x_19 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg(x_2, x_3, x_5, x_5, x_18, x_12, x_4, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_18);
return x_19;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__54(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_3);
x_14 = l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(x_1, x_8, x_2, x_3);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__1(x_14, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_mkConst(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_17);
x_18 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_17, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__53___boxed), 11, 4);
lean_closure_set(x_21, 0, x_5);
lean_closure_set(x_21, 1, x_6);
lean_closure_set(x_21, 2, x_7);
lean_closure_set(x_21, 3, x_17);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_19, x_21, x_9, x_10, x_11, x_12, x_20);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_preprocessParserBody___rarg(x_1, x_2);
x_17 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_18 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_16, x_17, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__52___boxed), 9, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_22 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_4, x_21, x_11, x_12, x_13, x_14, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_box(0);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_17);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_st_ref_get(x_14, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Environment_addAndCompile(x_33, x_25, x_29);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_KernelException_toMessageData(x_35, x_25);
x_37 = lean_ctor_get(x_13, 3);
lean_inc(x_37);
x_38 = l_Lean_MessageData_toString(x_36, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_io_error_to_string(x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_38, 0, x_53);
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_io_error_to_string(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_37);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_34, 0);
lean_inc(x_61);
lean_dec(x_34);
x_62 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__54(x_6, x_7, x_5, x_25, x_8, x_1, x_9, x_61, x_11, x_12, x_13, x_14, x_32);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_18);
if (x_67 == 0)
{
return x_18;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_18, 0);
x_69 = lean_ctor_get(x_18, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__56(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Expr_getAppNumArgsAux(x_1, x_11);
x_13 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_12);
x_14 = lean_mk_array(x_12, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_12, x_15);
lean_dec(x_12);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg(x_2, x_4, x_4, x_17, x_11, x_3, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
return x_18;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("call of unknown parser at '");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("don't know how to generate ");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" for non-parser combinator '");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" for non-definition '");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("refusing to generate code for imported parser declaration '");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'; use `@[runParserAttributeHooks]` on its definition instead.");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfEasyCases___at___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCoreImp___spec__2(x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_12) == 4)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_st_ref_get(x_7, x_11);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_20 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_19, x_17, x_13);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_inc(x_18);
x_21 = l_Lean_Name_append___main(x_13, x_18);
lean_inc(x_13);
x_22 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_13, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_ConstantInfo_type(x_23);
x_26 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_25);
x_27 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_25, x_26, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_82; uint8_t x_83; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_82 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_83 = l_Lean_Expr_isConstOf(x_28, x_82);
if (x_83 == 0)
{
lean_object* x_84; uint8_t x_85; 
x_84 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_85 = l_Lean_Expr_isConstOf(x_28, x_84);
lean_dec(x_28);
x_30 = x_85;
goto block_81;
}
else
{
uint8_t x_86; 
lean_dec(x_28);
x_86 = 1;
x_30 = x_86;
goto block_81;
}
block_81:
{
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_31 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_1);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_34, 0, x_18);
x_35 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_10);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_42, x_4, x_5, x_6, x_7, x_33);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_10);
x_44 = lean_ctor_get(x_31, 1);
lean_inc(x_44);
lean_dec(x_31);
x_45 = lean_ctor_get(x_32, 0);
lean_inc(x_45);
lean_dec(x_32);
x_46 = 0;
x_2 = x_45;
x_3 = x_46;
x_8 = x_44;
goto _start;
}
}
else
{
uint8_t x_48; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_31);
if (x_48 == 0)
{
return x_31;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_31, 0);
x_50 = lean_ctor_get(x_31, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_31);
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
x_52 = l_Lean_ConstantInfo_value_x3f(x_23);
lean_dec(x_23);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_1);
x_53 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_53, 0, x_18);
x_54 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_10);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_61, x_4, x_5, x_6, x_7, x_29);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_18);
x_63 = lean_ctor_get(x_52, 0);
lean_inc(x_63);
lean_dec(x_52);
x_64 = l_Lean_Environment_getModuleIdxFor_x3f(x_17, x_13);
lean_dec(x_17);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = l_Lean_mkAppStx___closed__4;
x_66 = lean_box(0);
x_67 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4(x_1, x_63, x_65, x_25, x_21, x_19, x_13, x_10, x_26, x_66, x_4, x_5, x_6, x_7, x_29);
return x_67;
}
else
{
lean_dec(x_64);
if (x_3 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_63);
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_1);
x_68 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_68, 0, x_13);
x_69 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_72, x_4, x_5, x_6, x_7, x_29);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
return x_73;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_73);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = l_Lean_mkAppStx___closed__4;
x_79 = lean_box(0);
x_80 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4(x_1, x_63, x_78, x_25, x_21, x_19, x_13, x_10, x_26, x_79, x_4, x_5, x_6, x_7, x_29);
return x_80;
}
}
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_27);
if (x_87 == 0)
{
return x_27;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_27, 0);
x_89 = lean_ctor_get(x_27, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_27);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_22);
if (x_91 == 0)
{
return x_22;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_22, 0);
x_93 = lean_ctor_get(x_22, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_22);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
x_95 = lean_ctor_get(x_20, 0);
lean_inc(x_95);
lean_dec(x_20);
x_96 = lean_box(0);
x_97 = l_Lean_mkConst(x_95, x_96);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_97);
x_98 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_97, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__5___boxed), 10, 3);
lean_closure_set(x_101, 0, x_10);
lean_closure_set(x_101, 1, x_1);
lean_closure_set(x_101, 2, x_97);
x_102 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_99, x_101, x_4, x_5, x_6, x_7, x_100);
return x_102;
}
else
{
uint8_t x_103; 
lean_dec(x_97);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_98);
if (x_103 == 0)
{
return x_98;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_98, 0);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_98);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_12);
lean_dec(x_1);
x_107 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_107, 0, x_10);
x_108 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_111, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_112;
}
}
case 1:
{
uint8_t x_113; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_9);
if (x_113 == 0)
{
lean_object* x_114; 
x_114 = lean_ctor_get(x_9, 0);
lean_dec(x_114);
return x_9;
}
else
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_9, 1);
lean_inc(x_115);
lean_dec(x_9);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_10);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
case 2:
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_9, 1);
lean_inc(x_117);
lean_dec(x_9);
x_118 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_118) == 4)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
lean_dec(x_118);
x_120 = lean_st_ref_get(x_7, x_117);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_121, 0);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_ctor_get(x_1, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_1, 2);
lean_inc(x_125);
x_126 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_125, x_123, x_119);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; 
lean_inc(x_124);
x_127 = l_Lean_Name_append___main(x_119, x_124);
lean_inc(x_119);
x_128 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_119, x_4, x_5, x_6, x_7, x_122);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = l_Lean_ConstantInfo_type(x_129);
x_132 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_131);
x_133 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_131, x_132, x_4, x_5, x_6, x_7, x_130);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_188; uint8_t x_189; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
lean_dec(x_133);
x_188 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_189 = l_Lean_Expr_isConstOf(x_134, x_188);
if (x_189 == 0)
{
lean_object* x_190; uint8_t x_191; 
x_190 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_191 = l_Lean_Expr_isConstOf(x_134, x_190);
lean_dec(x_134);
x_136 = x_191;
goto block_187;
}
else
{
uint8_t x_192; 
lean_dec(x_134);
x_192 = 1;
x_136 = x_192;
goto block_187;
}
block_187:
{
if (x_136 == 0)
{
lean_object* x_137; 
lean_dec(x_131);
lean_dec(x_129);
lean_dec(x_127);
lean_dec(x_125);
lean_dec(x_123);
lean_dec(x_119);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_137 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_135);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_1);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
x_140 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_140, 0, x_124);
x_141 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_142 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
x_143 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_144 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_145, 0, x_10);
x_146 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
x_147 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_148 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
x_149 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_148, x_4, x_5, x_6, x_7, x_139);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
lean_dec(x_124);
lean_dec(x_10);
x_150 = lean_ctor_get(x_137, 1);
lean_inc(x_150);
lean_dec(x_137);
x_151 = lean_ctor_get(x_138, 0);
lean_inc(x_151);
lean_dec(x_138);
x_152 = 0;
x_2 = x_151;
x_3 = x_152;
x_8 = x_150;
goto _start;
}
}
else
{
uint8_t x_154; 
lean_dec(x_124);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_154 = !lean_is_exclusive(x_137);
if (x_154 == 0)
{
return x_137;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_137, 0);
x_156 = lean_ctor_get(x_137, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_137);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
else
{
lean_object* x_158; 
x_158 = l_Lean_ConstantInfo_value_x3f(x_129);
lean_dec(x_129);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_131);
lean_dec(x_127);
lean_dec(x_125);
lean_dec(x_123);
lean_dec(x_119);
lean_dec(x_1);
x_159 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_159, 0, x_124);
x_160 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_161 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
x_162 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_163 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_164, 0, x_10);
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_167 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_167, x_4, x_5, x_6, x_7, x_135);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; 
lean_dec(x_124);
x_169 = lean_ctor_get(x_158, 0);
lean_inc(x_169);
lean_dec(x_158);
x_170 = l_Lean_Environment_getModuleIdxFor_x3f(x_123, x_119);
lean_dec(x_123);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = l_Lean_mkAppStx___closed__4;
x_172 = lean_box(0);
x_173 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9(x_1, x_169, x_171, x_131, x_127, x_125, x_119, x_10, x_132, x_172, x_4, x_5, x_6, x_7, x_135);
return x_173;
}
else
{
lean_dec(x_170);
if (x_3 == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_dec(x_169);
lean_dec(x_131);
lean_dec(x_127);
lean_dec(x_125);
lean_dec(x_10);
lean_dec(x_1);
x_174 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_174, 0, x_119);
x_175 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_176 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
x_177 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_178 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
x_179 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_178, x_4, x_5, x_6, x_7, x_135);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_180 = !lean_is_exclusive(x_179);
if (x_180 == 0)
{
return x_179;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_179, 0);
x_182 = lean_ctor_get(x_179, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_179);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
return x_183;
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = l_Lean_mkAppStx___closed__4;
x_185 = lean_box(0);
x_186 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9(x_1, x_169, x_184, x_131, x_127, x_125, x_119, x_10, x_132, x_185, x_4, x_5, x_6, x_7, x_135);
return x_186;
}
}
}
}
}
}
else
{
uint8_t x_193; 
lean_dec(x_131);
lean_dec(x_129);
lean_dec(x_127);
lean_dec(x_125);
lean_dec(x_124);
lean_dec(x_123);
lean_dec(x_119);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_193 = !lean_is_exclusive(x_133);
if (x_193 == 0)
{
return x_133;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_133, 0);
x_195 = lean_ctor_get(x_133, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_133);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
}
else
{
uint8_t x_197; 
lean_dec(x_127);
lean_dec(x_125);
lean_dec(x_124);
lean_dec(x_123);
lean_dec(x_119);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_197 = !lean_is_exclusive(x_128);
if (x_197 == 0)
{
return x_128;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_128, 0);
x_199 = lean_ctor_get(x_128, 1);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_128);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_198);
lean_ctor_set(x_200, 1, x_199);
return x_200;
}
}
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_125);
lean_dec(x_124);
lean_dec(x_123);
lean_dec(x_119);
x_201 = lean_ctor_get(x_126, 0);
lean_inc(x_201);
lean_dec(x_126);
x_202 = lean_box(0);
x_203 = l_Lean_mkConst(x_201, x_202);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_203);
x_204 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_203, x_4, x_5, x_6, x_7, x_122);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__10___boxed), 10, 3);
lean_closure_set(x_207, 0, x_10);
lean_closure_set(x_207, 1, x_1);
lean_closure_set(x_207, 2, x_203);
x_208 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_205, x_207, x_4, x_5, x_6, x_7, x_206);
return x_208;
}
else
{
uint8_t x_209; 
lean_dec(x_203);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_209 = !lean_is_exclusive(x_204);
if (x_209 == 0)
{
return x_204;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_204, 0);
x_211 = lean_ctor_get(x_204, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_204);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
lean_dec(x_118);
lean_dec(x_1);
x_213 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_213, 0, x_10);
x_214 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_215 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_213);
x_216 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_217 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_217, 0, x_215);
lean_ctor_set(x_217, 1, x_216);
x_218 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_217, x_4, x_5, x_6, x_7, x_117);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_218;
}
}
case 3:
{
lean_object* x_219; lean_object* x_220; 
x_219 = lean_ctor_get(x_9, 1);
lean_inc(x_219);
lean_dec(x_9);
x_220 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_220) == 4)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
lean_dec(x_220);
x_222 = lean_st_ref_get(x_7, x_219);
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
lean_dec(x_222);
x_225 = lean_ctor_get(x_223, 0);
lean_inc(x_225);
lean_dec(x_223);
x_226 = lean_ctor_get(x_1, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_1, 2);
lean_inc(x_227);
x_228 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_227, x_225, x_221);
if (lean_obj_tag(x_228) == 0)
{
lean_object* x_229; lean_object* x_230; 
lean_inc(x_226);
x_229 = l_Lean_Name_append___main(x_221, x_226);
lean_inc(x_221);
x_230 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_221, x_4, x_5, x_6, x_7, x_224);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = l_Lean_ConstantInfo_type(x_231);
x_234 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_233);
x_235 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_233, x_234, x_4, x_5, x_6, x_7, x_232);
if (lean_obj_tag(x_235) == 0)
{
lean_object* x_236; lean_object* x_237; uint8_t x_238; lean_object* x_290; uint8_t x_291; 
x_236 = lean_ctor_get(x_235, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_235, 1);
lean_inc(x_237);
lean_dec(x_235);
x_290 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_291 = l_Lean_Expr_isConstOf(x_236, x_290);
if (x_291 == 0)
{
lean_object* x_292; uint8_t x_293; 
x_292 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_293 = l_Lean_Expr_isConstOf(x_236, x_292);
lean_dec(x_236);
x_238 = x_293;
goto block_289;
}
else
{
uint8_t x_294; 
lean_dec(x_236);
x_294 = 1;
x_238 = x_294;
goto block_289;
}
block_289:
{
if (x_238 == 0)
{
lean_object* x_239; 
lean_dec(x_233);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_221);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_239 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_237);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; 
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
if (lean_obj_tag(x_240) == 0)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_1);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
lean_dec(x_239);
x_242 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_242, 0, x_226);
x_243 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_244 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_242);
x_245 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_246 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_247, 0, x_10);
x_248 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_248, 0, x_246);
lean_ctor_set(x_248, 1, x_247);
x_249 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_250 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
x_251 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_250, x_4, x_5, x_6, x_7, x_241);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_251;
}
else
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
lean_dec(x_226);
lean_dec(x_10);
x_252 = lean_ctor_get(x_239, 1);
lean_inc(x_252);
lean_dec(x_239);
x_253 = lean_ctor_get(x_240, 0);
lean_inc(x_253);
lean_dec(x_240);
x_254 = 0;
x_2 = x_253;
x_3 = x_254;
x_8 = x_252;
goto _start;
}
}
else
{
uint8_t x_256; 
lean_dec(x_226);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_256 = !lean_is_exclusive(x_239);
if (x_256 == 0)
{
return x_239;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_ctor_get(x_239, 0);
x_258 = lean_ctor_get(x_239, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_239);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_257);
lean_ctor_set(x_259, 1, x_258);
return x_259;
}
}
}
else
{
lean_object* x_260; 
x_260 = l_Lean_ConstantInfo_value_x3f(x_231);
lean_dec(x_231);
if (lean_obj_tag(x_260) == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_233);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_221);
lean_dec(x_1);
x_261 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_261, 0, x_226);
x_262 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_263 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_261);
x_264 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_265 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
x_266 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_266, 0, x_10);
x_267 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_267, 0, x_265);
lean_ctor_set(x_267, 1, x_266);
x_268 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_269 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
x_270 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_269, x_4, x_5, x_6, x_7, x_237);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_270;
}
else
{
lean_object* x_271; lean_object* x_272; 
lean_dec(x_226);
x_271 = lean_ctor_get(x_260, 0);
lean_inc(x_271);
lean_dec(x_260);
x_272 = l_Lean_Environment_getModuleIdxFor_x3f(x_225, x_221);
lean_dec(x_225);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = l_Lean_mkAppStx___closed__4;
x_274 = lean_box(0);
x_275 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14(x_1, x_271, x_273, x_233, x_229, x_227, x_221, x_10, x_234, x_274, x_4, x_5, x_6, x_7, x_237);
return x_275;
}
else
{
lean_dec(x_272);
if (x_3 == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; uint8_t x_282; 
lean_dec(x_271);
lean_dec(x_233);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_10);
lean_dec(x_1);
x_276 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_276, 0, x_221);
x_277 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_278 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_276);
x_279 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_280 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_279);
x_281 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_280, x_4, x_5, x_6, x_7, x_237);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_282 = !lean_is_exclusive(x_281);
if (x_282 == 0)
{
return x_281;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_283 = lean_ctor_get(x_281, 0);
x_284 = lean_ctor_get(x_281, 1);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_281);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_283);
lean_ctor_set(x_285, 1, x_284);
return x_285;
}
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_286 = l_Lean_mkAppStx___closed__4;
x_287 = lean_box(0);
x_288 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14(x_1, x_271, x_286, x_233, x_229, x_227, x_221, x_10, x_234, x_287, x_4, x_5, x_6, x_7, x_237);
return x_288;
}
}
}
}
}
}
else
{
uint8_t x_295; 
lean_dec(x_233);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_221);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_295 = !lean_is_exclusive(x_235);
if (x_295 == 0)
{
return x_235;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_296 = lean_ctor_get(x_235, 0);
x_297 = lean_ctor_get(x_235, 1);
lean_inc(x_297);
lean_inc(x_296);
lean_dec(x_235);
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_297);
return x_298;
}
}
}
else
{
uint8_t x_299; 
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_221);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_299 = !lean_is_exclusive(x_230);
if (x_299 == 0)
{
return x_230;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_300 = lean_ctor_get(x_230, 0);
x_301 = lean_ctor_get(x_230, 1);
lean_inc(x_301);
lean_inc(x_300);
lean_dec(x_230);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_300);
lean_ctor_set(x_302, 1, x_301);
return x_302;
}
}
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_221);
x_303 = lean_ctor_get(x_228, 0);
lean_inc(x_303);
lean_dec(x_228);
x_304 = lean_box(0);
x_305 = l_Lean_mkConst(x_303, x_304);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_305);
x_306 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_305, x_4, x_5, x_6, x_7, x_224);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
x_309 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__15___boxed), 10, 3);
lean_closure_set(x_309, 0, x_10);
lean_closure_set(x_309, 1, x_1);
lean_closure_set(x_309, 2, x_305);
x_310 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_307, x_309, x_4, x_5, x_6, x_7, x_308);
return x_310;
}
else
{
uint8_t x_311; 
lean_dec(x_305);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_311 = !lean_is_exclusive(x_306);
if (x_311 == 0)
{
return x_306;
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_312 = lean_ctor_get(x_306, 0);
x_313 = lean_ctor_get(x_306, 1);
lean_inc(x_313);
lean_inc(x_312);
lean_dec(x_306);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_313);
return x_314;
}
}
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
lean_dec(x_220);
lean_dec(x_1);
x_315 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_315, 0, x_10);
x_316 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_317 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_315);
x_318 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_319 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_319, 0, x_317);
lean_ctor_set(x_319, 1, x_318);
x_320 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_319, x_4, x_5, x_6, x_7, x_219);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_320;
}
}
case 4:
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_9, 1);
lean_inc(x_321);
lean_dec(x_9);
x_322 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_322) == 4)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_323 = lean_ctor_get(x_322, 0);
lean_inc(x_323);
lean_dec(x_322);
x_324 = lean_st_ref_get(x_7, x_321);
x_325 = lean_ctor_get(x_324, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_324, 1);
lean_inc(x_326);
lean_dec(x_324);
x_327 = lean_ctor_get(x_325, 0);
lean_inc(x_327);
lean_dec(x_325);
x_328 = lean_ctor_get(x_1, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_1, 2);
lean_inc(x_329);
x_330 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_329, x_327, x_323);
if (lean_obj_tag(x_330) == 0)
{
lean_object* x_331; lean_object* x_332; 
lean_inc(x_328);
x_331 = l_Lean_Name_append___main(x_323, x_328);
lean_inc(x_323);
x_332 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_323, x_4, x_5, x_6, x_7, x_326);
if (lean_obj_tag(x_332) == 0)
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_332, 1);
lean_inc(x_334);
lean_dec(x_332);
x_335 = l_Lean_ConstantInfo_type(x_333);
x_336 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_335);
x_337 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_335, x_336, x_4, x_5, x_6, x_7, x_334);
if (lean_obj_tag(x_337) == 0)
{
lean_object* x_338; lean_object* x_339; uint8_t x_340; lean_object* x_392; uint8_t x_393; 
x_338 = lean_ctor_get(x_337, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_337, 1);
lean_inc(x_339);
lean_dec(x_337);
x_392 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_393 = l_Lean_Expr_isConstOf(x_338, x_392);
if (x_393 == 0)
{
lean_object* x_394; uint8_t x_395; 
x_394 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_395 = l_Lean_Expr_isConstOf(x_338, x_394);
lean_dec(x_338);
x_340 = x_395;
goto block_391;
}
else
{
uint8_t x_396; 
lean_dec(x_338);
x_396 = 1;
x_340 = x_396;
goto block_391;
}
block_391:
{
if (x_340 == 0)
{
lean_object* x_341; 
lean_dec(x_335);
lean_dec(x_333);
lean_dec(x_331);
lean_dec(x_329);
lean_dec(x_327);
lean_dec(x_323);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_341 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_339);
if (lean_obj_tag(x_341) == 0)
{
lean_object* x_342; 
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
if (lean_obj_tag(x_342) == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
lean_dec(x_1);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_344, 0, x_328);
x_345 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_346 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_344);
x_347 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_348 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
x_349 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_349, 0, x_10);
x_350 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_350, 0, x_348);
lean_ctor_set(x_350, 1, x_349);
x_351 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_352 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
x_353 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_352, x_4, x_5, x_6, x_7, x_343);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_353;
}
else
{
lean_object* x_354; lean_object* x_355; uint8_t x_356; 
lean_dec(x_328);
lean_dec(x_10);
x_354 = lean_ctor_get(x_341, 1);
lean_inc(x_354);
lean_dec(x_341);
x_355 = lean_ctor_get(x_342, 0);
lean_inc(x_355);
lean_dec(x_342);
x_356 = 0;
x_2 = x_355;
x_3 = x_356;
x_8 = x_354;
goto _start;
}
}
else
{
uint8_t x_358; 
lean_dec(x_328);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_358 = !lean_is_exclusive(x_341);
if (x_358 == 0)
{
return x_341;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_359 = lean_ctor_get(x_341, 0);
x_360 = lean_ctor_get(x_341, 1);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_341);
x_361 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_361, 0, x_359);
lean_ctor_set(x_361, 1, x_360);
return x_361;
}
}
}
else
{
lean_object* x_362; 
x_362 = l_Lean_ConstantInfo_value_x3f(x_333);
lean_dec(x_333);
if (lean_obj_tag(x_362) == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
lean_dec(x_335);
lean_dec(x_331);
lean_dec(x_329);
lean_dec(x_327);
lean_dec(x_323);
lean_dec(x_1);
x_363 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_363, 0, x_328);
x_364 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_365 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_365, 0, x_364);
lean_ctor_set(x_365, 1, x_363);
x_366 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_367 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_366);
x_368 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_368, 0, x_10);
x_369 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_369, 0, x_367);
lean_ctor_set(x_369, 1, x_368);
x_370 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_371 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_371, 0, x_369);
lean_ctor_set(x_371, 1, x_370);
x_372 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_371, x_4, x_5, x_6, x_7, x_339);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_372;
}
else
{
lean_object* x_373; lean_object* x_374; 
lean_dec(x_328);
x_373 = lean_ctor_get(x_362, 0);
lean_inc(x_373);
lean_dec(x_362);
x_374 = l_Lean_Environment_getModuleIdxFor_x3f(x_327, x_323);
lean_dec(x_327);
if (lean_obj_tag(x_374) == 0)
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_375 = l_Lean_mkAppStx___closed__4;
x_376 = lean_box(0);
x_377 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19(x_1, x_373, x_375, x_335, x_331, x_329, x_323, x_10, x_336, x_376, x_4, x_5, x_6, x_7, x_339);
return x_377;
}
else
{
lean_dec(x_374);
if (x_3 == 0)
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; uint8_t x_384; 
lean_dec(x_373);
lean_dec(x_335);
lean_dec(x_331);
lean_dec(x_329);
lean_dec(x_10);
lean_dec(x_1);
x_378 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_378, 0, x_323);
x_379 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_380 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_380, 0, x_379);
lean_ctor_set(x_380, 1, x_378);
x_381 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_382 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_382, 0, x_380);
lean_ctor_set(x_382, 1, x_381);
x_383 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_382, x_4, x_5, x_6, x_7, x_339);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_384 = !lean_is_exclusive(x_383);
if (x_384 == 0)
{
return x_383;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_385 = lean_ctor_get(x_383, 0);
x_386 = lean_ctor_get(x_383, 1);
lean_inc(x_386);
lean_inc(x_385);
lean_dec(x_383);
x_387 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_386);
return x_387;
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_388 = l_Lean_mkAppStx___closed__4;
x_389 = lean_box(0);
x_390 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19(x_1, x_373, x_388, x_335, x_331, x_329, x_323, x_10, x_336, x_389, x_4, x_5, x_6, x_7, x_339);
return x_390;
}
}
}
}
}
}
else
{
uint8_t x_397; 
lean_dec(x_335);
lean_dec(x_333);
lean_dec(x_331);
lean_dec(x_329);
lean_dec(x_328);
lean_dec(x_327);
lean_dec(x_323);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_397 = !lean_is_exclusive(x_337);
if (x_397 == 0)
{
return x_337;
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_398 = lean_ctor_get(x_337, 0);
x_399 = lean_ctor_get(x_337, 1);
lean_inc(x_399);
lean_inc(x_398);
lean_dec(x_337);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_398);
lean_ctor_set(x_400, 1, x_399);
return x_400;
}
}
}
else
{
uint8_t x_401; 
lean_dec(x_331);
lean_dec(x_329);
lean_dec(x_328);
lean_dec(x_327);
lean_dec(x_323);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_401 = !lean_is_exclusive(x_332);
if (x_401 == 0)
{
return x_332;
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_402 = lean_ctor_get(x_332, 0);
x_403 = lean_ctor_get(x_332, 1);
lean_inc(x_403);
lean_inc(x_402);
lean_dec(x_332);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_402);
lean_ctor_set(x_404, 1, x_403);
return x_404;
}
}
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
lean_dec(x_329);
lean_dec(x_328);
lean_dec(x_327);
lean_dec(x_323);
x_405 = lean_ctor_get(x_330, 0);
lean_inc(x_405);
lean_dec(x_330);
x_406 = lean_box(0);
x_407 = l_Lean_mkConst(x_405, x_406);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_407);
x_408 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_407, x_4, x_5, x_6, x_7, x_326);
if (lean_obj_tag(x_408) == 0)
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_409 = lean_ctor_get(x_408, 0);
lean_inc(x_409);
x_410 = lean_ctor_get(x_408, 1);
lean_inc(x_410);
lean_dec(x_408);
x_411 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__20___boxed), 10, 3);
lean_closure_set(x_411, 0, x_10);
lean_closure_set(x_411, 1, x_1);
lean_closure_set(x_411, 2, x_407);
x_412 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_409, x_411, x_4, x_5, x_6, x_7, x_410);
return x_412;
}
else
{
uint8_t x_413; 
lean_dec(x_407);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_413 = !lean_is_exclusive(x_408);
if (x_413 == 0)
{
return x_408;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; 
x_414 = lean_ctor_get(x_408, 0);
x_415 = lean_ctor_get(x_408, 1);
lean_inc(x_415);
lean_inc(x_414);
lean_dec(x_408);
x_416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_416, 0, x_414);
lean_ctor_set(x_416, 1, x_415);
return x_416;
}
}
}
}
else
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
lean_dec(x_322);
lean_dec(x_1);
x_417 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_417, 0, x_10);
x_418 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_419 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_419, 0, x_418);
lean_ctor_set(x_419, 1, x_417);
x_420 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_421 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_421, 0, x_419);
lean_ctor_set(x_421, 1, x_420);
x_422 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_421, x_4, x_5, x_6, x_7, x_321);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_422;
}
}
case 5:
{
lean_object* x_423; lean_object* x_424; 
x_423 = lean_ctor_get(x_9, 1);
lean_inc(x_423);
lean_dec(x_9);
x_424 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_424) == 4)
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
lean_dec(x_424);
x_426 = lean_st_ref_get(x_7, x_423);
x_427 = lean_ctor_get(x_426, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_426, 1);
lean_inc(x_428);
lean_dec(x_426);
x_429 = lean_ctor_get(x_427, 0);
lean_inc(x_429);
lean_dec(x_427);
x_430 = lean_ctor_get(x_1, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_1, 2);
lean_inc(x_431);
x_432 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_431, x_429, x_425);
if (lean_obj_tag(x_432) == 0)
{
lean_object* x_433; lean_object* x_434; 
lean_inc(x_430);
x_433 = l_Lean_Name_append___main(x_425, x_430);
lean_inc(x_425);
x_434 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_425, x_4, x_5, x_6, x_7, x_428);
if (lean_obj_tag(x_434) == 0)
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_435 = lean_ctor_get(x_434, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_434, 1);
lean_inc(x_436);
lean_dec(x_434);
x_437 = l_Lean_ConstantInfo_type(x_435);
x_438 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_437);
x_439 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_437, x_438, x_4, x_5, x_6, x_7, x_436);
if (lean_obj_tag(x_439) == 0)
{
lean_object* x_440; lean_object* x_441; uint8_t x_442; lean_object* x_494; uint8_t x_495; 
x_440 = lean_ctor_get(x_439, 0);
lean_inc(x_440);
x_441 = lean_ctor_get(x_439, 1);
lean_inc(x_441);
lean_dec(x_439);
x_494 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_495 = l_Lean_Expr_isConstOf(x_440, x_494);
if (x_495 == 0)
{
lean_object* x_496; uint8_t x_497; 
x_496 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_497 = l_Lean_Expr_isConstOf(x_440, x_496);
lean_dec(x_440);
x_442 = x_497;
goto block_493;
}
else
{
uint8_t x_498; 
lean_dec(x_440);
x_498 = 1;
x_442 = x_498;
goto block_493;
}
block_493:
{
if (x_442 == 0)
{
lean_object* x_443; 
lean_dec(x_437);
lean_dec(x_435);
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_429);
lean_dec(x_425);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_443 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_441);
if (lean_obj_tag(x_443) == 0)
{
lean_object* x_444; 
x_444 = lean_ctor_get(x_443, 0);
lean_inc(x_444);
if (lean_obj_tag(x_444) == 0)
{
lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; 
lean_dec(x_1);
x_445 = lean_ctor_get(x_443, 1);
lean_inc(x_445);
lean_dec(x_443);
x_446 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_446, 0, x_430);
x_447 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_448 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_448, 0, x_447);
lean_ctor_set(x_448, 1, x_446);
x_449 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_450 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_450, 0, x_448);
lean_ctor_set(x_450, 1, x_449);
x_451 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_451, 0, x_10);
x_452 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_452, 0, x_450);
lean_ctor_set(x_452, 1, x_451);
x_453 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_454 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_454, 0, x_452);
lean_ctor_set(x_454, 1, x_453);
x_455 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_454, x_4, x_5, x_6, x_7, x_445);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_455;
}
else
{
lean_object* x_456; lean_object* x_457; uint8_t x_458; 
lean_dec(x_430);
lean_dec(x_10);
x_456 = lean_ctor_get(x_443, 1);
lean_inc(x_456);
lean_dec(x_443);
x_457 = lean_ctor_get(x_444, 0);
lean_inc(x_457);
lean_dec(x_444);
x_458 = 0;
x_2 = x_457;
x_3 = x_458;
x_8 = x_456;
goto _start;
}
}
else
{
uint8_t x_460; 
lean_dec(x_430);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_460 = !lean_is_exclusive(x_443);
if (x_460 == 0)
{
return x_443;
}
else
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; 
x_461 = lean_ctor_get(x_443, 0);
x_462 = lean_ctor_get(x_443, 1);
lean_inc(x_462);
lean_inc(x_461);
lean_dec(x_443);
x_463 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_463, 0, x_461);
lean_ctor_set(x_463, 1, x_462);
return x_463;
}
}
}
else
{
lean_object* x_464; 
x_464 = l_Lean_ConstantInfo_value_x3f(x_435);
lean_dec(x_435);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; 
lean_dec(x_437);
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_429);
lean_dec(x_425);
lean_dec(x_1);
x_465 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_465, 0, x_430);
x_466 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_467 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_467, 0, x_466);
lean_ctor_set(x_467, 1, x_465);
x_468 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_469 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_469, 0, x_467);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_470, 0, x_10);
x_471 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_471, 0, x_469);
lean_ctor_set(x_471, 1, x_470);
x_472 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_473 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_473, 0, x_471);
lean_ctor_set(x_473, 1, x_472);
x_474 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_473, x_4, x_5, x_6, x_7, x_441);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_474;
}
else
{
lean_object* x_475; lean_object* x_476; 
lean_dec(x_430);
x_475 = lean_ctor_get(x_464, 0);
lean_inc(x_475);
lean_dec(x_464);
x_476 = l_Lean_Environment_getModuleIdxFor_x3f(x_429, x_425);
lean_dec(x_429);
if (lean_obj_tag(x_476) == 0)
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; 
x_477 = l_Lean_mkAppStx___closed__4;
x_478 = lean_box(0);
x_479 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24(x_1, x_475, x_477, x_437, x_433, x_431, x_425, x_10, x_438, x_478, x_4, x_5, x_6, x_7, x_441);
return x_479;
}
else
{
lean_dec(x_476);
if (x_3 == 0)
{
lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; uint8_t x_486; 
lean_dec(x_475);
lean_dec(x_437);
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_10);
lean_dec(x_1);
x_480 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_480, 0, x_425);
x_481 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_482 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_482, 0, x_481);
lean_ctor_set(x_482, 1, x_480);
x_483 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_484 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_484, 0, x_482);
lean_ctor_set(x_484, 1, x_483);
x_485 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_484, x_4, x_5, x_6, x_7, x_441);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_486 = !lean_is_exclusive(x_485);
if (x_486 == 0)
{
return x_485;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_487 = lean_ctor_get(x_485, 0);
x_488 = lean_ctor_get(x_485, 1);
lean_inc(x_488);
lean_inc(x_487);
lean_dec(x_485);
x_489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_489, 0, x_487);
lean_ctor_set(x_489, 1, x_488);
return x_489;
}
}
else
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; 
x_490 = l_Lean_mkAppStx___closed__4;
x_491 = lean_box(0);
x_492 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24(x_1, x_475, x_490, x_437, x_433, x_431, x_425, x_10, x_438, x_491, x_4, x_5, x_6, x_7, x_441);
return x_492;
}
}
}
}
}
}
else
{
uint8_t x_499; 
lean_dec(x_437);
lean_dec(x_435);
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_425);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_499 = !lean_is_exclusive(x_439);
if (x_499 == 0)
{
return x_439;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; 
x_500 = lean_ctor_get(x_439, 0);
x_501 = lean_ctor_get(x_439, 1);
lean_inc(x_501);
lean_inc(x_500);
lean_dec(x_439);
x_502 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_502, 0, x_500);
lean_ctor_set(x_502, 1, x_501);
return x_502;
}
}
}
else
{
uint8_t x_503; 
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_425);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_503 = !lean_is_exclusive(x_434);
if (x_503 == 0)
{
return x_434;
}
else
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; 
x_504 = lean_ctor_get(x_434, 0);
x_505 = lean_ctor_get(x_434, 1);
lean_inc(x_505);
lean_inc(x_504);
lean_dec(x_434);
x_506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_506, 0, x_504);
lean_ctor_set(x_506, 1, x_505);
return x_506;
}
}
}
else
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
lean_dec(x_431);
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_425);
x_507 = lean_ctor_get(x_432, 0);
lean_inc(x_507);
lean_dec(x_432);
x_508 = lean_box(0);
x_509 = l_Lean_mkConst(x_507, x_508);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_509);
x_510 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_509, x_4, x_5, x_6, x_7, x_428);
if (lean_obj_tag(x_510) == 0)
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; 
x_511 = lean_ctor_get(x_510, 0);
lean_inc(x_511);
x_512 = lean_ctor_get(x_510, 1);
lean_inc(x_512);
lean_dec(x_510);
x_513 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__25___boxed), 10, 3);
lean_closure_set(x_513, 0, x_10);
lean_closure_set(x_513, 1, x_1);
lean_closure_set(x_513, 2, x_509);
x_514 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_511, x_513, x_4, x_5, x_6, x_7, x_512);
return x_514;
}
else
{
uint8_t x_515; 
lean_dec(x_509);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_515 = !lean_is_exclusive(x_510);
if (x_515 == 0)
{
return x_510;
}
else
{
lean_object* x_516; lean_object* x_517; lean_object* x_518; 
x_516 = lean_ctor_get(x_510, 0);
x_517 = lean_ctor_get(x_510, 1);
lean_inc(x_517);
lean_inc(x_516);
lean_dec(x_510);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_516);
lean_ctor_set(x_518, 1, x_517);
return x_518;
}
}
}
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; 
lean_dec(x_424);
lean_dec(x_1);
x_519 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_519, 0, x_10);
x_520 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_521 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_521, 0, x_520);
lean_ctor_set(x_521, 1, x_519);
x_522 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_523 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_523, 0, x_521);
lean_ctor_set(x_523, 1, x_522);
x_524 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_523, x_4, x_5, x_6, x_7, x_423);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_524;
}
}
case 6:
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_525 = lean_ctor_get(x_9, 1);
lean_inc(x_525);
lean_dec(x_9);
x_526 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__26), 8, 1);
lean_closure_set(x_526, 0, x_1);
x_527 = l_Lean_Meta_lambdaLetTelescope___at_Lean_ParserCompiler_compileParserBody___spec__18___rarg(x_10, x_526, x_4, x_5, x_6, x_7, x_525);
return x_527;
}
case 7:
{
lean_object* x_528; lean_object* x_529; 
x_528 = lean_ctor_get(x_9, 1);
lean_inc(x_528);
lean_dec(x_9);
x_529 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_529) == 4)
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; 
x_530 = lean_ctor_get(x_529, 0);
lean_inc(x_530);
lean_dec(x_529);
x_531 = lean_st_ref_get(x_7, x_528);
x_532 = lean_ctor_get(x_531, 0);
lean_inc(x_532);
x_533 = lean_ctor_get(x_531, 1);
lean_inc(x_533);
lean_dec(x_531);
x_534 = lean_ctor_get(x_532, 0);
lean_inc(x_534);
lean_dec(x_532);
x_535 = lean_ctor_get(x_1, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_1, 2);
lean_inc(x_536);
x_537 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_536, x_534, x_530);
if (lean_obj_tag(x_537) == 0)
{
lean_object* x_538; lean_object* x_539; 
lean_inc(x_535);
x_538 = l_Lean_Name_append___main(x_530, x_535);
lean_inc(x_530);
x_539 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_530, x_4, x_5, x_6, x_7, x_533);
if (lean_obj_tag(x_539) == 0)
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_540 = lean_ctor_get(x_539, 0);
lean_inc(x_540);
x_541 = lean_ctor_get(x_539, 1);
lean_inc(x_541);
lean_dec(x_539);
x_542 = l_Lean_ConstantInfo_type(x_540);
x_543 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_542);
x_544 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_542, x_543, x_4, x_5, x_6, x_7, x_541);
if (lean_obj_tag(x_544) == 0)
{
lean_object* x_545; lean_object* x_546; uint8_t x_547; lean_object* x_599; uint8_t x_600; 
x_545 = lean_ctor_get(x_544, 0);
lean_inc(x_545);
x_546 = lean_ctor_get(x_544, 1);
lean_inc(x_546);
lean_dec(x_544);
x_599 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_600 = l_Lean_Expr_isConstOf(x_545, x_599);
if (x_600 == 0)
{
lean_object* x_601; uint8_t x_602; 
x_601 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_602 = l_Lean_Expr_isConstOf(x_545, x_601);
lean_dec(x_545);
x_547 = x_602;
goto block_598;
}
else
{
uint8_t x_603; 
lean_dec(x_545);
x_603 = 1;
x_547 = x_603;
goto block_598;
}
block_598:
{
if (x_547 == 0)
{
lean_object* x_548; 
lean_dec(x_542);
lean_dec(x_540);
lean_dec(x_538);
lean_dec(x_536);
lean_dec(x_534);
lean_dec(x_530);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_548 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_546);
if (lean_obj_tag(x_548) == 0)
{
lean_object* x_549; 
x_549 = lean_ctor_get(x_548, 0);
lean_inc(x_549);
if (lean_obj_tag(x_549) == 0)
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; 
lean_dec(x_1);
x_550 = lean_ctor_get(x_548, 1);
lean_inc(x_550);
lean_dec(x_548);
x_551 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_551, 0, x_535);
x_552 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_553 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_553, 0, x_552);
lean_ctor_set(x_553, 1, x_551);
x_554 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_555 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_555, 0, x_553);
lean_ctor_set(x_555, 1, x_554);
x_556 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_556, 0, x_10);
x_557 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_557, 0, x_555);
lean_ctor_set(x_557, 1, x_556);
x_558 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_559 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_559, 0, x_557);
lean_ctor_set(x_559, 1, x_558);
x_560 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_559, x_4, x_5, x_6, x_7, x_550);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_560;
}
else
{
lean_object* x_561; lean_object* x_562; uint8_t x_563; 
lean_dec(x_535);
lean_dec(x_10);
x_561 = lean_ctor_get(x_548, 1);
lean_inc(x_561);
lean_dec(x_548);
x_562 = lean_ctor_get(x_549, 0);
lean_inc(x_562);
lean_dec(x_549);
x_563 = 0;
x_2 = x_562;
x_3 = x_563;
x_8 = x_561;
goto _start;
}
}
else
{
uint8_t x_565; 
lean_dec(x_535);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_565 = !lean_is_exclusive(x_548);
if (x_565 == 0)
{
return x_548;
}
else
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; 
x_566 = lean_ctor_get(x_548, 0);
x_567 = lean_ctor_get(x_548, 1);
lean_inc(x_567);
lean_inc(x_566);
lean_dec(x_548);
x_568 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_568, 0, x_566);
lean_ctor_set(x_568, 1, x_567);
return x_568;
}
}
}
else
{
lean_object* x_569; 
x_569 = l_Lean_ConstantInfo_value_x3f(x_540);
lean_dec(x_540);
if (lean_obj_tag(x_569) == 0)
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
lean_dec(x_542);
lean_dec(x_538);
lean_dec(x_536);
lean_dec(x_534);
lean_dec(x_530);
lean_dec(x_1);
x_570 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_570, 0, x_535);
x_571 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_572 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_572, 0, x_571);
lean_ctor_set(x_572, 1, x_570);
x_573 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_574 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_574, 0, x_572);
lean_ctor_set(x_574, 1, x_573);
x_575 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_575, 0, x_10);
x_576 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_576, 0, x_574);
lean_ctor_set(x_576, 1, x_575);
x_577 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_578 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_578, 0, x_576);
lean_ctor_set(x_578, 1, x_577);
x_579 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_578, x_4, x_5, x_6, x_7, x_546);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_579;
}
else
{
lean_object* x_580; lean_object* x_581; 
lean_dec(x_535);
x_580 = lean_ctor_get(x_569, 0);
lean_inc(x_580);
lean_dec(x_569);
x_581 = l_Lean_Environment_getModuleIdxFor_x3f(x_534, x_530);
lean_dec(x_534);
if (lean_obj_tag(x_581) == 0)
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; 
x_582 = l_Lean_mkAppStx___closed__4;
x_583 = lean_box(0);
x_584 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30(x_1, x_580, x_582, x_542, x_538, x_536, x_530, x_10, x_543, x_583, x_4, x_5, x_6, x_7, x_546);
return x_584;
}
else
{
lean_dec(x_581);
if (x_3 == 0)
{
lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; uint8_t x_591; 
lean_dec(x_580);
lean_dec(x_542);
lean_dec(x_538);
lean_dec(x_536);
lean_dec(x_10);
lean_dec(x_1);
x_585 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_585, 0, x_530);
x_586 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_587 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_587, 0, x_586);
lean_ctor_set(x_587, 1, x_585);
x_588 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_589 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_589, 0, x_587);
lean_ctor_set(x_589, 1, x_588);
x_590 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_589, x_4, x_5, x_6, x_7, x_546);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_591 = !lean_is_exclusive(x_590);
if (x_591 == 0)
{
return x_590;
}
else
{
lean_object* x_592; lean_object* x_593; lean_object* x_594; 
x_592 = lean_ctor_get(x_590, 0);
x_593 = lean_ctor_get(x_590, 1);
lean_inc(x_593);
lean_inc(x_592);
lean_dec(x_590);
x_594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_594, 0, x_592);
lean_ctor_set(x_594, 1, x_593);
return x_594;
}
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_595 = l_Lean_mkAppStx___closed__4;
x_596 = lean_box(0);
x_597 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30(x_1, x_580, x_595, x_542, x_538, x_536, x_530, x_10, x_543, x_596, x_4, x_5, x_6, x_7, x_546);
return x_597;
}
}
}
}
}
}
else
{
uint8_t x_604; 
lean_dec(x_542);
lean_dec(x_540);
lean_dec(x_538);
lean_dec(x_536);
lean_dec(x_535);
lean_dec(x_534);
lean_dec(x_530);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_604 = !lean_is_exclusive(x_544);
if (x_604 == 0)
{
return x_544;
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; 
x_605 = lean_ctor_get(x_544, 0);
x_606 = lean_ctor_get(x_544, 1);
lean_inc(x_606);
lean_inc(x_605);
lean_dec(x_544);
x_607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_607, 0, x_605);
lean_ctor_set(x_607, 1, x_606);
return x_607;
}
}
}
else
{
uint8_t x_608; 
lean_dec(x_538);
lean_dec(x_536);
lean_dec(x_535);
lean_dec(x_534);
lean_dec(x_530);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_608 = !lean_is_exclusive(x_539);
if (x_608 == 0)
{
return x_539;
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; 
x_609 = lean_ctor_get(x_539, 0);
x_610 = lean_ctor_get(x_539, 1);
lean_inc(x_610);
lean_inc(x_609);
lean_dec(x_539);
x_611 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_611, 0, x_609);
lean_ctor_set(x_611, 1, x_610);
return x_611;
}
}
}
else
{
lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; 
lean_dec(x_536);
lean_dec(x_535);
lean_dec(x_534);
lean_dec(x_530);
x_612 = lean_ctor_get(x_537, 0);
lean_inc(x_612);
lean_dec(x_537);
x_613 = lean_box(0);
x_614 = l_Lean_mkConst(x_612, x_613);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_614);
x_615 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_614, x_4, x_5, x_6, x_7, x_533);
if (lean_obj_tag(x_615) == 0)
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; 
x_616 = lean_ctor_get(x_615, 0);
lean_inc(x_616);
x_617 = lean_ctor_get(x_615, 1);
lean_inc(x_617);
lean_dec(x_615);
x_618 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__31___boxed), 10, 3);
lean_closure_set(x_618, 0, x_10);
lean_closure_set(x_618, 1, x_1);
lean_closure_set(x_618, 2, x_614);
x_619 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_616, x_618, x_4, x_5, x_6, x_7, x_617);
return x_619;
}
else
{
uint8_t x_620; 
lean_dec(x_614);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_620 = !lean_is_exclusive(x_615);
if (x_620 == 0)
{
return x_615;
}
else
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; 
x_621 = lean_ctor_get(x_615, 0);
x_622 = lean_ctor_get(x_615, 1);
lean_inc(x_622);
lean_inc(x_621);
lean_dec(x_615);
x_623 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_623, 0, x_621);
lean_ctor_set(x_623, 1, x_622);
return x_623;
}
}
}
}
else
{
lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; 
lean_dec(x_529);
lean_dec(x_1);
x_624 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_624, 0, x_10);
x_625 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_626 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_626, 0, x_625);
lean_ctor_set(x_626, 1, x_624);
x_627 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_628 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_628, 0, x_626);
lean_ctor_set(x_628, 1, x_627);
x_629 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_628, x_4, x_5, x_6, x_7, x_528);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_629;
}
}
case 8:
{
lean_object* x_630; lean_object* x_631; 
x_630 = lean_ctor_get(x_9, 1);
lean_inc(x_630);
lean_dec(x_9);
x_631 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_631) == 4)
{
lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; 
x_632 = lean_ctor_get(x_631, 0);
lean_inc(x_632);
lean_dec(x_631);
x_633 = lean_st_ref_get(x_7, x_630);
x_634 = lean_ctor_get(x_633, 0);
lean_inc(x_634);
x_635 = lean_ctor_get(x_633, 1);
lean_inc(x_635);
lean_dec(x_633);
x_636 = lean_ctor_get(x_634, 0);
lean_inc(x_636);
lean_dec(x_634);
x_637 = lean_ctor_get(x_1, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_1, 2);
lean_inc(x_638);
x_639 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_638, x_636, x_632);
if (lean_obj_tag(x_639) == 0)
{
lean_object* x_640; lean_object* x_641; 
lean_inc(x_637);
x_640 = l_Lean_Name_append___main(x_632, x_637);
lean_inc(x_632);
x_641 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_632, x_4, x_5, x_6, x_7, x_635);
if (lean_obj_tag(x_641) == 0)
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; 
x_642 = lean_ctor_get(x_641, 0);
lean_inc(x_642);
x_643 = lean_ctor_get(x_641, 1);
lean_inc(x_643);
lean_dec(x_641);
x_644 = l_Lean_ConstantInfo_type(x_642);
x_645 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_644);
x_646 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_644, x_645, x_4, x_5, x_6, x_7, x_643);
if (lean_obj_tag(x_646) == 0)
{
lean_object* x_647; lean_object* x_648; uint8_t x_649; lean_object* x_701; uint8_t x_702; 
x_647 = lean_ctor_get(x_646, 0);
lean_inc(x_647);
x_648 = lean_ctor_get(x_646, 1);
lean_inc(x_648);
lean_dec(x_646);
x_701 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_702 = l_Lean_Expr_isConstOf(x_647, x_701);
if (x_702 == 0)
{
lean_object* x_703; uint8_t x_704; 
x_703 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_704 = l_Lean_Expr_isConstOf(x_647, x_703);
lean_dec(x_647);
x_649 = x_704;
goto block_700;
}
else
{
uint8_t x_705; 
lean_dec(x_647);
x_705 = 1;
x_649 = x_705;
goto block_700;
}
block_700:
{
if (x_649 == 0)
{
lean_object* x_650; 
lean_dec(x_644);
lean_dec(x_642);
lean_dec(x_640);
lean_dec(x_638);
lean_dec(x_636);
lean_dec(x_632);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_650 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_648);
if (lean_obj_tag(x_650) == 0)
{
lean_object* x_651; 
x_651 = lean_ctor_get(x_650, 0);
lean_inc(x_651);
if (lean_obj_tag(x_651) == 0)
{
lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; 
lean_dec(x_1);
x_652 = lean_ctor_get(x_650, 1);
lean_inc(x_652);
lean_dec(x_650);
x_653 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_653, 0, x_637);
x_654 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_655 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_655, 0, x_654);
lean_ctor_set(x_655, 1, x_653);
x_656 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_657 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_657, 0, x_655);
lean_ctor_set(x_657, 1, x_656);
x_658 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_658, 0, x_10);
x_659 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_659, 0, x_657);
lean_ctor_set(x_659, 1, x_658);
x_660 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_661 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_661, 0, x_659);
lean_ctor_set(x_661, 1, x_660);
x_662 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_661, x_4, x_5, x_6, x_7, x_652);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_662;
}
else
{
lean_object* x_663; lean_object* x_664; uint8_t x_665; 
lean_dec(x_637);
lean_dec(x_10);
x_663 = lean_ctor_get(x_650, 1);
lean_inc(x_663);
lean_dec(x_650);
x_664 = lean_ctor_get(x_651, 0);
lean_inc(x_664);
lean_dec(x_651);
x_665 = 0;
x_2 = x_664;
x_3 = x_665;
x_8 = x_663;
goto _start;
}
}
else
{
uint8_t x_667; 
lean_dec(x_637);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_667 = !lean_is_exclusive(x_650);
if (x_667 == 0)
{
return x_650;
}
else
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; 
x_668 = lean_ctor_get(x_650, 0);
x_669 = lean_ctor_get(x_650, 1);
lean_inc(x_669);
lean_inc(x_668);
lean_dec(x_650);
x_670 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_670, 0, x_668);
lean_ctor_set(x_670, 1, x_669);
return x_670;
}
}
}
else
{
lean_object* x_671; 
x_671 = l_Lean_ConstantInfo_value_x3f(x_642);
lean_dec(x_642);
if (lean_obj_tag(x_671) == 0)
{
lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; 
lean_dec(x_644);
lean_dec(x_640);
lean_dec(x_638);
lean_dec(x_636);
lean_dec(x_632);
lean_dec(x_1);
x_672 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_672, 0, x_637);
x_673 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_674 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_674, 0, x_673);
lean_ctor_set(x_674, 1, x_672);
x_675 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_676 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_676, 0, x_674);
lean_ctor_set(x_676, 1, x_675);
x_677 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_677, 0, x_10);
x_678 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_678, 0, x_676);
lean_ctor_set(x_678, 1, x_677);
x_679 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_680 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_680, 0, x_678);
lean_ctor_set(x_680, 1, x_679);
x_681 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_680, x_4, x_5, x_6, x_7, x_648);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_681;
}
else
{
lean_object* x_682; lean_object* x_683; 
lean_dec(x_637);
x_682 = lean_ctor_get(x_671, 0);
lean_inc(x_682);
lean_dec(x_671);
x_683 = l_Lean_Environment_getModuleIdxFor_x3f(x_636, x_632);
lean_dec(x_636);
if (lean_obj_tag(x_683) == 0)
{
lean_object* x_684; lean_object* x_685; lean_object* x_686; 
x_684 = l_Lean_mkAppStx___closed__4;
x_685 = lean_box(0);
x_686 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35(x_1, x_682, x_684, x_644, x_640, x_638, x_632, x_10, x_645, x_685, x_4, x_5, x_6, x_7, x_648);
return x_686;
}
else
{
lean_dec(x_683);
if (x_3 == 0)
{
lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; uint8_t x_693; 
lean_dec(x_682);
lean_dec(x_644);
lean_dec(x_640);
lean_dec(x_638);
lean_dec(x_10);
lean_dec(x_1);
x_687 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_687, 0, x_632);
x_688 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_689 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_689, 0, x_688);
lean_ctor_set(x_689, 1, x_687);
x_690 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_691 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_691, 0, x_689);
lean_ctor_set(x_691, 1, x_690);
x_692 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_691, x_4, x_5, x_6, x_7, x_648);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_693 = !lean_is_exclusive(x_692);
if (x_693 == 0)
{
return x_692;
}
else
{
lean_object* x_694; lean_object* x_695; lean_object* x_696; 
x_694 = lean_ctor_get(x_692, 0);
x_695 = lean_ctor_get(x_692, 1);
lean_inc(x_695);
lean_inc(x_694);
lean_dec(x_692);
x_696 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_696, 0, x_694);
lean_ctor_set(x_696, 1, x_695);
return x_696;
}
}
else
{
lean_object* x_697; lean_object* x_698; lean_object* x_699; 
x_697 = l_Lean_mkAppStx___closed__4;
x_698 = lean_box(0);
x_699 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35(x_1, x_682, x_697, x_644, x_640, x_638, x_632, x_10, x_645, x_698, x_4, x_5, x_6, x_7, x_648);
return x_699;
}
}
}
}
}
}
else
{
uint8_t x_706; 
lean_dec(x_644);
lean_dec(x_642);
lean_dec(x_640);
lean_dec(x_638);
lean_dec(x_637);
lean_dec(x_636);
lean_dec(x_632);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_706 = !lean_is_exclusive(x_646);
if (x_706 == 0)
{
return x_646;
}
else
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; 
x_707 = lean_ctor_get(x_646, 0);
x_708 = lean_ctor_get(x_646, 1);
lean_inc(x_708);
lean_inc(x_707);
lean_dec(x_646);
x_709 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_709, 0, x_707);
lean_ctor_set(x_709, 1, x_708);
return x_709;
}
}
}
else
{
uint8_t x_710; 
lean_dec(x_640);
lean_dec(x_638);
lean_dec(x_637);
lean_dec(x_636);
lean_dec(x_632);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_710 = !lean_is_exclusive(x_641);
if (x_710 == 0)
{
return x_641;
}
else
{
lean_object* x_711; lean_object* x_712; lean_object* x_713; 
x_711 = lean_ctor_get(x_641, 0);
x_712 = lean_ctor_get(x_641, 1);
lean_inc(x_712);
lean_inc(x_711);
lean_dec(x_641);
x_713 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_713, 0, x_711);
lean_ctor_set(x_713, 1, x_712);
return x_713;
}
}
}
else
{
lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; 
lean_dec(x_638);
lean_dec(x_637);
lean_dec(x_636);
lean_dec(x_632);
x_714 = lean_ctor_get(x_639, 0);
lean_inc(x_714);
lean_dec(x_639);
x_715 = lean_box(0);
x_716 = l_Lean_mkConst(x_714, x_715);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_716);
x_717 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_716, x_4, x_5, x_6, x_7, x_635);
if (lean_obj_tag(x_717) == 0)
{
lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; 
x_718 = lean_ctor_get(x_717, 0);
lean_inc(x_718);
x_719 = lean_ctor_get(x_717, 1);
lean_inc(x_719);
lean_dec(x_717);
x_720 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__36___boxed), 10, 3);
lean_closure_set(x_720, 0, x_10);
lean_closure_set(x_720, 1, x_1);
lean_closure_set(x_720, 2, x_716);
x_721 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_718, x_720, x_4, x_5, x_6, x_7, x_719);
return x_721;
}
else
{
uint8_t x_722; 
lean_dec(x_716);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_722 = !lean_is_exclusive(x_717);
if (x_722 == 0)
{
return x_717;
}
else
{
lean_object* x_723; lean_object* x_724; lean_object* x_725; 
x_723 = lean_ctor_get(x_717, 0);
x_724 = lean_ctor_get(x_717, 1);
lean_inc(x_724);
lean_inc(x_723);
lean_dec(x_717);
x_725 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_725, 0, x_723);
lean_ctor_set(x_725, 1, x_724);
return x_725;
}
}
}
}
else
{
lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; 
lean_dec(x_631);
lean_dec(x_1);
x_726 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_726, 0, x_10);
x_727 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_728 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_728, 0, x_727);
lean_ctor_set(x_728, 1, x_726);
x_729 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_730 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_730, 0, x_728);
lean_ctor_set(x_730, 1, x_729);
x_731 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_730, x_4, x_5, x_6, x_7, x_630);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_731;
}
}
case 9:
{
lean_object* x_732; lean_object* x_733; 
x_732 = lean_ctor_get(x_9, 1);
lean_inc(x_732);
lean_dec(x_9);
x_733 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_733) == 4)
{
lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; 
x_734 = lean_ctor_get(x_733, 0);
lean_inc(x_734);
lean_dec(x_733);
x_735 = lean_st_ref_get(x_7, x_732);
x_736 = lean_ctor_get(x_735, 0);
lean_inc(x_736);
x_737 = lean_ctor_get(x_735, 1);
lean_inc(x_737);
lean_dec(x_735);
x_738 = lean_ctor_get(x_736, 0);
lean_inc(x_738);
lean_dec(x_736);
x_739 = lean_ctor_get(x_1, 0);
lean_inc(x_739);
x_740 = lean_ctor_get(x_1, 2);
lean_inc(x_740);
x_741 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_740, x_738, x_734);
if (lean_obj_tag(x_741) == 0)
{
lean_object* x_742; lean_object* x_743; 
lean_inc(x_739);
x_742 = l_Lean_Name_append___main(x_734, x_739);
lean_inc(x_734);
x_743 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_734, x_4, x_5, x_6, x_7, x_737);
if (lean_obj_tag(x_743) == 0)
{
lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; 
x_744 = lean_ctor_get(x_743, 0);
lean_inc(x_744);
x_745 = lean_ctor_get(x_743, 1);
lean_inc(x_745);
lean_dec(x_743);
x_746 = l_Lean_ConstantInfo_type(x_744);
x_747 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_746);
x_748 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_746, x_747, x_4, x_5, x_6, x_7, x_745);
if (lean_obj_tag(x_748) == 0)
{
lean_object* x_749; lean_object* x_750; uint8_t x_751; lean_object* x_803; uint8_t x_804; 
x_749 = lean_ctor_get(x_748, 0);
lean_inc(x_749);
x_750 = lean_ctor_get(x_748, 1);
lean_inc(x_750);
lean_dec(x_748);
x_803 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_804 = l_Lean_Expr_isConstOf(x_749, x_803);
if (x_804 == 0)
{
lean_object* x_805; uint8_t x_806; 
x_805 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_806 = l_Lean_Expr_isConstOf(x_749, x_805);
lean_dec(x_749);
x_751 = x_806;
goto block_802;
}
else
{
uint8_t x_807; 
lean_dec(x_749);
x_807 = 1;
x_751 = x_807;
goto block_802;
}
block_802:
{
if (x_751 == 0)
{
lean_object* x_752; 
lean_dec(x_746);
lean_dec(x_744);
lean_dec(x_742);
lean_dec(x_740);
lean_dec(x_738);
lean_dec(x_734);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_752 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_750);
if (lean_obj_tag(x_752) == 0)
{
lean_object* x_753; 
x_753 = lean_ctor_get(x_752, 0);
lean_inc(x_753);
if (lean_obj_tag(x_753) == 0)
{
lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; 
lean_dec(x_1);
x_754 = lean_ctor_get(x_752, 1);
lean_inc(x_754);
lean_dec(x_752);
x_755 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_755, 0, x_739);
x_756 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_757 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_757, 0, x_756);
lean_ctor_set(x_757, 1, x_755);
x_758 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_759 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_759, 0, x_757);
lean_ctor_set(x_759, 1, x_758);
x_760 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_760, 0, x_10);
x_761 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_761, 0, x_759);
lean_ctor_set(x_761, 1, x_760);
x_762 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_763 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_763, 0, x_761);
lean_ctor_set(x_763, 1, x_762);
x_764 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_763, x_4, x_5, x_6, x_7, x_754);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_764;
}
else
{
lean_object* x_765; lean_object* x_766; uint8_t x_767; 
lean_dec(x_739);
lean_dec(x_10);
x_765 = lean_ctor_get(x_752, 1);
lean_inc(x_765);
lean_dec(x_752);
x_766 = lean_ctor_get(x_753, 0);
lean_inc(x_766);
lean_dec(x_753);
x_767 = 0;
x_2 = x_766;
x_3 = x_767;
x_8 = x_765;
goto _start;
}
}
else
{
uint8_t x_769; 
lean_dec(x_739);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_769 = !lean_is_exclusive(x_752);
if (x_769 == 0)
{
return x_752;
}
else
{
lean_object* x_770; lean_object* x_771; lean_object* x_772; 
x_770 = lean_ctor_get(x_752, 0);
x_771 = lean_ctor_get(x_752, 1);
lean_inc(x_771);
lean_inc(x_770);
lean_dec(x_752);
x_772 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_772, 0, x_770);
lean_ctor_set(x_772, 1, x_771);
return x_772;
}
}
}
else
{
lean_object* x_773; 
x_773 = l_Lean_ConstantInfo_value_x3f(x_744);
lean_dec(x_744);
if (lean_obj_tag(x_773) == 0)
{
lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; 
lean_dec(x_746);
lean_dec(x_742);
lean_dec(x_740);
lean_dec(x_738);
lean_dec(x_734);
lean_dec(x_1);
x_774 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_774, 0, x_739);
x_775 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_776 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_776, 0, x_775);
lean_ctor_set(x_776, 1, x_774);
x_777 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_778 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_778, 0, x_776);
lean_ctor_set(x_778, 1, x_777);
x_779 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_779, 0, x_10);
x_780 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_780, 0, x_778);
lean_ctor_set(x_780, 1, x_779);
x_781 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_782 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_782, 0, x_780);
lean_ctor_set(x_782, 1, x_781);
x_783 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_782, x_4, x_5, x_6, x_7, x_750);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_783;
}
else
{
lean_object* x_784; lean_object* x_785; 
lean_dec(x_739);
x_784 = lean_ctor_get(x_773, 0);
lean_inc(x_784);
lean_dec(x_773);
x_785 = l_Lean_Environment_getModuleIdxFor_x3f(x_738, x_734);
lean_dec(x_738);
if (lean_obj_tag(x_785) == 0)
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; 
x_786 = l_Lean_mkAppStx___closed__4;
x_787 = lean_box(0);
x_788 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40(x_1, x_784, x_786, x_746, x_742, x_740, x_734, x_10, x_747, x_787, x_4, x_5, x_6, x_7, x_750);
return x_788;
}
else
{
lean_dec(x_785);
if (x_3 == 0)
{
lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; uint8_t x_795; 
lean_dec(x_784);
lean_dec(x_746);
lean_dec(x_742);
lean_dec(x_740);
lean_dec(x_10);
lean_dec(x_1);
x_789 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_789, 0, x_734);
x_790 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_791 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_791, 0, x_790);
lean_ctor_set(x_791, 1, x_789);
x_792 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_793 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_793, 0, x_791);
lean_ctor_set(x_793, 1, x_792);
x_794 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_793, x_4, x_5, x_6, x_7, x_750);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_795 = !lean_is_exclusive(x_794);
if (x_795 == 0)
{
return x_794;
}
else
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; 
x_796 = lean_ctor_get(x_794, 0);
x_797 = lean_ctor_get(x_794, 1);
lean_inc(x_797);
lean_inc(x_796);
lean_dec(x_794);
x_798 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_798, 0, x_796);
lean_ctor_set(x_798, 1, x_797);
return x_798;
}
}
else
{
lean_object* x_799; lean_object* x_800; lean_object* x_801; 
x_799 = l_Lean_mkAppStx___closed__4;
x_800 = lean_box(0);
x_801 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40(x_1, x_784, x_799, x_746, x_742, x_740, x_734, x_10, x_747, x_800, x_4, x_5, x_6, x_7, x_750);
return x_801;
}
}
}
}
}
}
else
{
uint8_t x_808; 
lean_dec(x_746);
lean_dec(x_744);
lean_dec(x_742);
lean_dec(x_740);
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_734);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_808 = !lean_is_exclusive(x_748);
if (x_808 == 0)
{
return x_748;
}
else
{
lean_object* x_809; lean_object* x_810; lean_object* x_811; 
x_809 = lean_ctor_get(x_748, 0);
x_810 = lean_ctor_get(x_748, 1);
lean_inc(x_810);
lean_inc(x_809);
lean_dec(x_748);
x_811 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_811, 0, x_809);
lean_ctor_set(x_811, 1, x_810);
return x_811;
}
}
}
else
{
uint8_t x_812; 
lean_dec(x_742);
lean_dec(x_740);
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_734);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_812 = !lean_is_exclusive(x_743);
if (x_812 == 0)
{
return x_743;
}
else
{
lean_object* x_813; lean_object* x_814; lean_object* x_815; 
x_813 = lean_ctor_get(x_743, 0);
x_814 = lean_ctor_get(x_743, 1);
lean_inc(x_814);
lean_inc(x_813);
lean_dec(x_743);
x_815 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_815, 0, x_813);
lean_ctor_set(x_815, 1, x_814);
return x_815;
}
}
}
else
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; 
lean_dec(x_740);
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_734);
x_816 = lean_ctor_get(x_741, 0);
lean_inc(x_816);
lean_dec(x_741);
x_817 = lean_box(0);
x_818 = l_Lean_mkConst(x_816, x_817);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_818);
x_819 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_818, x_4, x_5, x_6, x_7, x_737);
if (lean_obj_tag(x_819) == 0)
{
lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; 
x_820 = lean_ctor_get(x_819, 0);
lean_inc(x_820);
x_821 = lean_ctor_get(x_819, 1);
lean_inc(x_821);
lean_dec(x_819);
x_822 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__41___boxed), 10, 3);
lean_closure_set(x_822, 0, x_10);
lean_closure_set(x_822, 1, x_1);
lean_closure_set(x_822, 2, x_818);
x_823 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_820, x_822, x_4, x_5, x_6, x_7, x_821);
return x_823;
}
else
{
uint8_t x_824; 
lean_dec(x_818);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_824 = !lean_is_exclusive(x_819);
if (x_824 == 0)
{
return x_819;
}
else
{
lean_object* x_825; lean_object* x_826; lean_object* x_827; 
x_825 = lean_ctor_get(x_819, 0);
x_826 = lean_ctor_get(x_819, 1);
lean_inc(x_826);
lean_inc(x_825);
lean_dec(x_819);
x_827 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_827, 0, x_825);
lean_ctor_set(x_827, 1, x_826);
return x_827;
}
}
}
}
else
{
lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; 
lean_dec(x_733);
lean_dec(x_1);
x_828 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_828, 0, x_10);
x_829 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_830 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_830, 0, x_829);
lean_ctor_set(x_830, 1, x_828);
x_831 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_832 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_832, 0, x_830);
lean_ctor_set(x_832, 1, x_831);
x_833 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_832, x_4, x_5, x_6, x_7, x_732);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_833;
}
}
case 10:
{
lean_object* x_834; lean_object* x_835; 
x_834 = lean_ctor_get(x_9, 1);
lean_inc(x_834);
lean_dec(x_9);
x_835 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_835) == 4)
{
lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; 
x_836 = lean_ctor_get(x_835, 0);
lean_inc(x_836);
lean_dec(x_835);
x_837 = lean_st_ref_get(x_7, x_834);
x_838 = lean_ctor_get(x_837, 0);
lean_inc(x_838);
x_839 = lean_ctor_get(x_837, 1);
lean_inc(x_839);
lean_dec(x_837);
x_840 = lean_ctor_get(x_838, 0);
lean_inc(x_840);
lean_dec(x_838);
x_841 = lean_ctor_get(x_1, 0);
lean_inc(x_841);
x_842 = lean_ctor_get(x_1, 2);
lean_inc(x_842);
x_843 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_842, x_840, x_836);
if (lean_obj_tag(x_843) == 0)
{
lean_object* x_844; lean_object* x_845; 
lean_inc(x_841);
x_844 = l_Lean_Name_append___main(x_836, x_841);
lean_inc(x_836);
x_845 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_836, x_4, x_5, x_6, x_7, x_839);
if (lean_obj_tag(x_845) == 0)
{
lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; 
x_846 = lean_ctor_get(x_845, 0);
lean_inc(x_846);
x_847 = lean_ctor_get(x_845, 1);
lean_inc(x_847);
lean_dec(x_845);
x_848 = l_Lean_ConstantInfo_type(x_846);
x_849 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_848);
x_850 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_848, x_849, x_4, x_5, x_6, x_7, x_847);
if (lean_obj_tag(x_850) == 0)
{
lean_object* x_851; lean_object* x_852; uint8_t x_853; lean_object* x_905; uint8_t x_906; 
x_851 = lean_ctor_get(x_850, 0);
lean_inc(x_851);
x_852 = lean_ctor_get(x_850, 1);
lean_inc(x_852);
lean_dec(x_850);
x_905 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_906 = l_Lean_Expr_isConstOf(x_851, x_905);
if (x_906 == 0)
{
lean_object* x_907; uint8_t x_908; 
x_907 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_908 = l_Lean_Expr_isConstOf(x_851, x_907);
lean_dec(x_851);
x_853 = x_908;
goto block_904;
}
else
{
uint8_t x_909; 
lean_dec(x_851);
x_909 = 1;
x_853 = x_909;
goto block_904;
}
block_904:
{
if (x_853 == 0)
{
lean_object* x_854; 
lean_dec(x_848);
lean_dec(x_846);
lean_dec(x_844);
lean_dec(x_842);
lean_dec(x_840);
lean_dec(x_836);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_854 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_852);
if (lean_obj_tag(x_854) == 0)
{
lean_object* x_855; 
x_855 = lean_ctor_get(x_854, 0);
lean_inc(x_855);
if (lean_obj_tag(x_855) == 0)
{
lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; 
lean_dec(x_1);
x_856 = lean_ctor_get(x_854, 1);
lean_inc(x_856);
lean_dec(x_854);
x_857 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_857, 0, x_841);
x_858 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_859 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_859, 0, x_858);
lean_ctor_set(x_859, 1, x_857);
x_860 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_861 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_861, 0, x_859);
lean_ctor_set(x_861, 1, x_860);
x_862 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_862, 0, x_10);
x_863 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_863, 0, x_861);
lean_ctor_set(x_863, 1, x_862);
x_864 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_865 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_865, 0, x_863);
lean_ctor_set(x_865, 1, x_864);
x_866 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_865, x_4, x_5, x_6, x_7, x_856);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_866;
}
else
{
lean_object* x_867; lean_object* x_868; uint8_t x_869; 
lean_dec(x_841);
lean_dec(x_10);
x_867 = lean_ctor_get(x_854, 1);
lean_inc(x_867);
lean_dec(x_854);
x_868 = lean_ctor_get(x_855, 0);
lean_inc(x_868);
lean_dec(x_855);
x_869 = 0;
x_2 = x_868;
x_3 = x_869;
x_8 = x_867;
goto _start;
}
}
else
{
uint8_t x_871; 
lean_dec(x_841);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_871 = !lean_is_exclusive(x_854);
if (x_871 == 0)
{
return x_854;
}
else
{
lean_object* x_872; lean_object* x_873; lean_object* x_874; 
x_872 = lean_ctor_get(x_854, 0);
x_873 = lean_ctor_get(x_854, 1);
lean_inc(x_873);
lean_inc(x_872);
lean_dec(x_854);
x_874 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_874, 0, x_872);
lean_ctor_set(x_874, 1, x_873);
return x_874;
}
}
}
else
{
lean_object* x_875; 
x_875 = l_Lean_ConstantInfo_value_x3f(x_846);
lean_dec(x_846);
if (lean_obj_tag(x_875) == 0)
{
lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; 
lean_dec(x_848);
lean_dec(x_844);
lean_dec(x_842);
lean_dec(x_840);
lean_dec(x_836);
lean_dec(x_1);
x_876 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_876, 0, x_841);
x_877 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_878 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_878, 0, x_877);
lean_ctor_set(x_878, 1, x_876);
x_879 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_880 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_880, 0, x_878);
lean_ctor_set(x_880, 1, x_879);
x_881 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_881, 0, x_10);
x_882 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_882, 0, x_880);
lean_ctor_set(x_882, 1, x_881);
x_883 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_884 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_884, 0, x_882);
lean_ctor_set(x_884, 1, x_883);
x_885 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_884, x_4, x_5, x_6, x_7, x_852);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_885;
}
else
{
lean_object* x_886; lean_object* x_887; 
lean_dec(x_841);
x_886 = lean_ctor_get(x_875, 0);
lean_inc(x_886);
lean_dec(x_875);
x_887 = l_Lean_Environment_getModuleIdxFor_x3f(x_840, x_836);
lean_dec(x_840);
if (lean_obj_tag(x_887) == 0)
{
lean_object* x_888; lean_object* x_889; lean_object* x_890; 
x_888 = l_Lean_mkAppStx___closed__4;
x_889 = lean_box(0);
x_890 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45(x_1, x_886, x_888, x_848, x_844, x_842, x_836, x_10, x_849, x_889, x_4, x_5, x_6, x_7, x_852);
return x_890;
}
else
{
lean_dec(x_887);
if (x_3 == 0)
{
lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; uint8_t x_897; 
lean_dec(x_886);
lean_dec(x_848);
lean_dec(x_844);
lean_dec(x_842);
lean_dec(x_10);
lean_dec(x_1);
x_891 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_891, 0, x_836);
x_892 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_893 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_893, 0, x_892);
lean_ctor_set(x_893, 1, x_891);
x_894 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_895 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_895, 0, x_893);
lean_ctor_set(x_895, 1, x_894);
x_896 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_895, x_4, x_5, x_6, x_7, x_852);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_897 = !lean_is_exclusive(x_896);
if (x_897 == 0)
{
return x_896;
}
else
{
lean_object* x_898; lean_object* x_899; lean_object* x_900; 
x_898 = lean_ctor_get(x_896, 0);
x_899 = lean_ctor_get(x_896, 1);
lean_inc(x_899);
lean_inc(x_898);
lean_dec(x_896);
x_900 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_900, 0, x_898);
lean_ctor_set(x_900, 1, x_899);
return x_900;
}
}
else
{
lean_object* x_901; lean_object* x_902; lean_object* x_903; 
x_901 = l_Lean_mkAppStx___closed__4;
x_902 = lean_box(0);
x_903 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45(x_1, x_886, x_901, x_848, x_844, x_842, x_836, x_10, x_849, x_902, x_4, x_5, x_6, x_7, x_852);
return x_903;
}
}
}
}
}
}
else
{
uint8_t x_910; 
lean_dec(x_848);
lean_dec(x_846);
lean_dec(x_844);
lean_dec(x_842);
lean_dec(x_841);
lean_dec(x_840);
lean_dec(x_836);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_910 = !lean_is_exclusive(x_850);
if (x_910 == 0)
{
return x_850;
}
else
{
lean_object* x_911; lean_object* x_912; lean_object* x_913; 
x_911 = lean_ctor_get(x_850, 0);
x_912 = lean_ctor_get(x_850, 1);
lean_inc(x_912);
lean_inc(x_911);
lean_dec(x_850);
x_913 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_913, 0, x_911);
lean_ctor_set(x_913, 1, x_912);
return x_913;
}
}
}
else
{
uint8_t x_914; 
lean_dec(x_844);
lean_dec(x_842);
lean_dec(x_841);
lean_dec(x_840);
lean_dec(x_836);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_914 = !lean_is_exclusive(x_845);
if (x_914 == 0)
{
return x_845;
}
else
{
lean_object* x_915; lean_object* x_916; lean_object* x_917; 
x_915 = lean_ctor_get(x_845, 0);
x_916 = lean_ctor_get(x_845, 1);
lean_inc(x_916);
lean_inc(x_915);
lean_dec(x_845);
x_917 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_917, 0, x_915);
lean_ctor_set(x_917, 1, x_916);
return x_917;
}
}
}
else
{
lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; 
lean_dec(x_842);
lean_dec(x_841);
lean_dec(x_840);
lean_dec(x_836);
x_918 = lean_ctor_get(x_843, 0);
lean_inc(x_918);
lean_dec(x_843);
x_919 = lean_box(0);
x_920 = l_Lean_mkConst(x_918, x_919);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_920);
x_921 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_920, x_4, x_5, x_6, x_7, x_839);
if (lean_obj_tag(x_921) == 0)
{
lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
x_922 = lean_ctor_get(x_921, 0);
lean_inc(x_922);
x_923 = lean_ctor_get(x_921, 1);
lean_inc(x_923);
lean_dec(x_921);
x_924 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__46___boxed), 10, 3);
lean_closure_set(x_924, 0, x_10);
lean_closure_set(x_924, 1, x_1);
lean_closure_set(x_924, 2, x_920);
x_925 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_922, x_924, x_4, x_5, x_6, x_7, x_923);
return x_925;
}
else
{
uint8_t x_926; 
lean_dec(x_920);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_926 = !lean_is_exclusive(x_921);
if (x_926 == 0)
{
return x_921;
}
else
{
lean_object* x_927; lean_object* x_928; lean_object* x_929; 
x_927 = lean_ctor_get(x_921, 0);
x_928 = lean_ctor_get(x_921, 1);
lean_inc(x_928);
lean_inc(x_927);
lean_dec(x_921);
x_929 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_929, 0, x_927);
lean_ctor_set(x_929, 1, x_928);
return x_929;
}
}
}
}
else
{
lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; 
lean_dec(x_835);
lean_dec(x_1);
x_930 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_930, 0, x_10);
x_931 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_932 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_932, 0, x_931);
lean_ctor_set(x_932, 1, x_930);
x_933 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_934 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_934, 0, x_932);
lean_ctor_set(x_934, 1, x_933);
x_935 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_934, x_4, x_5, x_6, x_7, x_834);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_935;
}
}
case 11:
{
lean_object* x_936; lean_object* x_937; 
x_936 = lean_ctor_get(x_9, 1);
lean_inc(x_936);
lean_dec(x_9);
x_937 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_937) == 4)
{
lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; 
x_938 = lean_ctor_get(x_937, 0);
lean_inc(x_938);
lean_dec(x_937);
x_939 = lean_st_ref_get(x_7, x_936);
x_940 = lean_ctor_get(x_939, 0);
lean_inc(x_940);
x_941 = lean_ctor_get(x_939, 1);
lean_inc(x_941);
lean_dec(x_939);
x_942 = lean_ctor_get(x_940, 0);
lean_inc(x_942);
lean_dec(x_940);
x_943 = lean_ctor_get(x_1, 0);
lean_inc(x_943);
x_944 = lean_ctor_get(x_1, 2);
lean_inc(x_944);
x_945 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_944, x_942, x_938);
if (lean_obj_tag(x_945) == 0)
{
lean_object* x_946; lean_object* x_947; 
lean_inc(x_943);
x_946 = l_Lean_Name_append___main(x_938, x_943);
lean_inc(x_938);
x_947 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_938, x_4, x_5, x_6, x_7, x_941);
if (lean_obj_tag(x_947) == 0)
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; 
x_948 = lean_ctor_get(x_947, 0);
lean_inc(x_948);
x_949 = lean_ctor_get(x_947, 1);
lean_inc(x_949);
lean_dec(x_947);
x_950 = l_Lean_ConstantInfo_type(x_948);
x_951 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_950);
x_952 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_950, x_951, x_4, x_5, x_6, x_7, x_949);
if (lean_obj_tag(x_952) == 0)
{
lean_object* x_953; lean_object* x_954; uint8_t x_955; lean_object* x_1007; uint8_t x_1008; 
x_953 = lean_ctor_get(x_952, 0);
lean_inc(x_953);
x_954 = lean_ctor_get(x_952, 1);
lean_inc(x_954);
lean_dec(x_952);
x_1007 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_1008 = l_Lean_Expr_isConstOf(x_953, x_1007);
if (x_1008 == 0)
{
lean_object* x_1009; uint8_t x_1010; 
x_1009 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_1010 = l_Lean_Expr_isConstOf(x_953, x_1009);
lean_dec(x_953);
x_955 = x_1010;
goto block_1006;
}
else
{
uint8_t x_1011; 
lean_dec(x_953);
x_1011 = 1;
x_955 = x_1011;
goto block_1006;
}
block_1006:
{
if (x_955 == 0)
{
lean_object* x_956; 
lean_dec(x_950);
lean_dec(x_948);
lean_dec(x_946);
lean_dec(x_944);
lean_dec(x_942);
lean_dec(x_938);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_956 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_954);
if (lean_obj_tag(x_956) == 0)
{
lean_object* x_957; 
x_957 = lean_ctor_get(x_956, 0);
lean_inc(x_957);
if (lean_obj_tag(x_957) == 0)
{
lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; 
lean_dec(x_1);
x_958 = lean_ctor_get(x_956, 1);
lean_inc(x_958);
lean_dec(x_956);
x_959 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_959, 0, x_943);
x_960 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_961 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_961, 0, x_960);
lean_ctor_set(x_961, 1, x_959);
x_962 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_963 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_963, 0, x_961);
lean_ctor_set(x_963, 1, x_962);
x_964 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_964, 0, x_10);
x_965 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_965, 0, x_963);
lean_ctor_set(x_965, 1, x_964);
x_966 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_967 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_967, 0, x_965);
lean_ctor_set(x_967, 1, x_966);
x_968 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_967, x_4, x_5, x_6, x_7, x_958);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_968;
}
else
{
lean_object* x_969; lean_object* x_970; uint8_t x_971; 
lean_dec(x_943);
lean_dec(x_10);
x_969 = lean_ctor_get(x_956, 1);
lean_inc(x_969);
lean_dec(x_956);
x_970 = lean_ctor_get(x_957, 0);
lean_inc(x_970);
lean_dec(x_957);
x_971 = 0;
x_2 = x_970;
x_3 = x_971;
x_8 = x_969;
goto _start;
}
}
else
{
uint8_t x_973; 
lean_dec(x_943);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_973 = !lean_is_exclusive(x_956);
if (x_973 == 0)
{
return x_956;
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; 
x_974 = lean_ctor_get(x_956, 0);
x_975 = lean_ctor_get(x_956, 1);
lean_inc(x_975);
lean_inc(x_974);
lean_dec(x_956);
x_976 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_976, 0, x_974);
lean_ctor_set(x_976, 1, x_975);
return x_976;
}
}
}
else
{
lean_object* x_977; 
x_977 = l_Lean_ConstantInfo_value_x3f(x_948);
lean_dec(x_948);
if (lean_obj_tag(x_977) == 0)
{
lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; 
lean_dec(x_950);
lean_dec(x_946);
lean_dec(x_944);
lean_dec(x_942);
lean_dec(x_938);
lean_dec(x_1);
x_978 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_978, 0, x_943);
x_979 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_980 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_980, 0, x_979);
lean_ctor_set(x_980, 1, x_978);
x_981 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_982 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_982, 0, x_980);
lean_ctor_set(x_982, 1, x_981);
x_983 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_983, 0, x_10);
x_984 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_984, 0, x_982);
lean_ctor_set(x_984, 1, x_983);
x_985 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_986 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_986, 0, x_984);
lean_ctor_set(x_986, 1, x_985);
x_987 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_986, x_4, x_5, x_6, x_7, x_954);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_987;
}
else
{
lean_object* x_988; lean_object* x_989; 
lean_dec(x_943);
x_988 = lean_ctor_get(x_977, 0);
lean_inc(x_988);
lean_dec(x_977);
x_989 = l_Lean_Environment_getModuleIdxFor_x3f(x_942, x_938);
lean_dec(x_942);
if (lean_obj_tag(x_989) == 0)
{
lean_object* x_990; lean_object* x_991; lean_object* x_992; 
x_990 = l_Lean_mkAppStx___closed__4;
x_991 = lean_box(0);
x_992 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50(x_1, x_988, x_990, x_950, x_946, x_944, x_938, x_10, x_951, x_991, x_4, x_5, x_6, x_7, x_954);
return x_992;
}
else
{
lean_dec(x_989);
if (x_3 == 0)
{
lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; uint8_t x_999; 
lean_dec(x_988);
lean_dec(x_950);
lean_dec(x_946);
lean_dec(x_944);
lean_dec(x_10);
lean_dec(x_1);
x_993 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_993, 0, x_938);
x_994 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_995 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_995, 0, x_994);
lean_ctor_set(x_995, 1, x_993);
x_996 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_997 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_997, 0, x_995);
lean_ctor_set(x_997, 1, x_996);
x_998 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_997, x_4, x_5, x_6, x_7, x_954);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_999 = !lean_is_exclusive(x_998);
if (x_999 == 0)
{
return x_998;
}
else
{
lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; 
x_1000 = lean_ctor_get(x_998, 0);
x_1001 = lean_ctor_get(x_998, 1);
lean_inc(x_1001);
lean_inc(x_1000);
lean_dec(x_998);
x_1002 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1002, 0, x_1000);
lean_ctor_set(x_1002, 1, x_1001);
return x_1002;
}
}
else
{
lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; 
x_1003 = l_Lean_mkAppStx___closed__4;
x_1004 = lean_box(0);
x_1005 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50(x_1, x_988, x_1003, x_950, x_946, x_944, x_938, x_10, x_951, x_1004, x_4, x_5, x_6, x_7, x_954);
return x_1005;
}
}
}
}
}
}
else
{
uint8_t x_1012; 
lean_dec(x_950);
lean_dec(x_948);
lean_dec(x_946);
lean_dec(x_944);
lean_dec(x_943);
lean_dec(x_942);
lean_dec(x_938);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1012 = !lean_is_exclusive(x_952);
if (x_1012 == 0)
{
return x_952;
}
else
{
lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; 
x_1013 = lean_ctor_get(x_952, 0);
x_1014 = lean_ctor_get(x_952, 1);
lean_inc(x_1014);
lean_inc(x_1013);
lean_dec(x_952);
x_1015 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1015, 0, x_1013);
lean_ctor_set(x_1015, 1, x_1014);
return x_1015;
}
}
}
else
{
uint8_t x_1016; 
lean_dec(x_946);
lean_dec(x_944);
lean_dec(x_943);
lean_dec(x_942);
lean_dec(x_938);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1016 = !lean_is_exclusive(x_947);
if (x_1016 == 0)
{
return x_947;
}
else
{
lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; 
x_1017 = lean_ctor_get(x_947, 0);
x_1018 = lean_ctor_get(x_947, 1);
lean_inc(x_1018);
lean_inc(x_1017);
lean_dec(x_947);
x_1019 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1019, 0, x_1017);
lean_ctor_set(x_1019, 1, x_1018);
return x_1019;
}
}
}
else
{
lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; 
lean_dec(x_944);
lean_dec(x_943);
lean_dec(x_942);
lean_dec(x_938);
x_1020 = lean_ctor_get(x_945, 0);
lean_inc(x_1020);
lean_dec(x_945);
x_1021 = lean_box(0);
x_1022 = l_Lean_mkConst(x_1020, x_1021);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1022);
x_1023 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_1022, x_4, x_5, x_6, x_7, x_941);
if (lean_obj_tag(x_1023) == 0)
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; 
x_1024 = lean_ctor_get(x_1023, 0);
lean_inc(x_1024);
x_1025 = lean_ctor_get(x_1023, 1);
lean_inc(x_1025);
lean_dec(x_1023);
x_1026 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__51___boxed), 10, 3);
lean_closure_set(x_1026, 0, x_10);
lean_closure_set(x_1026, 1, x_1);
lean_closure_set(x_1026, 2, x_1022);
x_1027 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_1024, x_1026, x_4, x_5, x_6, x_7, x_1025);
return x_1027;
}
else
{
uint8_t x_1028; 
lean_dec(x_1022);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1028 = !lean_is_exclusive(x_1023);
if (x_1028 == 0)
{
return x_1023;
}
else
{
lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; 
x_1029 = lean_ctor_get(x_1023, 0);
x_1030 = lean_ctor_get(x_1023, 1);
lean_inc(x_1030);
lean_inc(x_1029);
lean_dec(x_1023);
x_1031 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1031, 0, x_1029);
lean_ctor_set(x_1031, 1, x_1030);
return x_1031;
}
}
}
}
else
{
lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
lean_dec(x_937);
lean_dec(x_1);
x_1032 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1032, 0, x_10);
x_1033 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_1034 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1034, 0, x_1033);
lean_ctor_set(x_1034, 1, x_1032);
x_1035 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_1036 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1036, 0, x_1034);
lean_ctor_set(x_1036, 1, x_1035);
x_1037 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_1036, x_4, x_5, x_6, x_7, x_936);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_1037;
}
}
default: 
{
lean_object* x_1038; lean_object* x_1039; 
x_1038 = lean_ctor_get(x_9, 1);
lean_inc(x_1038);
lean_dec(x_9);
x_1039 = l_Lean_Expr_getAppFn(x_10);
if (lean_obj_tag(x_1039) == 4)
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; 
x_1040 = lean_ctor_get(x_1039, 0);
lean_inc(x_1040);
lean_dec(x_1039);
x_1041 = lean_st_ref_get(x_7, x_1038);
x_1042 = lean_ctor_get(x_1041, 0);
lean_inc(x_1042);
x_1043 = lean_ctor_get(x_1041, 1);
lean_inc(x_1043);
lean_dec(x_1041);
x_1044 = lean_ctor_get(x_1042, 0);
lean_inc(x_1044);
lean_dec(x_1042);
x_1045 = lean_ctor_get(x_1, 0);
lean_inc(x_1045);
x_1046 = lean_ctor_get(x_1, 2);
lean_inc(x_1046);
x_1047 = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor(x_1046, x_1044, x_1040);
if (lean_obj_tag(x_1047) == 0)
{
lean_object* x_1048; lean_object* x_1049; 
lean_inc(x_1045);
x_1048 = l_Lean_Name_append___main(x_1040, x_1045);
lean_inc(x_1040);
x_1049 = l_Lean_getConstInfo___at_Lean_Meta_getParamNamesImp___spec__1(x_1040, x_4, x_5, x_6, x_7, x_1043);
if (lean_obj_tag(x_1049) == 0)
{
lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; 
x_1050 = lean_ctor_get(x_1049, 0);
lean_inc(x_1050);
x_1051 = lean_ctor_get(x_1049, 1);
lean_inc(x_1051);
lean_dec(x_1049);
x_1052 = l_Lean_ConstantInfo_type(x_1050);
x_1053 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1052);
x_1054 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_1052, x_1053, x_4, x_5, x_6, x_7, x_1051);
if (lean_obj_tag(x_1054) == 0)
{
lean_object* x_1055; lean_object* x_1056; uint8_t x_1057; lean_object* x_1109; uint8_t x_1110; 
x_1055 = lean_ctor_get(x_1054, 0);
lean_inc(x_1055);
x_1056 = lean_ctor_get(x_1054, 1);
lean_inc(x_1056);
lean_dec(x_1054);
x_1109 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_1110 = l_Lean_Expr_isConstOf(x_1055, x_1109);
if (x_1110 == 0)
{
lean_object* x_1111; uint8_t x_1112; 
x_1111 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_1112 = l_Lean_Expr_isConstOf(x_1055, x_1111);
lean_dec(x_1055);
x_1057 = x_1112;
goto block_1108;
}
else
{
uint8_t x_1113; 
lean_dec(x_1055);
x_1113 = 1;
x_1057 = x_1113;
goto block_1108;
}
block_1108:
{
if (x_1057 == 0)
{
lean_object* x_1058; 
lean_dec(x_1052);
lean_dec(x_1050);
lean_dec(x_1048);
lean_dec(x_1046);
lean_dec(x_1044);
lean_dec(x_1040);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_1058 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_10, x_4, x_5, x_6, x_7, x_1056);
if (lean_obj_tag(x_1058) == 0)
{
lean_object* x_1059; 
x_1059 = lean_ctor_get(x_1058, 0);
lean_inc(x_1059);
if (lean_obj_tag(x_1059) == 0)
{
lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; 
lean_dec(x_1);
x_1060 = lean_ctor_get(x_1058, 1);
lean_inc(x_1060);
lean_dec(x_1058);
x_1061 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_1061, 0, x_1045);
x_1062 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_1063 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1063, 0, x_1062);
lean_ctor_set(x_1063, 1, x_1061);
x_1064 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__6;
x_1065 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1065, 0, x_1063);
lean_ctor_set(x_1065, 1, x_1064);
x_1066 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1066, 0, x_10);
x_1067 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1067, 0, x_1065);
lean_ctor_set(x_1067, 1, x_1066);
x_1068 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_1069 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1069, 0, x_1067);
lean_ctor_set(x_1069, 1, x_1068);
x_1070 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_1069, x_4, x_5, x_6, x_7, x_1060);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_1070;
}
else
{
lean_object* x_1071; lean_object* x_1072; uint8_t x_1073; 
lean_dec(x_1045);
lean_dec(x_10);
x_1071 = lean_ctor_get(x_1058, 1);
lean_inc(x_1071);
lean_dec(x_1058);
x_1072 = lean_ctor_get(x_1059, 0);
lean_inc(x_1072);
lean_dec(x_1059);
x_1073 = 0;
x_2 = x_1072;
x_3 = x_1073;
x_8 = x_1071;
goto _start;
}
}
else
{
uint8_t x_1075; 
lean_dec(x_1045);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1075 = !lean_is_exclusive(x_1058);
if (x_1075 == 0)
{
return x_1058;
}
else
{
lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; 
x_1076 = lean_ctor_get(x_1058, 0);
x_1077 = lean_ctor_get(x_1058, 1);
lean_inc(x_1077);
lean_inc(x_1076);
lean_dec(x_1058);
x_1078 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1078, 0, x_1076);
lean_ctor_set(x_1078, 1, x_1077);
return x_1078;
}
}
}
else
{
lean_object* x_1079; 
x_1079 = l_Lean_ConstantInfo_value_x3f(x_1050);
lean_dec(x_1050);
if (lean_obj_tag(x_1079) == 0)
{
lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; 
lean_dec(x_1052);
lean_dec(x_1048);
lean_dec(x_1046);
lean_dec(x_1044);
lean_dec(x_1040);
lean_dec(x_1);
x_1080 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_1080, 0, x_1045);
x_1081 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__4;
x_1082 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1082, 0, x_1081);
lean_ctor_set(x_1082, 1, x_1080);
x_1083 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__8;
x_1084 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1084, 0, x_1082);
lean_ctor_set(x_1084, 1, x_1083);
x_1085 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1085, 0, x_10);
x_1086 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1086, 0, x_1084);
lean_ctor_set(x_1086, 1, x_1085);
x_1087 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_1088 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1088, 0, x_1086);
lean_ctor_set(x_1088, 1, x_1087);
x_1089 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_1088, x_4, x_5, x_6, x_7, x_1056);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_1089;
}
else
{
lean_object* x_1090; lean_object* x_1091; 
lean_dec(x_1045);
x_1090 = lean_ctor_get(x_1079, 0);
lean_inc(x_1090);
lean_dec(x_1079);
x_1091 = l_Lean_Environment_getModuleIdxFor_x3f(x_1044, x_1040);
lean_dec(x_1044);
if (lean_obj_tag(x_1091) == 0)
{
lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; 
x_1092 = l_Lean_mkAppStx___closed__4;
x_1093 = lean_box(0);
x_1094 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55(x_1, x_1090, x_1092, x_1052, x_1048, x_1046, x_1040, x_10, x_1053, x_1093, x_4, x_5, x_6, x_7, x_1056);
return x_1094;
}
else
{
lean_dec(x_1091);
if (x_3 == 0)
{
lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; uint8_t x_1101; 
lean_dec(x_1090);
lean_dec(x_1052);
lean_dec(x_1048);
lean_dec(x_1046);
lean_dec(x_10);
lean_dec(x_1);
x_1095 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_1095, 0, x_1040);
x_1096 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__10;
x_1097 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1097, 0, x_1096);
lean_ctor_set(x_1097, 1, x_1095);
x_1098 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__12;
x_1099 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1099, 0, x_1097);
lean_ctor_set(x_1099, 1, x_1098);
x_1100 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_1099, x_4, x_5, x_6, x_7, x_1056);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1101 = !lean_is_exclusive(x_1100);
if (x_1101 == 0)
{
return x_1100;
}
else
{
lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; 
x_1102 = lean_ctor_get(x_1100, 0);
x_1103 = lean_ctor_get(x_1100, 1);
lean_inc(x_1103);
lean_inc(x_1102);
lean_dec(x_1100);
x_1104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1104, 0, x_1102);
lean_ctor_set(x_1104, 1, x_1103);
return x_1104;
}
}
else
{
lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; 
x_1105 = l_Lean_mkAppStx___closed__4;
x_1106 = lean_box(0);
x_1107 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55(x_1, x_1090, x_1105, x_1052, x_1048, x_1046, x_1040, x_10, x_1053, x_1106, x_4, x_5, x_6, x_7, x_1056);
return x_1107;
}
}
}
}
}
}
else
{
uint8_t x_1114; 
lean_dec(x_1052);
lean_dec(x_1050);
lean_dec(x_1048);
lean_dec(x_1046);
lean_dec(x_1045);
lean_dec(x_1044);
lean_dec(x_1040);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1114 = !lean_is_exclusive(x_1054);
if (x_1114 == 0)
{
return x_1054;
}
else
{
lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; 
x_1115 = lean_ctor_get(x_1054, 0);
x_1116 = lean_ctor_get(x_1054, 1);
lean_inc(x_1116);
lean_inc(x_1115);
lean_dec(x_1054);
x_1117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1117, 0, x_1115);
lean_ctor_set(x_1117, 1, x_1116);
return x_1117;
}
}
}
else
{
uint8_t x_1118; 
lean_dec(x_1048);
lean_dec(x_1046);
lean_dec(x_1045);
lean_dec(x_1044);
lean_dec(x_1040);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1118 = !lean_is_exclusive(x_1049);
if (x_1118 == 0)
{
return x_1049;
}
else
{
lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; 
x_1119 = lean_ctor_get(x_1049, 0);
x_1120 = lean_ctor_get(x_1049, 1);
lean_inc(x_1120);
lean_inc(x_1119);
lean_dec(x_1049);
x_1121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1121, 0, x_1119);
lean_ctor_set(x_1121, 1, x_1120);
return x_1121;
}
}
}
else
{
lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; 
lean_dec(x_1046);
lean_dec(x_1045);
lean_dec(x_1044);
lean_dec(x_1040);
x_1122 = lean_ctor_get(x_1047, 0);
lean_inc(x_1122);
lean_dec(x_1047);
x_1123 = lean_box(0);
x_1124 = l_Lean_mkConst(x_1122, x_1123);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1124);
x_1125 = l_Lean_Meta_inferType___at___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___spec__1(x_1124, x_4, x_5, x_6, x_7, x_1043);
if (lean_obj_tag(x_1125) == 0)
{
lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; 
x_1126 = lean_ctor_get(x_1125, 0);
lean_inc(x_1126);
x_1127 = lean_ctor_get(x_1125, 1);
lean_inc(x_1127);
lean_dec(x_1125);
x_1128 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___lambda__56___boxed), 10, 3);
lean_closure_set(x_1128, 0, x_10);
lean_closure_set(x_1128, 1, x_1);
lean_closure_set(x_1128, 2, x_1124);
x_1129 = l_Lean_Meta_forallTelescope___at_Lean_ParserCompiler_compileParserBody___spec__1___rarg(x_1126, x_1128, x_4, x_5, x_6, x_7, x_1127);
return x_1129;
}
else
{
uint8_t x_1130; 
lean_dec(x_1124);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1130 = !lean_is_exclusive(x_1125);
if (x_1130 == 0)
{
return x_1125;
}
else
{
lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; 
x_1131 = lean_ctor_get(x_1125, 0);
x_1132 = lean_ctor_get(x_1125, 1);
lean_inc(x_1132);
lean_inc(x_1131);
lean_dec(x_1125);
x_1133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1133, 0, x_1131);
lean_ctor_set(x_1133, 1, x_1132);
return x_1133;
}
}
}
}
else
{
lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; 
lean_dec(x_1039);
lean_dec(x_1);
x_1134 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1134, 0, x_10);
x_1135 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__2;
x_1136 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1136, 0, x_1135);
lean_ctor_set(x_1136, 1, x_1134);
x_1137 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_1138 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1138, 0, x_1136);
lean_ctor_set(x_1138, 1, x_1137);
x_1139 = l_Lean_throwError___at_Lean_Meta_getMVarDecl___spec__1___rarg(x_1138, x_4, x_5, x_6, x_7, x_1038);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_1139;
}
}
}
}
else
{
uint8_t x_1140; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1140 = !lean_is_exclusive(x_9);
if (x_1140 == 0)
{
return x_9;
}
else
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; 
x_1141 = lean_ctor_get(x_9, 0);
x_1142 = lean_ctor_get(x_9, 1);
lean_inc(x_1142);
lean_inc(x_1141);
lean_dec(x_9);
x_1143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1143, 0, x_1141);
lean_ctor_set(x_1143, 1, x_1142);
return x_1143;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParserBody___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__7___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__12___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__15___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__16___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Meta_mkLambdaFVars___at_Lean_ParserCompiler_compileParserBody___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkLambdaFVars___at_Lean_ParserCompiler_compileParserBody___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__20___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__21___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__22(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__23___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__24___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__25(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__26___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__27___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__28(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__29___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__30___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__31___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__31(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__32___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__33___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__34___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_ParserCompiler_compileParserBody___spec__34(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__35___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__36___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__21(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__22(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__24(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__25(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__28___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__28(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__30(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__31___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__31(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__32___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__32(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__33___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__33(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__35(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__36___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__36(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__37___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__37(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__38___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__38(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__40(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__41___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__41(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__42___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__42(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__43___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__43(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__45(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__46___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__46(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__47___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__47(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__48___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__48(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__50(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__51___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__51(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__52___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__52(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__53___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__53(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__55(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_16;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___lambda__56___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_ParserCompiler_compileParserBody___rarg___lambda__56(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_compileParserBody___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_ParserCompiler_compileParser_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_ParserCompiler_compileParser_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParser_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParser___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Core_CoreM_inhabited___boxed), 3, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParser___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ParserCompiler_compileParser___rarg___closed__1;
x_2 = lean_alloc_closure((void*)(l_ReaderT_inhabited___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParser___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.ParserCompiler");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParser___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.ParserCompiler.compileParser");
return x_1;
}
}
static lean_object* _init_l_Lean_ParserCompiler_compileParser___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_ParserCompiler_compileParser___rarg___closed__3;
x_2 = l_Lean_ParserCompiler_compileParser___rarg___closed__4;
x_3 = lean_unsigned_to_nat(106u);
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_ParserCompiler_compileParser___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_box(0);
lean_inc(x_2);
x_10 = l_Lean_mkConst(x_2, x_9);
x_11 = l_Lean_Meta_State_inhabited___closed__1;
x_12 = lean_st_mk_ref(x_11, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_hasEval___rarg___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_13);
lean_inc(x_1);
x_16 = l_Lean_ParserCompiler_compileParserBody___rarg(x_1, x_10, x_4, x_15, x_13, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_13, x_18);
lean_dec(x_13);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_mk_syntax_ident(x_2);
x_23 = l_Lean_mkOptionalNode___closed__2;
x_24 = lean_array_push(x_23, x_22);
x_25 = l_Lean_nullKind;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
if (x_3 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = 1;
x_31 = l_Lean_addAttribute(x_21, x_29, x_26, x_30, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_31) == 0)
{
return x_31;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = lean_box(0);
lean_ctor_set_tag(x_31, 0);
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
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_1, 1);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 1;
x_42 = l_Lean_addAttribute(x_21, x_40, x_26, x_41, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_42) == 0)
{
return x_42;
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(0);
lean_ctor_set_tag(x_42, 0);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_ctor_get(x_19, 1);
lean_inc(x_49);
lean_dec(x_19);
x_50 = l_Lean_ParserCompiler_compileParser___rarg___closed__2;
x_51 = l_Lean_ParserCompiler_compileParser___rarg___closed__5;
x_52 = lean_panic_fn(x_50, x_51);
x_53 = lean_apply_4(x_52, x_5, x_6, x_7, x_49);
return x_53;
}
}
else
{
uint8_t x_54; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_16);
if (x_54 == 0)
{
return x_16;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_16, 0);
x_56 = lean_ctor_get(x_16, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_16);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_ParserCompiler_compileParser(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_compileParser___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_compileParser___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_ParserCompiler_compileParser___rarg(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_ParserCompiler_interpretParser_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
}
}
lean_object* l_Lean_ParserCompiler_interpretParser_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_interpretParser_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = l_Lean_throwError___at_Lean_registerInitAttr___spec__2___rarg(x_8, x_2, x_3, x_4, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
}
lean_object* l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_eval_const(x_9, x_10, x_1);
lean_dec(x_9);
x_12 = l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg(x_11, x_2, x_3, x_4, x_8);
lean_dec(x_11);
return x_12;
}
}
lean_object* l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_interpretParser___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_2);
x_8 = l_Lean_getConstInfo___at_Lean_registerInitAttr___spec__1(x_2, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_6, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_ConstantInfo_type(x_9);
lean_dec(x_9);
x_17 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_18 = l_Lean_Expr_isConstOf(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_20 = l_Lean_Expr_isConstOf(x_16, x_19);
lean_dec(x_16);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_15);
lean_free_object(x_11);
x_21 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_2, x_4, x_5, x_6, x_14);
lean_dec(x_2);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_apply_5(x_24, x_22, x_4, x_5, x_6, x_23);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
x_31 = l_Lean_KeyedDeclsAttribute_getValues___rarg(x_30, x_15, x_2);
lean_dec(x_15);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; lean_object* x_33; 
lean_free_object(x_11);
x_32 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_33 = l_Lean_ParserCompiler_compileParser___rarg(x_1, x_2, x_32, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
lean_dec(x_1);
x_36 = l_Lean_Name_append___main(x_2, x_35);
lean_dec(x_2);
x_37 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_36, x_4, x_5, x_6, x_34);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_36);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
return x_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_33, 0);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_33);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_42 = lean_ctor_get(x_31, 0);
lean_inc(x_42);
lean_dec(x_31);
lean_ctor_set(x_11, 0, x_42);
return x_11;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_16);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
x_44 = l_Lean_KeyedDeclsAttribute_getValues___rarg(x_43, x_15, x_2);
lean_dec(x_15);
lean_dec(x_43);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; lean_object* x_46; 
lean_free_object(x_11);
x_45 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_46 = l_Lean_ParserCompiler_compileParser___rarg(x_1, x_2, x_45, x_3, x_4, x_5, x_6, x_14);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = l_Lean_Name_append___main(x_2, x_48);
lean_dec(x_2);
x_50 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_49, x_4, x_5, x_6, x_47);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_49);
return x_50;
}
else
{
uint8_t x_51; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_46);
if (x_51 == 0)
{
return x_46;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_46, 0);
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_46);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_44, 0);
lean_inc(x_55);
lean_dec(x_44);
lean_ctor_set(x_11, 0, x_55);
return x_11;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_56 = lean_ctor_get(x_11, 0);
x_57 = lean_ctor_get(x_11, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_11);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_ConstantInfo_type(x_9);
lean_dec(x_9);
x_60 = l_Lean_ParserCompiler_compileParserBody___rarg___closed__13;
x_61 = l_Lean_Expr_isConstOf(x_59, x_60);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1;
x_63 = l_Lean_Expr_isConstOf(x_59, x_62);
lean_dec(x_59);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec(x_58);
x_64 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_2, x_4, x_5, x_6, x_57);
lean_dec(x_2);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_ctor_get(x_1, 3);
lean_inc(x_67);
lean_dec(x_1);
x_68 = lean_apply_5(x_67, x_65, x_4, x_5, x_6, x_66);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_69 = lean_ctor_get(x_64, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_71 = x_64;
} else {
 lean_dec_ref(x_64);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_1, 1);
lean_inc(x_73);
x_74 = l_Lean_KeyedDeclsAttribute_getValues___rarg(x_73, x_58, x_2);
lean_dec(x_58);
lean_dec(x_73);
if (lean_obj_tag(x_74) == 0)
{
uint8_t x_75; lean_object* x_76; 
x_75 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_76 = l_Lean_ParserCompiler_compileParser___rarg(x_1, x_2, x_75, x_3, x_4, x_5, x_6, x_57);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = lean_ctor_get(x_1, 0);
lean_inc(x_78);
lean_dec(x_1);
x_79 = l_Lean_Name_append___main(x_2, x_78);
lean_dec(x_2);
x_80 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_79, x_4, x_5, x_6, x_77);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_79);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_81 = lean_ctor_get(x_76, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_76, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_83 = x_76;
} else {
 lean_dec_ref(x_76);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_85 = lean_ctor_get(x_74, 0);
lean_inc(x_85);
lean_dec(x_74);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_57);
return x_86;
}
}
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_59);
x_87 = lean_ctor_get(x_1, 1);
lean_inc(x_87);
x_88 = l_Lean_KeyedDeclsAttribute_getValues___rarg(x_87, x_58, x_2);
lean_dec(x_58);
lean_dec(x_87);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; lean_object* x_90; 
x_89 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_90 = l_Lean_ParserCompiler_compileParser___rarg(x_1, x_2, x_89, x_3, x_4, x_5, x_6, x_57);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_ctor_get(x_1, 0);
lean_inc(x_92);
lean_dec(x_1);
x_93 = l_Lean_Name_append___main(x_2, x_92);
lean_dec(x_2);
x_94 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_93, x_4, x_5, x_6, x_91);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_93);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_95 = lean_ctor_get(x_90, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_97 = x_90;
} else {
 lean_dec_ref(x_90);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_99 = lean_ctor_get(x_88, 0);
lean_inc(x_99);
lean_dec(x_88);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_57);
return x_100;
}
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_8);
if (x_101 == 0)
{
return x_8;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_8, 0);
x_103 = lean_ctor_get(x_8, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_8);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
}
lean_object* l_Lean_ParserCompiler_interpretParser(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_interpretParser___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_ofExcept___at_Lean_ParserCompiler_interpretParser___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_evalConst___at_Lean_ParserCompiler_interpretParser___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_ParserCompiler_interpretParser___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_ParserCompiler_interpretParser___rarg(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Lean_KeyedDeclsAttribute_Table_insert___rarg(x_5, x_1, x_2);
lean_ctor_set(x_3, 1, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = l_Lean_KeyedDeclsAttribute_Table_insert___rarg(x_8, x_1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (x_4 == 0)
{
uint8_t x_9; lean_object* x_10; 
x_9 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Lean_ParserCompiler_interpretParser___rarg(x_1, x_3, x_9, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__1), 3, 2);
lean_closure_set(x_19, 0, x_3);
lean_closure_set(x_19, 1, x_11);
x_20 = l_Lean_PersistentEnvExtension_modifyState___rarg(x_18, x_16, x_19);
lean_dec(x_18);
x_21 = l_Lean_setEnv___at_Lean_KeyedDeclsAttribute_init___spec__5(x_20, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 1;
x_27 = l_Lean_ParserCompiler_compileParser___rarg(x_1, x_3, x_4, x_26, x_5, x_6, x_7, x_8);
return x_27;
}
}
}
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__2___boxed), 8, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Lean_Parser_registerParserAttributeHook(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_ParserCompiler_registerParserCompiler(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerParserCompiler___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l_Lean_ParserCompiler_registerParserCompiler___rarg___lambda__2(x_1, x_2, x_3, x_9, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_10;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_ReplaceExpr(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_WHNF(lean_object*);
lean_object* initialize_Lean_ParserCompiler_Attribute(lean_object*);
lean_object* initialize_Lean_Parser_Extension(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_ParserCompiler(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ReplaceExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ParserCompiler_Attribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1 = _init_l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_ParserCompiler_preprocessParserBody___rarg___lambda__1___closed__1);
l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1 = _init_l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1();
lean_mark_persistent(l_Array_iterateM_u2082Aux___main___at_Lean_ParserCompiler_compileParserBody___spec__4___rarg___closed__1);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__1 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__1();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__1);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__2 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__2();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__2);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__3 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__3();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__3);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__4 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__4();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__4);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__5 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__5();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__5);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__6 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__6();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__6);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__7 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__7();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__7);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__8 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__8();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__8);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__9 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__9();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__9);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__10 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__10();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__10);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__11 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__11();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__11);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__12 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__12();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__12);
l_Lean_ParserCompiler_compileParserBody___rarg___closed__13 = _init_l_Lean_ParserCompiler_compileParserBody___rarg___closed__13();
lean_mark_persistent(l_Lean_ParserCompiler_compileParserBody___rarg___closed__13);
l_Lean_ParserCompiler_compileParser___rarg___closed__1 = _init_l_Lean_ParserCompiler_compileParser___rarg___closed__1();
lean_mark_persistent(l_Lean_ParserCompiler_compileParser___rarg___closed__1);
l_Lean_ParserCompiler_compileParser___rarg___closed__2 = _init_l_Lean_ParserCompiler_compileParser___rarg___closed__2();
lean_mark_persistent(l_Lean_ParserCompiler_compileParser___rarg___closed__2);
l_Lean_ParserCompiler_compileParser___rarg___closed__3 = _init_l_Lean_ParserCompiler_compileParser___rarg___closed__3();
lean_mark_persistent(l_Lean_ParserCompiler_compileParser___rarg___closed__3);
l_Lean_ParserCompiler_compileParser___rarg___closed__4 = _init_l_Lean_ParserCompiler_compileParser___rarg___closed__4();
lean_mark_persistent(l_Lean_ParserCompiler_compileParser___rarg___closed__4);
l_Lean_ParserCompiler_compileParser___rarg___closed__5 = _init_l_Lean_ParserCompiler_compileParser___rarg___closed__5();
lean_mark_persistent(l_Lean_ParserCompiler_compileParser___rarg___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
