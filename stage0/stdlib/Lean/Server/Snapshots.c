// Lean compiler output
// Module: Lean.Server.Snapshots
// Imports: Init Init.System.IO Lean.Elab.Import Lean.Elab.Command Lean.Widget.InteractiveDiagnostic
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
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_reparseHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_msgLog___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at_Lean_Server_Snapshots_compileNextCmd___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseHeader(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint32_t l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__6;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
static lean_object* l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__3;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseAhead_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseAhead_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(size_t, size_t, lean_object*);
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__14;
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree___closed__1;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_get_set_stdout(lean_object*, lean_object*);
static size_t l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__10;
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* lean_get_set_stderr(lean_object*, lean_object*);
static lean_object* l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1___closed__1;
static lean_object* l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__15;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__18;
extern lean_object* l_ByteArray_empty;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__16;
lean_object* l_Lean_Widget_msgToInteractiveDiagnostic(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseAhead(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree___closed__6;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__7;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_reparseHeader(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PersistentArray_mapMAux___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__2(lean_object*);
lean_object* l_Std_PersistentArray_get_x21___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_env___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1(lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMessage;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at_Lean_Server_Snapshots_compileNextCmd___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withLogging(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot;
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_endPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6_(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Widget_InteractiveDiagnostic_toDiagnostic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_diagnostics(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseNextCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_isAtEnd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Parser_parseCommand_parse(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedInfoTree;
LEAN_EXPORT lean_object* l_IO_withStdout___at_Lean_Server_Snapshots_compileNextCmd___spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l_String_isEmpty(lean_object*);
uint8_t l_Lean_Parser_isExitCommand(lean_object*);
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__12;
static lean_object* l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__1;
static lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree___closed__4;
static lean_object* l_Lean_Server_Snapshots_compileNextCmd___closed__5;
LEAN_EXPORT lean_object* l_Std_PersistentArray_mapM___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__1(lean_object*);
static lean_object* l_Lean_Server_Snapshots_compileNextCmd___closed__3;
extern lean_object* l_Lean_Elab_Command_instInhabitedScope;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11;
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_Snapshots_Snapshot_isAtEnd(lean_object*);
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__17;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__8;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_compileNextCmd___closed__1;
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_Snapshots_Snapshot_infoTree___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_msgLog(lean_object*);
static lean_object* l_Lean_Server_Snapshots_compileNextCmd___closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3(size_t, size_t, lean_object*);
uint8_t l_Lean_Parser_isEOI(lean_object*);
static lean_object* l_Lean_Server_Snapshots_compileNextCmd___closed__2;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree___closed__3;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__13;
uint32_t lean_uint32_of_nat(lean_object*);
static lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree___closed__5;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__9;
static lean_object* l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2;
lean_object* l_List_iotaTR(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_env(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_dummyTacticCache;
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_set_stdin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_panic___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(lean_object*);
static lean_object* l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__4;
lean_object* l_Lean_Elab_getResetInfoTrees___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__3___rarg(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__4;
x_3 = lean_st_mk_ref(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2;
x_3 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__3;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static uint32_t _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__6() {
_start:
{
lean_object* x_1; uint32_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint32_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__7() {
_start:
{
uint32_t x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__6;
x_2 = 0;
x_3 = lean_box(0);
x_4 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5;
x_5 = lean_alloc_ctor(0, 5, 5);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set_uint32(x_5, sizeof(void*)*5, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*5 + 4, x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2;
x_2 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__4;
x_3 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5;
x_4 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__7;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static size_t _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__10() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; size_t x_4; lean_object* x_5; 
x_1 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__9;
x_2 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__10;
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set_usize(x_5, 4, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__14() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__13;
x_3 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__15() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__8;
x_3 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__12;
x_6 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__14;
x_7 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__15;
x_8 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_1);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_4);
lean_ctor_set(x_8, 5, x_4);
lean_ctor_set(x_8, 6, x_5);
lean_ctor_set(x_8, 7, x_6);
lean_ctor_set(x_8, 8, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_Snapshots_dummyTacticCache;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_box(0);
x_3 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__1;
x_4 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__16;
x_5 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11;
x_6 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__17;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_instInhabitedSnapshot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__18;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_endPos___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Snapshots_Snapshot_endPos(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_env(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 3);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_env___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Snapshots_Snapshot_env(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_msgLog(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 3);
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_msgLog___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Snapshots_Snapshot_msgLog(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_8 = l_Std_PersistentArray_mapMAux___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__2(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_8 = l_Lean_Widget_InteractiveDiagnostic_toDiagnostic(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_PersistentArray_mapMAux___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3(x_5, x_6, x_3);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_array_get_size(x_8);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = 0;
x_12 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3(x_10, x_11, x_8);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_array_get_size(x_15);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(x_17, x_18, x_15);
lean_ctor_set(x_1, 0, x_19);
return x_1;
}
else
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_array_get_size(x_20);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
x_24 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(x_22, x_23, x_20);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_PersistentArray_mapM___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Std_PersistentArray_mapMAux___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__2(x_3);
x_6 = lean_array_get_size(x_4);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(x_7, x_8, x_4);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get_usize(x_1, 4);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_15 = l_Std_PersistentArray_mapMAux___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__2(x_10);
x_16 = lean_array_get_size(x_11);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(x_17, x_18, x_11);
x_20 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_12);
lean_ctor_set(x_20, 3, x_14);
lean_ctor_set_usize(x_20, 4, x_13);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_diagnostics(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 4);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Std_PersistentArray_mapM___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__1(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__3(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Server_Snapshots_Snapshot_diagnostics___spec__4(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_Snapshots_Snapshot_infoTree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_instInhabitedInfoTree;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assertion violation: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("s.cmdState.infoState.trees.size == 1\n  ");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_Snapshots_Snapshot_infoTree___closed__1;
x_2 = l_Lean_Server_Snapshots_Snapshot_infoTree___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Server.Snapshots");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Server.Snapshots.Snapshot.infoTree");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Server_Snapshots_Snapshot_infoTree___closed__4;
x_2 = l_Lean_Server_Snapshots_Snapshot_infoTree___closed__5;
x_3 = lean_unsigned_to_nat(68u);
x_4 = lean_unsigned_to_nat(2u);
x_5 = l_Lean_Server_Snapshots_Snapshot_infoTree___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 7);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = l_Lean_Server_Snapshots_Snapshot_infoTree___closed__6;
x_9 = l_panic___at_Lean_Server_Snapshots_Snapshot_infoTree___spec__1(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Elab_instInhabitedInfoTree;
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Std_PersistentArray_get_x21___rarg(x_10, x_4, x_11);
return x_12;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Server_Snapshots_Snapshot_isAtEnd(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
lean_inc(x_2);
x_3 = l_Lean_Parser_isEOI(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = l_Lean_Parser_isExitCommand(x_2);
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 1;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_Snapshot_isAtEnd___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Server_Snapshots_Snapshot_isAtEnd(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_reparseHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_parseHeader(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_2, 2);
lean_dec(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_dec(x_14);
lean_ctor_set(x_2, 2, x_11);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_5, 0, x_2);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 3);
x_17 = lean_ctor_get(x_2, 4);
x_18 = lean_ctor_get(x_2, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set(x_19, 2, x_11);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_dec(x_5);
x_21 = lean_ctor_get(x_6, 0);
lean_inc(x_21);
lean_dec(x_6);
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
lean_dec(x_7);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 5);
lean_inc(x_26);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 x_27 = x_2;
} else {
 lean_dec_ref(x_2);
 x_27 = lean_box(0);
}
if (lean_is_scalar(x_27)) {
 x_28 = lean_alloc_ctor(0, 6, 0);
} else {
 x_28 = x_27;
}
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_24);
lean_ctor_set(x_28, 4, x_25);
lean_ctor_set(x_28, 5, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_20);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_5);
if (x_30 == 0)
{
return x_5;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_5, 0);
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_5);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_reparseHeader___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_Snapshots_reparseHeader(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseNextCmd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_4 = lean_ctor_get(x_2, 3);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Elab_Command_instInhabitedScope;
x_8 = l_List_head_x21___rarg(x_7, x_6);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 3);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set(x_12, 3, x_11);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = l_Lean_Server_Snapshots_Snapshot_msgLog(x_2);
lean_dec(x_2);
x_15 = l_Lean_Parser_parseCommand_parse(x_1, x_12, x_13, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseAhead_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = l_Lean_Server_Snapshots_Snapshot_msgLog(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Parser_parseCommand_parse(x_2, x_3, x_4, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = l_Lean_Parser_isEOI(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_10);
x_13 = l_Lean_Parser_isExitCommand(x_10);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_array_push(x_5, x_10);
x_4 = x_11;
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_array_push(x_5, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_6);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_array_push(x_5, x_10);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseAhead_go___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_Snapshots_parseAhead_go(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_parseAhead(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_2, 3);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Elab_Command_instInhabitedScope;
x_8 = l_List_head_x21___rarg(x_7, x_6);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 3);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set(x_12, 3, x_11);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5;
x_15 = l_Lean_Server_Snapshots_parseAhead_go(x_2, x_1, x_12, x_13, x_14, x_3);
lean_dec(x_2);
return x_15;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_nat_sub(x_4, x_9);
x_12 = l_Lean_instInhabitedMessage;
lean_inc(x_3);
x_13 = l_Std_PersistentArray_get_x21___rarg(x_12, x_3, x_11);
lean_dec(x_11);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = l_Lean_Widget_msgToInteractiveDiagnostic(x_14, x_13, x_2, x_7);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Std_PersistentArray_push___rarg(x_6, x_16);
x_5 = x_10;
x_6 = x_18;
x_7 = x_17;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
x_7 = l_Lean_Server_Snapshots_Snapshot_msgLog(x_2);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_nat_sub(x_6, x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_2, 4);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_List_iotaTR(x_9);
x_12 = l_List_forIn_loop___at_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___spec__1(x_1, x_3, x_4, x_6, x_11, x_10, x_5);
lean_dec(x_11);
lean_dec(x_6);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_List_forIn_loop___at_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___spec__1(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at_Lean_Server_Snapshots_compileNextCmd___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_get_set_stderr(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_get_set_stderr(x_5, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_get_set_stderr(x_5, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at_Lean_Server_Snapshots_compileNextCmd___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_get_set_stdout(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_get_set_stdout(x_5, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_get_set_stdout(x_5, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at_Lean_Server_Snapshots_compileNextCmd___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_get_set_stdin(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_get_set_stdin(x_5, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_get_set_stdin(x_5, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_ByteArray_empty;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_3 = l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1___closed__1;
x_4 = lean_st_mk_ref(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_st_mk_ref(x_3, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_IO_FS_Stream_ofBuffer(x_5);
lean_inc(x_8);
x_11 = l_IO_FS_Stream_ofBuffer(x_8);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_IO_withStderr___at_Lean_Server_Snapshots_compileNextCmd___spec__2), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_IO_withStdout___at_Lean_Server_Snapshots_compileNextCmd___spec__3), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_IO_withStdin___at_Lean_Server_Snapshots_compileNextCmd___spec__4(x_10, x_13, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_8, x_16);
lean_dec(x_8);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_string_from_utf8_unchecked(x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_string_from_utf8_unchecked(x_25);
lean_dec(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_15);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Elab_getResetInfoTrees___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__3___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Elab_Command_elabCommandTopLevel(x_1, x_2, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_withLogging(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_5, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 0, x_12);
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags(x_1, x_2, x_3, x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_4);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_4);
x_16 = lean_st_mk_ref(x_15, x_14);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
lean_ctor_set(x_19, 2, x_7);
lean_ctor_set(x_19, 3, x_8);
lean_ctor_set(x_19, 4, x_13);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set(x_22, 2, x_7);
lean_ctor_set(x_22, 3, x_8);
lean_ctor_set(x_22, 4, x_13);
lean_ctor_set(x_22, 5, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
static lean_object* _init_l_Lean_Server_Snapshots_compileNextCmd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_compileNextCmd___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Data.Option.BasicAux");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_compileNextCmd___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Option.get!");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_compileNextCmd___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("value is none");
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Snapshots_compileNextCmd___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Server_Snapshots_compileNextCmd___closed__2;
x_2 = l_Lean_Server_Snapshots_compileNextCmd___closed__3;
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Lean_Server_Snapshots_compileNextCmd___closed__4;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_5 = lean_ctor_get(x_2, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 5);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_5, 5);
lean_inc(x_12);
x_13 = lean_ctor_get(x_5, 6);
lean_inc(x_13);
x_14 = lean_ctor_get(x_5, 7);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 8);
lean_inc(x_15);
x_16 = l_Lean_Elab_Command_instInhabitedScope;
x_17 = l_List_head_x21___rarg(x_16, x_9);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 3);
lean_inc(x_20);
lean_dec(x_17);
lean_inc(x_8);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_8);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_19);
lean_ctor_set(x_21, 3, x_20);
x_22 = l_Lean_Server_Snapshots_Snapshot_msgLog(x_2);
lean_inc(x_1);
x_23 = l_Lean_Parser_parseCommand_parse(x_1, x_21, x_6, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = 0;
x_29 = l_Lean_Syntax_getPos_x3f(x_25, x_28);
lean_inc(x_25);
x_30 = l_Lean_Parser_isEOI(x_25);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_222; lean_object* x_223; 
x_222 = l_Lean_Server_Snapshots_compileNextCmd___closed__5;
x_223 = l_panic___at_Lean_Elab_InfoTree_smallestInfo_x3f___spec__1(x_222);
x_31 = x_223;
goto block_221;
}
else
{
lean_object* x_224; 
x_224 = lean_ctor_get(x_29, 0);
lean_inc(x_224);
lean_dec(x_29);
x_31 = x_224;
goto block_221;
}
block_221:
{
if (x_30 == 0)
{
uint8_t x_32; 
lean_inc(x_25);
x_32 = l_Lean_Parser_isExitCommand(x_25);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_5);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_34 = lean_ctor_get(x_5, 8);
lean_dec(x_34);
x_35 = lean_ctor_get(x_5, 7);
lean_dec(x_35);
x_36 = lean_ctor_get(x_5, 6);
lean_dec(x_36);
x_37 = lean_ctor_get(x_5, 5);
lean_dec(x_37);
x_38 = lean_ctor_get(x_5, 4);
lean_dec(x_38);
x_39 = lean_ctor_get(x_5, 3);
lean_dec(x_39);
x_40 = lean_ctor_get(x_5, 2);
lean_dec(x_40);
x_41 = lean_ctor_get(x_5, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_5, 0);
lean_dec(x_42);
lean_ctor_set(x_5, 1, x_27);
x_43 = lean_st_mk_ref(x_5, x_4);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_st_ref_get(x_7, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_st_mk_ref(x_47, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_1, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 2);
lean_inc(x_53);
x_54 = l_Lean_Server_Snapshots_Snapshot_endPos(x_2);
x_55 = lean_box(0);
lean_inc(x_50);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_50);
x_57 = lean_unsigned_to_nat(0u);
x_58 = l_Lean_firstFrontendMacroScope;
x_59 = lean_box(0);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
x_60 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_60, 0, x_52);
lean_ctor_set(x_60, 1, x_53);
lean_ctor_set(x_60, 2, x_57);
lean_ctor_set(x_60, 3, x_54);
lean_ctor_set(x_60, 4, x_55);
lean_ctor_set(x_60, 5, x_58);
lean_ctor_set(x_60, 6, x_59);
lean_ctor_set(x_60, 7, x_56);
lean_inc(x_25);
x_61 = lean_alloc_closure((void*)(l_Lean_Server_Snapshots_compileNextCmd___lambda__1), 4, 1);
lean_closure_set(x_61, 0, x_25);
lean_inc(x_44);
x_62 = lean_alloc_closure((void*)(l_Lean_Server_Snapshots_compileNextCmd___lambda__2), 4, 3);
lean_closure_set(x_62, 0, x_61);
lean_closure_set(x_62, 1, x_60);
lean_closure_set(x_62, 2, x_44);
x_63 = l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1(x_62, x_51);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_64, 0);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_st_ref_get(x_50, x_65);
lean_dec(x_50);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_st_ref_take(x_7, x_69);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3;
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_70);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_st_ref_set(x_7, x_74, x_72);
lean_dec(x_7);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_st_ref_get(x_44, x_76);
lean_dec(x_44);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_String_isEmpty(x_66);
if (x_80 == 0)
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_78);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_82 = lean_ctor_get(x_78, 1);
x_83 = l_Lean_FileMap_toPosition(x_53, x_54);
lean_dec(x_54);
lean_dec(x_53);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_85, 0, x_66);
x_86 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = 0;
x_88 = l_Lean_Server_Snapshots_compileNextCmd___closed__1;
x_89 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_89, 0, x_52);
lean_ctor_set(x_89, 1, x_83);
lean_ctor_set(x_89, 2, x_84);
lean_ctor_set(x_89, 3, x_88);
lean_ctor_set(x_89, 4, x_86);
lean_ctor_set_uint8(x_89, sizeof(void*)*5, x_87);
x_90 = l_Std_PersistentArray_push___rarg(x_82, x_89);
lean_ctor_set(x_78, 1, x_90);
x_91 = lean_box(0);
x_92 = l_Lean_Server_Snapshots_compileNextCmd___lambda__3(x_1, x_2, x_3, x_73, x_31, x_25, x_26, x_78, x_91, x_79);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_93 = lean_ctor_get(x_78, 0);
x_94 = lean_ctor_get(x_78, 1);
x_95 = lean_ctor_get(x_78, 2);
x_96 = lean_ctor_get(x_78, 3);
x_97 = lean_ctor_get(x_78, 4);
x_98 = lean_ctor_get(x_78, 5);
x_99 = lean_ctor_get(x_78, 6);
x_100 = lean_ctor_get(x_78, 7);
x_101 = lean_ctor_get(x_78, 8);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_78);
x_102 = l_Lean_FileMap_toPosition(x_53, x_54);
lean_dec(x_54);
lean_dec(x_53);
x_103 = lean_box(0);
x_104 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_104, 0, x_66);
x_105 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = 0;
x_107 = l_Lean_Server_Snapshots_compileNextCmd___closed__1;
x_108 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_108, 0, x_52);
lean_ctor_set(x_108, 1, x_102);
lean_ctor_set(x_108, 2, x_103);
lean_ctor_set(x_108, 3, x_107);
lean_ctor_set(x_108, 4, x_105);
lean_ctor_set_uint8(x_108, sizeof(void*)*5, x_106);
x_109 = l_Std_PersistentArray_push___rarg(x_94, x_108);
x_110 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_110, 0, x_93);
lean_ctor_set(x_110, 1, x_109);
lean_ctor_set(x_110, 2, x_95);
lean_ctor_set(x_110, 3, x_96);
lean_ctor_set(x_110, 4, x_97);
lean_ctor_set(x_110, 5, x_98);
lean_ctor_set(x_110, 6, x_99);
lean_ctor_set(x_110, 7, x_100);
lean_ctor_set(x_110, 8, x_101);
x_111 = lean_box(0);
x_112 = l_Lean_Server_Snapshots_compileNextCmd___lambda__3(x_1, x_2, x_3, x_73, x_31, x_25, x_26, x_110, x_111, x_79);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_66);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
x_113 = lean_box(0);
x_114 = l_Lean_Server_Snapshots_compileNextCmd___lambda__3(x_1, x_2, x_3, x_73, x_31, x_25, x_26, x_78, x_113, x_79);
return x_114;
}
}
else
{
uint8_t x_115; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_50);
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_115 = !lean_is_exclusive(x_63);
if (x_115 == 0)
{
return x_63;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_63, 0);
x_117 = lean_ctor_get(x_63, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_63);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_5);
x_119 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_119, 0, x_8);
lean_ctor_set(x_119, 1, x_27);
lean_ctor_set(x_119, 2, x_9);
lean_ctor_set(x_119, 3, x_10);
lean_ctor_set(x_119, 4, x_11);
lean_ctor_set(x_119, 5, x_12);
lean_ctor_set(x_119, 6, x_13);
lean_ctor_set(x_119, 7, x_14);
lean_ctor_set(x_119, 8, x_15);
x_120 = lean_st_mk_ref(x_119, x_4);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_st_ref_get(x_7, x_122);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_st_mk_ref(x_124, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_ctor_get(x_1, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_1, 2);
lean_inc(x_130);
x_131 = l_Lean_Server_Snapshots_Snapshot_endPos(x_2);
x_132 = lean_box(0);
lean_inc(x_127);
x_133 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_133, 0, x_127);
x_134 = lean_unsigned_to_nat(0u);
x_135 = l_Lean_firstFrontendMacroScope;
x_136 = lean_box(0);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
x_137 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_137, 0, x_129);
lean_ctor_set(x_137, 1, x_130);
lean_ctor_set(x_137, 2, x_134);
lean_ctor_set(x_137, 3, x_131);
lean_ctor_set(x_137, 4, x_132);
lean_ctor_set(x_137, 5, x_135);
lean_ctor_set(x_137, 6, x_136);
lean_ctor_set(x_137, 7, x_133);
lean_inc(x_25);
x_138 = lean_alloc_closure((void*)(l_Lean_Server_Snapshots_compileNextCmd___lambda__1), 4, 1);
lean_closure_set(x_138, 0, x_25);
lean_inc(x_121);
x_139 = lean_alloc_closure((void*)(l_Lean_Server_Snapshots_compileNextCmd___lambda__2), 4, 3);
lean_closure_set(x_139, 0, x_138);
lean_closure_set(x_139, 1, x_137);
lean_closure_set(x_139, 2, x_121);
x_140 = l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1(x_139, x_128);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = lean_ctor_get(x_141, 0);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_st_ref_get(x_127, x_142);
lean_dec(x_127);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_st_ref_take(x_7, x_146);
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec(x_148);
x_150 = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3;
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_147);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_st_ref_set(x_7, x_151, x_149);
lean_dec(x_7);
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
lean_dec(x_152);
x_154 = lean_st_ref_get(x_121, x_153);
lean_dec(x_121);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = l_String_isEmpty(x_143);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_158 = lean_ctor_get(x_155, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_155, 1);
lean_inc(x_159);
x_160 = lean_ctor_get(x_155, 2);
lean_inc(x_160);
x_161 = lean_ctor_get(x_155, 3);
lean_inc(x_161);
x_162 = lean_ctor_get(x_155, 4);
lean_inc(x_162);
x_163 = lean_ctor_get(x_155, 5);
lean_inc(x_163);
x_164 = lean_ctor_get(x_155, 6);
lean_inc(x_164);
x_165 = lean_ctor_get(x_155, 7);
lean_inc(x_165);
x_166 = lean_ctor_get(x_155, 8);
lean_inc(x_166);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 lean_ctor_release(x_155, 2);
 lean_ctor_release(x_155, 3);
 lean_ctor_release(x_155, 4);
 lean_ctor_release(x_155, 5);
 lean_ctor_release(x_155, 6);
 lean_ctor_release(x_155, 7);
 lean_ctor_release(x_155, 8);
 x_167 = x_155;
} else {
 lean_dec_ref(x_155);
 x_167 = lean_box(0);
}
x_168 = l_Lean_FileMap_toPosition(x_130, x_131);
lean_dec(x_131);
lean_dec(x_130);
x_169 = lean_box(0);
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_143);
x_171 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_171, 0, x_170);
x_172 = 0;
x_173 = l_Lean_Server_Snapshots_compileNextCmd___closed__1;
x_174 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_174, 0, x_129);
lean_ctor_set(x_174, 1, x_168);
lean_ctor_set(x_174, 2, x_169);
lean_ctor_set(x_174, 3, x_173);
lean_ctor_set(x_174, 4, x_171);
lean_ctor_set_uint8(x_174, sizeof(void*)*5, x_172);
x_175 = l_Std_PersistentArray_push___rarg(x_159, x_174);
if (lean_is_scalar(x_167)) {
 x_176 = lean_alloc_ctor(0, 9, 0);
} else {
 x_176 = x_167;
}
lean_ctor_set(x_176, 0, x_158);
lean_ctor_set(x_176, 1, x_175);
lean_ctor_set(x_176, 2, x_160);
lean_ctor_set(x_176, 3, x_161);
lean_ctor_set(x_176, 4, x_162);
lean_ctor_set(x_176, 5, x_163);
lean_ctor_set(x_176, 6, x_164);
lean_ctor_set(x_176, 7, x_165);
lean_ctor_set(x_176, 8, x_166);
x_177 = lean_box(0);
x_178 = l_Lean_Server_Snapshots_compileNextCmd___lambda__3(x_1, x_2, x_3, x_150, x_31, x_25, x_26, x_176, x_177, x_156);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; 
lean_dec(x_143);
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
x_179 = lean_box(0);
x_180 = l_Lean_Server_Snapshots_compileNextCmd___lambda__3(x_1, x_2, x_3, x_150, x_31, x_25, x_26, x_155, x_179, x_156);
return x_180;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_127);
lean_dec(x_121);
lean_dec(x_31);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_181 = lean_ctor_get(x_140, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_140, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_183 = x_140;
} else {
 lean_dec_ref(x_140);
 x_183 = lean_box(0);
}
if (lean_is_scalar(x_183)) {
 x_184 = lean_alloc_ctor(1, 2, 0);
} else {
 x_184 = x_183;
}
lean_ctor_set(x_184, 0, x_181);
lean_ctor_set(x_184, 1, x_182);
return x_184;
}
}
}
else
{
lean_object* x_185; uint8_t x_186; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_inc(x_2);
x_185 = l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags(x_1, x_2, x_3, x_27, x_4);
x_186 = !lean_is_exclusive(x_2);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; 
x_187 = lean_ctor_get(x_2, 5);
lean_dec(x_187);
x_188 = lean_ctor_get(x_2, 4);
lean_dec(x_188);
x_189 = lean_ctor_get(x_2, 3);
lean_dec(x_189);
x_190 = lean_ctor_get(x_2, 2);
lean_dec(x_190);
x_191 = lean_ctor_get(x_2, 1);
lean_dec(x_191);
x_192 = lean_ctor_get(x_2, 0);
lean_dec(x_192);
x_193 = !lean_is_exclusive(x_185);
if (x_193 == 0)
{
lean_object* x_194; 
x_194 = lean_ctor_get(x_185, 0);
lean_ctor_set(x_2, 4, x_194);
lean_ctor_set(x_2, 2, x_26);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_31);
lean_ctor_set(x_185, 0, x_2);
return x_185;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_185, 0);
x_196 = lean_ctor_get(x_185, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_185);
lean_ctor_set(x_2, 4, x_195);
lean_ctor_set(x_2, 2, x_26);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_31);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_2);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_2);
x_198 = lean_ctor_get(x_185, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_185, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_200 = x_185;
} else {
 lean_dec_ref(x_185);
 x_200 = lean_box(0);
}
x_201 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_201, 0, x_31);
lean_ctor_set(x_201, 1, x_25);
lean_ctor_set(x_201, 2, x_26);
lean_ctor_set(x_201, 3, x_5);
lean_ctor_set(x_201, 4, x_198);
lean_ctor_set(x_201, 5, x_7);
if (lean_is_scalar(x_200)) {
 x_202 = lean_alloc_ctor(0, 2, 0);
} else {
 x_202 = x_200;
}
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_199);
return x_202;
}
}
}
else
{
lean_object* x_203; uint8_t x_204; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_inc(x_2);
x_203 = l_Lean_Server_Snapshots_compileNextCmd_withNewInteractiveDiags(x_1, x_2, x_3, x_27, x_4);
x_204 = !lean_is_exclusive(x_2);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_205 = lean_ctor_get(x_2, 5);
lean_dec(x_205);
x_206 = lean_ctor_get(x_2, 4);
lean_dec(x_206);
x_207 = lean_ctor_get(x_2, 3);
lean_dec(x_207);
x_208 = lean_ctor_get(x_2, 2);
lean_dec(x_208);
x_209 = lean_ctor_get(x_2, 1);
lean_dec(x_209);
x_210 = lean_ctor_get(x_2, 0);
lean_dec(x_210);
x_211 = !lean_is_exclusive(x_203);
if (x_211 == 0)
{
lean_object* x_212; 
x_212 = lean_ctor_get(x_203, 0);
lean_ctor_set(x_2, 4, x_212);
lean_ctor_set(x_2, 2, x_26);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_31);
lean_ctor_set(x_203, 0, x_2);
return x_203;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_203, 0);
x_214 = lean_ctor_get(x_203, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_203);
lean_ctor_set(x_2, 4, x_213);
lean_ctor_set(x_2, 2, x_26);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_31);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_2);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_2);
x_216 = lean_ctor_get(x_203, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_203, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_218 = x_203;
} else {
 lean_dec_ref(x_203);
 x_218 = lean_box(0);
}
x_219 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_219, 0, x_31);
lean_ctor_set(x_219, 1, x_25);
lean_ctor_set(x_219, 2, x_26);
lean_ctor_set(x_219, 3, x_5);
lean_ctor_set(x_219, 4, x_216);
lean_ctor_set(x_219, 5, x_7);
if (lean_is_scalar(x_218)) {
 x_220 = lean_alloc_ctor(0, 2, 0);
} else {
 x_220 = x_218;
}
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_217);
return x_220;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Server_Snapshots_compileNextCmd___lambda__3(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Snapshots_compileNextCmd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Server_Snapshots_compileNextCmd(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Init_System_IO(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Import(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Widget_InteractiveDiagnostic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Snapshots(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Import(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_InteractiveDiagnostic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__1 = _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__1();
lean_mark_persistent(l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__1);
l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2 = _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2();
lean_mark_persistent(l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__2);
l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3 = _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3();
lean_mark_persistent(l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__3);
l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__4 = _init_l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__4();
lean_mark_persistent(l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6____closed__4);
if (builtin) {res = l_Lean_Server_Snapshots_initFn____x40_Lean_Server_Snapshots___hyg_6_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_Snapshots_dummyTacticCache = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_Snapshots_dummyTacticCache);
lean_dec_ref(res);
}l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__1 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__1();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__1);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__2);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__3 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__3();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__3);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__4 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__4();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__4);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__5);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__6 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__6();
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__7 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__7();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__7);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__8 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__8();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__8);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__9 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__9();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__9);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__10 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__10();
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__11);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__12 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__12();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__12);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__13 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__13();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__13);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__14 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__14();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__14);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__15 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__15();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__15);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__16 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__16();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__16);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__17 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__17();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__17);
l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__18 = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__18();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot___closed__18);
l_Lean_Server_Snapshots_instInhabitedSnapshot = _init_l_Lean_Server_Snapshots_instInhabitedSnapshot();
lean_mark_persistent(l_Lean_Server_Snapshots_instInhabitedSnapshot);
l_Lean_Server_Snapshots_Snapshot_infoTree___closed__1 = _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__1();
lean_mark_persistent(l_Lean_Server_Snapshots_Snapshot_infoTree___closed__1);
l_Lean_Server_Snapshots_Snapshot_infoTree___closed__2 = _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__2();
lean_mark_persistent(l_Lean_Server_Snapshots_Snapshot_infoTree___closed__2);
l_Lean_Server_Snapshots_Snapshot_infoTree___closed__3 = _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__3();
lean_mark_persistent(l_Lean_Server_Snapshots_Snapshot_infoTree___closed__3);
l_Lean_Server_Snapshots_Snapshot_infoTree___closed__4 = _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__4();
lean_mark_persistent(l_Lean_Server_Snapshots_Snapshot_infoTree___closed__4);
l_Lean_Server_Snapshots_Snapshot_infoTree___closed__5 = _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__5();
lean_mark_persistent(l_Lean_Server_Snapshots_Snapshot_infoTree___closed__5);
l_Lean_Server_Snapshots_Snapshot_infoTree___closed__6 = _init_l_Lean_Server_Snapshots_Snapshot_infoTree___closed__6();
lean_mark_persistent(l_Lean_Server_Snapshots_Snapshot_infoTree___closed__6);
l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1___closed__1 = _init_l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1___closed__1();
lean_mark_persistent(l_IO_FS_withIsolatedStreams___at_Lean_Server_Snapshots_compileNextCmd___spec__1___closed__1);
l_Lean_Server_Snapshots_compileNextCmd___closed__1 = _init_l_Lean_Server_Snapshots_compileNextCmd___closed__1();
lean_mark_persistent(l_Lean_Server_Snapshots_compileNextCmd___closed__1);
l_Lean_Server_Snapshots_compileNextCmd___closed__2 = _init_l_Lean_Server_Snapshots_compileNextCmd___closed__2();
lean_mark_persistent(l_Lean_Server_Snapshots_compileNextCmd___closed__2);
l_Lean_Server_Snapshots_compileNextCmd___closed__3 = _init_l_Lean_Server_Snapshots_compileNextCmd___closed__3();
lean_mark_persistent(l_Lean_Server_Snapshots_compileNextCmd___closed__3);
l_Lean_Server_Snapshots_compileNextCmd___closed__4 = _init_l_Lean_Server_Snapshots_compileNextCmd___closed__4();
lean_mark_persistent(l_Lean_Server_Snapshots_compileNextCmd___closed__4);
l_Lean_Server_Snapshots_compileNextCmd___closed__5 = _init_l_Lean_Server_Snapshots_compileNextCmd___closed__5();
lean_mark_persistent(l_Lean_Server_Snapshots_compileNextCmd___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
