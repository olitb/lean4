// Lean compiler output
// Module: Lean.Elab.StructInst
// Imports: Init Lean.Util.FindExpr Lean.Elab.App Lean.Elab.Binders Lean.Elab.Quotation
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFields(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__2(lean_object*);
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(lean_object*);
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3;
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4;
extern lean_object* l_Lean_Name_getString_x21___closed__3;
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_expr_x3f___default;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__1;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1(lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f___at_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__4___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__7;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_fmt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1(lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_Struct_allDefault(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__6___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__2(lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__6;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11___boxed(lean_object**);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__2;
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__7(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__2;
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__8;
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasToString;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__5;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__6;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default;
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1(lean_object*);
lean_object* l_Std_mkHashMap___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__5;
lean_object* l_Lean_Elab_Term_StructInst_initFn____x40_Lean_Elab_StructInst___hyg_6358_(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__4;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__5;
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(lean_object*);
lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__4(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst(lean_object*);
lean_object* l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1;
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__3;
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref(lean_object*);
lean_object* l_Lean_Elab_Term_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__6(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object*, lean_object*, lean_object*);
lean_object* l_List_find_x3f___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_Struct_setFields(lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(lean_object*);
lean_object* l_Std_HashMap_toList___rarg(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__18;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__1(lean_object*);
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(lean_object*, lean_object*);
lean_object* l_List_map___main___rarg(lean_object*, lean_object*);
lean_object* l_Nat_max(lean_object*, lean_object*);
extern lean_object* l_Lean_formatKVMap___closed__1;
extern lean_object* l_Lean_Name_inhabited;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_formatField(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1(lean_object*);
lean_object* l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1;
lean_object* l_Lean_Elab_Term_synthesizeAppInstMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__6;
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__15;
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
extern lean_object* l_Lean_mkAppStx___closed__8;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_inhabited;
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__18;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4;
lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwTypeMismatchError___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1(lean_object*);
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__9(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__13;
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_inhabited;
extern lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___closed__5;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__2;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2;
lean_object* l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__28;
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__2;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__1;
lean_object* l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___boxed(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__9;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__9___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8;
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__4(lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__22;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__7(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1(lean_object*);
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__7;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__17;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple(lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields___boxed(lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__1;
lean_object* l_Array_filterAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default;
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(uint8_t, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(lean_object*);
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source_match__1(lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__4(lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__17;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2;
extern lean_object* l_Lean_formatEntry___closed__2;
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__1;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6;
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__8___rarg(lean_object*, lean_object*);
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__6;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_type_lparams(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4;
lean_object* l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2;
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__5(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__15;
uint8_t l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2;
lean_object* l_Lean_Meta_synthInstance_x3f___at_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__2(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__4(lean_object*);
lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1(lean_object*);
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1(lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__6;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__2;
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__6;
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f(lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__13;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2(lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__7___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(lean_object*, lean_object*);
extern lean_object* l_List_head_x21___rarg___closed__2;
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_0__Lean_Parser_Trie_toStringAux___spec__1(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4;
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___closed__1;
lean_object* l_List_redLength___main___rarg(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__16;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields_match__1(lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__9;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__3(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__2;
uint8_t l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(lean_object*);
lean_object* l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthInstanceImp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__3(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault___boxed(lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Id_Monad;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName___boxed(lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax(lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1(lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__3(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__4(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1(lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__3(lean_object*);
lean_object* l_Lean_mkSepStx(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__2(lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
extern lean_object* l_Lean_Format_sbracket___closed__3;
lean_object* l_fix1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__5;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields_match__1___rarg(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__1;
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1(lean_object*);
lean_object* l_Array_umapMAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_HasRepr___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_hasToString;
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__2;
extern lean_object* l_Lean_Meta_CheckAssignment_checkFVar___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__1;
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
extern lean_object* l_Lean_Meta_substCore___lambda__13___closed__25;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__1(lean_object*);
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__2;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_value_lparams(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__1(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__2;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1;
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__1;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source___boxed(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__2;
extern lean_object* l_Lean_Format_sbracket___closed__4;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__2;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__2___rarg(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__2;
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_530____closed__8;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__2(lean_object*);
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__19;
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureCtor(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3(lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__4;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__2(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1;
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed(lean_object**);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__3;
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_expandApp___spec__1___closed__1;
extern lean_object* l_PUnit_Inhabited;
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__2;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct_match__1(lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__8;
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__3;
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1(lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_Source_isNone(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_hasFormat;
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__5;
extern lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__4;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7;
lean_object* l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkIdImp___closed__2;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_Lean_Meta_Basic___instance__7___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName(lean_object*);
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__1;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1;
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Quotation_0__Lean_Elab_Term_Quotation_getHeadInfo___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__1(lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1;
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2;
extern lean_object* l_Lean_Meta_CheckAssignment_checkFVar___closed__2;
lean_object* l_List_toArrayAux___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___closed__1;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__3(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f___boxed(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_hasFormat;
uint8_t l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default;
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2;
extern lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_899____closed__1;
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField(lean_object*);
extern lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__8;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2(lean_object*);
uint8_t l_Lean_isStructureLike(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__4;
lean_object* l_ReaderT_inhabited___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__1;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__8;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct___closed__4;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__4___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(lean_object*);
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4;
extern lean_object* l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryCoe___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__20;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2(lean_object*, lean_object*);
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6;
extern lean_object* l_addParenHeuristic___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__3(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_findSome_x3f___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__8(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
lean_object* l___private_Init_Util_2__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default;
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__6;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__3;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__2;
uint8_t l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__4___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField___closed__3;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_isNone(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_5, x_7);
lean_dec(x_5);
x_9 = l_Lean_mkOptionalNode___closed__1;
x_10 = l_Lean_Syntax_setArg(x_1, x_4, x_9);
x_11 = l_Array_empty___closed__1;
x_12 = lean_array_push(x_11, x_10);
x_13 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__22;
x_14 = lean_array_push(x_13, x_8);
x_15 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__8;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_array_push(x_11, x_16);
x_18 = l_Lean_nullKind___closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_array_push(x_12, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__6;
x_23 = lean_array_push(x_22, x_21);
x_24 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__15;
x_25 = lean_array_push(x_23, x_24);
x_26 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__4;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_5);
lean_dec(x_1);
x_29 = lean_box(1);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_StructInst_expandStructInstExpectedType(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_expandStructInstExpectedType___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("src");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
x_12 = lean_st_ref_take(x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_nat_add(x_16, x_9);
lean_ctor_set(x_13, 1, x_17);
x_18 = lean_st_ref_set(x_7, x_13, x_14);
if (x_11 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_2, 7);
lean_dec(x_21);
lean_ctor_set(x_2, 7, x_16);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_10, x_22);
lean_inc(x_4);
lean_inc(x_23);
x_24 = l_Lean_Elab_Term_isLocalIdent_x3f(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4;
x_34 = l_Lean_addMacroScope(x_31, x_33, x_28);
x_35 = lean_box(0);
x_36 = l_Lean_SourceInfo_inhabited___closed__1;
x_37 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3;
x_38 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_38, 2, x_34);
lean_ctor_set(x_38, 3, x_35);
x_39 = l_Lean_Syntax_setArg(x_10, x_22, x_38);
x_40 = l_Lean_Syntax_setArg(x_1, x_9, x_39);
x_41 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_32);
lean_dec(x_4);
lean_dec(x_2);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_43);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = l_Lean_addMacroScope(x_46, x_33, x_42);
x_48 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_48, 0, x_36);
lean_ctor_set(x_48, 1, x_37);
lean_ctor_set(x_48, 2, x_47);
lean_ctor_set(x_48, 3, x_35);
x_49 = l_Array_empty___closed__1;
x_50 = lean_array_push(x_49, x_48);
x_51 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
x_52 = lean_array_push(x_50, x_51);
x_53 = lean_array_push(x_52, x_51);
x_54 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
x_55 = lean_array_push(x_53, x_54);
x_56 = lean_array_push(x_55, x_23);
x_57 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__8;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_array_push(x_49, x_58);
x_60 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__6;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__4;
x_63 = lean_array_push(x_62, x_61);
x_64 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__18;
x_65 = lean_array_push(x_63, x_64);
x_66 = lean_array_push(x_65, x_40);
x_67 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__2;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_44, 0, x_69);
return x_44;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_70 = lean_ctor_get(x_44, 0);
x_71 = lean_ctor_get(x_44, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_44);
x_72 = l_Lean_addMacroScope(x_70, x_33, x_42);
x_73 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_73, 0, x_36);
lean_ctor_set(x_73, 1, x_37);
lean_ctor_set(x_73, 2, x_72);
lean_ctor_set(x_73, 3, x_35);
x_74 = l_Array_empty___closed__1;
x_75 = lean_array_push(x_74, x_73);
x_76 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
x_77 = lean_array_push(x_75, x_76);
x_78 = lean_array_push(x_77, x_76);
x_79 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
x_80 = lean_array_push(x_78, x_79);
x_81 = lean_array_push(x_80, x_23);
x_82 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__8;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_array_push(x_74, x_83);
x_85 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__6;
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__4;
x_88 = lean_array_push(x_87, x_86);
x_89 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__18;
x_90 = lean_array_push(x_88, x_89);
x_91 = lean_array_push(x_90, x_40);
x_92 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__2;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_71);
return x_95;
}
}
else
{
uint8_t x_96; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_24);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_24, 0);
lean_dec(x_97);
x_98 = lean_box(0);
lean_ctor_set(x_24, 0, x_98);
return x_24;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_24, 1);
lean_inc(x_99);
lean_dec(x_24);
x_100 = lean_box(0);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_102 = lean_ctor_get(x_2, 0);
x_103 = lean_ctor_get(x_2, 1);
x_104 = lean_ctor_get(x_2, 2);
x_105 = lean_ctor_get(x_2, 3);
x_106 = lean_ctor_get(x_2, 4);
x_107 = lean_ctor_get(x_2, 5);
x_108 = lean_ctor_get(x_2, 6);
x_109 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_110 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_2);
x_111 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_111, 0, x_102);
lean_ctor_set(x_111, 1, x_103);
lean_ctor_set(x_111, 2, x_104);
lean_ctor_set(x_111, 3, x_105);
lean_ctor_set(x_111, 4, x_106);
lean_ctor_set(x_111, 5, x_107);
lean_ctor_set(x_111, 6, x_108);
lean_ctor_set(x_111, 7, x_16);
lean_ctor_set_uint8(x_111, sizeof(void*)*8, x_109);
lean_ctor_set_uint8(x_111, sizeof(void*)*8 + 1, x_110);
x_112 = lean_unsigned_to_nat(0u);
x_113 = l_Lean_Syntax_getArg(x_10, x_112);
lean_inc(x_4);
lean_inc(x_113);
x_114 = l_Lean_Elab_Term_isLocalIdent_x3f(x_113, x_111, x_3, x_4, x_5, x_6, x_7, x_19);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_Elab_Term_getCurrMacroScope(x_111, x_3, x_4, x_5, x_6, x_7, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_119);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4;
x_124 = l_Lean_addMacroScope(x_121, x_123, x_118);
x_125 = lean_box(0);
x_126 = l_Lean_SourceInfo_inhabited___closed__1;
x_127 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3;
x_128 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
lean_ctor_set(x_128, 2, x_124);
lean_ctor_set(x_128, 3, x_125);
x_129 = l_Lean_Syntax_setArg(x_10, x_112, x_128);
x_130 = l_Lean_Syntax_setArg(x_1, x_9, x_129);
x_131 = l_Lean_Elab_Term_getCurrMacroScope(x_111, x_3, x_4, x_5, x_6, x_7, x_122);
lean_dec(x_4);
lean_dec(x_111);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
lean_dec(x_131);
x_134 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_133);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_137 = x_134;
} else {
 lean_dec_ref(x_134);
 x_137 = lean_box(0);
}
x_138 = l_Lean_addMacroScope(x_135, x_123, x_132);
x_139 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_139, 0, x_126);
lean_ctor_set(x_139, 1, x_127);
lean_ctor_set(x_139, 2, x_138);
lean_ctor_set(x_139, 3, x_125);
x_140 = l_Array_empty___closed__1;
x_141 = lean_array_push(x_140, x_139);
x_142 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
x_143 = lean_array_push(x_141, x_142);
x_144 = lean_array_push(x_143, x_142);
x_145 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
x_146 = lean_array_push(x_144, x_145);
x_147 = lean_array_push(x_146, x_113);
x_148 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__8;
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = lean_array_push(x_140, x_149);
x_151 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__6;
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__4;
x_154 = lean_array_push(x_153, x_152);
x_155 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__18;
x_156 = lean_array_push(x_154, x_155);
x_157 = lean_array_push(x_156, x_130);
x_158 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__2;
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
x_160 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_160, 0, x_159);
if (lean_is_scalar(x_137)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_137;
}
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_136);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_115);
lean_dec(x_113);
lean_dec(x_111);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_162 = lean_ctor_get(x_114, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_163 = x_114;
} else {
 lean_dec_ref(x_114);
 x_163 = lean_box(0);
}
x_164 = lean_box(0);
if (lean_is_scalar(x_163)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_163;
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_162);
return x_165;
}
}
}
else
{
uint8_t x_166; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_166 = !lean_is_exclusive(x_18);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; 
x_167 = lean_ctor_get(x_18, 0);
lean_dec(x_167);
x_168 = lean_box(0);
lean_ctor_set(x_18, 0, x_168);
return x_18;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_18, 1);
lean_inc(x_169);
lean_dec(x_18);
x_170 = lean_box(0);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
return x_171;
}
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_172 = lean_ctor_get(x_13, 0);
x_173 = lean_ctor_get(x_13, 1);
x_174 = lean_ctor_get(x_13, 2);
x_175 = lean_ctor_get(x_13, 3);
lean_inc(x_175);
lean_inc(x_174);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_13);
x_176 = lean_nat_add(x_173, x_9);
x_177 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_177, 0, x_172);
lean_ctor_set(x_177, 1, x_176);
lean_ctor_set(x_177, 2, x_174);
lean_ctor_set(x_177, 3, x_175);
x_178 = lean_st_ref_set(x_7, x_177, x_14);
if (x_11 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; uint8_t x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_179 = lean_ctor_get(x_178, 1);
lean_inc(x_179);
lean_dec(x_178);
x_180 = lean_ctor_get(x_2, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_2, 1);
lean_inc(x_181);
x_182 = lean_ctor_get(x_2, 2);
lean_inc(x_182);
x_183 = lean_ctor_get(x_2, 3);
lean_inc(x_183);
x_184 = lean_ctor_get(x_2, 4);
lean_inc(x_184);
x_185 = lean_ctor_get(x_2, 5);
lean_inc(x_185);
x_186 = lean_ctor_get(x_2, 6);
lean_inc(x_186);
x_187 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_188 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_189 = x_2;
} else {
 lean_dec_ref(x_2);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(0, 8, 2);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_180);
lean_ctor_set(x_190, 1, x_181);
lean_ctor_set(x_190, 2, x_182);
lean_ctor_set(x_190, 3, x_183);
lean_ctor_set(x_190, 4, x_184);
lean_ctor_set(x_190, 5, x_185);
lean_ctor_set(x_190, 6, x_186);
lean_ctor_set(x_190, 7, x_173);
lean_ctor_set_uint8(x_190, sizeof(void*)*8, x_187);
lean_ctor_set_uint8(x_190, sizeof(void*)*8 + 1, x_188);
x_191 = lean_unsigned_to_nat(0u);
x_192 = l_Lean_Syntax_getArg(x_10, x_191);
lean_inc(x_4);
lean_inc(x_192);
x_193 = l_Lean_Elab_Term_isLocalIdent_x3f(x_192, x_190, x_3, x_4, x_5, x_6, x_7, x_179);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = l_Lean_Elab_Term_getCurrMacroScope(x_190, x_3, x_4, x_5, x_6, x_7, x_195);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec(x_196);
x_199 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_198);
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_202 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4;
x_203 = l_Lean_addMacroScope(x_200, x_202, x_197);
x_204 = lean_box(0);
x_205 = l_Lean_SourceInfo_inhabited___closed__1;
x_206 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3;
x_207 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_206);
lean_ctor_set(x_207, 2, x_203);
lean_ctor_set(x_207, 3, x_204);
x_208 = l_Lean_Syntax_setArg(x_10, x_191, x_207);
x_209 = l_Lean_Syntax_setArg(x_1, x_9, x_208);
x_210 = l_Lean_Elab_Term_getCurrMacroScope(x_190, x_3, x_4, x_5, x_6, x_7, x_201);
lean_dec(x_4);
lean_dec(x_190);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_213 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_212);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_213, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 lean_ctor_release(x_213, 1);
 x_216 = x_213;
} else {
 lean_dec_ref(x_213);
 x_216 = lean_box(0);
}
x_217 = l_Lean_addMacroScope(x_214, x_202, x_211);
x_218 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_218, 0, x_205);
lean_ctor_set(x_218, 1, x_206);
lean_ctor_set(x_218, 2, x_217);
lean_ctor_set(x_218, 3, x_204);
x_219 = l_Array_empty___closed__1;
x_220 = lean_array_push(x_219, x_218);
x_221 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
x_222 = lean_array_push(x_220, x_221);
x_223 = lean_array_push(x_222, x_221);
x_224 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
x_225 = lean_array_push(x_223, x_224);
x_226 = lean_array_push(x_225, x_192);
x_227 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__8;
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_226);
x_229 = lean_array_push(x_219, x_228);
x_230 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__6;
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_229);
x_232 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__4;
x_233 = lean_array_push(x_232, x_231);
x_234 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__18;
x_235 = lean_array_push(x_233, x_234);
x_236 = lean_array_push(x_235, x_209);
x_237 = l_Array_myMacro____x40_Init_Data_Array_Macros___hyg_464____closed__2;
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_236);
x_239 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_239, 0, x_238);
if (lean_is_scalar(x_216)) {
 x_240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_240 = x_216;
}
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_215);
return x_240;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_194);
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_241 = lean_ctor_get(x_193, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_193)) {
 lean_ctor_release(x_193, 0);
 lean_ctor_release(x_193, 1);
 x_242 = x_193;
} else {
 lean_dec_ref(x_193);
 x_242 = lean_box(0);
}
x_243 = lean_box(0);
if (lean_is_scalar(x_242)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_242;
}
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_241);
return x_244;
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_173);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_245 = lean_ctor_get(x_178, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_246 = x_178;
} else {
 lean_dec_ref(x_178);
 x_246 = lean_box(0);
}
x_247 = lean_box(0);
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_245);
return x_248;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Source_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Source_isNone_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_Source_isNone(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Source_isNone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Lean_mkOptionalNode___closed__1;
x_5 = l_Lean_Syntax_setArg(x_1, x_3, x_4);
x_6 = lean_unsigned_to_nat(3u);
x_7 = l_Lean_Syntax_setArg(x_5, x_6, x_4);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_mkOptionalNode___closed__1;
x_11 = l_Lean_Syntax_setArg(x_1, x_9, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Syntax_setArg(x_11, x_12, x_8);
return x_13;
}
default: 
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_setArg(x_1, x_15, x_14);
x_17 = lean_unsigned_to_nat(3u);
x_18 = l_Lean_mkOptionalNode___closed__1;
x_19 = l_Lean_Syntax_setArg(x_16, x_17, x_18);
return x_19;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid structure instance `with` and `..` cannot be used together");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.StructInst");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.getStructSource");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__5;
x_3 = lean_unsigned_to_nat(76u);
x_4 = lean_unsigned_to_nat(17u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_10);
if (x_13 == 0)
{
uint8_t x_66; 
x_66 = 0;
x_14 = x_66;
goto block_65;
}
else
{
uint8_t x_67; 
x_67 = l_Lean_Syntax_isNone(x_12);
x_14 = x_67;
goto block_65;
}
block_65:
{
if (x_14 == 0)
{
if (x_13 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_6, 3);
x_17 = l_Lean_replaceRef(x_1, x_16);
lean_dec(x_16);
lean_ctor_set(x_6, 3, x_17);
x_18 = l_Lean_Syntax_isNone(x_12);
lean_dec(x_12);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
x_19 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3;
x_20 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_getArg(x_10, x_21);
lean_inc(x_4);
x_23 = l_Lean_Elab_Term_isLocalIdent_x3f(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_10);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_27 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6;
x_28 = lean_panic_fn(x_26, x_27);
x_29 = lean_apply_7(x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_25);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_6);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_23);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_23, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_10);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_23, 0, x_33);
return x_23;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_dec(x_23);
x_35 = lean_ctor_get(x_24, 0);
lean_inc(x_35);
lean_dec(x_24);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_10);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_38 = lean_ctor_get(x_6, 0);
x_39 = lean_ctor_get(x_6, 1);
x_40 = lean_ctor_get(x_6, 2);
x_41 = lean_ctor_get(x_6, 3);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_6);
x_42 = l_Lean_replaceRef(x_1, x_41);
lean_dec(x_41);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_39);
lean_ctor_set(x_43, 2, x_40);
lean_ctor_set(x_43, 3, x_42);
x_44 = l_Lean_Syntax_isNone(x_12);
lean_dec(x_12);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_10);
x_45 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3;
x_46 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_45, x_2, x_3, x_4, x_5, x_43, x_7, x_8);
lean_dec(x_7);
lean_dec(x_43);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_unsigned_to_nat(0u);
x_48 = l_Lean_Syntax_getArg(x_10, x_47);
lean_inc(x_4);
x_49 = l_Lean_Elab_Term_isLocalIdent_x3f(x_48, x_2, x_3, x_4, x_5, x_43, x_7, x_8);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_10);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_53 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6;
x_54 = lean_panic_fn(x_52, x_53);
x_55 = lean_apply_7(x_54, x_2, x_3, x_4, x_5, x_43, x_7, x_51);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_43);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_57 = x_49;
} else {
 lean_dec_ref(x_49);
 x_57 = lean_box(0);
}
x_58 = lean_ctor_get(x_50, 0);
lean_inc(x_58);
lean_dec(x_50);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_10);
lean_ctor_set(x_59, 1, x_58);
if (lean_is_scalar(x_57)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_57;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_56);
return x_60;
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_12);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_8);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_8);
return x_64;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__3___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structInstArrayRef");
return x_1;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, can't mix field and `[..]` at a given level");
return x_1;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, at most one `[..]` at a given level");
return x_1;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_array_fget(x_2, x_3);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_15, x_16);
x_18 = l_Lean_Syntax_getKind(x_17);
x_19 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2;
x_20 = lean_name_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_15);
x_22 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_22;
x_4 = x_21;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_4, 0);
lean_inc(x_24);
x_25 = l_Lean_Syntax_getKind(x_24);
x_26 = lean_name_eq(x_25, x_19);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_15);
x_27 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_4);
lean_dec(x_3);
x_29 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5;
x_30 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_15, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_15);
x_36 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_36;
x_4 = x_35;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_3);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
lean_dec(x_4);
x_39 = l_Lean_Syntax_getKind(x_38);
x_40 = lean_name_eq(x_39, x_19);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5;
x_42 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_15, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
return x_42;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__8;
x_48 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_15, x_47, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(x_9, x_11, x_13, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_14, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_15, 0);
lean_inc(x_22);
x_23 = l_Lean_Syntax_getArg(x_22, x_13);
lean_dec(x_22);
x_24 = l_Lean_Syntax_getKind(x_23);
x_25 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2;
x_26 = lean_name_eq(x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
lean_dec(x_15);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
return x_14;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
x_28 = lean_ctor_get(x_15, 0);
lean_inc(x_28);
x_29 = l_Lean_Syntax_getArg(x_28, x_13);
lean_dec(x_28);
x_30 = l_Lean_Syntax_getKind(x_29);
x_31 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2;
x_32 = lean_name_eq(x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_15);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_15);
lean_ctor_set(x_34, 1, x_27);
return x_34;
}
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_14);
if (x_35 == 0)
{
return x_14;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_14, 0);
x_37 = lean_ctor_get(x_14, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_14);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("struct");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_899____closed__1;
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("modifyOp");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2;
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("s");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__9;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Array_iterateMAux___main___at_Lean_Elab_Term_expandApp___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__13;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\n===>\n");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nval: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__17;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\nSource: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__19;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_315; lean_object* x_316; lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_329 = lean_st_ref_get(x_10, x_11);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_330, 3);
lean_inc(x_331);
lean_dec(x_330);
x_332 = lean_ctor_get_uint8(x_331, sizeof(void*)*1);
lean_dec(x_331);
if (x_332 == 0)
{
lean_object* x_333; uint8_t x_334; 
x_333 = lean_ctor_get(x_329, 1);
lean_inc(x_333);
lean_dec(x_329);
x_334 = 0;
x_315 = x_334;
x_316 = x_333;
goto block_328;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; uint8_t x_340; 
x_335 = lean_ctor_get(x_329, 1);
lean_inc(x_335);
lean_dec(x_329);
x_336 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_337 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_336, x_5, x_6, x_7, x_8, x_9, x_10, x_335);
x_338 = lean_ctor_get(x_337, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_337, 1);
lean_inc(x_339);
lean_dec(x_337);
x_340 = lean_unbox(x_338);
lean_dec(x_338);
x_315 = x_340;
x_316 = x_339;
goto block_328;
}
block_314:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
x_15 = l_Lean_Syntax_isNone(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_16 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8;
x_23 = l_Lean_addMacroScope(x_20, x_22, x_17);
x_24 = lean_box(0);
x_25 = l_Lean_SourceInfo_inhabited___closed__1;
x_26 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7;
x_27 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_24);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Syntax_getArg(x_14, x_28);
lean_inc(x_29);
x_30 = l_Lean_Syntax_getKind(x_29);
x_31 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2;
x_32 = lean_name_eq(x_30, x_31);
lean_dec(x_30);
x_33 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_34 = lean_array_get_size(x_33);
x_35 = l_Array_toSubarray___rarg(x_33, x_13, x_34);
x_36 = l_Array_ofSubarray___rarg(x_35);
lean_dec(x_35);
x_37 = l_Lean_nullKind;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = lean_st_ref_get(x_10, x_21);
if (x_32 == 0)
{
lean_object* x_197; 
x_197 = l_Lean_Syntax_getArg(x_29, x_13);
lean_dec(x_29);
x_40 = x_197;
goto block_196;
}
else
{
x_40 = x_29;
goto block_196;
}
block_196:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_inc(x_2);
x_41 = l_Lean_Syntax_setArg(x_2, x_28, x_40);
x_42 = l_Lean_Syntax_setArg(x_41, x_13, x_38);
x_43 = l_Lean_mkOptionalNode___closed__2;
x_44 = lean_array_push(x_43, x_42);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_37);
lean_ctor_set(x_45, 1, x_44);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_187 = lean_ctor_get(x_3, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_3, 1);
lean_inc(x_188);
x_189 = lean_array_get_size(x_188);
x_190 = lean_nat_dec_lt(x_28, x_189);
lean_dec(x_189);
if (x_190 == 0)
{
lean_object* x_191; 
lean_dec(x_27);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_187);
lean_ctor_set(x_191, 1, x_188);
x_46 = x_191;
goto block_186;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_192 = lean_box(0);
x_193 = lean_array_fset(x_188, x_28, x_192);
x_194 = lean_array_fset(x_193, x_28, x_27);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_187);
lean_ctor_set(x_195, 1, x_194);
x_46 = x_195;
goto block_186;
}
}
else
{
lean_dec(x_27);
lean_inc(x_3);
x_46 = x_3;
goto block_186;
}
block_186:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_161; lean_object* x_162; lean_object* x_175; lean_object* x_176; uint8_t x_177; 
lean_inc(x_1);
x_47 = l_Lean_Syntax_setArg(x_1, x_13, x_46);
x_48 = lean_unsigned_to_nat(2u);
x_49 = l_Lean_Syntax_setArg(x_47, x_48, x_45);
x_175 = lean_ctor_get(x_39, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_175, 3);
lean_inc(x_176);
lean_dec(x_175);
x_177 = lean_ctor_get_uint8(x_176, sizeof(void*)*1);
lean_dec(x_176);
if (x_177 == 0)
{
lean_object* x_178; uint8_t x_179; 
x_178 = lean_ctor_get(x_39, 1);
lean_inc(x_178);
lean_dec(x_39);
x_179 = 0;
x_161 = x_179;
x_162 = x_178;
goto block_174;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_180 = lean_ctor_get(x_39, 1);
lean_inc(x_180);
lean_dec(x_39);
x_181 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_182 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_181, x_5, x_6, x_7, x_8, x_9, x_10, x_180);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = lean_unbox(x_183);
lean_dec(x_183);
x_161 = x_185;
x_162 = x_184;
goto block_174;
}
block_160:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_134; lean_object* x_135; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_51 = l_Lean_Syntax_getArg(x_2, x_28);
lean_dec(x_2);
x_52 = l_Lean_Syntax_getArg(x_51, x_13);
lean_dec(x_51);
x_53 = l_Lean_Syntax_getArg(x_3, x_28);
lean_dec(x_3);
x_54 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_50);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Array_empty___closed__1;
x_61 = lean_array_push(x_60, x_53);
x_62 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__16;
x_63 = lean_array_push(x_61, x_62);
x_64 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11;
lean_inc(x_55);
lean_inc(x_58);
x_65 = l_Lean_addMacroScope(x_58, x_64, x_55);
x_66 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10;
x_67 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_67, 0, x_25);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set(x_67, 2, x_65);
lean_ctor_set(x_67, 3, x_24);
x_68 = lean_array_push(x_63, x_67);
x_69 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__13;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_60, x_70);
x_72 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2;
lean_inc(x_55);
lean_inc(x_58);
x_73 = l_Lean_addMacroScope(x_58, x_72, x_55);
x_74 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14;
x_75 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_75, 0, x_25);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_75, 2, x_73);
lean_ctor_set(x_75, 3, x_24);
x_76 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__6;
x_77 = lean_array_push(x_76, x_75);
x_78 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
x_79 = lean_array_push(x_77, x_78);
x_80 = lean_array_push(x_79, x_52);
x_81 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__15;
x_82 = lean_array_push(x_80, x_81);
x_83 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_array_push(x_60, x_84);
x_86 = l_Lean_addMacroScope(x_58, x_22, x_55);
x_87 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_87, 0, x_25);
lean_ctor_set(x_87, 1, x_26);
lean_ctor_set(x_87, 2, x_86);
lean_ctor_set(x_87, 3, x_24);
x_88 = lean_array_push(x_60, x_87);
x_89 = l_Lean_nullKind___closed__2;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__9;
x_92 = lean_array_push(x_91, x_90);
x_93 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__17;
x_94 = lean_array_push(x_92, x_93);
x_95 = lean_array_push(x_94, x_49);
x_96 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__7;
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_array_push(x_60, x_97);
x_99 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
x_100 = lean_array_push(x_98, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_89);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_array_push(x_76, x_101);
x_103 = lean_array_push(x_102, x_81);
x_104 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__4;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_array_push(x_85, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_89);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_array_push(x_71, x_107);
x_109 = l_Lean_mkAppStx___closed__8;
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
x_148 = lean_st_ref_get(x_10, x_59);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_149, 3);
lean_inc(x_150);
lean_dec(x_149);
x_151 = lean_ctor_get_uint8(x_150, sizeof(void*)*1);
lean_dec(x_150);
if (x_151 == 0)
{
lean_object* x_152; uint8_t x_153; 
x_152 = lean_ctor_get(x_148, 1);
lean_inc(x_152);
lean_dec(x_148);
x_153 = 0;
x_134 = x_153;
x_135 = x_152;
goto block_147;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_154 = lean_ctor_get(x_148, 1);
lean_inc(x_154);
lean_dec(x_148);
x_155 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_156 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_155, x_5, x_6, x_7, x_8, x_9, x_10, x_154);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = lean_unbox(x_157);
lean_dec(x_157);
x_134 = x_159;
x_135 = x_158;
goto block_147;
}
block_133:
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_5);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; lean_object* x_117; 
x_113 = lean_ctor_get(x_5, 6);
lean_inc(x_110);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_1);
lean_ctor_set(x_114, 1, x_110);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
lean_ctor_set(x_5, 6, x_115);
x_116 = 1;
x_117 = l_Lean_Elab_Term_elabTerm(x_110, x_4, x_116, x_5, x_6, x_7, x_8, x_9, x_10, x_111);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; lean_object* x_132; 
x_118 = lean_ctor_get(x_5, 0);
x_119 = lean_ctor_get(x_5, 1);
x_120 = lean_ctor_get(x_5, 2);
x_121 = lean_ctor_get(x_5, 3);
x_122 = lean_ctor_get(x_5, 4);
x_123 = lean_ctor_get(x_5, 5);
x_124 = lean_ctor_get(x_5, 6);
x_125 = lean_ctor_get(x_5, 7);
x_126 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_127 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_inc(x_120);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_5);
lean_inc(x_110);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_1);
lean_ctor_set(x_128, 1, x_110);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_124);
x_130 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_130, 0, x_118);
lean_ctor_set(x_130, 1, x_119);
lean_ctor_set(x_130, 2, x_120);
lean_ctor_set(x_130, 3, x_121);
lean_ctor_set(x_130, 4, x_122);
lean_ctor_set(x_130, 5, x_123);
lean_ctor_set(x_130, 6, x_129);
lean_ctor_set(x_130, 7, x_125);
lean_ctor_set_uint8(x_130, sizeof(void*)*8, x_126);
lean_ctor_set_uint8(x_130, sizeof(void*)*8 + 1, x_127);
x_131 = 1;
x_132 = l_Lean_Elab_Term_elabTerm(x_110, x_4, x_131, x_130, x_6, x_7, x_8, x_9, x_10, x_111);
return x_132;
}
}
block_147:
{
if (x_134 == 0)
{
x_111 = x_135;
goto block_133;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_inc(x_1);
x_136 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_136, 0, x_1);
x_137 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_138 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_136);
x_139 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16;
x_140 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
lean_inc(x_110);
x_141 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_141, 0, x_110);
x_142 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_137);
x_144 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_145 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_144, x_143, x_5, x_6, x_7, x_8, x_9, x_10, x_135);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
lean_dec(x_145);
x_111 = x_146;
goto block_133;
}
}
}
block_174:
{
if (x_161 == 0)
{
x_50 = x_162;
goto block_160;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_inc(x_1);
x_163 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_163, 0, x_1);
x_164 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__18;
x_167 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
lean_inc(x_49);
x_168 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_168, 0, x_49);
x_169 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_164);
x_171 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_172 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_171, x_170, x_5, x_6, x_7, x_8, x_9, x_10, x_162);
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
lean_dec(x_172);
x_50 = x_173;
goto block_160;
}
}
}
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_288; lean_object* x_289; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
lean_dec(x_14);
x_198 = lean_unsigned_to_nat(3u);
x_199 = l_Lean_Syntax_getArg(x_2, x_198);
x_200 = lean_unsigned_to_nat(0u);
x_201 = l_Lean_Syntax_getArg(x_2, x_200);
lean_dec(x_2);
x_202 = l_Lean_Syntax_getArg(x_201, x_13);
lean_dec(x_201);
x_203 = l_Lean_Syntax_getArg(x_3, x_200);
lean_dec(x_3);
x_204 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_12);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_206);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
x_210 = l_Array_empty___closed__1;
x_211 = lean_array_push(x_210, x_203);
x_212 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__16;
x_213 = lean_array_push(x_211, x_212);
x_214 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11;
lean_inc(x_205);
lean_inc(x_208);
x_215 = l_Lean_addMacroScope(x_208, x_214, x_205);
x_216 = lean_box(0);
x_217 = l_Lean_SourceInfo_inhabited___closed__1;
x_218 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10;
x_219 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
lean_ctor_set(x_219, 2, x_215);
lean_ctor_set(x_219, 3, x_216);
x_220 = lean_array_push(x_213, x_219);
x_221 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__13;
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
x_223 = lean_array_push(x_210, x_222);
x_224 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppLValsAux_loop___closed__2;
lean_inc(x_205);
lean_inc(x_208);
x_225 = l_Lean_addMacroScope(x_208, x_224, x_205);
x_226 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14;
x_227 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_227, 0, x_217);
lean_ctor_set(x_227, 1, x_226);
lean_ctor_set(x_227, 2, x_225);
lean_ctor_set(x_227, 3, x_216);
x_228 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__6;
x_229 = lean_array_push(x_228, x_227);
x_230 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__20;
x_231 = lean_array_push(x_229, x_230);
x_232 = lean_array_push(x_231, x_202);
x_233 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__15;
x_234 = lean_array_push(x_232, x_233);
x_235 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12;
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_234);
x_237 = lean_array_push(x_210, x_236);
x_238 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8;
x_239 = l_Lean_addMacroScope(x_208, x_238, x_205);
x_240 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7;
x_241 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_241, 0, x_217);
lean_ctor_set(x_241, 1, x_240);
lean_ctor_set(x_241, 2, x_239);
lean_ctor_set(x_241, 3, x_216);
x_242 = lean_array_push(x_210, x_241);
x_243 = l_Lean_nullKind___closed__2;
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_242);
x_245 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__9;
x_246 = lean_array_push(x_245, x_244);
x_247 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__17;
x_248 = lean_array_push(x_246, x_247);
x_249 = lean_array_push(x_248, x_199);
x_250 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_954____closed__7;
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_249);
x_252 = lean_array_push(x_210, x_251);
x_253 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__5;
x_254 = lean_array_push(x_252, x_253);
x_255 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_255, 0, x_243);
lean_ctor_set(x_255, 1, x_254);
x_256 = lean_array_push(x_228, x_255);
x_257 = lean_array_push(x_256, x_233);
x_258 = l_myMacro____x40_Init_Data_ToString_Macro___hyg_39____closed__4;
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_257);
x_260 = lean_array_push(x_237, x_259);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_243);
lean_ctor_set(x_261, 1, x_260);
x_262 = lean_array_push(x_223, x_261);
x_263 = l_Lean_mkAppStx___closed__8;
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_262);
x_302 = lean_st_ref_get(x_10, x_209);
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_303, 3);
lean_inc(x_304);
lean_dec(x_303);
x_305 = lean_ctor_get_uint8(x_304, sizeof(void*)*1);
lean_dec(x_304);
if (x_305 == 0)
{
lean_object* x_306; uint8_t x_307; 
x_306 = lean_ctor_get(x_302, 1);
lean_inc(x_306);
lean_dec(x_302);
x_307 = 0;
x_288 = x_307;
x_289 = x_306;
goto block_301;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; 
x_308 = lean_ctor_get(x_302, 1);
lean_inc(x_308);
lean_dec(x_302);
x_309 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_310 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_309, x_5, x_6, x_7, x_8, x_9, x_10, x_308);
x_311 = lean_ctor_get(x_310, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_310, 1);
lean_inc(x_312);
lean_dec(x_310);
x_313 = lean_unbox(x_311);
lean_dec(x_311);
x_288 = x_313;
x_289 = x_312;
goto block_301;
}
block_287:
{
uint8_t x_266; 
x_266 = !lean_is_exclusive(x_5);
if (x_266 == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; uint8_t x_270; lean_object* x_271; 
x_267 = lean_ctor_get(x_5, 6);
lean_inc(x_264);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_1);
lean_ctor_set(x_268, 1, x_264);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_267);
lean_ctor_set(x_5, 6, x_269);
x_270 = 1;
x_271 = l_Lean_Elab_Term_elabTerm(x_264, x_4, x_270, x_5, x_6, x_7, x_8, x_9, x_10, x_265);
return x_271;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; uint8_t x_280; uint8_t x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_285; lean_object* x_286; 
x_272 = lean_ctor_get(x_5, 0);
x_273 = lean_ctor_get(x_5, 1);
x_274 = lean_ctor_get(x_5, 2);
x_275 = lean_ctor_get(x_5, 3);
x_276 = lean_ctor_get(x_5, 4);
x_277 = lean_ctor_get(x_5, 5);
x_278 = lean_ctor_get(x_5, 6);
x_279 = lean_ctor_get(x_5, 7);
x_280 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_281 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
lean_inc(x_279);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_inc(x_275);
lean_inc(x_274);
lean_inc(x_273);
lean_inc(x_272);
lean_dec(x_5);
lean_inc(x_264);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_1);
lean_ctor_set(x_282, 1, x_264);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_278);
x_284 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_284, 0, x_272);
lean_ctor_set(x_284, 1, x_273);
lean_ctor_set(x_284, 2, x_274);
lean_ctor_set(x_284, 3, x_275);
lean_ctor_set(x_284, 4, x_276);
lean_ctor_set(x_284, 5, x_277);
lean_ctor_set(x_284, 6, x_283);
lean_ctor_set(x_284, 7, x_279);
lean_ctor_set_uint8(x_284, sizeof(void*)*8, x_280);
lean_ctor_set_uint8(x_284, sizeof(void*)*8 + 1, x_281);
x_285 = 1;
x_286 = l_Lean_Elab_Term_elabTerm(x_264, x_4, x_285, x_284, x_6, x_7, x_8, x_9, x_10, x_265);
return x_286;
}
}
block_301:
{
if (x_288 == 0)
{
x_265 = x_289;
goto block_287;
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_inc(x_1);
x_290 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_290, 0, x_1);
x_291 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_292 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_292, 0, x_291);
lean_ctor_set(x_292, 1, x_290);
x_293 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16;
x_294 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_294, 0, x_292);
lean_ctor_set(x_294, 1, x_293);
lean_inc(x_264);
x_295 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_295, 0, x_264);
x_296 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_296, 0, x_294);
lean_ctor_set(x_296, 1, x_295);
x_297 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_291);
x_298 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_299 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_298, x_297, x_5, x_6, x_7, x_8, x_9, x_10, x_289);
x_300 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
lean_dec(x_299);
x_265 = x_300;
goto block_287;
}
}
}
}
block_328:
{
if (x_315 == 0)
{
x_12 = x_316;
goto block_314;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
lean_inc(x_2);
x_317 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_317, 0, x_2);
x_318 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_319 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_319, 0, x_318);
lean_ctor_set(x_319, 1, x_317);
x_320 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__20;
x_321 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_321, 0, x_319);
lean_ctor_set(x_321, 1, x_320);
lean_inc(x_3);
x_322 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_322, 0, x_3);
x_323 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
x_324 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_318);
x_325 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4;
x_326 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_325, x_324, x_5, x_6, x_7, x_8, x_9, x_10, x_316);
x_327 = lean_ctor_get(x_326, 1);
lean_inc(x_327);
lean_dec(x_326);
x_12 = x_327;
goto block_314;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_apply_1(x_5, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_2(x_4, x_1, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__4___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, expected type must be known");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, source type is not of the form (C ...)");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, expected type is not of the form (C ...)");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_1);
x_10 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_inferType___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___spec__2(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_17);
x_19 = l_Lean_Elab_Term_tryPostponeIfMVar(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 1);
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = l_Lean_Expr_getAppFn(x_17);
if (lean_obj_tag(x_23) == 4)
{
lean_object* x_24; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
lean_ctor_set(x_19, 0, x_24);
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_23);
lean_free_object(x_19);
x_25 = l_Lean_indentExpr(x_17);
x_26 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
lean_dec(x_19);
x_32 = l_Lean_Expr_getAppFn(x_17);
if (lean_obj_tag(x_32) == 4)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_32);
x_35 = l_Lean_indentExpr(x_17);
x_36 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_41 = !lean_is_exclusive(x_19);
if (x_41 == 0)
{
return x_19;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_19, 0);
x_43 = lean_ctor_get(x_19, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_19);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_16);
if (x_45 == 0)
{
return x_16;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_16, 0);
x_47 = lean_ctor_get(x_16, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_16);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_13);
if (x_49 == 0)
{
return x_13;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_13, 0);
x_51 = lean_ctor_get(x_13, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_13);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_2);
x_53 = lean_ctor_get(x_10, 1);
lean_inc(x_53);
lean_dec(x_10);
x_54 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__2;
x_55 = l_Lean_throwError___at_Lean_Elab_Term_throwTypeMismatchError___spec__1___rarg(x_54, x_3, x_4, x_5, x_6, x_7, x_8, x_53);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_10, 1);
lean_inc(x_56);
lean_dec(x_10);
x_57 = lean_ctor_get(x_1, 0);
lean_inc(x_57);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_57);
x_58 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(x_57, x_3, x_4, x_5, x_6, x_7, x_8, x_56);
if (lean_obj_tag(x_58) == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_58, 0);
x_61 = lean_ctor_get(x_58, 1);
x_62 = l_Lean_Expr_getAppFn(x_60);
lean_dec(x_60);
if (lean_obj_tag(x_62) == 4)
{
lean_object* x_63; 
lean_dec(x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
lean_dec(x_62);
lean_ctor_set(x_58, 0, x_63);
return x_58;
}
else
{
lean_dec(x_62);
lean_free_object(x_58);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_57);
x_64 = lean_ctor_get(x_2, 1);
lean_inc(x_64);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_65 = l_Lean_Meta_inferType___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___spec__2(x_64, x_3, x_4, x_5, x_6, x_7, x_8, x_61);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_68 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(x_66, x_3, x_4, x_5, x_6, x_7, x_8, x_67);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
lean_inc(x_69);
x_71 = l_Lean_Elab_Term_tryPostponeIfMVar(x_69, x_3, x_4, x_5, x_6, x_7, x_8, x_70);
if (lean_obj_tag(x_71) == 0)
{
uint8_t x_72; 
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 1);
x_74 = lean_ctor_get(x_71, 0);
lean_dec(x_74);
x_75 = l_Lean_Expr_getAppFn(x_69);
if (lean_obj_tag(x_75) == 4)
{
lean_object* x_76; 
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
lean_dec(x_75);
lean_ctor_set(x_71, 0, x_76);
return x_71;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_75);
lean_free_object(x_71);
x_77 = l_Lean_indentExpr(x_69);
x_78 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4;
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_81 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_81, x_3, x_4, x_5, x_6, x_7, x_8, x_73);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_71, 1);
lean_inc(x_83);
lean_dec(x_71);
x_84 = l_Lean_Expr_getAppFn(x_69);
if (lean_obj_tag(x_84) == 4)
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_84);
x_87 = l_Lean_indentExpr(x_69);
x_88 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4;
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_91, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_93 = !lean_is_exclusive(x_71);
if (x_93 == 0)
{
return x_71;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_71, 0);
x_95 = lean_ctor_get(x_71, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_71);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_97 = !lean_is_exclusive(x_68);
if (x_97 == 0)
{
return x_68;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_68, 0);
x_99 = lean_ctor_get(x_68, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_68);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_101 = !lean_is_exclusive(x_65);
if (x_101 == 0)
{
return x_65;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_65, 0);
x_103 = lean_ctor_get(x_65, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_65);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_2);
x_105 = l_Lean_indentExpr(x_57);
x_106 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6;
x_107 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
x_108 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_Lean_throwError___at_Lean_Elab_Term_throwTypeMismatchError___spec__1___rarg(x_109, x_3, x_4, x_5, x_6, x_7, x_8, x_61);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_110;
}
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_58, 0);
x_112 = lean_ctor_get(x_58, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_58);
x_113 = l_Lean_Expr_getAppFn(x_111);
lean_dec(x_111);
if (lean_obj_tag(x_113) == 4)
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
lean_dec(x_113);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_112);
return x_115;
}
else
{
lean_dec(x_113);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_57);
x_116 = lean_ctor_get(x_2, 1);
lean_inc(x_116);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_117 = l_Lean_Meta_inferType___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___spec__2(x_116, x_3, x_4, x_5, x_6, x_7, x_8, x_112);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_120 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_0__Lean_Elab_Term_isTypeApp_x3f___spec__1(x_118, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
lean_inc(x_121);
x_123 = l_Lean_Elab_Term_tryPostponeIfMVar(x_121, x_3, x_4, x_5, x_6, x_7, x_8, x_122);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_125 = x_123;
} else {
 lean_dec_ref(x_123);
 x_125 = lean_box(0);
}
x_126 = l_Lean_Expr_getAppFn(x_121);
if (lean_obj_tag(x_126) == 4)
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_121);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
lean_dec(x_126);
if (lean_is_scalar(x_125)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_125;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_124);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_126);
lean_dec(x_125);
x_129 = l_Lean_indentExpr(x_121);
x_130 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4;
x_131 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
x_132 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_133 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_133, x_3, x_4, x_5, x_6, x_7, x_8, x_124);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_121);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_135 = lean_ctor_get(x_123, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_123, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_137 = x_123;
} else {
 lean_dec_ref(x_123);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_136);
