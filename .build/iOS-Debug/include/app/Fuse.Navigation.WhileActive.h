// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_ACTIVE_H__
#define __APP_FUSE_NAVIGATION_WHILE_ACTIVE_H__

#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileActive;

struct WhileActive__uType : ::app::Fuse::Navigation::WhileNavigationTrigger__uType
{
};

WhileActive__uType* WhileActive__typeof();

void WhileActive__ForceUpdate(WhileActive* __this);
double WhileActive__InvertProgress(WhileActive* __this, double p);
void WhileActive__OnNavigationStateChanged(WhileActive* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct WhileActive : ::app::Fuse::Navigation::WhileNavigationTrigger
{
    double InvertProgress(double p) { return WhileActive__InvertProgress(this, p); }
};

}}}


#endif
