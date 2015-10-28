// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_U_I_KIT_N_S_MUTABLE_PARAGRAPH_STYLE_H__
#define __APP_I_O_S_U_I_KIT_N_S_MUTABLE_PARAGRAPH_STYLE_H__

#include <app/iOS.Foundation.INSCopying.h>
#include <app/iOS.UIKit.NSParagraphStyle.h>
#include <Uno.h>
#include <uObjC.h>

namespace app {
namespace iOS {
namespace UIKit {

struct NSMutableParagraphStyle;

struct NSMutableParagraphStyle__uType : ::app::iOS::UIKit::NSParagraphStyle__uType
{
};

NSMutableParagraphStyle__uType* NSMutableParagraphStyle__typeof();

void NSMutableParagraphStyle___ObjInit_6(NSMutableParagraphStyle* __this, ::id __id);
NSMutableParagraphStyle* NSMutableParagraphStyle__New_8(::uStatic* __this, ::id __id);
void NSMutableParagraphStyle__setAlignment(NSMutableParagraphStyle* __this, int alignment_);
void NSMutableParagraphStyle__setLineBreakMode(NSMutableParagraphStyle* __this, int lineBreakMode_);

struct NSMutableParagraphStyle : ::app::iOS::UIKit::NSParagraphStyle
{
    void _ObjInit_6(::id __id) { NSMutableParagraphStyle___ObjInit_6(this, __id); }
    void setAlignment(int alignment_) { NSMutableParagraphStyle__setAlignment(this, alignment_); }
    void setLineBreakMode(int lineBreakMode_) { NSMutableParagraphStyle__setLineBreakMode(this, lineBreakMode_); }
};

}}}


#endif