return x_138;
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_139 = lean_ctor_get(x_120, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_120, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_141 = x_120;
} else {
 lean_dec_ref(x_120);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_141)) {
 x_142 = lean_alloc_ctor(1, 2, 0);
} else {
 x_142 = x_141;
}
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_140);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_143 = lean_ctor_get(x_117, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_117, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_145 = x_117;
} else {
 lean_dec_ref(x_117);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_2);
x_147 = l_Lean_indentExpr(x_57);
x_148 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6;
x_149 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_151 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_Lean_throwError___at_Lean_Elab_Term_throwTypeMismatchError___spec__1___rarg(x_151, x_3, x_4, x_5, x_6, x_7, x_8, x_112);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_152;
}
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_153 = !lean_is_exclusive(x_58);
if (x_153 == 0)
{
return x_58;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_58, 0);
x_155 = lean_ctor_get(x_58, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_58);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_10);
if (x_157 == 0)
{
return x_10;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_10, 0);
x_159 = lean_ctor_get(x_10, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_10);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_hasFormat(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_4);
return x_5;
}
default: 
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_Syntax_prettyPrint(x_6);
x_8 = l_Lean_Format_sbracket___closed__3;
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Format_sbracket___closed__4;
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_expr_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2;
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_apply_4(x_2, x_10, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_apply_1(x_3, x_1);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_isSimple_match__1___rarg), 3, 0);
return x_3;
}
}
uint8_t l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_4, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3___rarg), 2, 0);
return x_2;
}
}
uint8_t l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 2);
switch (lean_obj_tag(x_6)) {
case 0:
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
case 1:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Lean_Elab_Term_StructInst_Struct_allDefault(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
return x_5;
}
}
default: 
{
return x_5;
}
}
}
}
}
uint8_t l_Lean_Elab_Term_StructInst_Struct_allDefault(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 1;
x_4 = l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___main___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_allDefault(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_ref_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_structName_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_fields_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_source_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatField_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_Lean_Syntax_prettyPrint(x_10);
x_12 = l_Lean_Format_sbracket___closed__3;
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Format_sbracket___closed__4;
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
lean_inc(x_2);
x_17 = l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(x_4, x_2);
switch (lean_obj_tag(x_16)) {
case 0:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_fmt___at_Lean_Level_LevelToFormat_toResult___spec__1(x_18);
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_2);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
case 1:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_22);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_2);
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_17);
return x_25;
}
default: 
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_dec(x_16);
x_27 = l_Lean_Syntax_prettyPrint(x_26);
x_28 = l_Lean_Format_sbracket___closed__3;
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_Format_sbracket___closed__4;
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_2);
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_17);
return x_33;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" . ");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_formatField___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("<default>");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatField___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_formatField___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Elab_Term_StructInst_formatField___closed__2;
x_5 = l_Lean_Format_joinSep___main___at_Lean_Elab_Term_StructInst_formatField___spec__1(x_3, x_4);
x_6 = l_Lean_formatEntry___closed__2;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
lean_dec(x_2);
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_Syntax_prettyPrint(x_9);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_apply_1(x_1, x_12);
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_15 = l_Lean_Elab_Term_StructInst_formatField___closed__4;
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct_match__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
return x_1;
}
}
lean_object* l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1;
x_7 = l_Lean_Elab_Term_StructInst_formatField(x_6, x_4);
x_8 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1;
x_12 = l_Lean_Elab_Term_StructInst_formatField(x_11, x_9);
x_13 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_addParenHeuristic___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__28;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" .. }");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_formatStruct___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lambda__13___closed__25;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(x_2);
x_5 = l_Lean_formatKVMap___closed__1;
x_6 = l_Lean_Format_joinSep___main___at___private_Lean_Data_Trie_0__Lean_Parser_Trie_toStringAux___spec__1(x_4, x_5);
lean_dec(x_4);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Elab_Term_StructInst_formatStruct___closed__1;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = l_Lean_Elab_Term_StructInst_formatStruct___closed__2;
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_11 = l_Lean_Elab_Term_StructInst_formatStruct___closed__1;
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = l_Lean_Elab_Term_StructInst_formatStruct___closed__4;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_expr_dbg_to_string(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = l_Lean_Elab_Term_StructInst_formatStruct___closed__1;
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_Term_StructInst_formatStruct___closed__5;
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_6);
x_23 = l_Lean_Elab_Term_StructInst_formatStruct___closed__2;
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasFormat() {
_start:
{
lean_object* x_1; 
x_1 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_HasRepr___closed__1;
x_2 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Struct_hasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatField), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasFormat() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_HasRepr___closed__1;
x_2 = l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_hasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_4, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_2, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
if (x_1 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_System_FilePath_dirName___closed__1;
x_6 = l_Lean_mkAtomFrom(x_3, x_5);
x_7 = l_Lean_mkIdentFrom(x_3, x_4);
lean_dec(x_3);
x_8 = l_Lean_mkAppStx___closed__9;
x_9 = lean_array_push(x_8, x_6);
x_10 = lean_array_push(x_9, x_7);
x_11 = l_Lean_nullKind;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Lean_mkIdentFrom(x_13, x_14);
lean_dec(x_13);
return x_15;
}
}
case 1:
{
if (x_1 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_System_FilePath_dirName___closed__1;
x_18 = l_Lean_mkAtomFrom(x_16, x_17);
x_19 = l_Lean_mkAppStx___closed__9;
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_array_push(x_20, x_16);
x_22 = l_Lean_nullKind;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
return x_24;
}
}
default: 
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
lean_dec(x_2);
return x_25;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.StructInst.FieldVal.toSyntax");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__1;
x_3 = lean_unsigned_to_nat(255u);
x_4 = lean_unsigned_to_nat(23u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Syntax_inhabited;
x_4 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__2;
x_5 = lean_panic_fn(x_3, x_4);
return x_5;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_toSyntax_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = 0;
x_11 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_10, x_9);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = x_11;
x_15 = lean_array_fset(x_8, x_1, x_14);
lean_dec(x_1);
x_1 = x_13;
x_2 = x_15;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.StructInst.Field.toSyntax");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__1;
x_3 = lean_unsigned_to_nat(266u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_3 = l_Lean_Syntax_inhabited;
x_4 = l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__2;
x_5 = lean_panic_fn(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_setArg(x_8, x_11, x_10);
x_13 = 1;
x_14 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_13, x_6);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Syntax_setArg(x_12, x_15, x_14);
x_17 = l_List_redLength___main___rarg(x_7);
x_18 = lean_mk_empty_array_with_capacity(x_17);
lean_dec(x_17);
x_19 = l_List_toArrayAux___main___rarg(x_7, x_18);
x_20 = x_19;
x_21 = l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(x_15, x_20);
x_22 = x_21;
x_23 = l_Lean_nullKind;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_unsigned_to_nat(1u);
x_26 = l_Lean_Syntax_setArg(x_16, x_25, x_24);
return x_26;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected structure syntax");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2;
x_4 = lean_name_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_nullKind;
x_6 = lean_name_eq(x_2, x_5);
lean_dec(x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_Lean_Syntax_isIdent(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_fieldIdxKind;
x_9 = l_Lean_Syntax_isNatLitAux(x_8, x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = l_Lean_Syntax_getId(x_1);
x_15 = lean_erase_macro_scopes(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
x_20 = l_Lean_Syntax_isIdent(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Lean_fieldIdxKind;
x_22 = l_Lean_Syntax_isNatLitAux(x_21, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
lean_dec(x_19);
x_23 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2;
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = l_Lean_Syntax_getId(x_19);
x_28 = lean_erase_macro_scopes(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_2);
x_31 = lean_unsigned_to_nat(1u);
x_32 = l_Lean_Syntax_getArg(x_1, x_31);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
}
lean_object* l_Array_filterAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = l_Array_shrink___main___rarg(x_1, x_3);
lean_dec(x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__8;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_2 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_3, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_dec(x_2);
x_17 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_2 = x_16;
x_3 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_array_fswap(x_1, x_2, x_3);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
lean_dec(x_2);
x_22 = lean_nat_add(x_3, x_20);
lean_dec(x_3);
x_1 = x_19;
x_2 = x_21;
x_3 = x_22;
goto _start;
}
}
}
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_free_object(x_1);
lean_dec(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_5);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_10);
lean_free_object(x_1);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_11, 0);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_23 = x_21;
} else {
 lean_dec_ref(x_21);
 x_23 = lean_box(0);
}
if (lean_is_scalar(x_23)) {
 x_24 = lean_alloc_ctor(0, 1, 0);
} else {
 x_24 = x_23;
}
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_21, 0);
lean_inc(x_25);
lean_dec(x_21);
x_26 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_20);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 1, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_27);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_26, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_31 = x_26;
} else {
 lean_dec_ref(x_26);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_30);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(1, 1, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_unsigned_to_nat(3u);
x_7 = l_Lean_Syntax_getArg(x_4, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_4, x_8);
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_7);
lean_free_object(x_1);
lean_dec(x_5);
lean_dec(x_4);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_4, x_15);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = l_Array_toList___rarg(x_17);
lean_dec(x_17);
x_19 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_7);
lean_free_object(x_1);
lean_dec(x_5);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
lean_ctor_set(x_1, 1, x_23);
lean_ctor_set(x_1, 0, x_14);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_7);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_1);
lean_ctor_set(x_26, 2, x_24);
lean_ctor_set(x_26, 3, x_25);
x_27 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_5);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_26);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_27, 0, x_33);
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_27, 0);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
x_38 = lean_ctor_get(x_1, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_1);
x_39 = lean_unsigned_to_nat(3u);
x_40 = l_Lean_Syntax_getArg(x_37, x_39);
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Lean_Syntax_getArg(x_37, x_41);
x_43 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 1, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_44);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_47 = lean_ctor_get(x_43, 0);
lean_inc(x_47);
lean_dec(x_43);
x_48 = lean_unsigned_to_nat(1u);
x_49 = l_Lean_Syntax_getArg(x_37, x_48);
x_50 = l_Lean_Syntax_getArgs(x_49);
lean_dec(x_49);
x_51 = l_Array_toList___rarg(x_50);
lean_dec(x_50);
x_52 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_47);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 1, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_53);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_47);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_40);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_37);
lean_ctor_set(x_60, 1, x_57);
lean_ctor_set(x_60, 2, x_58);
lean_ctor_set(x_60, 3, x_59);
x_61 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_38);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 1, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_62);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_61, 0);
lean_inc(x_65);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_66 = x_61;
} else {
 lean_dec_ref(x_61);
 x_66 = lean_box(0);
}
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_60);
lean_ctor_set(x_67, 1, x_65);
if (lean_is_scalar(x_66)) {
 x_68 = lean_alloc_ctor(1, 1, 0);
} else {
 x_68 = x_66;
}
lean_ctor_set(x_68, 0, x_67);
return x_68;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_filterAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1(x_6, x_7, x_7);
x_9 = l_Array_toList___rarg(x_8);
lean_dec(x_8);
x_10 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_15);
lean_ctor_set(x_16, 3, x_3);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_2);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_3);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_apply_1(x_3, x_6);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_5);
lean_closure_set(x_10, 3, x_7);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_apply_1(x_2, x_4);
lean_ctor_set(x_1, 2, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = lean_apply_1(x_2, x_8);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_setFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_fix1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_4, x_1);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_usize(x_8, 2);
lean_dec(x_8);
x_17 = lean_box_usize(x_16);
x_18 = lean_apply_7(x_2, x_14, x_15, x_17, x_13, x_10, x_11, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
x_25 = lean_ctor_get_usize(x_8, 2);
x_26 = lean_box_usize(x_25);
x_27 = lean_apply_9(x_3, x_23, x_8, x_9, x_24, x_26, x_22, x_19, x_20, x_21);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_apply_1(x_4, x_1);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_apply_1(x_4, x_1);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_8; 
lean_free_object(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 0:
{
uint8_t x_11; 
lean_dec(x_9);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_7, 0);
lean_dec(x_13);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_14; 
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
}
case 1:
{
uint8_t x_15; 
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_4, 1);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_7, 1);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
lean_dec(x_8);
x_21 = l_Lean_Name_components(x_9);
x_22 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_20, x_21);
x_23 = l_List_append___rarg(x_22, x_18);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_dec(x_7);
x_25 = lean_ctor_get(x_8, 0);
lean_inc(x_25);
lean_dec(x_8);
x_26 = l_Lean_Name_components(x_9);
x_27 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_25, x_26);
x_28 = l_List_append___rarg(x_27, x_24);
lean_ctor_set(x_4, 1, x_28);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_4);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_30 = lean_ctor_get(x_4, 0);
x_31 = lean_ctor_get(x_4, 2);
x_32 = lean_ctor_get(x_4, 3);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_4);
x_33 = lean_ctor_get(x_7, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_34 = x_7;
} else {
 lean_dec_ref(x_7);
 x_34 = lean_box(0);
}
x_35 = lean_ctor_get(x_8, 0);
lean_inc(x_35);
lean_dec(x_8);
x_36 = l_Lean_Name_components(x_9);
x_37 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_35, x_36);
x_38 = l_List_append___rarg(x_37, x_33);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_31);
lean_ctor_set(x_39, 3, x_32);
if (lean_is_scalar(x_34)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_34;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_6);
return x_40;
}
}
default: 
{
uint8_t x_41; 
lean_dec(x_10);
x_41 = !lean_is_exclusive(x_4);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_4, 1);
lean_dec(x_42);
x_43 = !lean_is_exclusive(x_7);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_7, 1);
x_45 = lean_ctor_get(x_7, 0);
lean_dec(x_45);
x_46 = lean_ctor_get(x_8, 0);
lean_inc(x_46);
lean_dec(x_8);
x_47 = l_Lean_Name_components(x_9);
x_48 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_46, x_47);
x_49 = l_List_append___rarg(x_48, x_44);
lean_ctor_set(x_4, 1, x_49);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_7, 1);
lean_inc(x_50);
lean_dec(x_7);
x_51 = lean_ctor_get(x_8, 0);
lean_inc(x_51);
lean_dec(x_8);
x_52 = l_Lean_Name_components(x_9);
x_53 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_51, x_52);
x_54 = l_List_append___rarg(x_53, x_50);
lean_ctor_set(x_4, 1, x_54);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_4);
lean_ctor_set(x_55, 1, x_6);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_56 = lean_ctor_get(x_4, 0);
x_57 = lean_ctor_get(x_4, 2);
x_58 = lean_ctor_get(x_4, 3);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_4);
x_59 = lean_ctor_get(x_7, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_60 = x_7;
} else {
 lean_dec_ref(x_7);
 x_60 = lean_box(0);
}
x_61 = lean_ctor_get(x_8, 0);
lean_inc(x_61);
lean_dec(x_8);
x_62 = l_Lean_Name_components(x_9);
x_63 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_61, x_62);
x_64 = l_List_append___rarg(x_63, x_59);
x_65 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_65, 0, x_56);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_57);
lean_ctor_set(x_65, 3, x_58);
if (lean_is_scalar(x_60)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_60;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_6);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_8);
x_67 = !lean_is_exclusive(x_7);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_7, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_7, 0);
lean_dec(x_69);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_70; 
lean_dec(x_7);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_6);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_8);
x_71 = !lean_is_exclusive(x_7);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_7, 1);
lean_dec(x_72);
x_73 = lean_ctor_get(x_7, 0);
lean_dec(x_73);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_74; 
lean_dec(x_7);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_4);
lean_ctor_set(x_74, 1, x_6);
return x_74;
}
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_1, 0);
x_76 = lean_ctor_get(x_1, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_1);
x_77 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(x_76);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_75);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
else
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_obj_tag(x_81) == 1)
{
lean_object* x_82; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
switch (lean_obj_tag(x_82)) {
case 0:
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_81);
lean_dec(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_83 = x_78;
} else {
 lean_dec_ref(x_78);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_75);
lean_ctor_set(x_84, 1, x_77);
return x_84;
}
case 1:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_82);
x_85 = lean_ctor_get(x_75, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_75, 2);
lean_inc(x_86);
x_87 = lean_ctor_get(x_75, 3);
lean_inc(x_87);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 x_88 = x_75;
} else {
 lean_dec_ref(x_75);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get(x_78, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_90 = x_78;
} else {
 lean_dec_ref(x_78);
 x_90 = lean_box(0);
}
x_91 = lean_ctor_get(x_80, 0);
lean_inc(x_91);
lean_dec(x_80);
x_92 = l_Lean_Name_components(x_81);
x_93 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_91, x_92);
x_94 = l_List_append___rarg(x_93, x_89);
if (lean_is_scalar(x_88)) {
 x_95 = lean_alloc_ctor(0, 4, 0);
} else {
 x_95 = x_88;
}
lean_ctor_set(x_95, 0, x_85);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_86);
lean_ctor_set(x_95, 3, x_87);
if (lean_is_scalar(x_90)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_90;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_77);
return x_96;
}
default: 
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_82);
x_97 = lean_ctor_get(x_75, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_75, 2);
lean_inc(x_98);
x_99 = lean_ctor_get(x_75, 3);
lean_inc(x_99);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 x_100 = x_75;
} else {
 lean_dec_ref(x_75);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_78, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_102 = x_78;
} else {
 lean_dec_ref(x_78);
 x_102 = lean_box(0);
}
x_103 = lean_ctor_get(x_80, 0);
lean_inc(x_103);
lean_dec(x_80);
x_104 = l_Lean_Name_components(x_81);
x_105 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_103, x_104);
x_106 = l_List_append___rarg(x_105, x_101);
if (lean_is_scalar(x_100)) {
 x_107 = lean_alloc_ctor(0, 4, 0);
} else {
 x_107 = x_100;
}
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_107, 2, x_98);
lean_ctor_set(x_107, 3, x_99);
if (lean_is_scalar(x_102)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_102;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_77);
return x_108;
}
}
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_81);
lean_dec(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_109 = x_78;
} else {
 lean_dec_ref(x_78);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_75);
