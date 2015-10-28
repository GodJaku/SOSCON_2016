#pragma once

#if !uObjC_UNO_TYPE_IS_SEALED

// Common interface for proxy class, manages lifetime of Uno counterpart.

@interface uObjC_PROXY (uObjC_Lifetime) <uObjC_ClassProxy> @end
@implementation uObjC_PROXY (uObjC_Lifetime)

- (void)uObjC_setObject:(uObject *)object
{
    assert(object);
    uObjC::Lifetime::StoreHybridReference(&handle_, object);
}

- (uObject *)uObjC_objectForType:(uType *)type
{
    return uObjC::Lifetime::LoadHybridReference(handle_, type);
}

- (void)dealloc
{
    uObjC::Lifetime::StoreHybridReference(&handle_, NULL);
    [super dealloc];
}
@end

// Calls to base class's designated initializers would go on Uno's side.
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#endif // !uObjC_UNO_TYPE_IS_SEALED
