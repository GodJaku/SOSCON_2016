// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.13.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE1_CLOSURE__STRING__STRING_H__
#define __APP_UNO_THREADING_FUTURE1_CLOSURE__STRING__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Future1_Closure__string__string;

struct Future1_Closure__string__string__uType : ::uClassType
{
};

Future1_Closure__string__string__uType* Future1_Closure__string__string__typeof();

void Future1_Closure__string__string___ObjInit(Future1_Closure__string__string* __this, ::uDelegate* action, ::uString* result);
Future1_Closure__string__string* Future1_Closure__string__string__New_1(::uStatic* __this, ::uDelegate* action, ::uString* result);
void Future1_Closure__string__string__Run(Future1_Closure__string__string* __this);

struct Future1_Closure__string__string : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::uString*> _result;

    void _ObjInit(::uDelegate* action, ::uString* result) { Future1_Closure__string__string___ObjInit(this, action, result); }
    void Run() { Future1_Closure__string__string__Run(this); }
};

}}}


#endif