lean_ctor_set(x_110, 1, x_77);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_111 = x_78;
} else {
 lean_dec_ref(x_78);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_75);
lean_ctor_set(x_112, 1, x_77);
return x_112;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1;
x_3 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_apply_6(x_2, x_11, x_12, x_10, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field index, structure has only #");
return x_1;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" fields");
return x_1;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field index, index must be greater than 0");
return x_1;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_30; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_14 = x_2;
} else {
 lean_dec_ref(x_2);
 x_14 = lean_box(0);
}
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 1)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_12);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_12, 0);
x_34 = lean_ctor_get(x_12, 2);
x_35 = lean_ctor_get(x_12, 3);
x_36 = lean_ctor_get(x_12, 1);
lean_dec(x_36);
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_30, 1);
x_39 = lean_ctor_get(x_30, 0);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_31);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_31, 0);
x_42 = lean_ctor_get(x_31, 1);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_nat_dec_eq(x_42, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_array_get_size(x_1);
x_46 = lean_nat_dec_lt(x_45, x_42);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_sub(x_42, x_47);
lean_dec(x_42);
x_49 = l_Lean_Name_inhabited;
x_50 = lean_array_get(x_49, x_1, x_48);
lean_dec(x_48);
lean_ctor_set_tag(x_31, 0);
lean_ctor_set(x_31, 1, x_50);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
lean_free_object(x_31);
lean_dec(x_42);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_51 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_45);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4;
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_41, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_41);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
return x_57;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_free_object(x_31);
lean_dec(x_42);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_62 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7;
x_63 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_41, x_62, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_41);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
return x_63;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_63);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_31, 0);
x_69 = lean_ctor_get(x_31, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_31);
x_70 = lean_unsigned_to_nat(0u);
x_71 = lean_nat_dec_eq(x_69, x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_array_get_size(x_1);
x_73 = lean_nat_dec_lt(x_72, x_69);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_72);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_sub(x_69, x_74);
lean_dec(x_69);
x_76 = l_Lean_Name_inhabited;
x_77 = lean_array_get(x_76, x_1, x_75);
lean_dec(x_75);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_68);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_30, 0, x_78);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_69);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_79 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_72);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2;
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4;
x_84 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_68, x_84, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_68);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_69);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_90 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7;
x_91 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_68, x_90, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_68);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_96 = lean_ctor_get(x_30, 1);
lean_inc(x_96);
lean_dec(x_30);
x_97 = lean_ctor_get(x_31, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_31, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_99 = x_31;
} else {
 lean_dec_ref(x_31);
 x_99 = lean_box(0);
}
x_100 = lean_unsigned_to_nat(0u);
x_101 = lean_nat_dec_eq(x_98, x_100);
if (x_101 == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_array_get_size(x_1);
x_103 = lean_nat_dec_lt(x_102, x_98);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_102);
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_sub(x_98, x_104);
lean_dec(x_98);
x_106 = l_Lean_Name_inhabited;
x_107 = lean_array_get(x_106, x_1, x_105);
lean_dec(x_105);
if (lean_is_scalar(x_99)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_99;
 lean_ctor_set_tag(x_108, 0);
}
lean_ctor_set(x_108, 0, x_97);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_96);
lean_ctor_set(x_12, 1, x_109);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_96);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_110 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_102);
x_111 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_111, 0, x_110);
x_112 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2;
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
x_114 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4;
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_97, x_115, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_97);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_119 = x_116;
} else {
 lean_dec_ref(x_116);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_96);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_121 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7;
x_122 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_97, x_121, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_97);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_125 = x_122;
} else {
 lean_dec_ref(x_122);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_127 = lean_ctor_get(x_12, 0);
x_128 = lean_ctor_get(x_12, 2);
x_129 = lean_ctor_get(x_12, 3);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_12);
x_130 = lean_ctor_get(x_30, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_131 = x_30;
} else {
 lean_dec_ref(x_30);
 x_131 = lean_box(0);
}
x_132 = lean_ctor_get(x_31, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_31, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_134 = x_31;
} else {
 lean_dec_ref(x_31);
 x_134 = lean_box(0);
}
x_135 = lean_unsigned_to_nat(0u);
x_136 = lean_nat_dec_eq(x_133, x_135);
if (x_136 == 0)
{
lean_object* x_137; uint8_t x_138; 
x_137 = lean_array_get_size(x_1);
x_138 = lean_nat_dec_lt(x_137, x_133);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_137);
x_139 = lean_unsigned_to_nat(1u);
x_140 = lean_nat_sub(x_133, x_139);
lean_dec(x_133);
x_141 = l_Lean_Name_inhabited;
x_142 = lean_array_get(x_141, x_1, x_140);
lean_dec(x_140);
if (lean_is_scalar(x_134)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_134;
 lean_ctor_set_tag(x_143, 0);
}
lean_ctor_set(x_143, 0, x_132);
lean_ctor_set(x_143, 1, x_142);
if (lean_is_scalar(x_131)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_131;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_130);
x_145 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_145, 0, x_127);
lean_ctor_set(x_145, 1, x_144);
lean_ctor_set(x_145, 2, x_128);
lean_ctor_set(x_145, 3, x_129);
x_15 = x_145;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_14);
lean_dec(x_13);
x_146 = l_Lean_fmt___at_Lean_Position_Lean_Data_Position___instance__2___spec__1(x_137);
x_147 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_147, 0, x_146);
x_148 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2;
x_149 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4;
x_151 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_132, x_151, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_132);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_155 = x_152;
} else {
 lean_dec_ref(x_152);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_14);
lean_dec(x_13);
x_157 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7;
x_158 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_132, x_157, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_132);
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_161 = x_158;
} else {
 lean_dec_ref(x_158);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_159);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
}
else
{
lean_dec(x_31);
lean_dec(x_30);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
}
block_29:
{
lean_object* x_17; 
x_17 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
if (lean_is_scalar(x_14)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_14;
}
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
if (lean_is_scalar(x_14)) {
 x_23 = lean_alloc_ctor(1, 2, 0);
} else {
 x_23 = x_14;
}
lean_ctor_set(x_23, 0, x_15);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_apply_8(x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 2, x_17);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_1, 2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
x_27 = lean_ctor_get(x_1, 2);
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_1);
x_29 = lean_apply_8(x_2, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_28);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_25);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_37 = x_29;
} else {
 lean_dec_ref(x_29);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
x_15 = l_Lean_getStructureFields(x_13, x_14);
x_16 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_15);
return x_16;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1___boxed), 9, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_usize(x_1, 2);
lean_dec(x_1);
x_7 = lean_box_usize(x_6);
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_apply_6(x_2, x_11, x_12, x_10, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.expandParentFields");
return x_1;
}
}
static lean_object* _init_l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__1;
x_3 = lean_unsigned_to_nat(345u);
x_4 = lean_unsigned_to_nat(32u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_inc(x_1);
x_7 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_1, x_6);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_box(0);
x_10 = lean_name_mk_string(x_9, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_1);
x_12 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_13 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2;
x_14 = lean_panic_fn(x_12, x_13);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
lean_inc(x_1);
x_17 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_1, x_16);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_box(0);
x_20 = lean_name_mk_string(x_19, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_15);
lean_dec(x_1);
x_23 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_24 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2;
x_25 = lean_panic_fn(x_23, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
return x_26;
}
}
}
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a field of structure '");
return x_1;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to access field '");
return x_1;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' in parent structure");
return x_1;
}
}
static lean_object* _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_31; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_15 = x_3;
} else {
 lean_dec_ref(x_3);
 x_15 = lean_box(0);
}
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_13, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_13, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_13, 3);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_38);
lean_inc(x_2);
x_39 = l_Lean_findField_x3f(x_2, x_38, x_37);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_2);
x_40 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_40, 0, x_37);
x_41 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__2;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_45, 0, x_38);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_41);
x_48 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_36, x_47, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_36);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_39, 0);
lean_inc(x_53);
lean_dec(x_39);
x_54 = lean_name_eq(x_53, x_38);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_13);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_13, 3);
lean_dec(x_56);
x_57 = lean_ctor_get(x_13, 2);
lean_dec(x_57);
x_58 = lean_ctor_get(x_13, 1);
lean_dec(x_58);
x_59 = lean_ctor_get(x_13, 0);
lean_dec(x_59);
lean_inc(x_2);
x_60 = l_Lean_getPathToBaseStructure_x3f(x_2, x_53, x_38);
lean_dec(x_53);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
lean_free_object(x_13);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_61 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_61, 0, x_37);
x_62 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_36, x_65, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_36);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
return x_66;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_66, 0);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_66);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_37);
x_71 = lean_ctor_get(x_60, 0);
lean_inc(x_71);
lean_dec(x_60);
x_72 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_36, x_71);
x_73 = l_List_append___rarg(x_72, x_31);
lean_ctor_set(x_13, 1, x_73);
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
}
else
{
lean_object* x_74; 
lean_dec(x_13);
lean_inc(x_2);
x_74 = l_Lean_getPathToBaseStructure_x3f(x_2, x_53, x_38);
lean_dec(x_53);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_75 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_75, 0, x_37);
x_76 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4;
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6;
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_36, x_79, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_36);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_83 = x_80;
} else {
 lean_dec_ref(x_80);
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
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_37);
x_85 = lean_ctor_get(x_74, 0);
lean_inc(x_85);
lean_dec(x_74);
x_86 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_36, x_85);
x_87 = l_List_append___rarg(x_86, x_31);
x_88 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_88, 0, x_33);
lean_ctor_set(x_88, 1, x_87);
lean_ctor_set(x_88, 2, x_34);
lean_ctor_set(x_88, 3, x_35);
x_16 = x_88;
x_17 = x_10;
goto block_30;
}
}
}
else
{
lean_dec(x_53);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
}
}
else
{
lean_dec(x_32);
lean_dec(x_31);
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
}
block_30:
{
lean_object* x_18; 
x_18 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(x_1, x_2, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
if (lean_is_scalar(x_15)) {
 x_21 = lean_alloc_ctor(1, 2, 0);
} else {
 x_21 = x_15;
}
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
if (lean_is_scalar(x_15)) {
 x_24 = lean_alloc_ctor(1, 2, 0);
} else {
 x_24 = x_15;
}
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_15);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_apply_8(x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 2, x_17);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_1, 2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
x_27 = lean_ctor_get(x_1, 2);
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_1);
x_29 = lean_apply_8(x_2, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_28);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_25);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_37 = x_29;
} else {
 lean_dec_ref(x_29);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___boxed), 10, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__3(x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_14;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_3(x_2, x_7, x_8, x_6);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = l_Lean_Name_hash(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = l_Lean_Name_hash(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Std_mkHashMap___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.mkFieldMap");
return x_1;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__1;
x_3 = lean_unsigned_to_nat(363u);
x_4 = lean_unsigned_to_nat(9u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("field '");
return x_1;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has already beed specified");
return x_1;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_15 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2;
x_16 = lean_panic_fn(x_14, x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = lean_apply_7(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_1 = x_18;
x_2 = x_13;
x_9 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_12, 0);
lean_inc(x_25);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_26 = x_12;
} else {
 lean_dec_ref(x_12);
 x_26 = lean_box(0);
}
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(x_1, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_box(0);
if (lean_is_scalar(x_26)) {
 x_31 = lean_alloc_ctor(1, 2, 0);
} else {
 x_31 = x_26;
}
lean_ctor_set(x_31, 0, x_11);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_28, x_31);
x_1 = x_32;
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
lean_dec(x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_box(0);
if (lean_is_scalar(x_26)) {
 x_36 = lean_alloc_ctor(1, 2, 0);
} else {
 x_36 = x_26;
}
lean_ctor_set(x_36, 0, x_11);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_28, x_36);
x_1 = x_37;
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_59; 
x_39 = lean_ctor_get(x_34, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_41 = x_34;
} else {
 lean_dec_ref(x_34);
 x_41 = lean_box(0);
}
x_59 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_11);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_39);
x_42 = x_60;
goto block_58;
}
else
{
uint8_t x_61; 
x_61 = 1;
x_42 = x_61;
goto block_58;
}
block_58:
{
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(1, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_39);
lean_ctor_set(x_43, 1, x_40);
if (lean_is_scalar(x_26)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_26;
}
lean_ctor_set(x_44, 0, x_11);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_28, x_44);
x_1 = x_45;
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_1);
x_47 = lean_ctor_get(x_11, 0);
lean_inc(x_47);
lean_dec(x_11);
x_48 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_48, 0, x_28);
x_49 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__6;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_throwErrorAt___at___private_Lean_Elab_Quotation_0__Lean_Elab_Term_Quotation_getHeadInfo___spec__2___rarg(x_47, x_52, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_47);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
return x_53;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_53);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_11);
lean_dec(x_1);
x_62 = lean_ctor_get(x_2, 1);
lean_inc(x_62);
lean_dec(x_2);
x_63 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_64 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2;
x_65 = lean_panic_fn(x_63, x_64);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_66 = lean_apply_7(x_65, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_1 = x_67;
x_2 = x_62;
x_9 = x_68;
goto _start;
}
else
{
uint8_t x_70; 
lean_dec(x_62);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_70 = !lean_is_exclusive(x_66);
if (x_70 == 0)
{
return x_66;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_66, 0);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_66);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___closed__1;
x_10 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_name_eq(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a valid field of '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_findIdxAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___spec__1(x_3, x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_3);
x_14 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_1);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_getConstInfo___rarg___lambda__1___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_10);
return x_24;
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = l_System_FilePath_dirName___closed__1;
x_4 = l_Lean_mkAtomFrom(x_1, x_3);
x_5 = l_Lean_mkIdentFrom(x_1, x_2);
x_6 = l___private_Lean_Elab_Term_0__Lean_Elab_Term_tryCoe___closed__3;
x_7 = lean_array_push(x_6, x_1);
x_8 = lean_array_push(x_7, x_4);
x_9 = lean_array_push(x_8, x_5);
x_10 = l___private_Lean_Elab_App_0__Lean_Elab_Term_elabAppFn___closed__13;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_4) == 2)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = l_Lean_mkProj(x_1, x_17, x_14);
if (lean_obj_tag(x_13) == 1)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_13, 1);
x_21 = lean_array_get_size(x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
lean_dec(x_21);
if (x_23 == 0)
{
lean_dec(x_3);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_array_fget(x_20, x_22);
x_25 = lean_box(0);
x_26 = lean_array_fset(x_20, x_22, x_25);
x_27 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_24, x_3);
x_28 = lean_array_fset(x_26, x_22, x_27);
lean_ctor_set(x_13, 1, x_28);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_array_get_size(x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_3);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_4, 0, x_34);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_array_fget(x_30, x_32);
x_36 = lean_box(0);
x_37 = lean_array_fset(x_30, x_32, x_36);
x_38 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_35, x_3);
x_39 = lean_array_fset(x_37, x_32, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_29);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_4, 0, x_40);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
}
else
{
lean_dec(x_3);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
x_43 = l_Lean_mkProj(x_1, x_41, x_14);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_13, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_46 = x_13;
} else {
 lean_dec_ref(x_13);
 x_46 = lean_box(0);
}
x_47 = lean_array_get_size(x_45);
x_48 = lean_unsigned_to_nat(0u);
x_49 = lean_nat_dec_lt(x_48, x_47);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_3);
if (lean_is_scalar(x_46)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_46;
}
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_4, 1, x_43);
lean_ctor_set(x_4, 0, x_50);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_array_fget(x_45, x_48);
x_53 = lean_box(0);
x_54 = lean_array_fset(x_45, x_48, x_53);
x_55 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_52, x_3);
x_56 = lean_array_fset(x_54, x_48, x_55);
if (lean_is_scalar(x_46)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_46;
}
lean_ctor_set(x_57, 0, x_44);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_4, 1, x_43);
lean_ctor_set(x_4, 0, x_57);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_4);
lean_ctor_set(x_58, 1, x_42);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_3);
lean_ctor_set(x_4, 1, x_43);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_4);
lean_ctor_set(x_59, 1, x_42);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_free_object(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_15);
if (x_60 == 0)
{
return x_15;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_15, 0);
x_62 = lean_ctor_get(x_15, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_15);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_4, 0);
x_65 = lean_ctor_get(x_4, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_66 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
x_70 = l_Lean_mkProj(x_1, x_67, x_65);
if (lean_obj_tag(x_64) == 1)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_71 = lean_ctor_get(x_64, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_64, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_73 = x_64;
} else {
 lean_dec_ref(x_64);
 x_73 = lean_box(0);
}
x_74 = lean_array_get_size(x_72);
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_nat_dec_lt(x_75, x_74);
lean_dec(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_3);
if (lean_is_scalar(x_73)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_73;
}
lean_ctor_set(x_77, 0, x_71);
lean_ctor_set(x_77, 1, x_72);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_70);
if (lean_is_scalar(x_69)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_69;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_68);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_80 = lean_array_fget(x_72, x_75);
x_81 = lean_box(0);
x_82 = lean_array_fset(x_72, x_75, x_81);
x_83 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_80, x_3);
x_84 = lean_array_fset(x_82, x_75, x_83);
if (lean_is_scalar(x_73)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_73;
}
lean_ctor_set(x_85, 0, x_71);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_70);
if (lean_is_scalar(x_69)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_69;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_68);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_3);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_64);
lean_ctor_set(x_88, 1, x_70);
if (lean_is_scalar(x_69)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_69;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_68);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_3);
lean_dec(x_1);
x_90 = lean_ctor_get(x_66, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_66, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_92 = x_66;
} else {
 lean_dec_ref(x_66);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
else
{
lean_object* x_94; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_4);
lean_ctor_set(x_94, 1, x_11);
return x_94;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_List_tail_x21___rarg(x_3);
lean_dec(x_3);
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = l_List_tail_x21___rarg(x_6);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_8);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Field_toSyntax(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_StructInst_Field_inhabited(lean_box(0));
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2___boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__1;
lean_inc(x_16);
x_19 = l_List_map___main___rarg(x_18, x_16);
x_20 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_8);
lean_inc(x_15);
lean_inc(x_2);
x_21 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_2, x_3, x_15, x_20, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
x_25 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2;
x_26 = l_List_head_x21___rarg(x_25, x_16);
lean_dec(x_16);
x_27 = l_Lean_isSubobjectField_x3f(x_4, x_2, x_15);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_28 = lean_unsigned_to_nat(4u);
x_29 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_5);
x_30 = l_Lean_Syntax_setArg(x_5, x_28, x_29);
x_31 = l_List_redLength___main___rarg(x_19);
x_32 = lean_mk_empty_array_with_capacity(x_31);
lean_dec(x_31);
x_33 = l_List_toArrayAux___main___rarg(x_19, x_32);
x_34 = x_33;
x_35 = l_Id_Monad;
x_36 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3;
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Array_umapMAux___main___rarg(x_35, lean_box(0), x_36, x_37, x_34);
x_39 = x_38;
x_40 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_530____closed__8;
x_41 = l_Lean_mkAtomFrom(x_5, x_40);
lean_dec(x_5);
x_42 = l_Lean_mkSepStx(x_39, x_41);
lean_dec(x_39);
x_43 = lean_unsigned_to_nat(2u);
x_44 = l_Lean_Syntax_setArg(x_30, x_43, x_42);
x_45 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_44, x_23);
x_46 = !lean_is_exclusive(x_26);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_26, 1);
x_48 = lean_ctor_get(x_26, 2);
lean_dec(x_48);
x_49 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_50 = l_List_head_x21___rarg(x_49, x_47);
lean_dec(x_47);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_45);
lean_ctor_set(x_26, 2, x_53);
lean_ctor_set(x_26, 1, x_52);
lean_ctor_set(x_21, 0, x_26);
return x_21;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_54 = lean_ctor_get(x_26, 0);
x_55 = lean_ctor_get(x_26, 1);
x_56 = lean_ctor_get(x_26, 3);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_26);
x_57 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_58 = l_List_head_x21___rarg(x_57, x_55);
lean_dec(x_55);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_45);
x_62 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_62, 0, x_54);
lean_ctor_set(x_62, 1, x_60);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_56);
lean_ctor_set(x_21, 0, x_62);
return x_21;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_free_object(x_21);
x_63 = lean_ctor_get(x_27, 0);
lean_inc(x_63);
lean_dec(x_27);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_5);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_19);
lean_ctor_set(x_64, 3, x_23);
x_65 = lean_apply_8(x_6, x_64, x_8, x_9, x_10, x_11, x_12, x_13, x_24);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_26);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_68 = lean_ctor_get(x_65, 0);
x_69 = lean_ctor_get(x_26, 1);
x_70 = lean_ctor_get(x_26, 2);
lean_dec(x_70);
x_71 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_72 = l_List_head_x21___rarg(x_71, x_69);
lean_dec(x_69);
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_26, 2, x_75);
lean_ctor_set(x_26, 1, x_74);
lean_ctor_set(x_65, 0, x_26);
return x_65;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_76 = lean_ctor_get(x_65, 0);
x_77 = lean_ctor_get(x_26, 0);
x_78 = lean_ctor_get(x_26, 1);
x_79 = lean_ctor_get(x_26, 3);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_26);
x_80 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_81 = l_List_head_x21___rarg(x_80, x_78);
lean_dec(x_78);
x_82 = lean_box(0);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_76);
x_85 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_85, 0, x_77);
lean_ctor_set(x_85, 1, x_83);
lean_ctor_set(x_85, 2, x_84);
lean_ctor_set(x_85, 3, x_79);
lean_ctor_set(x_65, 0, x_85);
return x_65;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_86 = lean_ctor_get(x_65, 0);
x_87 = lean_ctor_get(x_65, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_65);
x_88 = lean_ctor_get(x_26, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_26, 1);
lean_inc(x_89);
x_90 = lean_ctor_get(x_26, 3);
lean_inc(x_90);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 x_91 = x_26;
} else {
 lean_dec_ref(x_26);
 x_91 = lean_box(0);
}
x_92 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_93 = l_List_head_x21___rarg(x_92, x_89);
lean_dec(x_89);
x_94 = lean_box(0);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_86);
if (lean_is_scalar(x_91)) {
 x_97 = lean_alloc_ctor(0, 4, 0);
} else {
 x_97 = x_91;
}
lean_ctor_set(x_97, 0, x_88);
lean_ctor_set(x_97, 1, x_95);
lean_ctor_set(x_97, 2, x_96);
lean_ctor_set(x_97, 3, x_90);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_87);
return x_98;
}
}
else
{
uint8_t x_99; 
lean_dec(x_26);
x_99 = !lean_is_exclusive(x_65);
if (x_99 == 0)
{
return x_65;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_65, 0);
x_101 = lean_ctor_get(x_65, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_65);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_21, 0);
x_104 = lean_ctor_get(x_21, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_21);
x_105 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2;
x_106 = l_List_head_x21___rarg(x_105, x_16);
lean_dec(x_16);
x_107 = l_Lean_isSubobjectField_x3f(x_4, x_2, x_15);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_108 = lean_unsigned_to_nat(4u);
x_109 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_5);
x_110 = l_Lean_Syntax_setArg(x_5, x_108, x_109);
x_111 = l_List_redLength___main___rarg(x_19);
x_112 = lean_mk_empty_array_with_capacity(x_111);
lean_dec(x_111);
x_113 = l_List_toArrayAux___main___rarg(x_19, x_112);
x_114 = x_113;
x_115 = l_Id_Monad;
x_116 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3;
x_117 = lean_unsigned_to_nat(0u);
x_118 = l_Array_umapMAux___main___rarg(x_115, lean_box(0), x_116, x_117, x_114);
x_119 = x_118;
x_120 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_530____closed__8;
x_121 = l_Lean_mkAtomFrom(x_5, x_120);
lean_dec(x_5);
x_122 = l_Lean_mkSepStx(x_119, x_121);
lean_dec(x_119);
x_123 = lean_unsigned_to_nat(2u);
x_124 = l_Lean_Syntax_setArg(x_110, x_123, x_122);
x_125 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_124, x_103);
x_126 = lean_ctor_get(x_106, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_106, 1);
lean_inc(x_127);
x_128 = lean_ctor_get(x_106, 3);
lean_inc(x_128);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 lean_ctor_release(x_106, 2);
 lean_ctor_release(x_106, 3);
 x_129 = x_106;
} else {
 lean_dec_ref(x_106);
 x_129 = lean_box(0);
}
x_130 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_131 = l_List_head_x21___rarg(x_130, x_127);
lean_dec(x_127);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_134, 0, x_125);
if (lean_is_scalar(x_129)) {
 x_135 = lean_alloc_ctor(0, 4, 0);
} else {
 x_135 = x_129;
}
lean_ctor_set(x_135, 0, x_126);
lean_ctor_set(x_135, 1, x_133);
lean_ctor_set(x_135, 2, x_134);
lean_ctor_set(x_135, 3, x_128);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_104);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_107, 0);
lean_inc(x_137);
lean_dec(x_107);
x_138 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_138, 0, x_5);
lean_ctor_set(x_138, 1, x_137);
lean_ctor_set(x_138, 2, x_19);
lean_ctor_set(x_138, 3, x_103);
x_139 = lean_apply_8(x_6, x_138, x_8, x_9, x_10, x_11, x_12, x_13, x_104);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_142 = x_139;
} else {
 lean_dec_ref(x_139);
 x_142 = lean_box(0);
}
x_143 = lean_ctor_get(x_106, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_106, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_106, 3);
lean_inc(x_145);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 lean_ctor_release(x_106, 2);
 lean_ctor_release(x_106, 3);
 x_146 = x_106;
} else {
 lean_dec_ref(x_106);
 x_146 = lean_box(0);
}
x_147 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_148 = l_List_head_x21___rarg(x_147, x_144);
lean_dec(x_144);
x_149 = lean_box(0);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_151, 0, x_140);
if (lean_is_scalar(x_146)) {
 x_152 = lean_alloc_ctor(0, 4, 0);
} else {
 x_152 = x_146;
}
lean_ctor_set(x_152, 0, x_143);
lean_ctor_set(x_152, 1, x_150);
lean_ctor_set(x_152, 2, x_151);
lean_ctor_set(x_152, 3, x_145);
if (lean_is_scalar(x_142)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_142;
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_141);
return x_153;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_106);
x_154 = lean_ctor_get(x_139, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_139, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_156 = x_139;
} else {
 lean_dec_ref(x_139);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
}
}
else
{
uint8_t x_158; 
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_21);
if (x_158 == 0)
{
return x_21;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_21, 0);
x_160 = lean_ctor_get(x_21, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_21);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
else
{
lean_object* x_162; lean_object* x_163; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_162 = lean_ctor_get(x_17, 0);
lean_inc(x_162);
lean_dec(x_17);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_14);
return x_163;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___boxed), 14, 6);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_3);
lean_closure_set(x_19, 3, x_4);
lean_closure_set(x_19, 4, x_5);
lean_closure_set(x_19, 5, x_6);
x_20 = l_Std_HashMap_toList___rarg(x_17);
lean_dec(x_17);
x_21 = l_List_mapM___main___rarg(x_7, lean_box(0), lean_box(0), x_19, x_20);
x_22 = lean_apply_7(x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_14);
lean_inc(x_13);
x_15 = l_Lean_getStructureFields(x_13, x_14);
x_16 = l_Lean_Elab_Term_StructInst_Struct_ref(x_2);
x_17 = l_Lean_Meta_CheckAssignment_checkFVar___closed__2;
lean_inc(x_16);
lean_inc(x_2);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__4), 15, 7);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_14);
lean_closure_set(x_18, 2, x_15);
lean_closure_set(x_18, 3, x_13);
lean_closure_set(x_18, 4, x_16);
lean_closure_set(x_18, 5, x_1);
lean_closure_set(x_18, 6, x_17);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_7, 3);
x_21 = l_Lean_replaceRef(x_16, x_20);
lean_dec(x_20);
lean_dec(x_16);
lean_ctor_set(x_7, 3, x_21);
x_22 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(x_17, x_2, x_18);
x_23 = lean_apply_7(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_7, 0);
x_25 = lean_ctor_get(x_7, 1);
x_26 = lean_ctor_get(x_7, 2);
x_27 = lean_ctor_get(x_7, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_7);
x_28 = l_Lean_replaceRef(x_16, x_27);
lean_dec(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_25);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_28);
x_30 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(x_17, x_2, x_18);
x_31 = lean_apply_7(x_30, x_3, x_4, x_5, x_6, x_29, x_8, x_12);
return x_31;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_findField_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = lean_name_eq(x_7, x_1);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_List_find_x3f___main___rarg(x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; 
x_18 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_inc(x_9);
x_19 = l_Lean_Elab_Term_StructInst_findField_x3f(x_18, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
lean_inc(x_9);
lean_inc(x_3);
x_20 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_9);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_3);
x_21 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
switch (lean_obj_tag(x_21)) {
case 0:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_box(2);
lean_inc(x_4);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_5);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_10);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_17);
return x_28;
}
case 1:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_21);
x_29 = l_Lean_mkHole(x_4);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_inc(x_4);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_9);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_32);
lean_ctor_set(x_34, 2, x_30);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_10);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_17);
return x_36;
}
default: 
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_37 = lean_ctor_get(x_21, 0);
lean_inc(x_37);
lean_dec(x_21);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Syntax_getArg(x_37, x_38);
lean_dec(x_37);
lean_inc(x_9);
x_40 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_39, x_9);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_inc(x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_9);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_5);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_45, 0, x_4);
lean_ctor_set(x_45, 1, x_43);
lean_ctor_set(x_45, 2, x_41);
lean_ctor_set(x_45, 3, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_10);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_17);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_20, 0);
lean_inc(x_48);
lean_dec(x_20);
x_49 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_11);
lean_inc(x_9);
x_50 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_6, x_9, x_49, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
lean_inc(x_5);
lean_inc(x_4);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_4);
lean_ctor_set(x_53, 1, x_48);
lean_ctor_set(x_53, 2, x_5);
lean_ctor_set(x_53, 3, x_51);
x_54 = lean_apply_8(x_7, x_53, x_11, x_12, x_13, x_14, x_15, x_16, x_52);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_56);
lean_inc(x_4);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_4);
lean_ctor_set(x_58, 1, x_9);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_5);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_61, 0, x_4);
lean_ctor_set(x_61, 1, x_59);
lean_ctor_set(x_61, 2, x_57);
lean_ctor_set(x_61, 3, x_60);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_10);
lean_ctor_set(x_54, 0, x_62);
return x_54;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_63 = lean_ctor_get(x_54, 0);
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_54);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_63);
lean_inc(x_4);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_4);
lean_ctor_set(x_66, 1, x_9);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_5);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_4);
lean_ctor_set(x_69, 1, x_67);
lean_ctor_set(x_69, 2, x_65);
lean_ctor_set(x_69, 3, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_10);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_64);
return x_71;
}
}
else
{
uint8_t x_72; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_72 = !lean_is_exclusive(x_54);
if (x_72 == 0)
{
return x_54;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_54, 0);
x_74 = lean_ctor_get(x_54, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_54);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_48);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_50);
if (x_76 == 0)
{
return x_50;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_50, 0);
x_78 = lean_ctor_get(x_50, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_50);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_80 = lean_ctor_get(x_19, 0);
lean_inc(x_80);
lean_dec(x_19);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_10);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_17);
return x_82;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_14);
lean_inc(x_13);
x_15 = l_Lean_getStructureFields(x_13, x_14);
x_16 = l_Lean_Elab_Term_StructInst_Struct_ref(x_2);
x_17 = lean_box(0);
lean_inc(x_15);
lean_inc(x_16);
lean_inc(x_2);
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed), 17, 7);
lean_closure_set(x_18, 0, x_2);
lean_closure_set(x_18, 1, x_13);
lean_closure_set(x_18, 2, x_14);
lean_closure_set(x_18, 3, x_16);
lean_closure_set(x_18, 4, x_17);
lean_closure_set(x_18, 5, x_15);
lean_closure_set(x_18, 6, x_1);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_7, 3);
x_21 = l_Lean_replaceRef(x_16, x_20);
lean_dec(x_20);
lean_dec(x_16);
lean_ctor_set(x_7, 3, x_21);
x_22 = l_Lean_Meta_CheckAssignment_checkFVar___closed__2;
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Array_iterateMAux___main___rarg(x_22, lean_box(0), x_15, x_18, x_23, x_17);
x_25 = lean_apply_7(x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l_List_reverse___rarg(x_27);
x_29 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_28);
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = l_List_reverse___rarg(x_30);
x_33 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_25);
if (x_35 == 0)
{
return x_25;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_25, 0);
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_25);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_7, 0);
x_40 = lean_ctor_get(x_7, 1);
x_41 = lean_ctor_get(x_7, 2);
x_42 = lean_ctor_get(x_7, 3);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_7);
x_43 = l_Lean_replaceRef(x_16, x_42);
lean_dec(x_42);
lean_dec(x_16);
x_44 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_40);
lean_ctor_set(x_44, 2, x_41);
lean_ctor_set(x_44, 3, x_43);
x_45 = l_Lean_Meta_CheckAssignment_checkFVar___closed__2;
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_Array_iterateMAux___main___rarg(x_45, lean_box(0), x_15, x_18, x_46, x_17);
x_48 = lean_apply_7(x_47, x_3, x_4, x_5, x_6, x_44, x_8, x_12);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_51 = x_48;
} else {
 lean_dec_ref(x_48);
 x_51 = lean_box(0);
}
x_52 = l_List_reverse___rarg(x_49);
x_53 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_52);
if (lean_is_scalar(x_51)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_51;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_2);
x_55 = lean_ctor_get(x_48, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_57 = x_48;
} else {
 lean_dec_ref(x_48);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed(lean_object** _args) {
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
x_18 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_1);
return x_18;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_List_tail_x21___rarg(x_7);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_8);
x_9 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_6);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_15 = l_List_tail_x21___rarg(x_12);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_13);
lean_ctor_set(x_16, 3, x_14);
x_17 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_10);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_18, 3);
lean_inc(x_23);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 lean_ctor_release(x_18, 3);
 x_24 = x_18;
} else {
 lean_dec_ref(x_18);
 x_24 = lean_box(0);
}
x_25 = l_List_tail_x21___rarg(x_21);
lean_dec(x_21);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(0, 4, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
x_27 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2;
x_3 = l_List_head_x21___rarg___closed__2;
x_4 = lean_panic_fn(x_2, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = l_Lean_Elab_Term_StructInst_Field_toSyntax(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_StructInst_FieldLHS_inhabited;
x_3 = l_List_head_x21___rarg___closed__2;
x_4 = lean_panic_fn(x_2, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(x_4, x_7);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
x_4 = x_8;
goto _start;
}
}
}
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(x_1, x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc(x_20);
x_22 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_20);
x_23 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_7);
lean_inc(x_19);
lean_inc(x_3);
x_24 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_4, x_19, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(x_20);
lean_dec(x_20);
lean_inc(x_3);
lean_inc(x_2);
x_28 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_19);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_29 = lean_unsigned_to_nat(4u);
x_30 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_5);
x_31 = l_Lean_Syntax_setArg(x_5, x_29, x_30);
x_32 = l_List_redLength___main___rarg(x_22);
x_33 = lean_mk_empty_array_with_capacity(x_32);
lean_dec(x_32);
x_34 = l_List_toArrayAux___main___rarg(x_22, x_33);
x_35 = x_34;
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Array_umapMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(x_36, x_35);
x_38 = x_37;
x_39 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_530____closed__8;
x_40 = l_Lean_mkAtomFrom(x_5, x_39);
x_41 = l_Lean_mkSepStx(x_38, x_40);
lean_dec(x_38);
x_42 = lean_unsigned_to_nat(2u);
x_43 = l_Lean_Syntax_setArg(x_31, x_42, x_41);
x_44 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_43, x_25);
x_45 = !lean_is_exclusive(x_27);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_27, 1);
x_47 = lean_ctor_get(x_27, 2);
lean_dec(x_47);
x_48 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_46);
lean_dec(x_46);
x_49 = lean_box(0);
lean_ctor_set(x_6, 1, x_49);
lean_ctor_set(x_6, 0, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_27, 2, x_50);
lean_ctor_set(x_27, 1, x_6);
x_51 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_27);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_51, 0, x_54);
return x_51;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_27);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
uint8_t x_59; 
lean_dec(x_27);
x_59 = !lean_is_exclusive(x_51);
if (x_59 == 0)
{
return x_51;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_51, 0);
x_61 = lean_ctor_get(x_51, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_51);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_63 = lean_ctor_get(x_27, 0);
x_64 = lean_ctor_get(x_27, 1);
x_65 = lean_ctor_get(x_27, 3);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_27);
x_66 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_64);
lean_dec(x_64);
x_67 = lean_box(0);
lean_ctor_set(x_6, 1, x_67);
lean_ctor_set(x_6, 0, x_66);
x_68 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_68, 0, x_44);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_63);
lean_ctor_set(x_69, 1, x_6);
lean_ctor_set(x_69, 2, x_68);
lean_ctor_set(x_69, 3, x_65);
x_70 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_73 = x_70;
} else {
 lean_dec_ref(x_70);
 x_73 = lean_box(0);
}
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_69);
lean_ctor_set(x_74, 1, x_71);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_69);
x_76 = lean_ctor_get(x_70, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_28, 0);
lean_inc(x_80);
lean_dec(x_28);
lean_inc(x_5);
x_81 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_81, 0, x_5);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_81, 2, x_22);
lean_ctor_set(x_81, 3, x_25);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_82 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_81, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = !lean_is_exclusive(x_27);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_ctor_get(x_27, 1);
x_87 = lean_ctor_get(x_27, 2);
lean_dec(x_87);
x_88 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_86);
lean_dec(x_86);
x_89 = lean_box(0);
lean_ctor_set(x_6, 1, x_89);
lean_ctor_set(x_6, 0, x_88);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_83);
lean_ctor_set(x_27, 2, x_90);
lean_ctor_set(x_27, 1, x_6);
x_91 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_84);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_27);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_91, 0, x_94);
return x_91;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_ctor_get(x_91, 0);
x_96 = lean_ctor_get(x_91, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_91);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_27);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
uint8_t x_99; 
lean_dec(x_27);
x_99 = !lean_is_exclusive(x_91);
if (x_99 == 0)
{
return x_91;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_91, 0);
x_101 = lean_ctor_get(x_91, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_91);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_103 = lean_ctor_get(x_27, 0);
x_104 = lean_ctor_get(x_27, 1);
x_105 = lean_ctor_get(x_27, 3);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_27);
x_106 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_104);
lean_dec(x_104);
x_107 = lean_box(0);
lean_ctor_set(x_6, 1, x_107);
lean_ctor_set(x_6, 0, x_106);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_83);
x_109 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_6);
lean_ctor_set(x_109, 2, x_108);
lean_ctor_set(x_109, 3, x_105);
x_110 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_84);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_113 = x_110;
} else {
 lean_dec_ref(x_110);
 x_113 = lean_box(0);
}
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_109);
lean_ctor_set(x_114, 1, x_111);
if (lean_is_scalar(x_113)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_113;
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_112);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_109);
x_116 = lean_ctor_get(x_110, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_110, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_118 = x_110;
} else {
 lean_dec_ref(x_110);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
uint8_t x_120; 
lean_dec(x_27);
lean_free_object(x_6);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_120 = !lean_is_exclusive(x_82);
if (x_120 == 0)
{
return x_82;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_82, 0);
x_122 = lean_ctor_get(x_82, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_82);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_free_object(x_6);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_124 = !lean_is_exclusive(x_24);
if (x_124 == 0)
{
return x_24;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_24, 0);
x_126 = lean_ctor_get(x_24, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_24);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; 
lean_dec(x_20);
lean_dec(x_19);
x_128 = lean_ctor_get(x_21, 0);
lean_inc(x_128);
lean_dec(x_21);
x_129 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_129) == 0)
{
uint8_t x_130; 
x_130 = !lean_is_exclusive(x_129);
if (x_130 == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_129, 0);
lean_ctor_set(x_6, 1, x_131);
lean_ctor_set(x_6, 0, x_128);
lean_ctor_set(x_129, 0, x_6);
return x_129;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_129, 0);
x_133 = lean_ctor_get(x_129, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_129);
lean_ctor_set(x_6, 1, x_132);
lean_ctor_set(x_6, 0, x_128);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_6);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
else
{
uint8_t x_135; 
lean_dec(x_128);
lean_free_object(x_6);
x_135 = !lean_is_exclusive(x_129);
if (x_135 == 0)
{
return x_129;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_129, 0);
x_137 = lean_ctor_get(x_129, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_129);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_139 = lean_ctor_get(x_6, 0);
x_140 = lean_ctor_get(x_6, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_6);
x_141 = lean_ctor_get(x_139, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_139, 1);
lean_inc(x_142);
lean_dec(x_139);
x_143 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_142);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_inc(x_142);
x_144 = l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_142);
x_145 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_7);
lean_inc(x_141);
lean_inc(x_3);
x_146 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_4, x_141, x_145, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(x_142);
lean_dec(x_142);
lean_inc(x_3);
lean_inc(x_2);
x_150 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_141);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_151 = lean_unsigned_to_nat(4u);
x_152 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_5);
x_153 = l_Lean_Syntax_setArg(x_5, x_151, x_152);
x_154 = l_List_redLength___main___rarg(x_144);
x_155 = lean_mk_empty_array_with_capacity(x_154);
lean_dec(x_154);
x_156 = l_List_toArrayAux___main___rarg(x_144, x_155);
x_157 = x_156;
x_158 = lean_unsigned_to_nat(0u);
x_159 = l_Array_umapMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(x_158, x_157);
x_160 = x_159;
x_161 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_530____closed__8;
x_162 = l_Lean_mkAtomFrom(x_5, x_161);
x_163 = l_Lean_mkSepStx(x_160, x_162);
lean_dec(x_160);
x_164 = lean_unsigned_to_nat(2u);
x_165 = l_Lean_Syntax_setArg(x_153, x_164, x_163);
x_166 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_165, x_147);
x_167 = lean_ctor_get(x_149, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_149, 1);
lean_inc(x_168);
x_169 = lean_ctor_get(x_149, 3);
lean_inc(x_169);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 lean_ctor_release(x_149, 2);
 lean_ctor_release(x_149, 3);
 x_170 = x_149;
} else {
 lean_dec_ref(x_149);
 x_170 = lean_box(0);
}
x_171 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_168);
lean_dec(x_168);
x_172 = lean_box(0);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_174, 0, x_166);
if (lean_is_scalar(x_170)) {
 x_175 = lean_alloc_ctor(0, 4, 0);
} else {
 x_175 = x_170;
}
lean_ctor_set(x_175, 0, x_167);
lean_ctor_set(x_175, 1, x_173);
lean_ctor_set(x_175, 2, x_174);
lean_ctor_set(x_175, 3, x_169);
x_176 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_140, x_7, x_8, x_9, x_10, x_11, x_12, x_148);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_179 = x_176;
} else {
 lean_dec_ref(x_176);
 x_179 = lean_box(0);
}
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_175);
lean_ctor_set(x_180, 1, x_177);
if (lean_is_scalar(x_179)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_179;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_178);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_175);
x_182 = lean_ctor_get(x_176, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_176, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_184 = x_176;
} else {
 lean_dec_ref(x_176);
 x_184 = lean_box(0);
}
if (lean_is_scalar(x_184)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_184;
}
lean_ctor_set(x_185, 0, x_182);
lean_ctor_set(x_185, 1, x_183);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_150, 0);
lean_inc(x_186);
lean_dec(x_150);
lean_inc(x_5);
x_187 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_187, 0, x_5);
lean_ctor_set(x_187, 1, x_186);
lean_ctor_set(x_187, 2, x_144);
lean_ctor_set(x_187, 3, x_147);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_188 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_187, x_7, x_8, x_9, x_10, x_11, x_12, x_148);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lean_ctor_get(x_149, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_149, 1);
lean_inc(x_192);
x_193 = lean_ctor_get(x_149, 3);
lean_inc(x_193);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 lean_ctor_release(x_149, 2);
 lean_ctor_release(x_149, 3);
 x_194 = x_149;
} else {
 lean_dec_ref(x_149);
 x_194 = lean_box(0);
}
x_195 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_192);
lean_dec(x_192);
x_196 = lean_box(0);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_198, 0, x_189);
if (lean_is_scalar(x_194)) {
 x_199 = lean_alloc_ctor(0, 4, 0);
} else {
 x_199 = x_194;
}
lean_ctor_set(x_199, 0, x_191);
lean_ctor_set(x_199, 1, x_197);
lean_ctor_set(x_199, 2, x_198);
lean_ctor_set(x_199, 3, x_193);
x_200 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_140, x_7, x_8, x_9, x_10, x_11, x_12, x_190);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_203 = x_200;
} else {
 lean_dec_ref(x_200);
 x_203 = lean_box(0);
}
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_199);
lean_ctor_set(x_204, 1, x_201);
if (lean_is_scalar(x_203)) {
 x_205 = lean_alloc_ctor(0, 2, 0);
} else {
 x_205 = x_203;
}
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_202);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_199);
x_206 = lean_ctor_get(x_200, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_200, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_208 = x_200;
} else {
 lean_dec_ref(x_200);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_149);
