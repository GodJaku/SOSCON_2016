// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode;

struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof();

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int defaultValue, ::uDelegate* changedCallback);
int StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int value, int oldValue);
StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner);
void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner, int value);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner, int value);

struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode___ObjInit_1(this, defaultValue, changedCallback); }
    int Get(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Get(this, owner); }
    bool HasValue(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Elements::Element* owner) { StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Elements::Element* owner, int value) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Set(this, owner, value); }
    bool SetStyle(::app::Fuse::Elements::Element* owner, int value) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetStyle(this, owner, value); }
};

}}


#endif
