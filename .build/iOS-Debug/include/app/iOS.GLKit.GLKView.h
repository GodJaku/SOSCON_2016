// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_I_O_S_G_L_KIT_G_L_K_VIEW_H__
#define __APP_I_O_S_G_L_KIT_G_L_K_VIEW_H__

#include <app/iOS.UIKit.UIView.h>
#include <Uno.h>
namespace app { namespace iOS { namespace OpenGLES { struct EAGLContext; } } }

namespace app {
namespace iOS {
namespace GLKit {

struct GLKView;

struct GLKView__uType : ::app::iOS::UIKit::UIView__uType
{
};

GLKView__uType* GLKView__typeof();

void GLKView___ObjInit_8(GLKView* __this);
void GLKView__bindDrawable(GLKView* __this);
void GLKView__deleteDrawable(GLKView* __this);
void GLKView__display(GLKView* __this);
int GLKView__drawableHeight(GLKView* __this);
int GLKView__drawableWidth(GLKView* __this);
bool GLKView__enableSetNeedsDisplay(GLKView* __this);
bool GLKView__get_EnableSetNeedsDisplay(GLKView* __this);
GLKView* GLKView__New_9(::uStatic* __this);
void GLKView__set_EnableSetNeedsDisplay(GLKView* __this, bool value);
void GLKView__setContext(GLKView* __this, ::app::iOS::OpenGLES::EAGLContext* context_);
void GLKView__setEnableSetNeedsDisplay(GLKView* __this, bool enableSetNeedsDisplay_);

struct GLKView : ::app::iOS::UIKit::UIView
{
    void _ObjInit_8() { GLKView___ObjInit_8(this); }
    void bindDrawable() { GLKView__bindDrawable(this); }
    void deleteDrawable() { GLKView__deleteDrawable(this); }
    void display() { GLKView__display(this); }
    int drawableHeight() { return GLKView__drawableHeight(this); }
    int drawableWidth() { return GLKView__drawableWidth(this); }
    bool enableSetNeedsDisplay() { return GLKView__enableSetNeedsDisplay(this); }
    bool EnableSetNeedsDisplay() { return GLKView__get_EnableSetNeedsDisplay(this); }
    void EnableSetNeedsDisplay(bool value) { GLKView__set_EnableSetNeedsDisplay(this, value); }
    void setContext(::app::iOS::OpenGLES::EAGLContext* context_) { GLKView__setContext(this, context_); }
    void setEnableSetNeedsDisplay(bool enableSetNeedsDisplay_) { GLKView__setEnableSetNeedsDisplay(this, enableSetNeedsDisplay_); }
};

}}}


#endif