lean_dec(x_140);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_210 = lean_ctor_get(x_188, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_188, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_212 = x_188;
} else {
 lean_dec_ref(x_188);
 x_212 = lean_box(0);
}
if (lean_is_scalar(x_212)) {
 x_213 = lean_alloc_ctor(1, 2, 0);
} else {
 x_213 = x_212;
}
lean_ctor_set(x_213, 0, x_210);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_144);
lean_dec(x_142);
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_214 = lean_ctor_get(x_146, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_146, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_216 = x_146;
} else {
 lean_dec_ref(x_146);
 x_216 = lean_box(0);
}
if (lean_is_scalar(x_216)) {
 x_217 = lean_alloc_ctor(1, 2, 0);
} else {
 x_217 = x_216;
}
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_215);
return x_217;
}
}
else
{
lean_object* x_218; lean_object* x_219; 
lean_dec(x_142);
lean_dec(x_141);
x_218 = lean_ctor_get(x_143, 0);
lean_inc(x_218);
lean_dec(x_143);
x_219 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_140, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_222 = x_219;
} else {
 lean_dec_ref(x_219);
 x_222 = lean_box(0);
}
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_218);
lean_ctor_set(x_223, 1, x_220);
if (lean_is_scalar(x_222)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_222;
}
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_221);
return x_224;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_218);
x_225 = lean_ctor_get(x_219, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_219, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_227 = x_219;
} else {
 lean_dec_ref(x_219);
 x_227 = lean_box(0);
}
if (lean_is_scalar(x_227)) {
 x_228 = lean_alloc_ctor(1, 2, 0);
} else {
 x_228 = x_227;
}
lean_ctor_set(x_228, 0, x_225);
lean_ctor_set(x_228, 1, x_226);
return x_228;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(x_15);
lean_dec(x_15);
x_18 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_13);
lean_inc(x_12);
x_14 = l_Lean_getStructureFields(x_12, x_13);
x_15 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
lean_inc(x_15);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1___boxed), 13, 5);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_12);
lean_closure_set(x_16, 2, x_13);
lean_closure_set(x_16, 3, x_14);
lean_closure_set(x_16, 4, x_15);
x_17 = !lean_is_exclusive(x_6);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_6, 3);
x_19 = l_Lean_replaceRef(x_15, x_18);
lean_dec(x_18);
lean_dec(x_15);
lean_ctor_set(x_6, 3, x_19);
x_20 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__3(x_1, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
x_23 = lean_ctor_get(x_6, 2);
x_24 = lean_ctor_get(x_6, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_6);
x_25 = l_Lean_replaceRef(x_15, x_24);
lean_dec(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_27 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__3(x_1, x_16, x_2, x_3, x_4, x_5, x_26, x_7, x_11);
return x_27;
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_array_get_size(x_8);
x_19 = lean_nat_dec_lt(x_9, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_array_fget(x_8, x_9);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_9, x_22);
lean_dec(x_9);
x_24 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_inc(x_21);
x_25 = l_Lean_Elab_Term_StructInst_findField_x3f(x_24, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_inc(x_21);
lean_inc(x_4);
lean_inc(x_3);
x_26 = l_Lean_isSubobjectField_x3f(x_3, x_4, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_box(2);
lean_inc(x_6);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_6);
lean_ctor_set(x_29, 1, x_21);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_box(0);
lean_inc(x_6);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_6);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 2, x_28);
lean_ctor_set(x_33, 3, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_10);
x_9 = x_23;
x_10 = x_34;
goto _start;
}
case 1:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_27);
x_36 = l_Lean_mkHole(x_6);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
lean_inc(x_6);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_6);
lean_ctor_set(x_38, 1, x_21);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_box(0);
lean_inc(x_6);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_6);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_37);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_10);
x_9 = x_23;
x_10 = x_43;
goto _start;
}
default: 
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_45 = lean_ctor_get(x_27, 0);
lean_inc(x_45);
lean_dec(x_27);
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_Lean_Syntax_getArg(x_45, x_46);
lean_dec(x_45);
lean_inc(x_21);
x_48 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_47, x_21);
x_49 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_49, 0, x_48);
lean_inc(x_6);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_6);
lean_ctor_set(x_50, 1, x_21);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_box(0);
lean_inc(x_6);
x_54 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_54, 0, x_6);
lean_ctor_set(x_54, 1, x_52);
lean_ctor_set(x_54, 2, x_49);
lean_ctor_set(x_54, 3, x_53);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_10);
x_9 = x_23;
x_10 = x_55;
goto _start;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_26, 0);
lean_inc(x_57);
lean_dec(x_26);
x_58 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_11);
lean_inc(x_21);
lean_inc(x_4);
x_59 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_4, x_5, x_21, x_58, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_7);
lean_inc(x_6);
x_62 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_62, 0, x_6);
lean_ctor_set(x_62, 1, x_57);
lean_ctor_set(x_62, 2, x_7);
lean_ctor_set(x_62, 3, x_60);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_63 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_62, x_11, x_12, x_13, x_14, x_15, x_16, x_61);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_64);
lean_inc(x_6);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_6);
lean_ctor_set(x_67, 1, x_21);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_box(0);
lean_inc(x_6);
x_71 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_71, 0, x_6);
lean_ctor_set(x_71, 1, x_69);
lean_ctor_set(x_71, 2, x_66);
lean_ctor_set(x_71, 3, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_10);
x_9 = x_23;
x_10 = x_72;
x_17 = x_65;
goto _start;
}
else
{
uint8_t x_74; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_74 = !lean_is_exclusive(x_63);
if (x_74 == 0)
{
return x_63;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_63, 0);
x_76 = lean_ctor_get(x_63, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_63);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_57);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_78 = !lean_is_exclusive(x_59);
if (x_78 == 0)
{
return x_59;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_59, 0);
x_80 = lean_ctor_get(x_59, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_59);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_21);
x_82 = lean_ctor_get(x_25, 0);
lean_inc(x_82);
lean_dec(x_25);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_10);
x_9 = x_23;
x_10 = x_83;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_13);
lean_inc(x_12);
x_14 = l_Lean_getStructureFields(x_12, x_13);
x_15 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_16 = lean_box(0);
x_17 = !lean_is_exclusive(x_6);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_6, 3);
x_19 = l_Lean_replaceRef(x_15, x_18);
lean_dec(x_18);
lean_ctor_set(x_6, 3, x_19);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_10, x_12, x_13, x_14, x_15, x_16, x_14, x_20, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_14);
lean_dec(x_10);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_List_reverse___rarg(x_23);
x_25 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_24);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = l_List_reverse___rarg(x_26);
x_29 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_21);
if (x_31 == 0)
{
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_35 = lean_ctor_get(x_6, 0);
x_36 = lean_ctor_get(x_6, 1);
x_37 = lean_ctor_get(x_6, 2);
x_38 = lean_ctor_get(x_6, 3);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_6);
x_39 = l_Lean_replaceRef(x_15, x_38);
lean_dec(x_38);
x_40 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_36);
lean_ctor_set(x_40, 2, x_37);
lean_ctor_set(x_40, 3, x_39);
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_10, x_12, x_13, x_14, x_15, x_16, x_14, x_41, x_16, x_2, x_3, x_4, x_5, x_40, x_7, x_11);
lean_dec(x_14);
lean_dec(x_10);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
x_46 = l_List_reverse___rarg(x_43);
x_47 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_46);
if (lean_is_scalar(x_45)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_45;
}
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_1);
x_49 = lean_ctor_get(x_42, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_51 = x_42;
} else {
 lean_dec_ref(x_42);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1;
x_10 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__10(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
else
{
uint8_t x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
return x_14;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11___boxed(lean_object** _args) {
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
x_18 = l_Array_iterateMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 3)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_1, x_9);
x_11 = lean_apply_4(x_6, x_10, x_2, x_3, x_4);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_12;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected constructor type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_1, x_14);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 7)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; uint8_t x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
x_21 = lean_ctor_get_uint64(x_17, sizeof(void*)*3);
lean_dec(x_17);
x_22 = (uint8_t)((x_21 << 24) >> 61);
x_23 = lean_box(x_22);
if (lean_obj_tag(x_23) == 3)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_19);
x_25 = 1;
x_26 = lean_box(0);
lean_inc(x_7);
x_27 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_24, x_25, x_26, x_7, x_8, x_9, x_10, x_18);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_expr_instantiate1(x_20, x_28);
lean_dec(x_20);
lean_inc(x_28);
x_31 = l_Lean_mkApp(x_3, x_28);
x_32 = l_Lean_Expr_mvarId_x21(x_28);
lean_dec(x_28);
x_33 = lean_array_push(x_4, x_32);
x_1 = x_15;
x_2 = x_30;
x_3 = x_31;
x_4 = x_33;
x_11 = x_29;
goto _start;
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_23);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_19);
x_36 = 0;
x_37 = lean_box(0);
lean_inc(x_7);
x_38 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_35, x_36, x_37, x_7, x_8, x_9, x_10, x_18);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_expr_instantiate1(x_20, x_39);
lean_dec(x_20);
x_42 = l_Lean_mkApp(x_3, x_39);
x_1 = x_15;
x_2 = x_41;
x_3 = x_42;
x_11 = x_40;
goto _start;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_dec(x_16);
x_45 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__3;
x_46 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_45, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_16);
if (x_47 == 0)
{
return x_16;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_16, 0);
x_49 = lean_ctor_get(x_16, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_16);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_2);
lean_ctor_set(x_51, 2, x_4);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_11);
return x_52;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_5(x_3, x_9, x_10, x_11, x_12, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_apply_2(x_4, x_9, x_2);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_apply_1(x_5, x_2);
return x_17;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody(x_2, x_1);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Expr_hasLooseBVars(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_13, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
x_22 = lean_box(0);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
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
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_10);
return x_31;
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(x_5, x_6, x_7, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_1, 1, x_19);
lean_ctor_set(x_1, 0, x_15);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = l_Lean_Meta_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2___rarg(x_5, x_6, x_7, x_8);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_28);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
lean_inc(x_13);
x_16 = l_Lean_mkConst(x_15, x_13);
lean_inc(x_1);
x_17 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = lean_instantiate_type_lparams(x_17, x_13);
lean_dec(x_13);
lean_dec(x_17);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
x_20 = l_Array_empty___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_21 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(x_19, x_18, x_16, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 4);
lean_inc(x_25);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(x_24, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_ctor_get(x_22, 2);
lean_inc(x_28);
x_29 = l_Lean_Elab_Term_synthesizeAppInstMVars(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_22);
return x_29;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_22);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_22);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_26);
if (x_38 == 0)
{
return x_26;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_26, 0);
x_40 = lean_ctor_get(x_26, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_26);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_21);
if (x_42 == 0)
{
return x_21;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_21, 0);
x_44 = lean_ctor_get(x_21, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_21);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structInstDefault");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2;
x_3 = l_Lean_mkAnnotation(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2;
x_3 = l_Lean_annotation_x3f(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to elaborate field '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' of '");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
x_21 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_throwTypeMismatchError___spec__1___rarg(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___at_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthInstanceImp_x3f(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Elab_Term_StructInst_Struct_allDefault(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = l___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthInstanceImp_x3f(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set_tag(x_13, 0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
}
}
lean_object* l_Lean_Meta_synthInstance_x3f___at_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_synthInstance_x3f___at_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__6___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__6___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__7___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__8___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__9___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected unexpanded structure field");
return x_1;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_24; lean_object* x_25; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_13, 0);
lean_inc(x_26);
lean_dec(x_13);
x_27 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_4);
x_28 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_26, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_26);
x_15 = x_28;
goto block_23;
}
else
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_2);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_2, 0);
x_33 = lean_ctor_get(x_2, 1);
lean_dec(x_33);
x_34 = !lean_is_exclusive(x_24);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_13);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_24, 0);
x_37 = lean_ctor_get(x_24, 1);
x_38 = lean_ctor_get(x_13, 0);
x_39 = lean_ctor_get(x_13, 2);
x_40 = lean_ctor_get(x_13, 3);
lean_dec(x_40);
x_41 = lean_ctor_get(x_13, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_29, 1);
lean_inc(x_42);
lean_dec(x_29);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_43 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 7)
{
lean_dec(x_42);
switch (lean_obj_tag(x_39)) {
case 0:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 2);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_ctor_get(x_39, 0);
lean_inc(x_48);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_46);
x_50 = lean_box(0);
x_51 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_52 = l_Lean_Elab_Term_elabTermEnsuringType(x_48, x_49, x_51, x_50, x_4, x_5, x_6, x_7, x_8, x_9, x_45);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
x_55 = l_Lean_mkApp(x_32, x_54);
x_56 = lean_expr_instantiate1(x_47, x_54);
lean_dec(x_47);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_13, 3, x_57);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_56);
lean_ctor_set(x_2, 0, x_55);
lean_ctor_set(x_52, 0, x_2);
x_15 = x_52;
goto block_23;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_ctor_get(x_52, 0);
x_59 = lean_ctor_get(x_52, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_52);
lean_inc(x_58);
x_60 = l_Lean_mkApp(x_32, x_58);
x_61 = lean_expr_instantiate1(x_47, x_58);
lean_dec(x_47);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_58);
lean_ctor_set(x_13, 3, x_62);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_61);
lean_ctor_set(x_2, 0, x_60);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_2);
lean_ctor_set(x_63, 1, x_59);
x_15 = x_63;
goto block_23;
}
}
else
{
uint8_t x_64; 
lean_dec(x_47);
lean_free_object(x_13);
lean_dec(x_39);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_64 = !lean_is_exclusive(x_52);
if (x_64 == 0)
{
x_15 = x_52;
goto block_23;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_52, 0);
x_66 = lean_ctor_get(x_52, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_52);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_15 = x_67;
goto block_23;
}
}
}
case 1:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_43, 1);
lean_inc(x_68);
lean_dec(x_43);
x_69 = lean_ctor_get(x_44, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_44, 2);
lean_inc(x_70);
lean_dec(x_44);
x_71 = !lean_is_exclusive(x_39);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_39, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_69);
x_73 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_72, x_69, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_free_object(x_2);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_69);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_76);
x_77 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_72, x_76, x_4, x_5, x_6, x_7, x_8, x_9, x_75);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = !lean_is_exclusive(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_78, 0);
x_82 = lean_ctor_get(x_78, 1);
x_83 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_84 = l_Lean_Elab_Term_ensureHasType(x_76, x_81, x_83, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
if (lean_obj_tag(x_84) == 0)
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_84, 0);
lean_ctor_set(x_39, 0, x_82);
lean_inc(x_86);
x_87 = l_Lean_mkApp(x_32, x_86);
x_88 = lean_expr_instantiate1(x_70, x_86);
lean_dec(x_70);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_13, 3, x_89);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_78, 1, x_3);
lean_ctor_set(x_78, 0, x_88);
lean_ctor_set(x_24, 1, x_78);
lean_ctor_set(x_24, 0, x_87);
lean_ctor_set(x_84, 0, x_24);
x_15 = x_84;
goto block_23;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_ctor_get(x_84, 0);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_84);
lean_ctor_set(x_39, 0, x_82);
lean_inc(x_90);
x_92 = l_Lean_mkApp(x_32, x_90);
x_93 = lean_expr_instantiate1(x_70, x_90);
lean_dec(x_70);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_90);
lean_ctor_set(x_13, 3, x_94);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_78, 1, x_3);
lean_ctor_set(x_78, 0, x_93);
lean_ctor_set(x_24, 1, x_78);
lean_ctor_set(x_24, 0, x_92);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_24);
lean_ctor_set(x_95, 1, x_91);
x_15 = x_95;
goto block_23;
}
}
else
{
uint8_t x_96; 
lean_free_object(x_78);
lean_dec(x_82);
lean_free_object(x_39);
lean_dec(x_70);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_96 = !lean_is_exclusive(x_84);
if (x_96 == 0)
{
x_15 = x_84;
goto block_23;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_84, 0);
x_98 = lean_ctor_get(x_84, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_84);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_15 = x_99;
goto block_23;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_78, 0);
x_101 = lean_ctor_get(x_78, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_78);
x_102 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_103 = l_Lean_Elab_Term_ensureHasType(x_76, x_100, x_102, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_106 = x_103;
} else {
 lean_dec_ref(x_103);
 x_106 = lean_box(0);
}
lean_ctor_set(x_39, 0, x_101);
lean_inc(x_104);
x_107 = l_Lean_mkApp(x_32, x_104);
x_108 = lean_expr_instantiate1(x_70, x_104);
lean_dec(x_70);
x_109 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_109, 0, x_104);
lean_ctor_set(x_13, 3, x_109);
lean_ctor_set(x_3, 1, x_37);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_3);
lean_ctor_set(x_24, 1, x_110);
lean_ctor_set(x_24, 0, x_107);
if (lean_is_scalar(x_106)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_106;
}
lean_ctor_set(x_111, 0, x_24);
lean_ctor_set(x_111, 1, x_105);
x_15 = x_111;
goto block_23;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_101);
lean_free_object(x_39);
lean_dec(x_70);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_112 = lean_ctor_get(x_103, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_103, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_114 = x_103;
} else {
 lean_dec_ref(x_103);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
x_15 = x_115;
goto block_23;
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_76);
lean_free_object(x_39);
lean_dec(x_70);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_116 = !lean_is_exclusive(x_77);
if (x_116 == 0)
{
x_15 = x_77;
goto block_23;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_77, 0);
x_118 = lean_ctor_get(x_77, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_77);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
x_15 = x_119;
goto block_23;
}
}
}
else
{
uint8_t x_120; 
lean_dec(x_72);
lean_dec(x_69);
x_120 = !lean_is_exclusive(x_73);
if (x_120 == 0)
{
lean_object* x_121; uint8_t x_122; 
x_121 = lean_ctor_get(x_73, 0);
lean_dec(x_121);
x_122 = !lean_is_exclusive(x_74);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_123 = lean_ctor_get(x_74, 0);
x_124 = l_Lean_mkHole(x_38);
lean_ctor_set_tag(x_39, 0);
lean_ctor_set(x_39, 0, x_124);
lean_inc(x_123);
x_125 = l_Lean_mkApp(x_32, x_123);
x_126 = lean_expr_instantiate1(x_70, x_123);
lean_dec(x_70);
lean_ctor_set(x_13, 3, x_74);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_126);
lean_ctor_set(x_2, 0, x_125);
lean_ctor_set(x_73, 0, x_2);
x_15 = x_73;
goto block_23;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_127 = lean_ctor_get(x_74, 0);
lean_inc(x_127);
lean_dec(x_74);
x_128 = l_Lean_mkHole(x_38);
lean_ctor_set_tag(x_39, 0);
lean_ctor_set(x_39, 0, x_128);
lean_inc(x_127);
x_129 = l_Lean_mkApp(x_32, x_127);
x_130 = lean_expr_instantiate1(x_70, x_127);
lean_dec(x_70);
x_131 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_131, 0, x_127);
lean_ctor_set(x_13, 3, x_131);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_130);
lean_ctor_set(x_2, 0, x_129);
lean_ctor_set(x_73, 0, x_2);
x_15 = x_73;
goto block_23;
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_132 = lean_ctor_get(x_73, 1);
lean_inc(x_132);
lean_dec(x_73);
x_133 = lean_ctor_get(x_74, 0);
lean_inc(x_133);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 x_134 = x_74;
} else {
 lean_dec_ref(x_74);
 x_134 = lean_box(0);
}
x_135 = l_Lean_mkHole(x_38);
lean_ctor_set_tag(x_39, 0);
lean_ctor_set(x_39, 0, x_135);
lean_inc(x_133);
x_136 = l_Lean_mkApp(x_32, x_133);
x_137 = lean_expr_instantiate1(x_70, x_133);
lean_dec(x_70);
if (lean_is_scalar(x_134)) {
 x_138 = lean_alloc_ctor(1, 1, 0);
} else {
 x_138 = x_134;
}
lean_ctor_set(x_138, 0, x_133);
lean_ctor_set(x_13, 3, x_138);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_137);
lean_ctor_set(x_2, 0, x_136);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_2);
lean_ctor_set(x_139, 1, x_132);
x_15 = x_139;
goto block_23;
}
}
}
else
{
uint8_t x_140; 
lean_free_object(x_39);
lean_dec(x_72);
lean_dec(x_70);
lean_dec(x_69);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_140 = !lean_is_exclusive(x_73);
if (x_140 == 0)
{
x_15 = x_73;
goto block_23;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_73, 0);
x_142 = lean_ctor_get(x_73, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_73);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
x_15 = x_143;
goto block_23;
}
}
}
else
{
lean_object* x_144; lean_object* x_145; 
x_144 = lean_ctor_get(x_39, 0);
lean_inc(x_144);
lean_dec(x_39);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_69);
x_145 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_144, x_69, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_free_object(x_2);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_69);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_148);
x_149 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_144, x_148, x_4, x_5, x_6, x_7, x_8, x_9, x_147);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_ctor_get(x_150, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_154 = x_150;
} else {
 lean_dec_ref(x_150);
 x_154 = lean_box(0);
}
x_155 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_156 = l_Lean_Elab_Term_ensureHasType(x_148, x_152, x_155, x_4, x_5, x_6, x_7, x_8, x_9, x_151);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_159 = x_156;
} else {
 lean_dec_ref(x_156);
 x_159 = lean_box(0);
}
x_160 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_160, 0, x_153);
lean_inc(x_157);
x_161 = l_Lean_mkApp(x_32, x_157);
x_162 = lean_expr_instantiate1(x_70, x_157);
lean_dec(x_70);
x_163 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_163, 0, x_157);
lean_ctor_set(x_13, 3, x_163);
lean_ctor_set(x_13, 2, x_160);
lean_ctor_set(x_3, 1, x_37);
if (lean_is_scalar(x_154)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_154;
}
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_3);
lean_ctor_set(x_24, 1, x_164);
lean_ctor_set(x_24, 0, x_161);
if (lean_is_scalar(x_159)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_159;
}
lean_ctor_set(x_165, 0, x_24);
lean_ctor_set(x_165, 1, x_158);
x_15 = x_165;
goto block_23;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_154);
lean_dec(x_153);
lean_dec(x_70);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_166 = lean_ctor_get(x_156, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_156, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_168 = x_156;
} else {
 lean_dec_ref(x_156);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
x_15 = x_169;
goto block_23;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_148);
lean_dec(x_70);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_170 = lean_ctor_get(x_149, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_149, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_172 = x_149;
} else {
 lean_dec_ref(x_149);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_170);
