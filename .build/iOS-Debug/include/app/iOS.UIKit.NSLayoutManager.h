// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_N_S_LAYOUT_MANAGER_H__
#define __APP_I_O_S_U_I_KIT_N_S_LAYOUT_MANAGER_H__

#include <app/iOS.Foundation.NSObject.h>
#include <Uno.h>
namespace app { namespace iOS { namespace CoreGraphics { struct CGPoint; } } }
namespace app { namespace iOS { namespace CoreGraphics { struct CGRect; } } }
namespace app { namespace iOS { namespace Foundation { struct _NSRange; } } }
namespace app { namespace iOS { namespace Foundation { struct NSArray; } } }
namespace app { namespace iOS { namespace UIKit { struct NSTextContainer; } } }
namespace app { namespace iOS { namespace UIKit { struct NSTextStorage; } } }

namespace app {
namespace iOS {
namespace UIKit {

struct NSLayoutManager;

struct NSLayoutManager__uType : ::app::iOS::Foundation::NSObject__uType
{
};

NSLayoutManager__uType* NSLayoutManager__typeof();

void NSLayoutManager___ObjInit_4(NSLayoutManager* __this);
void NSLayoutManager__addTextContainer(NSLayoutManager* __this, ::app::iOS::UIKit::NSTextContainer* container_);
::app::iOS::CoreGraphics::CGRect NSLayoutManager__boundingRectForGlyphRangeInTextContainer(NSLayoutManager* __this, ::app::iOS::Foundation::_NSRange glyphRange_, ::app::iOS::UIKit::NSTextContainer* container_);
void NSLayoutManager__drawGlyphsForGlyphRangeAtPoint(NSLayoutManager* __this, ::app::iOS::Foundation::_NSRange glyphsToShow_, ::app::iOS::CoreGraphics::CGPoint origin_);
::app::iOS::Foundation::_NSRange NSLayoutManager__glyphRangeForTextContainer(NSLayoutManager* __this, ::app::iOS::UIKit::NSTextContainer* container_);
NSLayoutManager* NSLayoutManager__New_5(::uStatic* __this);
void NSLayoutManager__removeTextContainerAtIndex(NSLayoutManager* __this, ::uULong index_);
void NSLayoutManager__setTextStorage(NSLayoutManager* __this, ::app::iOS::UIKit::NSTextStorage* textStorage_);
::app::iOS::Foundation::NSArray* NSLayoutManager__textContainers(NSLayoutManager* __this);

struct NSLayoutManager : ::app::iOS::Foundation::NSObject
{
    void _ObjInit_4() { NSLayoutManager___ObjInit_4(this); }
    void addTextContainer(::app::iOS::UIKit::NSTextContainer* container_) { NSLayoutManager__addTextContainer(this, container_); }
    ::app::iOS::CoreGraphics::CGRect boundingRectForGlyphRangeInTextContainer(::app::iOS::Foundation::_NSRange glyphRange_, ::app::iOS::UIKit::NSTextContainer* container_);
    void drawGlyphsForGlyphRangeAtPoint(::app::iOS::Foundation::_NSRange glyphsToShow_, ::app::iOS::CoreGraphics::CGPoint origin_);
    ::app::iOS::Foundation::_NSRange glyphRangeForTextContainer(::app::iOS::UIKit::NSTextContainer* container_);
    void removeTextContainerAtIndex(::uULong index_) { NSLayoutManager__removeTextContainerAtIndex(this, index_); }
    void setTextStorage(::app::iOS::UIKit::NSTextStorage* textStorage_) { NSLayoutManager__setTextStorage(this, textStorage_); }
    ::app::iOS::Foundation::NSArray* textContainers() { return NSLayoutManager__textContainers(this); }
};

}}}

#include <app/iOS.CoreGraphics.CGPoint.h>
#include <app/iOS.CoreGraphics.CGRect.h>
#include <app/iOS.Foundation._NSRange.h>

namespace app {
namespace iOS {
namespace UIKit {

inline ::app::iOS::CoreGraphics::CGRect NSLayoutManager::boundingRectForGlyphRangeInTextContainer(::app::iOS::Foundation::_NSRange glyphRange_, ::app::iOS::UIKit::NSTextContainer* container_) { return NSLayoutManager__boundingRectForGlyphRangeInTextContainer(this, glyphRange_, container_); }
inline void NSLayoutManager::drawGlyphsForGlyphRangeAtPoint(::app::iOS::Foundation::_NSRange glyphsToShow_, ::app::iOS::CoreGraphics::CGPoint origin_) { NSLayoutManager__drawGlyphsForGlyphRangeAtPoint(this, glyphsToShow_, origin_); }
inline ::app::iOS::Foundation::_NSRange NSLayoutManager::glyphRangeForTextContainer(::app::iOS::UIKit::NSTextContainer* container_) { return NSLayoutManager__glyphRangeForTextContainer(this, container_); }

}}}


#endif
