// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FLOAT_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FLOAT_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Elements_Element__float;

struct StyleProperty__Fuse_Elements_Element__float__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Elements_Element__float__uType* StyleProperty__Fuse_Elements_Element__float__typeof();

void StyleProperty__Fuse_Elements_Element__float___ObjInit_1(StyleProperty__Fuse_Elements_Element__float* __this, float defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Elements_Element__float___ObjInit_2(StyleProperty__Fuse_Elements_Element__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
float StyleProperty__Fuse_Elements_Element__float__Get(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float__HasValue(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float__IsEqual(StyleProperty__Fuse_Elements_Element__float* __this, float value, float oldValue);
StyleProperty__Fuse_Elements_Element__float* StyleProperty__Fuse_Elements_Element__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Elements_Element__float__OnChanged(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float__Reset(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__float__ResetStyle(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner);
void StyleProperty__Fuse_Elements_Element__float__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Elements_Element__float__Set(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner, float value);
bool StyleProperty__Fuse_Elements_Element__float__SetStyle(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner, float value);

struct StyleProperty__Fuse_Elements_Element__float : ::app::Fuse::StyleProperty
{
    float _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(float defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Elements_Element__float___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Elements_Element__float___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    float Get(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float__Get(this, owner); }
    bool HasValue(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float__HasValue(this, owner); }
    bool IsEqual(float value, float oldValue) { return StyleProperty__Fuse_Elements_Element__float__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Elements::Element* owner) { StyleProperty__Fuse_Elements_Element__float__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__float__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Elements::Element* owner, float value) { return StyleProperty__Fuse_Elements_Element__float__Set(this, owner, value); }
    bool SetStyle(::app::Fuse::Elements::Element* owner, float value) { return StyleProperty__Fuse_Elements_Element__float__SetStyle(this, owner, value); }
};

}}


#endif