lean_ctor_set(x_173, 1, x_171);
x_15 = x_173;
goto block_23;
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_144);
lean_dec(x_69);
x_174 = lean_ctor_get(x_145, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_175 = x_145;
} else {
 lean_dec_ref(x_145);
 x_175 = lean_box(0);
}
x_176 = lean_ctor_get(x_146, 0);
lean_inc(x_176);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 x_177 = x_146;
} else {
 lean_dec_ref(x_146);
 x_177 = lean_box(0);
}
x_178 = l_Lean_mkHole(x_38);
x_179 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_179, 0, x_178);
lean_inc(x_176);
x_180 = l_Lean_mkApp(x_32, x_176);
x_181 = lean_expr_instantiate1(x_70, x_176);
lean_dec(x_70);
if (lean_is_scalar(x_177)) {
 x_182 = lean_alloc_ctor(1, 1, 0);
} else {
 x_182 = x_177;
}
lean_ctor_set(x_182, 0, x_176);
lean_ctor_set(x_13, 3, x_182);
lean_ctor_set(x_13, 2, x_179);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_181);
lean_ctor_set(x_2, 0, x_180);
if (lean_is_scalar(x_175)) {
 x_183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_183 = x_175;
}
lean_ctor_set(x_183, 0, x_2);
lean_ctor_set(x_183, 1, x_174);
x_15 = x_183;
goto block_23;
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_144);
lean_dec(x_70);
lean_dec(x_69);
lean_free_object(x_13);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_184 = lean_ctor_get(x_145, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_145, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_186 = x_145;
} else {
 lean_dec_ref(x_145);
 x_186 = lean_box(0);
}
if (lean_is_scalar(x_186)) {
 x_187 = lean_alloc_ctor(1, 2, 0);
} else {
 x_187 = x_186;
}
lean_ctor_set(x_187, 0, x_184);
lean_ctor_set(x_187, 1, x_185);
x_15 = x_187;
goto block_23;
}
}
}
default: 
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_188 = lean_ctor_get(x_43, 1);
lean_inc(x_188);
lean_dec(x_43);
x_189 = lean_ctor_get(x_44, 1);
lean_inc(x_189);
x_190 = lean_ctor_get(x_44, 2);
lean_inc(x_190);
lean_dec(x_44);
x_191 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_191, 0, x_189);
x_192 = lean_ctor_get(x_8, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_8, 1);
lean_inc(x_193);
x_194 = lean_ctor_get(x_8, 2);
lean_inc(x_194);
x_195 = lean_ctor_get(x_8, 3);
lean_inc(x_195);
x_196 = l_Lean_replaceRef(x_38, x_195);
lean_dec(x_195);
x_197 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_197, 0, x_192);
lean_ctor_set(x_197, 1, x_193);
lean_ctor_set(x_197, 2, x_194);
lean_ctor_set(x_197, 3, x_196);
x_198 = 0;
x_199 = lean_box(0);
lean_inc(x_6);
x_200 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_191, x_198, x_199, x_6, x_7, x_197, x_9, x_188);
lean_dec(x_197);
x_201 = !lean_is_exclusive(x_200);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_202 = lean_ctor_get(x_200, 0);
x_203 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_202);
lean_inc(x_203);
x_204 = l_Lean_mkApp(x_32, x_203);
x_205 = lean_expr_instantiate1(x_190, x_203);
lean_dec(x_190);
x_206 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_13, 3, x_206);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_205);
lean_ctor_set(x_2, 0, x_204);
lean_ctor_set(x_200, 0, x_2);
x_15 = x_200;
goto block_23;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_207 = lean_ctor_get(x_200, 0);
x_208 = lean_ctor_get(x_200, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_200);
x_209 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_207);
lean_inc(x_209);
x_210 = l_Lean_mkApp(x_32, x_209);
x_211 = lean_expr_instantiate1(x_190, x_209);
lean_dec(x_190);
x_212 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_212, 0, x_209);
lean_ctor_set(x_13, 3, x_212);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_211);
lean_ctor_set(x_2, 0, x_210);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_2);
lean_ctor_set(x_213, 1, x_208);
x_15 = x_213;
goto block_23;
}
}
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_37);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_214 = lean_ctor_get(x_43, 1);
lean_inc(x_214);
lean_dec(x_43);
x_215 = l_Lean_indentExpr(x_44);
x_216 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4;
x_217 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_215);
x_218 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_219 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_ctor_get(x_8, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_8, 1);
lean_inc(x_221);
x_222 = lean_ctor_get(x_8, 2);
lean_inc(x_222);
x_223 = lean_ctor_get(x_8, 3);
lean_inc(x_223);
x_224 = l_Lean_replaceRef(x_38, x_223);
lean_dec(x_223);
lean_dec(x_38);
x_225 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_225, 0, x_220);
lean_ctor_set(x_225, 1, x_221);
lean_ctor_set(x_225, 2, x_222);
lean_ctor_set(x_225, 3, x_224);
lean_inc(x_4);
lean_inc(x_1);
x_226 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_42, x_1, x_219, x_4, x_5, x_6, x_7, x_225, x_9, x_214);
lean_dec(x_225);
x_15 = x_226;
goto block_23;
}
}
else
{
uint8_t x_227; 
lean_dec(x_42);
lean_free_object(x_13);
lean_dec(x_39);
lean_dec(x_38);
lean_free_object(x_24);
lean_dec(x_37);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_227 = !lean_is_exclusive(x_43);
if (x_227 == 0)
{
x_15 = x_43;
goto block_23;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_43, 0);
x_229 = lean_ctor_get(x_43, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_43);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
x_15 = x_230;
goto block_23;
}
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_231 = lean_ctor_get(x_24, 0);
x_232 = lean_ctor_get(x_24, 1);
x_233 = lean_ctor_get(x_13, 0);
x_234 = lean_ctor_get(x_13, 2);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_13);
x_235 = lean_ctor_get(x_29, 1);
lean_inc(x_235);
lean_dec(x_29);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_236 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_231, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
if (lean_obj_tag(x_237) == 7)
{
lean_dec(x_235);
switch (lean_obj_tag(x_234)) {
case 0:
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; uint8_t x_244; lean_object* x_245; 
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
x_240 = lean_ctor_get(x_237, 2);
lean_inc(x_240);
lean_dec(x_237);
x_241 = lean_ctor_get(x_234, 0);
lean_inc(x_241);
x_242 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_242, 0, x_239);
x_243 = lean_box(0);
x_244 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_245 = l_Lean_Elab_Term_elabTermEnsuringType(x_241, x_242, x_244, x_243, x_4, x_5, x_6, x_7, x_8, x_9, x_238);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_248 = x_245;
} else {
 lean_dec_ref(x_245);
 x_248 = lean_box(0);
}
lean_inc(x_246);
x_249 = l_Lean_mkApp(x_32, x_246);
x_250 = lean_expr_instantiate1(x_240, x_246);
lean_dec(x_240);
x_251 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_251, 0, x_246);
x_252 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_252, 0, x_233);
lean_ctor_set(x_252, 1, x_25);
lean_ctor_set(x_252, 2, x_234);
lean_ctor_set(x_252, 3, x_251);
lean_ctor_set(x_3, 1, x_232);
lean_ctor_set(x_3, 0, x_252);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_250);
lean_ctor_set(x_2, 0, x_249);
if (lean_is_scalar(x_248)) {
 x_253 = lean_alloc_ctor(0, 2, 0);
} else {
 x_253 = x_248;
}
lean_ctor_set(x_253, 0, x_2);
lean_ctor_set(x_253, 1, x_247);
x_15 = x_253;
goto block_23;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
lean_dec(x_240);
lean_dec(x_234);
lean_dec(x_233);
lean_free_object(x_24);
lean_dec(x_232);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_254 = lean_ctor_get(x_245, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_245, 1);
lean_inc(x_255);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_256 = x_245;
} else {
 lean_dec_ref(x_245);
 x_256 = lean_box(0);
}
if (lean_is_scalar(x_256)) {
 x_257 = lean_alloc_ctor(1, 2, 0);
} else {
 x_257 = x_256;
}
lean_ctor_set(x_257, 0, x_254);
lean_ctor_set(x_257, 1, x_255);
x_15 = x_257;
goto block_23;
}
}
case 1:
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_258 = lean_ctor_get(x_236, 1);
lean_inc(x_258);
lean_dec(x_236);
x_259 = lean_ctor_get(x_237, 1);
lean_inc(x_259);
x_260 = lean_ctor_get(x_237, 2);
lean_inc(x_260);
lean_dec(x_237);
x_261 = lean_ctor_get(x_234, 0);
lean_inc(x_261);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 x_262 = x_234;
} else {
 lean_dec_ref(x_234);
 x_262 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_259);
x_263 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_261, x_259, x_4, x_5, x_6, x_7, x_8, x_9, x_258);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; 
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_free_object(x_2);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
lean_dec(x_263);
x_266 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_266, 0, x_259);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_266);
x_267 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_261, x_266, x_4, x_5, x_6, x_7, x_8, x_9, x_265);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
x_270 = lean_ctor_get(x_268, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_268, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 x_272 = x_268;
} else {
 lean_dec_ref(x_268);
 x_272 = lean_box(0);
}
x_273 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_274 = l_Lean_Elab_Term_ensureHasType(x_266, x_270, x_273, x_4, x_5, x_6, x_7, x_8, x_9, x_269);
if (lean_obj_tag(x_274) == 0)
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_274, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 lean_ctor_release(x_274, 1);
 x_277 = x_274;
} else {
 lean_dec_ref(x_274);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_262)) {
 x_278 = lean_alloc_ctor(1, 1, 0);
} else {
 x_278 = x_262;
}
lean_ctor_set(x_278, 0, x_271);
lean_inc(x_275);
x_279 = l_Lean_mkApp(x_32, x_275);
x_280 = lean_expr_instantiate1(x_260, x_275);
lean_dec(x_260);
x_281 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_281, 0, x_275);
x_282 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_282, 0, x_233);
lean_ctor_set(x_282, 1, x_25);
lean_ctor_set(x_282, 2, x_278);
lean_ctor_set(x_282, 3, x_281);
lean_ctor_set(x_3, 1, x_232);
lean_ctor_set(x_3, 0, x_282);
if (lean_is_scalar(x_272)) {
 x_283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_283 = x_272;
}
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_3);
lean_ctor_set(x_24, 1, x_283);
lean_ctor_set(x_24, 0, x_279);
if (lean_is_scalar(x_277)) {
 x_284 = lean_alloc_ctor(0, 2, 0);
} else {
 x_284 = x_277;
}
lean_ctor_set(x_284, 0, x_24);
lean_ctor_set(x_284, 1, x_276);
x_15 = x_284;
goto block_23;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_272);
lean_dec(x_271);
lean_dec(x_262);
lean_dec(x_260);
lean_dec(x_233);
lean_free_object(x_24);
lean_dec(x_232);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_285 = lean_ctor_get(x_274, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_274, 1);
lean_inc(x_286);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 lean_ctor_release(x_274, 1);
 x_287 = x_274;
} else {
 lean_dec_ref(x_274);
 x_287 = lean_box(0);
}
if (lean_is_scalar(x_287)) {
 x_288 = lean_alloc_ctor(1, 2, 0);
} else {
 x_288 = x_287;
}
lean_ctor_set(x_288, 0, x_285);
lean_ctor_set(x_288, 1, x_286);
x_15 = x_288;
goto block_23;
}
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
lean_dec(x_266);
lean_dec(x_262);
lean_dec(x_260);
lean_dec(x_233);
lean_free_object(x_24);
lean_dec(x_232);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_289 = lean_ctor_get(x_267, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_267, 1);
lean_inc(x_290);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_291 = x_267;
} else {
 lean_dec_ref(x_267);
 x_291 = lean_box(0);
}
if (lean_is_scalar(x_291)) {
 x_292 = lean_alloc_ctor(1, 2, 0);
} else {
 x_292 = x_291;
}
lean_ctor_set(x_292, 0, x_289);
lean_ctor_set(x_292, 1, x_290);
x_15 = x_292;
goto block_23;
}
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_261);
lean_dec(x_259);
x_293 = lean_ctor_get(x_263, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_263)) {
 lean_ctor_release(x_263, 0);
 lean_ctor_release(x_263, 1);
 x_294 = x_263;
} else {
 lean_dec_ref(x_263);
 x_294 = lean_box(0);
}
x_295 = lean_ctor_get(x_264, 0);
lean_inc(x_295);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 x_296 = x_264;
} else {
 lean_dec_ref(x_264);
 x_296 = lean_box(0);
}
x_297 = l_Lean_mkHole(x_233);
if (lean_is_scalar(x_262)) {
 x_298 = lean_alloc_ctor(0, 1, 0);
} else {
 x_298 = x_262;
 lean_ctor_set_tag(x_298, 0);
}
lean_ctor_set(x_298, 0, x_297);
lean_inc(x_295);
x_299 = l_Lean_mkApp(x_32, x_295);
x_300 = lean_expr_instantiate1(x_260, x_295);
lean_dec(x_260);
if (lean_is_scalar(x_296)) {
 x_301 = lean_alloc_ctor(1, 1, 0);
} else {
 x_301 = x_296;
}
lean_ctor_set(x_301, 0, x_295);
x_302 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_302, 0, x_233);
lean_ctor_set(x_302, 1, x_25);
lean_ctor_set(x_302, 2, x_298);
lean_ctor_set(x_302, 3, x_301);
lean_ctor_set(x_3, 1, x_232);
lean_ctor_set(x_3, 0, x_302);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_300);
lean_ctor_set(x_2, 0, x_299);
if (lean_is_scalar(x_294)) {
 x_303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_303 = x_294;
}
lean_ctor_set(x_303, 0, x_2);
lean_ctor_set(x_303, 1, x_293);
x_15 = x_303;
goto block_23;
}
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_233);
lean_free_object(x_24);
lean_dec(x_232);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_304 = lean_ctor_get(x_263, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_263, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_263)) {
 lean_ctor_release(x_263, 0);
 lean_ctor_release(x_263, 1);
 x_306 = x_263;
} else {
 lean_dec_ref(x_263);
 x_306 = lean_box(0);
}
if (lean_is_scalar(x_306)) {
 x_307 = lean_alloc_ctor(1, 2, 0);
} else {
 x_307 = x_306;
}
lean_ctor_set(x_307, 0, x_304);
lean_ctor_set(x_307, 1, x_305);
x_15 = x_307;
goto block_23;
}
}
default: 
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; uint8_t x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_308 = lean_ctor_get(x_236, 1);
lean_inc(x_308);
lean_dec(x_236);
x_309 = lean_ctor_get(x_237, 1);
lean_inc(x_309);
x_310 = lean_ctor_get(x_237, 2);
lean_inc(x_310);
lean_dec(x_237);
x_311 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_311, 0, x_309);
x_312 = lean_ctor_get(x_8, 0);
lean_inc(x_312);
x_313 = lean_ctor_get(x_8, 1);
lean_inc(x_313);
x_314 = lean_ctor_get(x_8, 2);
lean_inc(x_314);
x_315 = lean_ctor_get(x_8, 3);
lean_inc(x_315);
x_316 = l_Lean_replaceRef(x_233, x_315);
lean_dec(x_315);
x_317 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_317, 0, x_312);
lean_ctor_set(x_317, 1, x_313);
lean_ctor_set(x_317, 2, x_314);
lean_ctor_set(x_317, 3, x_316);
x_318 = 0;
x_319 = lean_box(0);
lean_inc(x_6);
x_320 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_311, x_318, x_319, x_6, x_7, x_317, x_9, x_308);
lean_dec(x_317);
x_321 = lean_ctor_get(x_320, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_320, 1);
lean_inc(x_322);
if (lean_is_exclusive(x_320)) {
 lean_ctor_release(x_320, 0);
 lean_ctor_release(x_320, 1);
 x_323 = x_320;
} else {
 lean_dec_ref(x_320);
 x_323 = lean_box(0);
}
x_324 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_321);
lean_inc(x_324);
x_325 = l_Lean_mkApp(x_32, x_324);
x_326 = lean_expr_instantiate1(x_310, x_324);
lean_dec(x_310);
x_327 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_327, 0, x_324);
x_328 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_328, 0, x_233);
lean_ctor_set(x_328, 1, x_25);
lean_ctor_set(x_328, 2, x_234);
lean_ctor_set(x_328, 3, x_327);
lean_ctor_set(x_3, 1, x_232);
lean_ctor_set(x_3, 0, x_328);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_326);
lean_ctor_set(x_2, 0, x_325);
if (lean_is_scalar(x_323)) {
 x_329 = lean_alloc_ctor(0, 2, 0);
} else {
 x_329 = x_323;
}
lean_ctor_set(x_329, 0, x_2);
lean_ctor_set(x_329, 1, x_322);
x_15 = x_329;
goto block_23;
}
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
lean_dec(x_234);
lean_free_object(x_24);
lean_dec(x_232);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_330 = lean_ctor_get(x_236, 1);
lean_inc(x_330);
lean_dec(x_236);
x_331 = l_Lean_indentExpr(x_237);
x_332 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4;
x_333 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_331);
x_334 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_335 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
x_336 = lean_ctor_get(x_8, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_8, 1);
lean_inc(x_337);
x_338 = lean_ctor_get(x_8, 2);
lean_inc(x_338);
x_339 = lean_ctor_get(x_8, 3);
lean_inc(x_339);
x_340 = l_Lean_replaceRef(x_233, x_339);
lean_dec(x_339);
lean_dec(x_233);
x_341 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_341, 0, x_336);
lean_ctor_set(x_341, 1, x_337);
lean_ctor_set(x_341, 2, x_338);
lean_ctor_set(x_341, 3, x_340);
lean_inc(x_4);
lean_inc(x_1);
x_342 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_235, x_1, x_335, x_4, x_5, x_6, x_7, x_341, x_9, x_330);
lean_dec(x_341);
x_15 = x_342;
goto block_23;
}
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_free_object(x_24);
lean_dec(x_232);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_343 = lean_ctor_get(x_236, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_236, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_345 = x_236;
} else {
 lean_dec_ref(x_236);
 x_345 = lean_box(0);
}
if (lean_is_scalar(x_345)) {
 x_346 = lean_alloc_ctor(1, 2, 0);
} else {
 x_346 = x_345;
}
lean_ctor_set(x_346, 0, x_343);
lean_ctor_set(x_346, 1, x_344);
x_15 = x_346;
goto block_23;
}
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_347 = lean_ctor_get(x_24, 0);
x_348 = lean_ctor_get(x_24, 1);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_24);
x_349 = lean_ctor_get(x_13, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_13, 2);
lean_inc(x_350);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 x_351 = x_13;
} else {
 lean_dec_ref(x_13);
 x_351 = lean_box(0);
}
x_352 = lean_ctor_get(x_29, 1);
lean_inc(x_352);
lean_dec(x_29);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_353 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_347, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; 
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
if (lean_obj_tag(x_354) == 7)
{
lean_dec(x_352);
switch (lean_obj_tag(x_350)) {
case 0:
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; 
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
lean_dec(x_353);
x_356 = lean_ctor_get(x_354, 1);
lean_inc(x_356);
x_357 = lean_ctor_get(x_354, 2);
lean_inc(x_357);
lean_dec(x_354);
x_358 = lean_ctor_get(x_350, 0);
lean_inc(x_358);
x_359 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_359, 0, x_356);
x_360 = lean_box(0);
x_361 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_362 = l_Lean_Elab_Term_elabTermEnsuringType(x_358, x_359, x_361, x_360, x_4, x_5, x_6, x_7, x_8, x_9, x_355);
if (lean_obj_tag(x_362) == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_362)) {
 lean_ctor_release(x_362, 0);
 lean_ctor_release(x_362, 1);
 x_365 = x_362;
} else {
 lean_dec_ref(x_362);
 x_365 = lean_box(0);
}
lean_inc(x_363);
x_366 = l_Lean_mkApp(x_32, x_363);
x_367 = lean_expr_instantiate1(x_357, x_363);
lean_dec(x_357);
x_368 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_368, 0, x_363);
if (lean_is_scalar(x_351)) {
 x_369 = lean_alloc_ctor(0, 4, 0);
} else {
 x_369 = x_351;
}
lean_ctor_set(x_369, 0, x_349);
lean_ctor_set(x_369, 1, x_25);
lean_ctor_set(x_369, 2, x_350);
lean_ctor_set(x_369, 3, x_368);
lean_ctor_set(x_3, 1, x_348);
lean_ctor_set(x_3, 0, x_369);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_367);
lean_ctor_set(x_370, 1, x_3);
lean_ctor_set(x_2, 1, x_370);
lean_ctor_set(x_2, 0, x_366);
if (lean_is_scalar(x_365)) {
 x_371 = lean_alloc_ctor(0, 2, 0);
} else {
 x_371 = x_365;
}
lean_ctor_set(x_371, 0, x_2);
lean_ctor_set(x_371, 1, x_364);
x_15 = x_371;
goto block_23;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_357);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_349);
lean_dec(x_348);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_372 = lean_ctor_get(x_362, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_362, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_362)) {
 lean_ctor_release(x_362, 0);
 lean_ctor_release(x_362, 1);
 x_374 = x_362;
} else {
 lean_dec_ref(x_362);
 x_374 = lean_box(0);
}
if (lean_is_scalar(x_374)) {
 x_375 = lean_alloc_ctor(1, 2, 0);
} else {
 x_375 = x_374;
}
lean_ctor_set(x_375, 0, x_372);
lean_ctor_set(x_375, 1, x_373);
x_15 = x_375;
goto block_23;
}
}
case 1:
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_376 = lean_ctor_get(x_353, 1);
lean_inc(x_376);
lean_dec(x_353);
x_377 = lean_ctor_get(x_354, 1);
lean_inc(x_377);
x_378 = lean_ctor_get(x_354, 2);
lean_inc(x_378);
lean_dec(x_354);
x_379 = lean_ctor_get(x_350, 0);
lean_inc(x_379);
if (lean_is_exclusive(x_350)) {
 lean_ctor_release(x_350, 0);
 x_380 = x_350;
} else {
 lean_dec_ref(x_350);
 x_380 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_377);
