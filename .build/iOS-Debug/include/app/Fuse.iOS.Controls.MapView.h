// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.11.3/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_MAP_VIEW_H__
#define __APP_FUSE_I_O_S_CONTROLS_MAP_VIEW_H__

#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace iOS { namespace MapKit { struct MKMapView; } } }
namespace app { namespace iOS { namespace UIKit { struct UIView; } } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct MapView;

struct MapView__uType : ::app::Fuse::iOS::Controls::Element__uType
{
};

MapView__uType* MapView__typeof();

::app::iOS::UIKit::UIView* MapView__CreateInternal(MapView* __this);

struct MapView : ::app::Fuse::iOS::Controls::Element
{
    ::uStrong< ::app::iOS::MapKit::MKMapView*> _mapView;
};

}}}}


#endif
