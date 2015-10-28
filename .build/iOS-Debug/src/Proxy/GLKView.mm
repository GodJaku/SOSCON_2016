#define uObjC_NATIVE_TYPE GLKView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::GLKit::GLKView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::GLKit::GLKView__typeof()

#include <GLKit/GLKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY











- (void) bindDrawable
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->bindDrawable();
}



- (void) deleteDrawable
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->deleteDrawable();
}



- (void) display
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->display();
}





























- (void) setContext:(EAGLContext *)context
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setContext((::app::iOS::OpenGLES::EAGLContext*)uObjC::Lifetime::GetUnoObject(context, ::app::iOS::OpenGLES::EAGLContext__typeof()));
}



- (NSInteger) drawableWidth
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->drawableWidth();
    return (long)__return;
}



- (NSInteger) drawableHeight
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    int __return = __this->drawableHeight();
    return (long)__return;
}
















































































- (BOOL) enableSetNeedsDisplay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->enableSetNeedsDisplay();
    return (BOOL)__return;
}



- (void) setEnableSetNeedsDisplay:(BOOL)enableSetNeedsDisplay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setEnableSetNeedsDisplay((bool)enableSetNeedsDisplay);
}


@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