x_381 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_379, x_377, x_4, x_5, x_6, x_7, x_8, x_9, x_376);
if (lean_obj_tag(x_381) == 0)
{
lean_object* x_382; 
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_free_object(x_2);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
x_384 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_384, 0, x_377);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_384);
x_385 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_379, x_384, x_4, x_5, x_6, x_7, x_8, x_9, x_383);
if (lean_obj_tag(x_385) == 0)
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_386 = lean_ctor_get(x_385, 0);
lean_inc(x_386);
x_387 = lean_ctor_get(x_385, 1);
lean_inc(x_387);
lean_dec(x_385);
x_388 = lean_ctor_get(x_386, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_386, 1);
lean_inc(x_389);
if (lean_is_exclusive(x_386)) {
 lean_ctor_release(x_386, 0);
 lean_ctor_release(x_386, 1);
 x_390 = x_386;
} else {
 lean_dec_ref(x_386);
 x_390 = lean_box(0);
}
x_391 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_392 = l_Lean_Elab_Term_ensureHasType(x_384, x_388, x_391, x_4, x_5, x_6, x_7, x_8, x_9, x_387);
if (lean_obj_tag(x_392) == 0)
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
if (lean_is_exclusive(x_392)) {
 lean_ctor_release(x_392, 0);
 lean_ctor_release(x_392, 1);
 x_395 = x_392;
} else {
 lean_dec_ref(x_392);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_380)) {
 x_396 = lean_alloc_ctor(1, 1, 0);
} else {
 x_396 = x_380;
}
lean_ctor_set(x_396, 0, x_389);
lean_inc(x_393);
x_397 = l_Lean_mkApp(x_32, x_393);
x_398 = lean_expr_instantiate1(x_378, x_393);
lean_dec(x_378);
x_399 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_399, 0, x_393);
if (lean_is_scalar(x_351)) {
 x_400 = lean_alloc_ctor(0, 4, 0);
} else {
 x_400 = x_351;
}
lean_ctor_set(x_400, 0, x_349);
lean_ctor_set(x_400, 1, x_25);
lean_ctor_set(x_400, 2, x_396);
lean_ctor_set(x_400, 3, x_399);
lean_ctor_set(x_3, 1, x_348);
lean_ctor_set(x_3, 0, x_400);
if (lean_is_scalar(x_390)) {
 x_401 = lean_alloc_ctor(0, 2, 0);
} else {
 x_401 = x_390;
}
lean_ctor_set(x_401, 0, x_398);
lean_ctor_set(x_401, 1, x_3);
x_402 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_402, 0, x_397);
lean_ctor_set(x_402, 1, x_401);
if (lean_is_scalar(x_395)) {
 x_403 = lean_alloc_ctor(0, 2, 0);
} else {
 x_403 = x_395;
}
lean_ctor_set(x_403, 0, x_402);
lean_ctor_set(x_403, 1, x_394);
x_15 = x_403;
goto block_23;
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_380);
lean_dec(x_378);
lean_dec(x_351);
lean_dec(x_349);
lean_dec(x_348);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_404 = lean_ctor_get(x_392, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_392, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_392)) {
 lean_ctor_release(x_392, 0);
 lean_ctor_release(x_392, 1);
 x_406 = x_392;
} else {
 lean_dec_ref(x_392);
 x_406 = lean_box(0);
}
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(1, 2, 0);
} else {
 x_407 = x_406;
}
lean_ctor_set(x_407, 0, x_404);
lean_ctor_set(x_407, 1, x_405);
x_15 = x_407;
goto block_23;
}
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
lean_dec(x_384);
lean_dec(x_380);
lean_dec(x_378);
lean_dec(x_351);
lean_dec(x_349);
lean_dec(x_348);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_408 = lean_ctor_get(x_385, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_385, 1);
lean_inc(x_409);
if (lean_is_exclusive(x_385)) {
 lean_ctor_release(x_385, 0);
 lean_ctor_release(x_385, 1);
 x_410 = x_385;
} else {
 lean_dec_ref(x_385);
 x_410 = lean_box(0);
}
if (lean_is_scalar(x_410)) {
 x_411 = lean_alloc_ctor(1, 2, 0);
} else {
 x_411 = x_410;
}
lean_ctor_set(x_411, 0, x_408);
lean_ctor_set(x_411, 1, x_409);
x_15 = x_411;
goto block_23;
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_dec(x_379);
lean_dec(x_377);
x_412 = lean_ctor_get(x_381, 1);
lean_inc(x_412);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 x_413 = x_381;
} else {
 lean_dec_ref(x_381);
 x_413 = lean_box(0);
}
x_414 = lean_ctor_get(x_382, 0);
lean_inc(x_414);
if (lean_is_exclusive(x_382)) {
 lean_ctor_release(x_382, 0);
 x_415 = x_382;
} else {
 lean_dec_ref(x_382);
 x_415 = lean_box(0);
}
x_416 = l_Lean_mkHole(x_349);
if (lean_is_scalar(x_380)) {
 x_417 = lean_alloc_ctor(0, 1, 0);
} else {
 x_417 = x_380;
 lean_ctor_set_tag(x_417, 0);
}
lean_ctor_set(x_417, 0, x_416);
lean_inc(x_414);
x_418 = l_Lean_mkApp(x_32, x_414);
x_419 = lean_expr_instantiate1(x_378, x_414);
lean_dec(x_378);
if (lean_is_scalar(x_415)) {
 x_420 = lean_alloc_ctor(1, 1, 0);
} else {
 x_420 = x_415;
}
lean_ctor_set(x_420, 0, x_414);
if (lean_is_scalar(x_351)) {
 x_421 = lean_alloc_ctor(0, 4, 0);
} else {
 x_421 = x_351;
}
lean_ctor_set(x_421, 0, x_349);
lean_ctor_set(x_421, 1, x_25);
lean_ctor_set(x_421, 2, x_417);
lean_ctor_set(x_421, 3, x_420);
lean_ctor_set(x_3, 1, x_348);
lean_ctor_set(x_3, 0, x_421);
x_422 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_3);
lean_ctor_set(x_2, 1, x_422);
lean_ctor_set(x_2, 0, x_418);
if (lean_is_scalar(x_413)) {
 x_423 = lean_alloc_ctor(0, 2, 0);
} else {
 x_423 = x_413;
}
lean_ctor_set(x_423, 0, x_2);
lean_ctor_set(x_423, 1, x_412);
x_15 = x_423;
goto block_23;
}
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
lean_dec(x_380);
lean_dec(x_379);
lean_dec(x_378);
lean_dec(x_377);
lean_dec(x_351);
lean_dec(x_349);
lean_dec(x_348);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_424 = lean_ctor_get(x_381, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_381, 1);
lean_inc(x_425);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 x_426 = x_381;
} else {
 lean_dec_ref(x_381);
 x_426 = lean_box(0);
}
if (lean_is_scalar(x_426)) {
 x_427 = lean_alloc_ctor(1, 2, 0);
} else {
 x_427 = x_426;
}
lean_ctor_set(x_427, 0, x_424);
lean_ctor_set(x_427, 1, x_425);
x_15 = x_427;
goto block_23;
}
}
default: 
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; uint8_t x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_428 = lean_ctor_get(x_353, 1);
lean_inc(x_428);
lean_dec(x_353);
x_429 = lean_ctor_get(x_354, 1);
lean_inc(x_429);
x_430 = lean_ctor_get(x_354, 2);
lean_inc(x_430);
lean_dec(x_354);
x_431 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_431, 0, x_429);
x_432 = lean_ctor_get(x_8, 0);
lean_inc(x_432);
x_433 = lean_ctor_get(x_8, 1);
lean_inc(x_433);
x_434 = lean_ctor_get(x_8, 2);
lean_inc(x_434);
x_435 = lean_ctor_get(x_8, 3);
lean_inc(x_435);
x_436 = l_Lean_replaceRef(x_349, x_435);
lean_dec(x_435);
x_437 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_437, 0, x_432);
lean_ctor_set(x_437, 1, x_433);
lean_ctor_set(x_437, 2, x_434);
lean_ctor_set(x_437, 3, x_436);
x_438 = 0;
x_439 = lean_box(0);
lean_inc(x_6);
x_440 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_431, x_438, x_439, x_6, x_7, x_437, x_9, x_428);
lean_dec(x_437);
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_443 = x_440;
} else {
 lean_dec_ref(x_440);
 x_443 = lean_box(0);
}
x_444 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_441);
lean_inc(x_444);
x_445 = l_Lean_mkApp(x_32, x_444);
x_446 = lean_expr_instantiate1(x_430, x_444);
lean_dec(x_430);
x_447 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_447, 0, x_444);
if (lean_is_scalar(x_351)) {
 x_448 = lean_alloc_ctor(0, 4, 0);
} else {
 x_448 = x_351;
}
lean_ctor_set(x_448, 0, x_349);
lean_ctor_set(x_448, 1, x_25);
lean_ctor_set(x_448, 2, x_350);
lean_ctor_set(x_448, 3, x_447);
lean_ctor_set(x_3, 1, x_348);
lean_ctor_set(x_3, 0, x_448);
x_449 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_449, 0, x_446);
lean_ctor_set(x_449, 1, x_3);
lean_ctor_set(x_2, 1, x_449);
lean_ctor_set(x_2, 0, x_445);
if (lean_is_scalar(x_443)) {
 x_450 = lean_alloc_ctor(0, 2, 0);
} else {
 x_450 = x_443;
}
lean_ctor_set(x_450, 0, x_2);
lean_ctor_set(x_450, 1, x_442);
x_15 = x_450;
goto block_23;
}
}
}
else
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_348);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_451 = lean_ctor_get(x_353, 1);
lean_inc(x_451);
lean_dec(x_353);
x_452 = l_Lean_indentExpr(x_354);
x_453 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4;
x_454 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_452);
x_455 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_456 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_455);
x_457 = lean_ctor_get(x_8, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_8, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_8, 2);
lean_inc(x_459);
x_460 = lean_ctor_get(x_8, 3);
lean_inc(x_460);
x_461 = l_Lean_replaceRef(x_349, x_460);
lean_dec(x_460);
lean_dec(x_349);
x_462 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_462, 0, x_457);
lean_ctor_set(x_462, 1, x_458);
lean_ctor_set(x_462, 2, x_459);
lean_ctor_set(x_462, 3, x_461);
lean_inc(x_4);
lean_inc(x_1);
x_463 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_352, x_1, x_456, x_4, x_5, x_6, x_7, x_462, x_9, x_451);
lean_dec(x_462);
x_15 = x_463;
goto block_23;
}
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; 
lean_dec(x_352);
lean_dec(x_351);
lean_dec(x_350);
lean_dec(x_349);
lean_dec(x_348);
lean_free_object(x_2);
lean_dec(x_32);
lean_dec(x_25);
lean_free_object(x_3);
x_464 = lean_ctor_get(x_353, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_353, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 x_466 = x_353;
} else {
 lean_dec_ref(x_353);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 2, 0);
} else {
 x_467 = x_466;
}
lean_ctor_set(x_467, 0, x_464);
lean_ctor_set(x_467, 1, x_465);
x_15 = x_467;
goto block_23;
}
}
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_468 = lean_ctor_get(x_2, 0);
lean_inc(x_468);
lean_dec(x_2);
x_469 = lean_ctor_get(x_24, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_24, 1);
lean_inc(x_470);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_471 = x_24;
} else {
 lean_dec_ref(x_24);
 x_471 = lean_box(0);
}
x_472 = lean_ctor_get(x_13, 0);
lean_inc(x_472);
x_473 = lean_ctor_get(x_13, 2);
lean_inc(x_473);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 x_474 = x_13;
} else {
 lean_dec_ref(x_13);
 x_474 = lean_box(0);
}
x_475 = lean_ctor_get(x_29, 1);
lean_inc(x_475);
lean_dec(x_29);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_476 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_469, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_476) == 0)
{
lean_object* x_477; 
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
if (lean_obj_tag(x_477) == 7)
{
lean_dec(x_475);
switch (lean_obj_tag(x_473)) {
case 0:
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; uint8_t x_484; lean_object* x_485; 
x_478 = lean_ctor_get(x_476, 1);
lean_inc(x_478);
lean_dec(x_476);
x_479 = lean_ctor_get(x_477, 1);
lean_inc(x_479);
x_480 = lean_ctor_get(x_477, 2);
lean_inc(x_480);
lean_dec(x_477);
x_481 = lean_ctor_get(x_473, 0);
lean_inc(x_481);
x_482 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_482, 0, x_479);
x_483 = lean_box(0);
x_484 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_485 = l_Lean_Elab_Term_elabTermEnsuringType(x_481, x_482, x_484, x_483, x_4, x_5, x_6, x_7, x_8, x_9, x_478);
if (lean_obj_tag(x_485) == 0)
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; 
x_486 = lean_ctor_get(x_485, 0);
lean_inc(x_486);
x_487 = lean_ctor_get(x_485, 1);
lean_inc(x_487);
if (lean_is_exclusive(x_485)) {
 lean_ctor_release(x_485, 0);
 lean_ctor_release(x_485, 1);
 x_488 = x_485;
} else {
 lean_dec_ref(x_485);
 x_488 = lean_box(0);
}
lean_inc(x_486);
x_489 = l_Lean_mkApp(x_468, x_486);
x_490 = lean_expr_instantiate1(x_480, x_486);
lean_dec(x_480);
x_491 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_491, 0, x_486);
if (lean_is_scalar(x_474)) {
 x_492 = lean_alloc_ctor(0, 4, 0);
} else {
 x_492 = x_474;
}
lean_ctor_set(x_492, 0, x_472);
lean_ctor_set(x_492, 1, x_25);
lean_ctor_set(x_492, 2, x_473);
lean_ctor_set(x_492, 3, x_491);
lean_ctor_set(x_3, 1, x_470);
lean_ctor_set(x_3, 0, x_492);
if (lean_is_scalar(x_471)) {
 x_493 = lean_alloc_ctor(0, 2, 0);
} else {
 x_493 = x_471;
}
lean_ctor_set(x_493, 0, x_490);
lean_ctor_set(x_493, 1, x_3);
x_494 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_494, 0, x_489);
lean_ctor_set(x_494, 1, x_493);
if (lean_is_scalar(x_488)) {
 x_495 = lean_alloc_ctor(0, 2, 0);
} else {
 x_495 = x_488;
}
lean_ctor_set(x_495, 0, x_494);
lean_ctor_set(x_495, 1, x_487);
x_15 = x_495;
goto block_23;
}
else
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; 
lean_dec(x_480);
lean_dec(x_474);
lean_dec(x_473);
lean_dec(x_472);
lean_dec(x_471);
lean_dec(x_470);
lean_dec(x_468);
lean_dec(x_25);
lean_free_object(x_3);
x_496 = lean_ctor_get(x_485, 0);
lean_inc(x_496);
x_497 = lean_ctor_get(x_485, 1);
lean_inc(x_497);
if (lean_is_exclusive(x_485)) {
 lean_ctor_release(x_485, 0);
 lean_ctor_release(x_485, 1);
 x_498 = x_485;
} else {
 lean_dec_ref(x_485);
 x_498 = lean_box(0);
}
if (lean_is_scalar(x_498)) {
 x_499 = lean_alloc_ctor(1, 2, 0);
} else {
 x_499 = x_498;
}
lean_ctor_set(x_499, 0, x_496);
lean_ctor_set(x_499, 1, x_497);
x_15 = x_499;
goto block_23;
}
}
case 1:
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_500 = lean_ctor_get(x_476, 1);
lean_inc(x_500);
lean_dec(x_476);
x_501 = lean_ctor_get(x_477, 1);
lean_inc(x_501);
x_502 = lean_ctor_get(x_477, 2);
lean_inc(x_502);
lean_dec(x_477);
x_503 = lean_ctor_get(x_473, 0);
lean_inc(x_503);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 x_504 = x_473;
} else {
 lean_dec_ref(x_473);
 x_504 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_501);
