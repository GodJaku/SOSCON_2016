// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.13.2/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_TEXT_ENTERED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_TEXT_ENTERED_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_TextEnteredHandler;

struct List__Fuse_Input_TextEnteredHandler__uType : ::uClassType
{
};

List__Fuse_Input_TextEnteredHandler__uType* List__Fuse_Input_TextEnteredHandler__typeof();

void List__Fuse_Input_TextEnteredHandler___ObjInit(List__Fuse_Input_TextEnteredHandler* __this);
List__Fuse_Input_TextEnteredHandler* List__Fuse_Input_TextEnteredHandler__New_1(::uStatic* __this);

struct List__Fuse_Input_TextEnteredHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;

    void _ObjInit() { List__Fuse_Input_TextEnteredHandler___ObjInit(this); }
};

}}}


#endif
