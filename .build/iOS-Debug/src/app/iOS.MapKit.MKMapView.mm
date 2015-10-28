// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.13.3/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE MKMapView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::app::iOS::MapKit::MKMapView*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::MapKit::MKMapView__typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <app/iOS.MapKit.MKMapView.h>

namespace app {
namespace iOS {
namespace MapKit {

MKMapView__uType* MKMapView__typeof()
{
    static ::uStaticStrong<MKMapView__uType*> type;
    if (type != NULL) return type;

    type = (MKMapView__uType*)::uAllocClassType(sizeof(MKMapView__uType), "iOS.MapKit.MKMapView", false, 0, 0, 0);

    type->SetBaseType(::app::iOS::UIKit::UIView__typeof());

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

void MKMapView___ObjInit_8(MKMapView* __this)
{
    ::app::iOS::UIKit::UIView___ObjInit_7(__this);
}

MKMapView* MKMapView__New_9(::uStatic* __this)
{
    MKMapView* inst = (MKMapView*)::uAllocObject(sizeof(MKMapView), MKMapView__typeof());
    inst->_ObjInit_8();
    return inst;
}

}}}