x_505 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_503, x_501, x_4, x_5, x_6, x_7, x_8, x_9, x_500);
if (lean_obj_tag(x_505) == 0)
{
lean_object* x_506; 
x_506 = lean_ctor_get(x_505, 0);
lean_inc(x_506);
if (lean_obj_tag(x_506) == 0)
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; 
x_507 = lean_ctor_get(x_505, 1);
lean_inc(x_507);
lean_dec(x_505);
x_508 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_508, 0, x_501);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_508);
x_509 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_503, x_508, x_4, x_5, x_6, x_7, x_8, x_9, x_507);
if (lean_obj_tag(x_509) == 0)
{
lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; 
x_510 = lean_ctor_get(x_509, 0);
lean_inc(x_510);
x_511 = lean_ctor_get(x_509, 1);
lean_inc(x_511);
lean_dec(x_509);
x_512 = lean_ctor_get(x_510, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_510, 1);
lean_inc(x_513);
if (lean_is_exclusive(x_510)) {
 lean_ctor_release(x_510, 0);
 lean_ctor_release(x_510, 1);
 x_514 = x_510;
} else {
 lean_dec_ref(x_510);
 x_514 = lean_box(0);
}
x_515 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_516 = l_Lean_Elab_Term_ensureHasType(x_508, x_512, x_515, x_4, x_5, x_6, x_7, x_8, x_9, x_511);
if (lean_obj_tag(x_516) == 0)
{
lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_517 = lean_ctor_get(x_516, 0);
lean_inc(x_517);
x_518 = lean_ctor_get(x_516, 1);
lean_inc(x_518);
if (lean_is_exclusive(x_516)) {
 lean_ctor_release(x_516, 0);
 lean_ctor_release(x_516, 1);
 x_519 = x_516;
} else {
 lean_dec_ref(x_516);
 x_519 = lean_box(0);
}
if (lean_is_scalar(x_504)) {
 x_520 = lean_alloc_ctor(1, 1, 0);
} else {
 x_520 = x_504;
}
lean_ctor_set(x_520, 0, x_513);
lean_inc(x_517);
x_521 = l_Lean_mkApp(x_468, x_517);
x_522 = lean_expr_instantiate1(x_502, x_517);
lean_dec(x_502);
x_523 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_523, 0, x_517);
if (lean_is_scalar(x_474)) {
 x_524 = lean_alloc_ctor(0, 4, 0);
} else {
 x_524 = x_474;
}
lean_ctor_set(x_524, 0, x_472);
lean_ctor_set(x_524, 1, x_25);
lean_ctor_set(x_524, 2, x_520);
lean_ctor_set(x_524, 3, x_523);
lean_ctor_set(x_3, 1, x_470);
lean_ctor_set(x_3, 0, x_524);
if (lean_is_scalar(x_514)) {
 x_525 = lean_alloc_ctor(0, 2, 0);
} else {
 x_525 = x_514;
}
lean_ctor_set(x_525, 0, x_522);
lean_ctor_set(x_525, 1, x_3);
if (lean_is_scalar(x_471)) {
 x_526 = lean_alloc_ctor(0, 2, 0);
} else {
 x_526 = x_471;
}
lean_ctor_set(x_526, 0, x_521);
lean_ctor_set(x_526, 1, x_525);
if (lean_is_scalar(x_519)) {
 x_527 = lean_alloc_ctor(0, 2, 0);
} else {
 x_527 = x_519;
}
lean_ctor_set(x_527, 0, x_526);
lean_ctor_set(x_527, 1, x_518);
x_15 = x_527;
goto block_23;
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; 
lean_dec(x_514);
lean_dec(x_513);
lean_dec(x_504);
lean_dec(x_502);
lean_dec(x_474);
lean_dec(x_472);
lean_dec(x_471);
lean_dec(x_470);
lean_dec(x_468);
lean_dec(x_25);
lean_free_object(x_3);
x_528 = lean_ctor_get(x_516, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_516, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_516)) {
 lean_ctor_release(x_516, 0);
 lean_ctor_release(x_516, 1);
 x_530 = x_516;
} else {
 lean_dec_ref(x_516);
 x_530 = lean_box(0);
}
if (lean_is_scalar(x_530)) {
 x_531 = lean_alloc_ctor(1, 2, 0);
} else {
 x_531 = x_530;
}
lean_ctor_set(x_531, 0, x_528);
lean_ctor_set(x_531, 1, x_529);
x_15 = x_531;
goto block_23;
}
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; 
lean_dec(x_508);
lean_dec(x_504);
lean_dec(x_502);
lean_dec(x_474);
lean_dec(x_472);
lean_dec(x_471);
lean_dec(x_470);
lean_dec(x_468);
lean_dec(x_25);
lean_free_object(x_3);
x_532 = lean_ctor_get(x_509, 0);
lean_inc(x_532);
x_533 = lean_ctor_get(x_509, 1);
lean_inc(x_533);
if (lean_is_exclusive(x_509)) {
 lean_ctor_release(x_509, 0);
 lean_ctor_release(x_509, 1);
 x_534 = x_509;
} else {
 lean_dec_ref(x_509);
 x_534 = lean_box(0);
}
if (lean_is_scalar(x_534)) {
 x_535 = lean_alloc_ctor(1, 2, 0);
} else {
 x_535 = x_534;
}
lean_ctor_set(x_535, 0, x_532);
lean_ctor_set(x_535, 1, x_533);
x_15 = x_535;
goto block_23;
}
}
else
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; 
lean_dec(x_503);
lean_dec(x_501);
x_536 = lean_ctor_get(x_505, 1);
lean_inc(x_536);
if (lean_is_exclusive(x_505)) {
 lean_ctor_release(x_505, 0);
 lean_ctor_release(x_505, 1);
 x_537 = x_505;
} else {
 lean_dec_ref(x_505);
 x_537 = lean_box(0);
}
x_538 = lean_ctor_get(x_506, 0);
lean_inc(x_538);
if (lean_is_exclusive(x_506)) {
 lean_ctor_release(x_506, 0);
 x_539 = x_506;
} else {
 lean_dec_ref(x_506);
 x_539 = lean_box(0);
}
x_540 = l_Lean_mkHole(x_472);
if (lean_is_scalar(x_504)) {
 x_541 = lean_alloc_ctor(0, 1, 0);
} else {
 x_541 = x_504;
 lean_ctor_set_tag(x_541, 0);
}
lean_ctor_set(x_541, 0, x_540);
lean_inc(x_538);
x_542 = l_Lean_mkApp(x_468, x_538);
x_543 = lean_expr_instantiate1(x_502, x_538);
lean_dec(x_502);
if (lean_is_scalar(x_539)) {
 x_544 = lean_alloc_ctor(1, 1, 0);
} else {
 x_544 = x_539;
}
lean_ctor_set(x_544, 0, x_538);
if (lean_is_scalar(x_474)) {
 x_545 = lean_alloc_ctor(0, 4, 0);
} else {
 x_545 = x_474;
}
lean_ctor_set(x_545, 0, x_472);
lean_ctor_set(x_545, 1, x_25);
lean_ctor_set(x_545, 2, x_541);
lean_ctor_set(x_545, 3, x_544);
lean_ctor_set(x_3, 1, x_470);
lean_ctor_set(x_3, 0, x_545);
if (lean_is_scalar(x_471)) {
 x_546 = lean_alloc_ctor(0, 2, 0);
} else {
 x_546 = x_471;
}
lean_ctor_set(x_546, 0, x_543);
lean_ctor_set(x_546, 1, x_3);
x_547 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_547, 0, x_542);
lean_ctor_set(x_547, 1, x_546);
if (lean_is_scalar(x_537)) {
 x_548 = lean_alloc_ctor(0, 2, 0);
} else {
 x_548 = x_537;
}
lean_ctor_set(x_548, 0, x_547);
lean_ctor_set(x_548, 1, x_536);
x_15 = x_548;
goto block_23;
}
}
else
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; 
lean_dec(x_504);
lean_dec(x_503);
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_474);
lean_dec(x_472);
lean_dec(x_471);
lean_dec(x_470);
lean_dec(x_468);
lean_dec(x_25);
lean_free_object(x_3);
x_549 = lean_ctor_get(x_505, 0);
lean_inc(x_549);
x_550 = lean_ctor_get(x_505, 1);
lean_inc(x_550);
if (lean_is_exclusive(x_505)) {
 lean_ctor_release(x_505, 0);
 lean_ctor_release(x_505, 1);
 x_551 = x_505;
} else {
 lean_dec_ref(x_505);
 x_551 = lean_box(0);
}
if (lean_is_scalar(x_551)) {
 x_552 = lean_alloc_ctor(1, 2, 0);
} else {
 x_552 = x_551;
}
lean_ctor_set(x_552, 0, x_549);
lean_ctor_set(x_552, 1, x_550);
x_15 = x_552;
goto block_23;
}
}
default: 
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; uint8_t x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; 
x_553 = lean_ctor_get(x_476, 1);
lean_inc(x_553);
lean_dec(x_476);
x_554 = lean_ctor_get(x_477, 1);
lean_inc(x_554);
x_555 = lean_ctor_get(x_477, 2);
lean_inc(x_555);
lean_dec(x_477);
x_556 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_556, 0, x_554);
x_557 = lean_ctor_get(x_8, 0);
lean_inc(x_557);
x_558 = lean_ctor_get(x_8, 1);
lean_inc(x_558);
x_559 = lean_ctor_get(x_8, 2);
lean_inc(x_559);
x_560 = lean_ctor_get(x_8, 3);
lean_inc(x_560);
x_561 = l_Lean_replaceRef(x_472, x_560);
lean_dec(x_560);
x_562 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_562, 0, x_557);
lean_ctor_set(x_562, 1, x_558);
lean_ctor_set(x_562, 2, x_559);
lean_ctor_set(x_562, 3, x_561);
x_563 = 0;
x_564 = lean_box(0);
lean_inc(x_6);
x_565 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_556, x_563, x_564, x_6, x_7, x_562, x_9, x_553);
lean_dec(x_562);
x_566 = lean_ctor_get(x_565, 0);
lean_inc(x_566);
x_567 = lean_ctor_get(x_565, 1);
lean_inc(x_567);
if (lean_is_exclusive(x_565)) {
 lean_ctor_release(x_565, 0);
 lean_ctor_release(x_565, 1);
 x_568 = x_565;
} else {
 lean_dec_ref(x_565);
 x_568 = lean_box(0);
}
x_569 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_566);
lean_inc(x_569);
x_570 = l_Lean_mkApp(x_468, x_569);
x_571 = lean_expr_instantiate1(x_555, x_569);
lean_dec(x_555);
x_572 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_572, 0, x_569);
if (lean_is_scalar(x_474)) {
 x_573 = lean_alloc_ctor(0, 4, 0);
} else {
 x_573 = x_474;
}
lean_ctor_set(x_573, 0, x_472);
lean_ctor_set(x_573, 1, x_25);
lean_ctor_set(x_573, 2, x_473);
lean_ctor_set(x_573, 3, x_572);
lean_ctor_set(x_3, 1, x_470);
lean_ctor_set(x_3, 0, x_573);
if (lean_is_scalar(x_471)) {
 x_574 = lean_alloc_ctor(0, 2, 0);
} else {
 x_574 = x_471;
}
lean_ctor_set(x_574, 0, x_571);
lean_ctor_set(x_574, 1, x_3);
x_575 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_575, 0, x_570);
lean_ctor_set(x_575, 1, x_574);
if (lean_is_scalar(x_568)) {
 x_576 = lean_alloc_ctor(0, 2, 0);
} else {
 x_576 = x_568;
}
lean_ctor_set(x_576, 0, x_575);
lean_ctor_set(x_576, 1, x_567);
x_15 = x_576;
goto block_23;
}
}
}
else
{
lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; 
lean_dec(x_474);
lean_dec(x_473);
lean_dec(x_471);
lean_dec(x_470);
lean_dec(x_468);
lean_dec(x_25);
lean_free_object(x_3);
x_577 = lean_ctor_get(x_476, 1);
lean_inc(x_577);
lean_dec(x_476);
x_578 = l_Lean_indentExpr(x_477);
x_579 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4;
x_580 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_580, 0, x_579);
lean_ctor_set(x_580, 1, x_578);
x_581 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_582 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_582, 0, x_580);
lean_ctor_set(x_582, 1, x_581);
x_583 = lean_ctor_get(x_8, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_8, 1);
lean_inc(x_584);
x_585 = lean_ctor_get(x_8, 2);
lean_inc(x_585);
x_586 = lean_ctor_get(x_8, 3);
lean_inc(x_586);
x_587 = l_Lean_replaceRef(x_472, x_586);
lean_dec(x_586);
lean_dec(x_472);
x_588 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_588, 0, x_583);
lean_ctor_set(x_588, 1, x_584);
lean_ctor_set(x_588, 2, x_585);
lean_ctor_set(x_588, 3, x_587);
lean_inc(x_4);
lean_inc(x_1);
x_589 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_475, x_1, x_582, x_4, x_5, x_6, x_7, x_588, x_9, x_577);
lean_dec(x_588);
x_15 = x_589;
goto block_23;
}
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; 
lean_dec(x_475);
lean_dec(x_474);
lean_dec(x_473);
lean_dec(x_472);
lean_dec(x_471);
lean_dec(x_470);
lean_dec(x_468);
lean_dec(x_25);
lean_free_object(x_3);
x_590 = lean_ctor_get(x_476, 0);
lean_inc(x_590);
x_591 = lean_ctor_get(x_476, 1);
lean_inc(x_591);
if (lean_is_exclusive(x_476)) {
 lean_ctor_release(x_476, 0);
 lean_ctor_release(x_476, 1);
 x_592 = x_476;
} else {
 lean_dec_ref(x_476);
 x_592 = lean_box(0);
}
if (lean_is_scalar(x_592)) {
 x_593 = lean_alloc_ctor(1, 2, 0);
} else {
 x_593 = x_592;
}
lean_ctor_set(x_593, 0, x_590);
lean_ctor_set(x_593, 1, x_591);
x_15 = x_593;
goto block_23;
}
}
}
else
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_25);
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_594 = lean_ctor_get(x_13, 0);
lean_inc(x_594);
lean_dec(x_13);
x_595 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_4);
x_596 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_594, x_595, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_594);
x_15 = x_596;
goto block_23;
}
}
else
{
lean_object* x_597; lean_object* x_598; lean_object* x_599; 
lean_dec(x_29);
lean_dec(x_25);
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_597 = lean_ctor_get(x_13, 0);
lean_inc(x_597);
lean_dec(x_13);
x_598 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_4);
x_599 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_597, x_598, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_597);
x_15 = x_599;
goto block_23;
}
}
block_23:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_2 = x_16;
x_3 = x_14;
x_10 = x_17;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
else
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_611; lean_object* x_612; 
x_600 = lean_ctor_get(x_3, 0);
x_601 = lean_ctor_get(x_3, 1);
lean_inc(x_601);
lean_inc(x_600);
lean_dec(x_3);
x_611 = lean_ctor_get(x_2, 1);
lean_inc(x_611);
x_612 = lean_ctor_get(x_600, 1);
lean_inc(x_612);
if (lean_obj_tag(x_612) == 0)
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; 
lean_dec(x_611);
lean_dec(x_2);
x_613 = lean_ctor_get(x_600, 0);
lean_inc(x_613);
lean_dec(x_600);
x_614 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_4);
x_615 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_613, x_614, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_613);
x_602 = x_615;
goto block_610;
}
else
{
lean_object* x_616; 
x_616 = lean_ctor_get(x_612, 0);
lean_inc(x_616);
if (lean_obj_tag(x_616) == 0)
{
lean_object* x_617; 
x_617 = lean_ctor_get(x_612, 1);
lean_inc(x_617);
if (lean_obj_tag(x_617) == 0)
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; 
x_618 = lean_ctor_get(x_2, 0);
lean_inc(x_618);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_619 = x_2;
} else {
 lean_dec_ref(x_2);
 x_619 = lean_box(0);
}
x_620 = lean_ctor_get(x_611, 0);
lean_inc(x_620);
x_621 = lean_ctor_get(x_611, 1);
lean_inc(x_621);
if (lean_is_exclusive(x_611)) {
 lean_ctor_release(x_611, 0);
 lean_ctor_release(x_611, 1);
 x_622 = x_611;
} else {
 lean_dec_ref(x_611);
 x_622 = lean_box(0);
}
x_623 = lean_ctor_get(x_600, 0);
lean_inc(x_623);
x_624 = lean_ctor_get(x_600, 2);
lean_inc(x_624);
if (lean_is_exclusive(x_600)) {
 lean_ctor_release(x_600, 0);
 lean_ctor_release(x_600, 1);
 lean_ctor_release(x_600, 2);
 lean_ctor_release(x_600, 3);
 x_625 = x_600;
} else {
 lean_dec_ref(x_600);
 x_625 = lean_box(0);
}
x_626 = lean_ctor_get(x_616, 1);
lean_inc(x_626);
lean_dec(x_616);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_627 = l_Lean_Meta_whnfForall___at___private_Lean_Elab_Term_0__Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_620, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_627) == 0)
{
lean_object* x_628; 
x_628 = lean_ctor_get(x_627, 0);
lean_inc(x_628);
if (lean_obj_tag(x_628) == 7)
{
lean_dec(x_626);
switch (lean_obj_tag(x_624)) {
case 0:
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; uint8_t x_635; lean_object* x_636; 
x_629 = lean_ctor_get(x_627, 1);
lean_inc(x_629);
lean_dec(x_627);
x_630 = lean_ctor_get(x_628, 1);
lean_inc(x_630);
x_631 = lean_ctor_get(x_628, 2);
lean_inc(x_631);
lean_dec(x_628);
x_632 = lean_ctor_get(x_624, 0);
lean_inc(x_632);
x_633 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_633, 0, x_630);
x_634 = lean_box(0);
x_635 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_636 = l_Lean_Elab_Term_elabTermEnsuringType(x_632, x_633, x_635, x_634, x_4, x_5, x_6, x_7, x_8, x_9, x_629);
if (lean_obj_tag(x_636) == 0)
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; 
x_637 = lean_ctor_get(x_636, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_636, 1);
lean_inc(x_638);
if (lean_is_exclusive(x_636)) {
 lean_ctor_release(x_636, 0);
 lean_ctor_release(x_636, 1);
 x_639 = x_636;
} else {
 lean_dec_ref(x_636);
 x_639 = lean_box(0);
}
lean_inc(x_637);
x_640 = l_Lean_mkApp(x_618, x_637);
x_641 = lean_expr_instantiate1(x_631, x_637);
lean_dec(x_631);
x_642 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_642, 0, x_637);
if (lean_is_scalar(x_625)) {
 x_643 = lean_alloc_ctor(0, 4, 0);
} else {
 x_643 = x_625;
}
lean_ctor_set(x_643, 0, x_623);
lean_ctor_set(x_643, 1, x_612);
lean_ctor_set(x_643, 2, x_624);
lean_ctor_set(x_643, 3, x_642);
x_644 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_644, 0, x_643);
lean_ctor_set(x_644, 1, x_621);
if (lean_is_scalar(x_622)) {
 x_645 = lean_alloc_ctor(0, 2, 0);
} else {
 x_645 = x_622;
}
lean_ctor_set(x_645, 0, x_641);
lean_ctor_set(x_645, 1, x_644);
if (lean_is_scalar(x_619)) {
 x_646 = lean_alloc_ctor(0, 2, 0);
} else {
 x_646 = x_619;
}
lean_ctor_set(x_646, 0, x_640);
lean_ctor_set(x_646, 1, x_645);
if (lean_is_scalar(x_639)) {
 x_647 = lean_alloc_ctor(0, 2, 0);
} else {
 x_647 = x_639;
}
lean_ctor_set(x_647, 0, x_646);
lean_ctor_set(x_647, 1, x_638);
x_602 = x_647;
goto block_610;
}
else
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; 
lean_dec(x_631);
lean_dec(x_625);
lean_dec(x_624);
lean_dec(x_623);
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_619);
lean_dec(x_618);
lean_dec(x_612);
x_648 = lean_ctor_get(x_636, 0);
lean_inc(x_648);
x_649 = lean_ctor_get(x_636, 1);
lean_inc(x_649);
if (lean_is_exclusive(x_636)) {
 lean_ctor_release(x_636, 0);
 lean_ctor_release(x_636, 1);
 x_650 = x_636;
} else {
 lean_dec_ref(x_636);
 x_650 = lean_box(0);
}
if (lean_is_scalar(x_650)) {
 x_651 = lean_alloc_ctor(1, 2, 0);
} else {
 x_651 = x_650;
}
lean_ctor_set(x_651, 0, x_648);
lean_ctor_set(x_651, 1, x_649);
x_602 = x_651;
goto block_610;
}
}
case 1:
{
lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; 
x_652 = lean_ctor_get(x_627, 1);
lean_inc(x_652);
lean_dec(x_627);
x_653 = lean_ctor_get(x_628, 1);
lean_inc(x_653);
x_654 = lean_ctor_get(x_628, 2);
lean_inc(x_654);
lean_dec(x_628);
x_655 = lean_ctor_get(x_624, 0);
lean_inc(x_655);
if (lean_is_exclusive(x_624)) {
 lean_ctor_release(x_624, 0);
 x_656 = x_624;
} else {
 lean_dec_ref(x_624);
 x_656 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_653);
x_657 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_655, x_653, x_4, x_5, x_6, x_7, x_8, x_9, x_652);
if (lean_obj_tag(x_657) == 0)
{
lean_object* x_658; 
x_658 = lean_ctor_get(x_657, 0);
lean_inc(x_658);
if (lean_obj_tag(x_658) == 0)
{
lean_object* x_659; lean_object* x_660; lean_object* x_661; 
lean_dec(x_619);
x_659 = lean_ctor_get(x_657, 1);
lean_inc(x_659);
lean_dec(x_657);
x_660 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_660, 0, x_653);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_660);
x_661 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_655, x_660, x_4, x_5, x_6, x_7, x_8, x_9, x_659);
if (lean_obj_tag(x_661) == 0)
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; 
x_662 = lean_ctor_get(x_661, 0);
lean_inc(x_662);
x_663 = lean_ctor_get(x_661, 1);
lean_inc(x_663);
lean_dec(x_661);
x_664 = lean_ctor_get(x_662, 0);
lean_inc(x_664);
x_665 = lean_ctor_get(x_662, 1);
lean_inc(x_665);
if (lean_is_exclusive(x_662)) {
 lean_ctor_release(x_662, 0);
 lean_ctor_release(x_662, 1);
 x_666 = x_662;
} else {
 lean_dec_ref(x_662);
 x_666 = lean_box(0);
}
x_667 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_668 = l_Lean_Elab_Term_ensureHasType(x_660, x_664, x_667, x_4, x_5, x_6, x_7, x_8, x_9, x_663);
if (lean_obj_tag(x_668) == 0)
{
lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; 
x_669 = lean_ctor_get(x_668, 0);
lean_inc(x_669);
x_670 = lean_ctor_get(x_668, 1);
lean_inc(x_670);
if (lean_is_exclusive(x_668)) {
 lean_ctor_release(x_668, 0);
 lean_ctor_release(x_668, 1);
 x_671 = x_668;
} else {
 lean_dec_ref(x_668);
 x_671 = lean_box(0);
}
if (lean_is_scalar(x_656)) {
 x_672 = lean_alloc_ctor(1, 1, 0);
} else {
 x_672 = x_656;
}
lean_ctor_set(x_672, 0, x_665);
lean_inc(x_669);
x_673 = l_Lean_mkApp(x_618, x_669);
x_674 = lean_expr_instantiate1(x_654, x_669);
lean_dec(x_654);
x_675 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_675, 0, x_669);
if (lean_is_scalar(x_625)) {
 x_676 = lean_alloc_ctor(0, 4, 0);
} else {
 x_676 = x_625;
}
lean_ctor_set(x_676, 0, x_623);
lean_ctor_set(x_676, 1, x_612);
lean_ctor_set(x_676, 2, x_672);
lean_ctor_set(x_676, 3, x_675);
x_677 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_677, 0, x_676);
lean_ctor_set(x_677, 1, x_621);
if (lean_is_scalar(x_666)) {
 x_678 = lean_alloc_ctor(0, 2, 0);
} else {
 x_678 = x_666;
}
lean_ctor_set(x_678, 0, x_674);
lean_ctor_set(x_678, 1, x_677);
if (lean_is_scalar(x_622)) {
 x_679 = lean_alloc_ctor(0, 2, 0);
} else {
 x_679 = x_622;
}
lean_ctor_set(x_679, 0, x_673);
lean_ctor_set(x_679, 1, x_678);
if (lean_is_scalar(x_671)) {
 x_680 = lean_alloc_ctor(0, 2, 0);
} else {
 x_680 = x_671;
}
lean_ctor_set(x_680, 0, x_679);
lean_ctor_set(x_680, 1, x_670);
x_602 = x_680;
goto block_610;
}
else
{
lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; 
lean_dec(x_666);
lean_dec(x_665);
lean_dec(x_656);
lean_dec(x_654);
lean_dec(x_625);
lean_dec(x_623);
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_618);
lean_dec(x_612);
x_681 = lean_ctor_get(x_668, 0);
lean_inc(x_681);
x_682 = lean_ctor_get(x_668, 1);
lean_inc(x_682);
if (lean_is_exclusive(x_668)) {
 lean_ctor_release(x_668, 0);
 lean_ctor_release(x_668, 1);
 x_683 = x_668;
} else {
 lean_dec_ref(x_668);
 x_683 = lean_box(0);
}
if (lean_is_scalar(x_683)) {
 x_684 = lean_alloc_ctor(1, 2, 0);
} else {
 x_684 = x_683;
}
lean_ctor_set(x_684, 0, x_681);
lean_ctor_set(x_684, 1, x_682);
x_602 = x_684;
goto block_610;
}
}
else
{
lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; 
lean_dec(x_660);
lean_dec(x_656);
lean_dec(x_654);
lean_dec(x_625);
lean_dec(x_623);
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_618);
lean_dec(x_612);
x_685 = lean_ctor_get(x_661, 0);
lean_inc(x_685);
x_686 = lean_ctor_get(x_661, 1);
lean_inc(x_686);
if (lean_is_exclusive(x_661)) {
 lean_ctor_release(x_661, 0);
 lean_ctor_release(x_661, 1);
 x_687 = x_661;
} else {
 lean_dec_ref(x_661);
 x_687 = lean_box(0);
}
if (lean_is_scalar(x_687)) {
 x_688 = lean_alloc_ctor(1, 2, 0);
} else {
 x_688 = x_687;
}
lean_ctor_set(x_688, 0, x_685);
lean_ctor_set(x_688, 1, x_686);
x_602 = x_688;
goto block_610;
}
}
else
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; 
lean_dec(x_655);
lean_dec(x_653);
x_689 = lean_ctor_get(x_657, 1);
lean_inc(x_689);
if (lean_is_exclusive(x_657)) {
 lean_ctor_release(x_657, 0);
 lean_ctor_release(x_657, 1);
 x_690 = x_657;
} else {
 lean_dec_ref(x_657);
 x_690 = lean_box(0);
}
x_691 = lean_ctor_get(x_658, 0);
lean_inc(x_691);
if (lean_is_exclusive(x_658)) {
 lean_ctor_release(x_658, 0);
 x_692 = x_658;
} else {
 lean_dec_ref(x_658);
 x_692 = lean_box(0);
}
x_693 = l_Lean_mkHole(x_623);
if (lean_is_scalar(x_656)) {
 x_694 = lean_alloc_ctor(0, 1, 0);
} else {
 x_694 = x_656;
 lean_ctor_set_tag(x_694, 0);
}
lean_ctor_set(x_694, 0, x_693);
lean_inc(x_691);
x_695 = l_Lean_mkApp(x_618, x_691);
x_696 = lean_expr_instantiate1(x_654, x_691);
lean_dec(x_654);
if (lean_is_scalar(x_692)) {
 x_697 = lean_alloc_ctor(1, 1, 0);
} else {
 x_697 = x_692;
}
lean_ctor_set(x_697, 0, x_691);
if (lean_is_scalar(x_625)) {
 x_698 = lean_alloc_ctor(0, 4, 0);
} else {
 x_698 = x_625;
}
lean_ctor_set(x_698, 0, x_623);
lean_ctor_set(x_698, 1, x_612);
lean_ctor_set(x_698, 2, x_694);
lean_ctor_set(x_698, 3, x_697);
x_699 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_699, 0, x_698);
lean_ctor_set(x_699, 1, x_621);
if (lean_is_scalar(x_622)) {
 x_700 = lean_alloc_ctor(0, 2, 0);
} else {
 x_700 = x_622;
}
lean_ctor_set(x_700, 0, x_696);
lean_ctor_set(x_700, 1, x_699);
if (lean_is_scalar(x_619)) {
 x_701 = lean_alloc_ctor(0, 2, 0);
} else {
 x_701 = x_619;
}
lean_ctor_set(x_701, 0, x_695);
lean_ctor_set(x_701, 1, x_700);
if (lean_is_scalar(x_690)) {
 x_702 = lean_alloc_ctor(0, 2, 0);
} else {
 x_702 = x_690;
}
lean_ctor_set(x_702, 0, x_701);
lean_ctor_set(x_702, 1, x_689);
x_602 = x_702;
goto block_610;
}
}
else
{
lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; 
lean_dec(x_656);
lean_dec(x_655);
lean_dec(x_654);
lean_dec(x_653);
lean_dec(x_625);
lean_dec(x_623);
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_619);
lean_dec(x_618);
lean_dec(x_612);
x_703 = lean_ctor_get(x_657, 0);
lean_inc(x_703);
x_704 = lean_ctor_get(x_657, 1);
lean_inc(x_704);
if (lean_is_exclusive(x_657)) {
 lean_ctor_release(x_657, 0);
 lean_ctor_release(x_657, 1);
 x_705 = x_657;
} else {
 lean_dec_ref(x_657);
 x_705 = lean_box(0);
}
if (lean_is_scalar(x_705)) {
 x_706 = lean_alloc_ctor(1, 2, 0);
} else {
 x_706 = x_705;
}
lean_ctor_set(x_706, 0, x_703);
lean_ctor_set(x_706, 1, x_704);
x_602 = x_706;
goto block_610;
}
}
default: 
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; uint8_t x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; 
x_707 = lean_ctor_get(x_627, 1);
lean_inc(x_707);
lean_dec(x_627);
x_708 = lean_ctor_get(x_628, 1);
lean_inc(x_708);
x_709 = lean_ctor_get(x_628, 2);
lean_inc(x_709);
lean_dec(x_628);
x_710 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_710, 0, x_708);
x_711 = lean_ctor_get(x_8, 0);
lean_inc(x_711);
x_712 = lean_ctor_get(x_8, 1);
lean_inc(x_712);
x_713 = lean_ctor_get(x_8, 2);
lean_inc(x_713);
x_714 = lean_ctor_get(x_8, 3);
lean_inc(x_714);
x_715 = l_Lean_replaceRef(x_623, x_714);
lean_dec(x_714);
x_716 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_716, 0, x_711);
lean_ctor_set(x_716, 1, x_712);
lean_ctor_set(x_716, 2, x_713);
lean_ctor_set(x_716, 3, x_715);
x_717 = 0;
x_718 = lean_box(0);
lean_inc(x_6);
x_719 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_710, x_717, x_718, x_6, x_7, x_716, x_9, x_707);
lean_dec(x_716);
x_720 = lean_ctor_get(x_719, 0);
lean_inc(x_720);
x_721 = lean_ctor_get(x_719, 1);
lean_inc(x_721);
if (lean_is_exclusive(x_719)) {
 lean_ctor_release(x_719, 0);
 lean_ctor_release(x_719, 1);
 x_722 = x_719;
} else {
 lean_dec_ref(x_719);
 x_722 = lean_box(0);
}
x_723 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_720);
lean_inc(x_723);
x_724 = l_Lean_mkApp(x_618, x_723);
x_725 = lean_expr_instantiate1(x_709, x_723);
lean_dec(x_709);
x_726 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_726, 0, x_723);
if (lean_is_scalar(x_625)) {
 x_727 = lean_alloc_ctor(0, 4, 0);
} else {
 x_727 = x_625;
}
lean_ctor_set(x_727, 0, x_623);
lean_ctor_set(x_727, 1, x_612);
lean_ctor_set(x_727, 2, x_624);
lean_ctor_set(x_727, 3, x_726);
x_728 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_728, 0, x_727);
lean_ctor_set(x_728, 1, x_621);
if (lean_is_scalar(x_622)) {
 x_729 = lean_alloc_ctor(0, 2, 0);
} else {
 x_729 = x_622;
}
lean_ctor_set(x_729, 0, x_725);
lean_ctor_set(x_729, 1, x_728);
if (lean_is_scalar(x_619)) {
 x_730 = lean_alloc_ctor(0, 2, 0);
} else {
 x_730 = x_619;
}
lean_ctor_set(x_730, 0, x_724);
lean_ctor_set(x_730, 1, x_729);
if (lean_is_scalar(x_722)) {
 x_731 = lean_alloc_ctor(0, 2, 0);
} else {
 x_731 = x_722;
}
lean_ctor_set(x_731, 0, x_730);
lean_ctor_set(x_731, 1, x_721);
x_602 = x_731;
goto block_610;
}
}
}
else
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; 
lean_dec(x_625);
lean_dec(x_624);
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_619);
lean_dec(x_618);
lean_dec(x_612);
x_732 = lean_ctor_get(x_627, 1);
lean_inc(x_732);
lean_dec(x_627);
x_733 = l_Lean_indentExpr(x_628);
x_734 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4;
x_735 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_735, 0, x_734);
lean_ctor_set(x_735, 1, x_733);
x_736 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_737 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_737, 0, x_735);
lean_ctor_set(x_737, 1, x_736);
x_738 = lean_ctor_get(x_8, 0);
lean_inc(x_738);
x_739 = lean_ctor_get(x_8, 1);
lean_inc(x_739);
x_740 = lean_ctor_get(x_8, 2);
lean_inc(x_740);
x_741 = lean_ctor_get(x_8, 3);
lean_inc(x_741);
x_742 = l_Lean_replaceRef(x_623, x_741);
lean_dec(x_741);
lean_dec(x_623);
x_743 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_743, 0, x_738);
lean_ctor_set(x_743, 1, x_739);
lean_ctor_set(x_743, 2, x_740);
lean_ctor_set(x_743, 3, x_742);
lean_inc(x_4);
lean_inc(x_1);
x_744 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_626, x_1, x_737, x_4, x_5, x_6, x_7, x_743, x_9, x_732);
lean_dec(x_743);
x_602 = x_744;
goto block_610;
}
}
else
{
lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; 
lean_dec(x_626);
lean_dec(x_625);
lean_dec(x_624);
lean_dec(x_623);
lean_dec(x_622);
lean_dec(x_621);
lean_dec(x_619);
lean_dec(x_618);
lean_dec(x_612);
x_745 = lean_ctor_get(x_627, 0);
lean_inc(x_745);
x_746 = lean_ctor_get(x_627, 1);
lean_inc(x_746);
if (lean_is_exclusive(x_627)) {
 lean_ctor_release(x_627, 0);
 lean_ctor_release(x_627, 1);
 x_747 = x_627;
} else {
 lean_dec_ref(x_627);
 x_747 = lean_box(0);
}
if (lean_is_scalar(x_747)) {
 x_748 = lean_alloc_ctor(1, 2, 0);
} else {
 x_748 = x_747;
}
lean_ctor_set(x_748, 0, x_745);
lean_ctor_set(x_748, 1, x_746);
x_602 = x_748;
goto block_610;
}
}
else
{
lean_object* x_749; lean_object* x_750; lean_object* x_751; 
lean_dec(x_617);
lean_dec(x_616);
lean_dec(x_612);
lean_dec(x_611);
lean_dec(x_2);
x_749 = lean_ctor_get(x_600, 0);
lean_inc(x_749);
lean_dec(x_600);
x_750 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_4);
x_751 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_749, x_750, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_749);
x_602 = x_751;
goto block_610;
}
}
else
{
lean_object* x_752; lean_object* x_753; lean_object* x_754; 
lean_dec(x_616);
lean_dec(x_612);
lean_dec(x_611);
lean_dec(x_2);
x_752 = lean_ctor_get(x_600, 0);
lean_inc(x_752);
lean_dec(x_600);
x_753 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_4);
x_754 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__1___rarg(x_752, x_753, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_752);
x_602 = x_754;
goto block_610;
}
}
block_610:
{
if (lean_obj_tag(x_602) == 0)
{
lean_object* x_603; lean_object* x_604; 
x_603 = lean_ctor_get(x_602, 0);
lean_inc(x_603);
x_604 = lean_ctor_get(x_602, 1);
lean_inc(x_604);
lean_dec(x_602);
x_2 = x_603;
x_3 = x_601;
x_10 = x_604;
goto _start;
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; 
lean_dec(x_601);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_606 = lean_ctor_get(x_602, 0);
lean_inc(x_606);
x_607 = lean_ctor_get(x_602, 1);
lean_inc(x_607);
if (lean_is_exclusive(x_602)) {
 lean_ctor_release(x_602, 0);
 lean_ctor_release(x_602, 1);
 x_608 = x_602;
} else {
 lean_dec_ref(x_602);
 x_608 = lean_box(0);
}
if (lean_is_scalar(x_608)) {
 x_609 = lean_alloc_ctor(1, 2, 0);
} else {
 x_609 = x_608;
}
lean_ctor_set(x_609, 0, x_606);
lean_ctor_set(x_609, 1, x_607);
return x_609;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_7, 3);
x_13 = l_Lean_replaceRef(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_ctor_set(x_7, 3, x_13);
x_14 = lean_st_ref_get(x_8, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_18);
x_19 = l_Lean_getStructureCtor(x_17, x_18);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_20 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_29 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_18, x_27, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_29, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_30, 0);
lean_inc(x_34);
lean_dec(x_30);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_31, 1);
x_37 = lean_ctor_get(x_31, 0);
lean_dec(x_37);
x_38 = l_List_reverse___rarg(x_36);
x_39 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_38);
lean_ctor_set(x_31, 1, x_39);
lean_ctor_set(x_31, 0, x_34);
lean_ctor_set(x_29, 0, x_31);
return x_29;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_dec(x_31);
x_41 = l_List_reverse___rarg(x_40);
x_42 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_29, 0, x_43);
return x_29;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
lean_dec(x_29);
x_45 = lean_ctor_get(x_30, 0);
lean_inc(x_45);
lean_dec(x_30);
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_47 = x_31;
} else {
 lean_dec_ref(x_31);
 x_47 = lean_box(0);
}
x_48 = l_List_reverse___rarg(x_46);
x_49 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_48);
if (lean_is_scalar(x_47)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_47;
}
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_29);
if (x_52 == 0)
{
return x_29;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_29, 0);
x_54 = lean_ctor_get(x_29, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_29);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_20);
if (x_56 == 0)
{
return x_20;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_20, 0);
x_58 = lean_ctor_get(x_20, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_20);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_60 = lean_ctor_get(x_7, 0);
x_61 = lean_ctor_get(x_7, 1);
x_62 = lean_ctor_get(x_7, 2);
x_63 = lean_ctor_get(x_7, 3);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_7);
x_64 = l_Lean_replaceRef(x_10, x_63);
lean_dec(x_63);
lean_dec(x_10);
x_65 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_65, 0, x_60);
lean_ctor_set(x_65, 1, x_61);
lean_ctor_set(x_65, 2, x_62);
lean_ctor_set(x_65, 3, x_64);
x_66 = lean_st_ref_get(x_8, x_9);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_70);
x_71 = l_Lean_getStructureCtor(x_69, x_70);
lean_inc(x_8);
lean_inc(x_65);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_72 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(x_71, x_2, x_3, x_4, x_5, x_6, x_65, x_8, x_68);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
lean_dec(x_73);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_75);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_81 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_70, x_79, x_80, x_3, x_4, x_5, x_6, x_65, x_8, x_74);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_85 = x_81;
} else {
 lean_dec_ref(x_81);
 x_85 = lean_box(0);
}
x_86 = lean_ctor_get(x_82, 0);
lean_inc(x_86);
lean_dec(x_82);
x_87 = lean_ctor_get(x_83, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_88 = x_83;
} else {
 lean_dec_ref(x_83);
 x_88 = lean_box(0);
}
x_89 = l_List_reverse___rarg(x_87);
x_90 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_89);
if (lean_is_scalar(x_88)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_88;
}
lean_ctor_set(x_91, 0, x_86);
lean_ctor_set(x_91, 1, x_90);
if (lean_is_scalar(x_85)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_85;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_84);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_1);
x_93 = lean_ctor_get(x_81, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_81, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_95 = x_81;
} else {
 lean_dec_ref(x_81);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_70);
lean_dec(x_65);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_97 = lean_ctor_get(x_72, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_72, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_99 = x_72;
} else {
 lean_dec_ref(x_72);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Array_empty___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 2);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_6, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 1);
x_2 = x_9;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
x_4 = lean_array_push(x_2, x_3);
x_5 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_6 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 2);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = l_Nat_max(x_1, x_9);
lean_dec(x_9);
lean_dec(x_1);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_2, 1);
x_2 = x_12;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_5, sizeof(void*)*1);
lean_dec(x_5);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__4___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.findDefaultMissing?");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__1;
x_3 = lean_unsigned_to_nat(598u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_1, x_4);
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__2;
x_9 = lean_panic_fn(x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_11, 0);
if (lean_obj_tag(x_14) == 2)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_metavar_ctx_is_expr_assigned(x_1, x_15);
if (x_16 == 0)
{
lean_ctor_set(x_11, 0, x_2);
return x_11;
}
else
{
lean_object* x_17; 
lean_free_object(x_11);
lean_dec(x_2);
x_17 = lean_box(0);
return x_17;
}
}
else
{
lean_object* x_18; 
lean_free_object(x_11);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
if (lean_obj_tag(x_19) == 2)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_metavar_ctx_is_expr_assigned(x_1, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_2);
return x_22;
}
else
{
lean_object* x_23; 
lean_dec(x_2);
x_23 = lean_box(0);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_19);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_box(0);
return x_24;
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Lean_Elab_Term_StructInst_Struct_fields(x_2);
x_5 = l_List_findSome_x3f___main___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.getFieldName");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__1;
x_3 = lean_unsigned_to_nat(606u);
x_4 = lean_unsigned_to_nat(7u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Name_inhabited;
x_4 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2;
x_5 = lean_panic_fn(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Name_inhabited;
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2;
x_11 = lean_panic_fn(x_9, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Name_inhabited;
x_13 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2;
x_14 = lean_panic_fn(x_12, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_1, 2);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_lt(x_24, x_23);
x_26 = lean_box(x_25);
lean_ctor_set(x_10, 0, x_26);
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_dec(x_10);
x_28 = lean_ctor_get(x_1, 2);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_lt(x_29, x_28);
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_2);
x_4 = lean_name_eq(x_3, x_1);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_5 = l_List_findSome_x3f___main___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_14 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_15 = (uint8_t)((x_13 << 24) >> 61);
x_16 = l_Lean_BinderInfo_isExplicit(x_15);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_7, 3);
x_19 = l_Lean_replaceRef(x_14, x_18);
lean_dec(x_18);
lean_dec(x_14);
lean_ctor_set(x_7, 3, x_19);
if (x_16 == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_11);
x_21 = 0;
x_22 = lean_box(0);
lean_inc(x_5);
x_23 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_20, x_21, x_22, x_5, x_6, x_7, x_8, x_9);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_expr_instantiate1(x_12, x_24);
lean_dec(x_24);
lean_dec(x_12);
x_2 = x_26;
x_9 = x_25;
goto _start;
}
else
{
lean_object* x_28; 
x_28 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_9);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 0);
lean_inc(x_31);
lean_dec(x_28);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_31);
x_32 = l_Lean_Meta_inferType___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___spec__2(x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_35 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_33, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
uint8_t x_38; 
lean_dec(x_31);
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_38 = !lean_is_exclusive(x_35);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_35, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_35, 0, x_40);
return x_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_dec(x_35);
x_45 = lean_expr_instantiate1(x_12, x_31);
lean_dec(x_31);
lean_dec(x_12);
x_2 = x_45;
x_9 = x_44;
goto _start;
}
}
else
{
uint8_t x_47; 
lean_dec(x_31);
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_47 = !lean_is_exclusive(x_35);
if (x_47 == 0)
{
return x_35;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_35, 0);
x_49 = lean_ctor_get(x_35, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_35);
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
lean_dec(x_31);
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_51 = !lean_is_exclusive(x_32);
if (x_51 == 0)
{
return x_32;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_32, 0);
x_53 = lean_ctor_get(x_32, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_32);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_7, 0);
x_56 = lean_ctor_get(x_7, 1);
x_57 = lean_ctor_get(x_7, 2);
x_58 = lean_ctor_get(x_7, 3);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_7);
x_59 = l_Lean_replaceRef(x_14, x_58);
lean_dec(x_58);
lean_dec(x_14);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_56);
lean_ctor_set(x_60, 2, x_57);
lean_ctor_set(x_60, 3, x_59);
if (x_16 == 0)
{
lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_10);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_11);
x_62 = 0;
x_63 = lean_box(0);
lean_inc(x_5);
x_64 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_61, x_62, x_63, x_5, x_6, x_60, x_8, x_9);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_expr_instantiate1(x_12, x_65);
lean_dec(x_65);
lean_dec(x_12);
x_2 = x_67;
x_7 = x_60;
x_9 = x_66;
goto _start;
}
else
{
lean_object* x_69; 
x_69 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_10);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_60);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_9);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_69, 0);
lean_inc(x_72);
lean_dec(x_69);
lean_inc(x_8);
lean_inc(x_60);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_72);
x_73 = l_Lean_Meta_inferType___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryLiftAndCoe___spec__2(x_72, x_3, x_4, x_5, x_6, x_60, x_8, x_9);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
lean_inc(x_8);
lean_inc(x_60);
lean_inc(x_6);
lean_inc(x_5);
x_76 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_74, x_11, x_3, x_4, x_5, x_6, x_60, x_8, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; uint8_t x_78; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_unbox(x_77);
lean_dec(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_72);
lean_dec(x_60);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_80 = x_76;
} else {
 lean_dec_ref(x_76);
 x_80 = lean_box(0);
}
x_81 = lean_box(0);
if (lean_is_scalar(x_80)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_80;
}
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_79);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_76, 1);
lean_inc(x_83);
lean_dec(x_76);
x_84 = lean_expr_instantiate1(x_12, x_72);
lean_dec(x_72);
lean_dec(x_12);
x_2 = x_84;
x_7 = x_60;
x_9 = x_83;
goto _start;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_72);
lean_dec(x_60);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_86 = lean_ctor_get(x_76, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_76, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_88 = x_76;
} else {
 lean_dec_ref(x_76);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_72);
