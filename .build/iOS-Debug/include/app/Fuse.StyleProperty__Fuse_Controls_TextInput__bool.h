// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_INPUT__BOOL_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_INPUT__BOOL_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_TextInput__bool;

struct StyleProperty__Fuse_Controls_TextInput__bool__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_TextInput__bool__uType* StyleProperty__Fuse_Controls_TextInput__bool__typeof();

void StyleProperty__Fuse_Controls_TextInput__bool___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool defaultValue, ::uDelegate* changedCallback);
bool StyleProperty__Fuse_Controls_TextInput__bool__Get(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__bool__IsEqual(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool value, bool oldValue);
StyleProperty__Fuse_Controls_TextInput__bool* StyleProperty__Fuse_Controls_TextInput__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_TextInput__bool__OnChanged(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__bool__Reset(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__bool__ResetStyle(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner);
void StyleProperty__Fuse_Controls_TextInput__bool__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextInput__bool__Set(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner, bool value);

struct StyleProperty__Fuse_Controls_TextInput__bool : ::app::Fuse::StyleProperty
{
    bool _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(bool defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_TextInput__bool___ObjInit_1(this, defaultValue, changedCallback); }
    bool Get(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__bool__Get(this, owner); }
    bool IsEqual(bool value, bool oldValue) { return StyleProperty__Fuse_Controls_TextInput__bool__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::TextInput* owner) { StyleProperty__Fuse_Controls_TextInput__bool__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__bool__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__bool__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::TextInput* owner, bool value) { return StyleProperty__Fuse_Controls_TextInput__bool__Set(this, owner, value); }
};

}}


#endif
