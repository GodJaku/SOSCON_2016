// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_DUKTAPE_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_DUKTAPE_H__

#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct duktape__uType : ::uClassType
{
};

duktape__uType* duktape__typeof();

void* duktape__create_heap_default(::uStatic* __this);
bool duktape__del_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
void duktape__destroy_heap(::uStatic* __this, void* ctx);
void duktape__enum_(::uStatic* __this, void* ctx, int index, int flags);
void duktape__error(::uStatic* __this, void* ctx, ::uString* message);
bool duktape__get_boolean(::uStatic* __this, void* ctx, int index);
void* duktape__get_heapptr(::uStatic* __this, void* ctx, int index);
int duktape__get_int(::uStatic* __this, void* ctx, int index);
::uLong duktape__get_length(::uStatic* __this, void* ctx, int index);
double duktape__get_number(::uStatic* __this, void* ctx, int index);
bool duktape__get_prop_index(::uStatic* __this, void* ctx, int index, int arr_index);
bool duktape__get_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
::uString* duktape__get_string(::uStatic* __this, void* ctx, int index);
int duktape__get_top(::uStatic* __this, void* ctx);
bool duktape__has_prop_string(::uStatic* __this, void* ctx, int index, ::uString* key);
bool duktape__is_array(::uStatic* __this, void* ctx, int index);
bool duktape__is_boolean(::uStatic* __this, void* ctx, int index);
bool duktape__is_function(::uStatic* __this, void* ctx, int index);
bool duktape__is_null_or_undefined(::uStatic* __this, void* ctx, int index);
bool duktape__is_number(::uStatic* __this, void* ctx, int index);
bool duktape__is_object(::uStatic* __this, void* ctx, int index);
bool duktape__is_string(::uStatic* __this, void* ctx, int index);
void duktape__new_(::uStatic* __this, void* ctx, int nargs);
bool duktape__next(::uStatic* __this, void* ctx, int index, bool getValue);
int duktape__pcall(::uStatic* __this, void* ctx, int nargs);
int duktape__pcall_method(::uStatic* __this, void* ctx, int nargs);
int duktape__pcompile(::uStatic* __this, void* ctx, ::uUInt flags);
int duktape__pcompile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src);
int duktape__peval_string(::uStatic* __this, void* ctx, ::uString* code);
void duktape__pop(::uStatic* __this, void* ctx);
void duktape__pop_2(::uStatic* __this, void* ctx);
void duktape__push_boolean(::uStatic* __this, void* ctx, bool value);
void duktape__push_callback_proxy(::uStatic* __this, void* ctx, int argc);
void duktape__push_delegate(::uStatic* __this, void* ctx, ::uDelegate* del);
void duktape__push_global_object(::uStatic* __this, void* ctx);
void duktape__push_global_stash(::uStatic* __this, void* ctx);
int duktape__push_heapptr(::uStatic* __this, void* ctx, void* ptr);
void duktape__push_int(::uStatic* __this, void* ctx, int val);
void duktape__push_null(::uStatic* __this, void* ctx);
void duktape__push_number(::uStatic* __this, void* ctx, double val);
void duktape__push_string(::uStatic* __this, void* ctx, ::uString* str);
bool duktape__put_prop_index(::uStatic* __this, void* ctx, int index, int arr_index);
bool duktape__put_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
::uString* duktape__safe_to_string(::uStatic* __this, void* ctx, int index);

}}}}


#endif