lean_dec(x_60);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_90 = lean_ctor_get(x_73, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_73, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_92 = x_73;
} else {
 lean_dec_ref(x_73);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_94 = l___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkIdImp___closed__2;
x_95 = lean_unsigned_to_nat(2u);
x_96 = l_Lean_Expr_isAppOfArity(x_2, x_94, x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_97, 0, x_2);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_9);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = l_Lean_Expr_appArg_x21(x_2);
lean_dec(x_2);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_9);
return x_101;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_11 = l_Lean_ConstantInfo_lparams(x_2);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_7, 3);
x_14 = l_Lean_replaceRef(x_10, x_13);
lean_dec(x_13);
lean_dec(x_10);
lean_ctor_set(x_7, 3, x_14);
x_15 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_instantiate_value_lparams(x_2, x_16);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_24 = l_Lean_replaceRef(x_10, x_23);
lean_dec(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
x_26 = l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___spec__1(x_11, x_3, x_4, x_5, x_6, x_25, x_8, x_9);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_instantiate_value_lparams(x_2, x_27);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_29, x_3, x_4, x_5, x_6, x_25, x_8, x_28);
return x_30;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_38; 
x_38 = l_Lean_Expr_isApp(x_2);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = 1;
x_8 = x_39;
goto block_37;
}
else
{
uint8_t x_40; 
x_40 = 0;
x_8 = x_40;
goto block_37;
}
block_37:
{
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_6, x_7);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Environment_getProjectionStructureName_x3f(x_15, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_box(0);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_box(0);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
else
{
lean_object* x_21; 
lean_free_object(x_11);
x_21 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_2, x_3, x_4, x_5, x_6, x_14);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_11);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Environment_getProjectionStructureName_x3f(x_24, x_10);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_23);
return x_31;
}
else
{
lean_object* x_32; 
x_32 = l___private_Lean_Meta_WHNF_0__Lean_Meta_unfoldDefinitionImp_x3f(x_2, x_3, x_4, x_5, x_6, x_23);
return x_32;
}
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_7);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_7);
return x_36;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_8, x_1, x_10, x_12);
return x_13;
}
case 5:
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_17 = lean_box_uint64(x_16);
x_18 = lean_apply_4(x_6, x_1, x_14, x_15, x_17);
return x_18;
}
case 6:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_5(x_2, x_1, x_19, x_20, x_21, x_23);
return x_24;
}
case 7:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_29 = lean_box_uint64(x_28);
x_30 = lean_apply_5(x_3, x_1, x_25, x_26, x_27, x_29);
return x_30;
}
case 8:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 3);
lean_inc(x_34);
x_35 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
x_36 = lean_box_uint64(x_35);
x_37 = lean_apply_6(x_4, x_1, x_31, x_32, x_33, x_34, x_36);
return x_37;
}
case 10:
{
lean_object* x_38; lean_object* x_39; uint64_t x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_41 = lean_box_uint64(x_40);
x_42 = lean_apply_4(x_7, x_1, x_38, x_39, x_41);
return x_42;
}
case 11:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 2);
lean_inc(x_45);
x_46 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_47 = lean_box_uint64(x_46);
x_48 = lean_apply_5(x_5, x_1, x_43, x_44, x_45, x_47);
return x_48;
}
default: 
{
lean_object* x_49; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = lean_apply_1(x_9, x_1);
return x_49;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__4___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_3);
x_10 = lean_nat_dec_lt(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_11 = x_3;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_array_fget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_fset(x_3, x_2, x_14);
x_16 = x_13;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_17 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_16, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
x_22 = x_18;
x_23 = lean_array_fset(x_15, x_2, x_22);
lean_dec(x_2);
x_2 = x_21;
x_3 = x_23;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_mkLambdaFVars___at_Lean_Meta_SynthInstance_tryResolveCore___spec__1(x_2, x_10, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_mkForallFVars___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1(x_2, x_10, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(x_8, x_3, x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_2);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_9, 1);
x_17 = lean_ctor_get(x_9, 0);
lean_dec(x_17);
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_Expr_isMVar(x_18);
if (x_19 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
else
{
lean_free_object(x_9);
x_2 = x_18;
x_7 = x_16;
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = l_Lean_Expr_isMVar(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
else
{
x_2 = x_22;
x_7 = x_21;
goto _start;
}
}
}
}
case 5:
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_getAppFn(x_26);
lean_dec(x_26);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_30, x_3, x_4, x_5, x_6, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Expr_isLambda(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Lean_Expr_getAppNumArgsAux(x_2, x_35);
x_37 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_36);
x_38 = lean_mk_array(x_36, x_37);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_sub(x_36, x_39);
lean_dec(x_36);
x_41 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_38, x_40);
x_42 = x_41;
x_43 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1), 8, 3);
lean_closure_set(x_43, 0, x_1);
lean_closure_set(x_43, 1, x_35);
lean_closure_set(x_43, 2, x_42);
x_44 = x_43;
x_45 = lean_apply_5(x_44, x_3, x_4, x_5, x_6, x_33);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_47, x_47, x_35, x_32);
lean_dec(x_47);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_49, x_49, x_35, x_32);
lean_dec(x_49);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_32);
x_53 = !lean_is_exclusive(x_45);
if (x_53 == 0)
{
return x_45;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_45, 0);
x_55 = lean_ctor_get(x_45, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_45);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_unsigned_to_nat(0u);
x_58 = l_Lean_Expr_getAppNumArgsAux(x_2, x_57);
x_59 = lean_mk_empty_array_with_capacity(x_58);
lean_dec(x_58);
x_60 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_2, x_59);
x_61 = l_Lean_Expr_betaRev(x_32, x_60);
lean_dec(x_60);
lean_dec(x_32);
x_2 = x_61;
x_7 = x_33;
goto _start;
}
}
else
{
uint8_t x_63; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_31);
if (x_63 == 0)
{
return x_31;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_31, 0);
x_65 = lean_ctor_get(x_31, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_31);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_26);
lean_dec(x_2);
x_67 = lean_ctor_get(x_27, 1);
lean_inc(x_67);
lean_dec(x_27);
x_68 = lean_ctor_get(x_28, 0);
lean_inc(x_68);
lean_dec(x_28);
x_2 = x_68;
x_7 = x_67;
goto _start;
}
}
else
{
uint8_t x_70; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_27);
if (x_70 == 0)
{
return x_27;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_27, 0);
x_72 = lean_ctor_get(x_27, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_27);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
case 6:
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1), 8, 1);
lean_closure_set(x_74, 0, x_1);
x_75 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__2___rarg(x_2, x_74, x_3, x_4, x_5, x_6, x_7);
return x_75;
}
case 7:
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__2), 8, 1);
lean_closure_set(x_76, 0, x_1);
x_77 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__3___rarg(x_2, x_76, x_3, x_4, x_5, x_6, x_7);
return x_77;
}
case 8:
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1), 8, 1);
lean_closure_set(x_78, 0, x_1);
x_79 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__2___rarg(x_2, x_78, x_3, x_4, x_5, x_6, x_7);
return x_79;
}
case 10:
{
lean_object* x_80; lean_object* x_81; uint64_t x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_2, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_2, 1);
lean_inc(x_81);
x_82 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_inc(x_81);
x_83 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_81, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_93; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_86 = x_83;
} else {
 lean_dec_ref(x_83);
 x_86 = lean_box(0);
}
x_93 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_93) == 0)
{
uint8_t x_94; 
x_94 = 0;
x_87 = x_94;
goto block_92;
}
else
{
uint8_t x_95; 
lean_dec(x_93);
x_95 = l_Lean_Expr_isMVar(x_84);
if (x_95 == 0)
{
uint8_t x_96; 
x_96 = 1;
x_87 = x_96;
goto block_92;
}
else
{
uint8_t x_97; 
x_97 = 0;
x_87 = x_97;
goto block_92;
}
}
block_92:
{
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_88, 0, x_80);
lean_ctor_set(x_88, 1, x_81);
lean_ctor_set_uint64(x_88, sizeof(void*)*2, x_82);
x_89 = lean_expr_update_mdata(x_88, x_84);
if (lean_is_scalar(x_86)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_86;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_85);
return x_90;
}
else
{
lean_object* x_91; 
lean_dec(x_81);
lean_dec(x_80);
if (lean_is_scalar(x_86)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_86;
}
lean_ctor_set(x_91, 0, x_84);
lean_ctor_set(x_91, 1, x_85);
return x_91;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_2);
x_98 = !lean_is_exclusive(x_83);
if (x_98 == 0)
{
return x_83;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_83, 0);
x_100 = lean_ctor_get(x_83, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_83);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
case 11:
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_2);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_103 = lean_ctor_get(x_2, 0);
x_104 = lean_ctor_get(x_2, 1);
x_105 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_105);
x_106 = l_Lean_Meta_reduceProj_x3f(x_105, x_104, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
lean_inc(x_105);
x_109 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_105, x_3, x_4, x_5, x_6, x_108);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_109, 0);
x_112 = lean_expr_update_proj(x_2, x_111);
lean_ctor_set(x_109, 0, x_112);
return x_109;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_109, 0);
x_114 = lean_ctor_get(x_109, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_109);
x_115 = lean_expr_update_proj(x_2, x_113);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
else
{
uint8_t x_117; 
lean_free_object(x_2);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
x_117 = !lean_is_exclusive(x_109);
if (x_117 == 0)
{
return x_109;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_109, 0);
x_119 = lean_ctor_get(x_109, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_109);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_free_object(x_2);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
x_121 = lean_ctor_get(x_106, 1);
lean_inc(x_121);
lean_dec(x_106);
x_122 = lean_ctor_get(x_107, 0);
lean_inc(x_122);
lean_dec(x_107);
x_2 = x_122;
x_7 = x_121;
goto _start;
}
}
else
{
uint8_t x_124; 
lean_free_object(x_2);
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_124 = !lean_is_exclusive(x_106);
if (x_124 == 0)
{
return x_106;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_106, 0);
x_126 = lean_ctor_get(x_106, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_106);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; uint64_t x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_2, 0);
x_129 = lean_ctor_get(x_2, 1);
x_130 = lean_ctor_get(x_2, 2);
x_131 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_130);
x_132 = l_Lean_Meta_reduceProj_x3f(x_130, x_129, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; 
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
lean_inc(x_130);
x_135 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_130, x_3, x_4, x_5, x_6, x_134);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_138 = x_135;
} else {
 lean_dec_ref(x_135);
 x_138 = lean_box(0);
}
x_139 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_139, 0, x_128);
lean_ctor_set(x_139, 1, x_129);
lean_ctor_set(x_139, 2, x_130);
lean_ctor_set_uint64(x_139, sizeof(void*)*3, x_131);
x_140 = lean_expr_update_proj(x_139, x_136);
if (lean_is_scalar(x_138)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_138;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_137);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
x_142 = lean_ctor_get(x_135, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_135, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_144 = x_135;
} else {
 lean_dec_ref(x_135);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
x_146 = lean_ctor_get(x_132, 1);
lean_inc(x_146);
lean_dec(x_132);
x_147 = lean_ctor_get(x_133, 0);
lean_inc(x_147);
lean_dec(x_133);
x_2 = x_147;
x_7 = x_146;
goto _start;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_149 = lean_ctor_get(x_132, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_132, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_151 = x_132;
} else {
 lean_dec_ref(x_132);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
}
default: 
{
lean_object* x_153; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_2);
lean_ctor_set(x_153, 1, x_7);
return x_153;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__3___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 1;
return x_4;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_default");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_3, x_7);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_1);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
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
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_array_fget(x_1, x_6);
x_22 = l_Lean_Elab_Term_StructInst_Struct_structName(x_21);
lean_inc(x_4);
x_23 = l_Lean_Name_append___main(x_22, x_4);
lean_dec(x_22);
x_24 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__2;
x_25 = l_Lean_Name_append___main(x_23, x_24);
lean_dec(x_23);
x_26 = lean_st_ref_get(x_13, x_14);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_environment_find(x_29, x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_21);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_6, x_31);
lean_dec(x_6);
x_6 = x_32;
x_14 = x_28;
goto _start;
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_30, 0);
lean_inc(x_34);
lean_dec(x_30);
if (lean_obj_tag(x_34) == 1)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_st_ref_get(x_11, x_28);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_39 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(x_21, x_34, x_8, x_9, x_10, x_11, x_12, x_13, x_37);
lean_dec(x_34);
lean_dec(x_21);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_38, x_8, x_9, x_10, x_11, x_12, x_13, x_41);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_add(x_6, x_44);
lean_dec(x_6);
x_46 = lean_nat_add(x_7, x_44);
lean_dec(x_7);
x_6 = x_45;
x_7 = x_46;
x_14 = x_43;
goto _start;
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_39, 1);
lean_inc(x_48);
lean_dec(x_39);
x_49 = !lean_is_exclusive(x_40);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_40, 0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_51 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_2, x_50, x_10, x_11, x_12, x_13, x_48);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; size_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = 8192;
x_55 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3;
x_56 = l_Lean_Expr_FindImpl_initCache;
lean_inc(x_52);
x_57 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_55, x_54, x_52, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
lean_dec(x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_59 = l_Lean_Elab_Term_getMVarDecl(x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_53);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_ctor_get(x_60, 2);
lean_inc(x_62);
lean_dec(x_60);
lean_ctor_set(x_40, 0, x_62);
x_63 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_64 = l_Lean_Elab_Term_ensureHasType(x_40, x_52, x_63, x_8, x_9, x_10, x_11, x_12, x_13, x_61);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_5, x_65, x_8, x_9, x_10, x_11, x_12, x_13, x_66);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_67, 0);
lean_dec(x_69);
x_70 = 1;
x_71 = lean_box(x_70);
lean_ctor_set(x_67, 0, x_71);
return x_67;
}
else
{
lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
lean_dec(x_67);
x_73 = 1;
x_74 = lean_box(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
uint8_t x_76; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_76 = !lean_is_exclusive(x_64);
if (x_76 == 0)
{
return x_64;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_64, 0);
x_78 = lean_ctor_get(x_64, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_64);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_58);
lean_dec(x_52);
lean_free_object(x_40);
x_80 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_38, x_8, x_9, x_10, x_11, x_12, x_13, x_53);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = lean_unsigned_to_nat(1u);
x_83 = lean_nat_add(x_6, x_82);
lean_dec(x_6);
x_84 = lean_nat_add(x_7, x_82);
lean_dec(x_7);
x_6 = x_83;
x_7 = x_84;
x_14 = x_81;
goto _start;
}
}
else
{
uint8_t x_86; 
lean_free_object(x_40);
lean_dec(x_38);
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
x_86 = !lean_is_exclusive(x_51);
if (x_86 == 0)
{
return x_51;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_51, 0);
x_88 = lean_ctor_get(x_51, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_51);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_40, 0);
lean_inc(x_90);
lean_dec(x_40);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_91 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_2, x_90, x_10, x_11, x_12, x_13, x_48);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; size_t x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = 8192;
x_95 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3;
x_96 = l_Lean_Expr_FindImpl_initCache;
lean_inc(x_92);
x_97 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_95, x_94, x_92, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
lean_dec(x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
lean_dec(x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_99 = l_Lean_Elab_Term_getMVarDecl(x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_93);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_ctor_get(x_100, 2);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_103, 0, x_102);
x_104 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_105 = l_Lean_Elab_Term_ensureHasType(x_103, x_92, x_104, x_8, x_9, x_10, x_11, x_12, x_13, x_101);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; lean_object* x_112; lean_object* x_113; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_5, x_106, x_8, x_9, x_10, x_11, x_12, x_13, x_107);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_110 = x_108;
} else {
 lean_dec_ref(x_108);
 x_110 = lean_box(0);
}
x_111 = 1;
x_112 = lean_box(x_111);
if (lean_is_scalar(x_110)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_110;
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_109);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
x_114 = lean_ctor_get(x_105, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_105, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_116 = x_105;
} else {
 lean_dec_ref(x_105);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_98);
lean_dec(x_92);
x_118 = l_Lean_Meta_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_38, x_8, x_9, x_10, x_11, x_12, x_13, x_93);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_120 = lean_unsigned_to_nat(1u);
x_121 = lean_nat_add(x_6, x_120);
lean_dec(x_6);
x_122 = lean_nat_add(x_7, x_120);
lean_dec(x_7);
x_6 = x_121;
x_7 = x_122;
x_14 = x_119;
goto _start;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_38);
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
x_124 = lean_ctor_get(x_91, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_91, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_126 = x_91;
} else {
 lean_dec_ref(x_91);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_38);
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
x_128 = !lean_is_exclusive(x_39);
if (x_128 == 0)
{
return x_39;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_39, 0);
x_130 = lean_ctor_get(x_39, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_39);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_34);
lean_dec(x_21);
x_132 = lean_unsigned_to_nat(1u);
x_133 = lean_nat_add(x_6, x_132);
lean_dec(x_6);
x_6 = x_133;
x_14 = x_28;
goto _start;
}
}
}
}
else
{
uint8_t x_135; lean_object* x_136; lean_object* x_137; 
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
x_135 = 0;
x_136 = lean_box(x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_14);
return x_137;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_1, x_2, x_3, x_4, x_5, x_13, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_5, sizeof(void*)*1);
lean_dec(x_5);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_step_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_step_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_step_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_step_match__4___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.step");
return x_1;
}
}
static lean_object* _init_l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4;
x_2 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__1;
x_3 = lean_unsigned_to_nat(728u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_2__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_12);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_16 = l_PUnit_Inhabited;
x_17 = l_monadInhabited___rarg(x_2, x_16);
x_18 = lean_alloc_closure((void*)(l_ReaderT_inhabited___rarg___boxed), 2, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__2;
x_20 = lean_panic_fn(x_18, x_19);
x_21 = lean_apply_9(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_22 = lean_ctor_get(x_15, 0);
lean_inc(x_22);
lean_dec(x_15);
x_23 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_22);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_27);
x_28 = l_Lean_Elab_Term_isExprMVarAssigned(x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_3, 2);
lean_inc(x_35);
lean_dec(x_3);
x_36 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_1);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_9);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_9, 3);
x_39 = l_Lean_replaceRef(x_32, x_38);
lean_dec(x_38);
lean_dec(x_32);
lean_ctor_set(x_9, 3, x_39);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_33, x_34, x_35, x_36, x_27, x_40, x_40, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
lean_dec(x_35);
lean_dec(x_33);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_41, 0, x_46);
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_dec(x_41);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec(x_41);
x_51 = lean_st_ref_take(x_4, x_50);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = 1;
x_54 = lean_box(x_53);
x_55 = lean_st_ref_set(x_4, x_54, x_52);
lean_dec(x_4);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
x_58 = lean_box(0);
lean_ctor_set(x_55, 0, x_58);
return x_55;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_55, 1);
lean_inc(x_59);
lean_dec(x_55);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_4);
x_62 = !lean_is_exclusive(x_41);
if (x_62 == 0)
{
return x_41;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_41, 0);
x_64 = lean_ctor_get(x_41, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_41);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_66 = lean_ctor_get(x_9, 0);
x_67 = lean_ctor_get(x_9, 1);
x_68 = lean_ctor_get(x_9, 2);
x_69 = lean_ctor_get(x_9, 3);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_9);
x_70 = l_Lean_replaceRef(x_32, x_69);
lean_dec(x_69);
lean_dec(x_32);
x_71 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_71, 0, x_66);
lean_ctor_set(x_71, 1, x_67);
lean_ctor_set(x_71, 2, x_68);
lean_ctor_set(x_71, 3, x_70);
x_72 = lean_unsigned_to_nat(0u);
x_73 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_33, x_34, x_35, x_36, x_27, x_72, x_72, x_5, x_6, x_7, x_8, x_71, x_10, x_31);
lean_dec(x_35);
lean_dec(x_33);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_unbox(x_74);
lean_dec(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_4);
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_77 = x_73;
} else {
 lean_dec_ref(x_73);
 x_77 = lean_box(0);
}
x_78 = lean_box(0);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_77;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
lean_dec(x_73);
x_81 = lean_st_ref_take(x_4, x_80);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = 1;
x_84 = lean_box(x_83);
x_85 = lean_st_ref_set(x_4, x_84, x_82);
lean_dec(x_4);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_87 = x_85;
} else {
 lean_dec_ref(x_85);
 x_87 = lean_box(0);
}
x_88 = lean_box(0);
if (lean_is_scalar(x_87)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_87;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_4);
x_90 = lean_ctor_get(x_73, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_73, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_92 = x_73;
} else {
 lean_dec_ref(x_73);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_27);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_28);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_28, 0);
lean_dec(x_95);
x_96 = lean_box(0);
lean_ctor_set(x_28, 0, x_96);
return x_28;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_28, 1);
lean_inc(x_97);
lean_dec(x_28);
x_98 = lean_box(0);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_100 = lean_box(0);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_11);
return x_101;
}
}
}
}
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_apply_10(x_13, lean_box(0), x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1), 11, 3);
lean_closure_set(x_19, 0, x_16);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_3);
x_20 = lean_alloc_closure((void*)(l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2___boxed), 12, 3);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_17);
lean_closure_set(x_20, 2, x_3);
x_21 = lean_apply_12(x_18, lean_box(0), lean_box(0), x_19, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_21;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_16 = !lean_is_exclusive(x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_array_push(x_17, x_1);
lean_ctor_set(x_2, 0, x_18);
x_19 = l_Lean_Meta_CheckAssignment_checkFVar___closed__3;
x_20 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(x_19, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_24 = lean_array_push(x_21, x_1);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_23);
x_26 = l_Lean_Meta_CheckAssignment_checkFVar___closed__3;
x_27 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(x_26, x_15, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_11, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_11, 0, x_30);
return x_11;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_dec(x_11);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
}
lean_object* l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_Meta_Basic___instance__7___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 3);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_ctor_set(x_9, 3, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_20 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_20);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_21, x_10, x_11);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg___boxed), 11, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is missing");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_st_ref_get(x_9, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_17, x_3);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
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
x_19 = lean_box(0);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_free_object(x_13);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_nat_dec_lt(x_1, x_2);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_20);
x_22 = !lean_is_exclusive(x_4);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_4, 2);
lean_dec(x_23);
lean_inc(x_2);
lean_ctor_set(x_4, 2, x_2);
x_24 = lean_st_ref_take(x_5, x_16);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_st_ref_set(x_5, x_27, x_25);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_30 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_get(x_5, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_2, x_36);
lean_dec(x_2);
x_2 = x_37;
x_12 = x_35;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_2);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_dec(x_32);
x_40 = lean_unsigned_to_nat(0u);
x_2 = x_40;
x_12 = x_39;
goto _start;
}
}
else
{
uint8_t x_42; 
lean_dec(x_4);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_30;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 0);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_30);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_46 = lean_ctor_get(x_4, 0);
x_47 = lean_ctor_get(x_4, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_4);
lean_inc(x_2);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
lean_ctor_set(x_48, 2, x_2);
x_49 = lean_st_ref_take(x_5, x_16);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = 0;
x_52 = lean_box(x_51);
x_53 = lean_st_ref_set(x_5, x_52, x_50);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_48);
lean_inc(x_3);
x_55 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_3, x_48, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_st_ref_get(x_5, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_unbox(x_58);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_add(x_2, x_61);
lean_dec(x_2);
x_2 = x_62;
x_4 = x_48;
x_12 = x_60;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_2);
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_dec(x_57);
x_65 = lean_unsigned_to_nat(0u);
x_2 = x_65;
x_4 = x_48;
x_12 = x_64;
goto _start;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_48);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_67 = lean_ctor_get(x_55, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_55, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_69 = x_55;
} else {
 lean_dec_ref(x_55);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_ctor_get(x_20, 0);
lean_inc(x_71);
x_72 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_20);
lean_dec(x_20);
x_73 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4;
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
x_76 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2;
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg(x_71, x_77, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_71);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_13, 0);
x_80 = lean_ctor_get(x_13, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_13);
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_81, x_3);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; 
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
x_83 = lean_box(0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_80);
return x_84;
}
else
{
lean_object* x_85; uint8_t x_86; 
x_85 = lean_ctor_get(x_82, 0);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_nat_dec_lt(x_1, x_2);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_85);
x_87 = lean_ctor_get(x_4, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_4, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 x_89 = x_4;
} else {
 lean_dec_ref(x_4);
 x_89 = lean_box(0);
}
lean_inc(x_2);
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(0, 3, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
lean_ctor_set(x_90, 2, x_2);
x_91 = lean_st_ref_take(x_5, x_80);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = 0;
x_94 = lean_box(x_93);
x_95 = lean_st_ref_set(x_5, x_94, x_92);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_90);
lean_inc(x_3);
x_97 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_3, x_90, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_96);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = lean_st_ref_get(x_5, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_unbox(x_100);
lean_dec(x_100);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
x_103 = lean_unsigned_to_nat(1u);
x_104 = lean_nat_add(x_2, x_103);
lean_dec(x_2);
x_2 = x_104;
x_4 = x_90;
x_12 = x_102;
goto _start;
}
else
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_2);
x_106 = lean_ctor_get(x_99, 1);
lean_inc(x_106);
lean_dec(x_99);
x_107 = lean_unsigned_to_nat(0u);
x_2 = x_107;
x_4 = x_90;
x_12 = x_106;
goto _start;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_90);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_109 = lean_ctor_get(x_97, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_97, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_111 = x_97;
} else {
 lean_dec_ref(x_97);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_3);
lean_dec(x_2);
x_113 = lean_ctor_get(x_85, 0);
lean_inc(x_113);
x_114 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_85);
lean_dec(x_85);
x_115 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_115, 0, x_114);
x_116 = l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4;
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
x_118 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2;
x_119 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
x_120 = l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg(x_113, x_119, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_80);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_113);
return x_120;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_1);
x_10 = l_Array_empty___closed__1;
x_11 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_1, x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_st_mk_ref(x_15, x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_17);
x_19 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(x_9, x_12, x_1, x_13, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_st_ref_get(x_17, x_21);
lean_dec(x_17);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_20);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_fmt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_formatStruct(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView(x_1, x_2, x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_69 = lean_st_ref_get(x_11, x_21);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_70, 3);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_ctor_get_uint8(x_71, sizeof(void*)*1);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
lean_dec(x_69);
x_74 = 0;
x_22 = x_74;
x_23 = x_73;
goto block_68;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_dec(x_69);
x_76 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2;
x_77 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_76, x_6, x_7, x_8, x_9, x_10, x_11, x_75);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_unbox(x_78);
lean_dec(x_78);
x_22 = x_80;
x_23 = x_79;
goto block_68;
}
block_68:
{
if (x_22 == 0)
{
lean_object* x_24; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_24 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_20, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_Lean_Elab_Term_StructInst_DefaultFields_propagate(x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_26);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_27);
return x_29;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_27);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_24);
if (x_38 == 0)
{
return x_24;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_24, 0);
x_40 = lean_ctor_get(x_24, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_24);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_inc(x_20);
x_42 = l_Lean_Elab_Term_StructInst_formatStruct(x_20);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l_Array_iterateMAux___main___at_Lean_withNestedTraces___spec__4___closed__1;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2;
x_48 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_47, x_46, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_50 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_20, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = l_Lean_Elab_Term_StructInst_DefaultFields_propagate(x_54, x_6, x_7, x_8, x_9, x_10, x_11, x_52);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
lean_ctor_set(x_55, 0, x_53);
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_53);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_53);
x_60 = !lean_is_exclusive(x_55);
if (x_60 == 0)
{
return x_55;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_55, 0);
x_62 = lean_ctor_get(x_55, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_55);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_64 = !lean_is_exclusive(x_50);
if (x_64 == 0)
{
return x_50;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_50, 0);
x_66 = lean_ctor_get(x_50, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_50);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_81 = !lean_is_exclusive(x_19);
if (x_81 == 0)
{
return x_19;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_19, 0);
x_83 = lean_ctor_get(x_19, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_19);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_9, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_12);
x_18 = l_Lean_isStructureLike(x_17, x_12);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_12);
x_20 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__4;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_box(0);
x_30 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(x_1, x_12, x_3, x_2, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_11);
if (x_31 == 0)
{
return x_11;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_11, 0);
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_11);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_apply_2(x_5, x_1, x_2);
return x_6;
}
else
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_3(x_3, x_7, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_4, x_11, x_2);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid {...} notation, explicit source is required when using '[<index>] := <value>'");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_3);
x_16 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux(x_1, x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
return x_19;
}
else
{
if (lean_obj_tag(x_14) == 2)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp(x_1, x_21, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_dec(x_16);
x_25 = l_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
x_26 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_16);
if (x_27 == 0)
{
return x_16;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_16, 0);
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_16);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_13);
if (x_31 == 0)
{
return x_13;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_13, 0);
x_33 = lean_ctor_get(x_13, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_13);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
lean_dec(x_10);
x_36 = lean_ctor_get(x_11, 0);
lean_inc(x_36);
lean_dec(x_11);
x_37 = !lean_is_exclusive(x_3);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_3, 6);
lean_inc(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_3, 6, x_40);
x_41 = 1;
x_42 = l_Lean_Elab_Term_elabTerm(x_36, x_2, x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_43 = lean_ctor_get(x_3, 0);
x_44 = lean_ctor_get(x_3, 1);
x_45 = lean_ctor_get(x_3, 2);
x_46 = lean_ctor_get(x_3, 3);
x_47 = lean_ctor_get(x_3, 4);
x_48 = lean_ctor_get(x_3, 5);
x_49 = lean_ctor_get(x_3, 6);
x_50 = lean_ctor_get(x_3, 7);
x_51 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_52 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_3);
lean_inc(x_36);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_1);
lean_ctor_set(x_53, 1, x_36);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_49);
x_55 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_55, 0, x_43);
lean_ctor_set(x_55, 1, x_44);
lean_ctor_set(x_55, 2, x_45);
lean_ctor_set(x_55, 3, x_46);
lean_ctor_set(x_55, 4, x_47);
lean_ctor_set(x_55, 5, x_48);
lean_ctor_set(x_55, 6, x_54);
lean_ctor_set(x_55, 7, x_50);
lean_ctor_set_uint8(x_55, sizeof(void*)*8, x_51);
lean_ctor_set_uint8(x_55, sizeof(void*)*8 + 1, x_52);
x_56 = 1;
x_57 = l_Lean_Elab_Term_elabTerm(x_36, x_2, x_56, x_55, x_4, x_5, x_6, x_7, x_8, x_35);
return x_57;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Std_Range_myMacro____x40_Init_Data_Range___hyg_301____closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_initFn____x40_Lean_Elab_StructInst___hyg_6358_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_FindExpr(lean_object*);
lean_object* initialize_Lean_Elab_App(lean_object*);
lean_object* initialize_Lean_Elab_Binders(lean_object*);
lean_object* initialize_Lean_Elab_Quotation(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_StructInst(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Quotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1);
res = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__3);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___closed__4);
l_Lean_Elab_Term_StructInst_Source_inhabited = _init_l_Lean_Elab_Term_StructInst_Source_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Source_inhabited);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__3);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__4);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__5 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__5();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__5);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___closed__6);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__1 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__1();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__1);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__2);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__3 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__3();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__3);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__4 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__4();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__4);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__5);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__6 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__6();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__6);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__7 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__7();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__7);
l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__8 = _init_l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__8();
lean_mark_persistent(l_Array_foldlStepMAux___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___closed__8);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__3);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__4);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__5);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__6 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__6();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__6);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__7);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__8);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__9 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__9();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__9);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__10);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__11);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__12);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__13 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__13();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__13);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__14);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__15 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__15();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__15);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__16);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__17 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__17();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__17);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__18 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__18();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__18);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__19 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__19();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__19);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__20 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__20();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp___closed__20);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__3);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__4);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__5 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__5);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___closed__6);
l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1 = _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_FieldLHS_inhabited___closed__1);
l_Lean_Elab_Term_StructInst_FieldLHS_inhabited = _init_l_Lean_Elab_Term_StructInst_FieldLHS_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_FieldLHS_inhabited);
l_Lean_Elab_Term_StructInst_Field_expr_x3f___default = _init_l_Lean_Elab_Term_StructInst_Field_expr_x3f___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_expr_x3f___default);
l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_inhabited___closed__1);
l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2 = _init_l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_inhabited___closed__2);
l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1 = _init_l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_inhabited___closed__1);
l_Lean_Elab_Term_StructInst_Struct_inhabited = _init_l_Lean_Elab_Term_StructInst_Struct_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_inhabited);
l_Lean_Elab_Term_StructInst_formatField___closed__1 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__1);
l_Lean_Elab_Term_StructInst_formatField___closed__2 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__2);
l_Lean_Elab_Term_StructInst_formatField___closed__3 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__3);
l_Lean_Elab_Term_StructInst_formatField___closed__4 = _init_l_Lean_Elab_Term_StructInst_formatField___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatField___closed__4);
l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1 = _init_l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1();
lean_mark_persistent(l_List_map___main___at_Lean_Elab_Term_StructInst_formatStruct___spec__1___closed__1);
l_Lean_Elab_Term_StructInst_formatStruct___closed__1 = _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___closed__1);
l_Lean_Elab_Term_StructInst_formatStruct___closed__2 = _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___closed__2);
l_Lean_Elab_Term_StructInst_formatStruct___closed__3 = _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___closed__3);
l_Lean_Elab_Term_StructInst_formatStruct___closed__4 = _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___closed__4);
l_Lean_Elab_Term_StructInst_formatStruct___closed__5 = _init_l_Lean_Elab_Term_StructInst_formatStruct___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_formatStruct___closed__5);
l_Lean_Elab_Term_StructInst_Struct_hasFormat = _init_l_Lean_Elab_Term_StructInst_Struct_hasFormat();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasFormat);
l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1 = _init_l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasToString___closed__1);
l_Lean_Elab_Term_StructInst_Struct_hasToString = _init_l_Lean_Elab_Term_StructInst_Struct_hasToString();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Struct_hasToString);
l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasFormat___closed__1);
l_Lean_Elab_Term_StructInst_Field_hasFormat = _init_l_Lean_Elab_Term_StructInst_Field_hasFormat();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasFormat);
l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasToString___closed__1);
l_Lean_Elab_Term_StructInst_Field_hasToString = _init_l_Lean_Elab_Term_StructInst_Field_hasToString();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_hasToString);
l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__1 = _init_l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__1);
l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__2 = _init_l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___closed__2);
l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__1 = _init_l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__1);
l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__2 = _init_l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_toSyntax___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___closed__2);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___closed__1);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__1 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__1();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__1);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__2);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__3 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__3();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__3);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__4);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__5 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__5();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__5);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__6 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__6();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__6);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___closed__7);
l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__1 = _init_l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__1();
lean_mark_persistent(l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__1);
l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2 = _init_l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2();
lean_mark_persistent(l_List_map___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1___closed__2);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__1 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__1();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__1);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__2 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__2();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__2);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__3 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__3();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__3);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__4);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__5 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__5();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__5);
l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6 = _init_l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6();
lean_mark_persistent(l_List_mapM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___closed__6);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__1 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__1();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__1);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__2);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__3 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__3();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__3);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__4);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__5 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__5();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__5);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__6 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__6();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___closed__6);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___closed__3);
l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default = _init_l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___closed__3);
l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1 = _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__1);
l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2 = _init_l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_markDefaultMissing___closed__2);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__1);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__2);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__3);
l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4 = _init_l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___closed__4);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__1 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__1();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__1);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__2 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__2();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__2);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__3);
l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4 = _init_l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4();
lean_mark_persistent(l_List_foldlM___main___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___closed__4);
l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default);
l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default);
l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default);
l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default();
l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___closed__3);
l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__1 = _init_l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__1();
lean_mark_persistent(l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__1);
l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__2 = _init_l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__2();
lean_mark_persistent(l_List_forM___main___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1___closed__2);
l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__1);
l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__1);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__2 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__2);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__3 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__3);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__4 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___closed__4);
l_Lean_Elab_Term_StructInst_elabStructInst___closed__1 = _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_elabStructInst___closed__1);
l_Lean_Elab_Term_StructInst_elabStructInst___closed__2 = _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_elabStructInst___closed__2);
l_Lean_Elab_Term_StructInst_elabStructInst___closed__3 = _init_l_Lean_Elab_Term_StructInst_elabStructInst___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_elabStructInst___closed__3);
l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1);
res = l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Term_StructInst_initFn____x40_Lean_Elab_StructInst___hyg_6358_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
