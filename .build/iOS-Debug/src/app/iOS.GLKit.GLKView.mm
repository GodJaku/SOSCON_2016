// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE GLKView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::GLKit::GLKView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::GLKit::GLKView__typeof()

#include <GLKit/GLKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.GLKit.GLKView.h>
#include <app/iOS.OpenGLES.EAGLContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace iOS {
namespace GLKit {

GLKView__uType* GLKView__typeof()
{
    static ::uStaticStrong<GLKView__uType*> type;
    if (type != NULL) return type;

    type = (GLKView__uType*)::uAllocClassType(sizeof(GLKView__uType), "iOS.GLKit.GLKView", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void GLKView___ObjInit_8(GLKView* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

void GLKView__bindDrawable(GLKView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(bindDrawable));
}

void GLKView__deleteDrawable(GLKView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(deleteDrawable));
}

void GLKView__display(GLKView* __this)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(display));
}

int GLKView__drawableHeight(GLKView* __this)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(drawableHeight));
    return (int)__return;
}

int GLKView__drawableWidth(GLKView* __this)
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(long, @selector(drawableWidth));
    return (int)__return;
}

bool GLKView__enableSetNeedsDisplay(GLKView* __this)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(BOOL, @selector(enableSetNeedsDisplay));
    return (bool)__return;
}

bool GLKView__get_EnableSetNeedsDisplay(GLKView* __this)
{
    return __this->enableSetNeedsDisplay();
}

GLKView* GLKView__New_9(::uStatic* __this)
{
    GLKView* inst = (GLKView*)::uAllocObject(sizeof(GLKView), GLKView__typeof());
    inst->_ObjInit_8();
    return inst;
}

void GLKView__set_EnableSetNeedsDisplay(GLKView* __this, bool value)
{
    __this->setEnableSetNeedsDisplay(value);
}

void GLKView__setContext(GLKView* __this, ::app::iOS::OpenGLES::EAGLContext* context_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setContext:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
}

void GLKView__setEnableSetNeedsDisplay(GLKView* __this, bool enableSetNeedsDisplay_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(void, @selector(setEnableSetNeedsDisplay:),
        (BOOL)enableSetNeedsDisplay_);
}

}}}
