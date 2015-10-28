// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_APP_H__
#define __APP_FUSE_APP_H__

#include <app/Fuse.AppBase.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct GraphicsView; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Theme; } }
namespace app { namespace Uno { namespace Platform { struct TimerEventArgs; } } }

namespace app {
namespace Fuse {

struct App;

struct App__uType : ::app::Fuse::AppBase__uType
{
};

App__uType* App__typeof();

void App___ObjInit_2(App* __this);
void App__OnSetRootNode(App* __this, ::app::Fuse::Node* root);
void App__OnSetTheme(App* __this, ::app::Fuse::Theme* theme);
void App__OnTick(App* __this, ::uObject* sender, ::app::Uno::Platform::TimerEventArgs* args);
void App__PropagateBackground(App* __this);

struct App : ::app::Fuse::AppBase
{
    ::uStrong< ::app::Fuse::Controls::GraphicsView*> _graphicsView;
    double _startTime;
    double _prevTime;

    void _ObjInit_2() { App___ObjInit_2(this); }
    void OnTick(::uObject* sender, ::app::Uno::Platform::TimerEventArgs* args) { App__OnTick(this, sender, args); }
    void PropagateBackground() { App__PropagateBackground(this); }
};

}}


#endif
