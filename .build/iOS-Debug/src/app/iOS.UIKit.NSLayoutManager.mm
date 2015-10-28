// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSLayoutManager
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::UIKit::NSLayoutManager*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::NSLayoutManager__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.Foundation.NSArray.h>
#include <app/iOS.UIKit.NSLayoutManager.h>
#include <app/iOS.UIKit.NSTextContainer.h>
#include <app/iOS.UIKit.NSTextStorage.h>
#include <app/Uno.ULong.h>

namespace app {
namespace iOS {
namespace UIKit {

NSLayoutManager__uType* NSLayoutManager__typeof()
{
    static ::uStaticStrong<NSLayoutManager__uType*> type;
    if (type != NULL) return type;

    type = (NSLayoutManager__uType*)::uAllocClassType(sizeof(NSLayoutManager__uType), "iOS.UIKit.NSLayoutManager", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::Foundation::NSObject__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void NSLayoutManager___ObjInit_4(NSLayoutManager* __this)
{
    ::app::iOS::Foundation::NSObject___ObjInit_2(__this);
}

void NSLayoutManager__addTextContainer(NSLayoutManager* __this, ::app::iOS::UIKit::NSTextContainer* container_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(addTextContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_));
}

::app::iOS::CoreGraphics::CGRect NSLayoutManager__boundingRectForGlyphRangeInTextContainer(NSLayoutManager* __this, ::app::iOS::Foundation::_NSRange glyphRange_, ::app::iOS::UIKit::NSTextContainer* container_)
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::CGRect, @selector(boundingRectForGlyphRange:inTextContainer:),
        uObjC::Struct::FromUno__NSRange(glyphRange_, ::_NSRange()),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_));
    return uObjC::Struct::ToUno_CGRect(__return, ::app::iOS::CoreGraphics::CGRect());
}

void NSLayoutManager__drawGlyphsForGlyphRangeAtPoint(NSLayoutManager* __this, ::app::iOS::Foundation::_NSRange glyphsToShow_, ::app::iOS::CoreGraphics::CGPoint origin_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(drawGlyphsForGlyphRange:atPoint:),
        uObjC::Struct::FromUno__NSRange(glyphsToShow_, ::_NSRange()),
        uObjC::Struct::FromUno_CGPoint(origin_, ::CGPoint()));
}

::app::iOS::Foundation::_NSRange NSLayoutManager__glyphRangeForTextContainer(NSLayoutManager* __this, ::app::iOS::UIKit::NSTextContainer* container_)
{
    ::_NSRange __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::_NSRange, @selector(glyphRangeForTextContainer:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)container_));
    return uObjC::Struct::ToUno__NSRange(__return, ::app::iOS::Foundation::_NSRange());
}

NSLayoutManager* NSLayoutManager__New_5(::uStatic* __this)
{
    NSLayoutManager* inst = (NSLayoutManager*)::uAllocObject(sizeof(NSLayoutManager), NSLayoutManager__typeof());
    inst->_ObjInit_4();
    return inst;
}

void NSLayoutManager__removeTextContainerAtIndex(NSLayoutManager* __this, ::uULong index_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(removeTextContainerAtIndex:),
        (unsigned long)index_);
}

void NSLayoutManager__setTextStorage(NSLayoutManager* __this, ::app::iOS::UIKit::NSTextStorage* textStorage_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setTextStorage:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textStorage_));
}

::app::iOS::Foundation::NSArray* NSLayoutManager__textContainers(NSLayoutManager* __this)
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(::NSArray*, @selector(textContainers));
    return (::app::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::app::iOS::Foundation::NSArray__typeof());
}

}}}
