// Lean compiler output
// Module: Init.Data.Option.BasicAux
// Imports: Init.Data.Option.Basic Init.PanicAux
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Option_get_x21___rarg___closed__3;
static lean_object* l_Option_get_x21___rarg___closed__6;
static lean_object* l_Option_get_x21___rarg___closed__8;
LEAN_EXPORT lean_object* l_Option_get_x21___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Option_get_x21___rarg___closed__2;
static lean_object* l_Option_get_x21___rarg___closed__1;
LEAN_EXPORT lean_object* l_Option_get_x21___rarg(lean_object*, lean_object*);
static lean_object* l_Option_get_x21___rarg___closed__4;
static lean_object* l_Option_get_x21___rarg___closed__9;
lean_object* l_panic___rarg(lean_object*, lean_object*);
static lean_object* l_Option_get_x21___rarg___closed__5;
LEAN_EXPORT lean_object* l_Option_get_x21(lean_object*);
lean_object* l_CallerInfo_mkPanicMessage(lean_object*, lean_object*);
static lean_object* l_Option_get_x21___rarg___closed__7;
static lean_object* _init_l_Option_get_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Init.Data.Option.BasicAux", 25);
return x_1;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Option_get_x21___rarg___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Option.get!", 11);
return x_1;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Option_get_x21___rarg___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Option_get_x21___rarg___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(16u);
x_2 = lean_unsigned_to_nat(14u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Option_get_x21___rarg___closed__2;
x_2 = l_Option_get_x21___rarg___closed__5;
x_3 = l_Option_get_x21___rarg___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("value is none", 13);
return x_1;
}
}
static lean_object* _init_l_Option_get_x21___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Option_get_x21___rarg___closed__7;
x_2 = l_Option_get_x21___rarg___closed__8;
x_3 = l_CallerInfo_mkPanicMessage(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Option_get_x21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Option_get_x21___rarg___closed__9;
x_4 = l_panic___rarg(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Option_get_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Option_get_x21___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_get_x21___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Option_get_x21___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init_Data_Option_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Init_PanicAux(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Option_BasicAux(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Option_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_PanicAux(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Option_get_x21___rarg___closed__1 = _init_l_Option_get_x21___rarg___closed__1();
lean_mark_persistent(l_Option_get_x21___rarg___closed__1);
l_Option_get_x21___rarg___closed__2 = _init_l_Option_get_x21___rarg___closed__2();
lean_mark_persistent(l_Option_get_x21___rarg___closed__2);
l_Option_get_x21___rarg___closed__3 = _init_l_Option_get_x21___rarg___closed__3();
lean_mark_persistent(l_Option_get_x21___rarg___closed__3);
l_Option_get_x21___rarg___closed__4 = _init_l_Option_get_x21___rarg___closed__4();
lean_mark_persistent(l_Option_get_x21___rarg___closed__4);
l_Option_get_x21___rarg___closed__5 = _init_l_Option_get_x21___rarg___closed__5();
lean_mark_persistent(l_Option_get_x21___rarg___closed__5);
l_Option_get_x21___rarg___closed__6 = _init_l_Option_get_x21___rarg___closed__6();
lean_mark_persistent(l_Option_get_x21___rarg___closed__6);
l_Option_get_x21___rarg___closed__7 = _init_l_Option_get_x21___rarg___closed__7();
lean_mark_persistent(l_Option_get_x21___rarg___closed__7);
l_Option_get_x21___rarg___closed__8 = _init_l_Option_get_x21___rarg___closed__8();
lean_mark_persistent(l_Option_get_x21___rarg___closed__8);
l_Option_get_x21___rarg___closed__9 = _init_l_Option_get_x21___rarg___closed__9();
lean_mark_persistent(l_Option_get_x21___rarg___closed__9);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
