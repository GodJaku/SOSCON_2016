#pragma once

// Common interface for interface proxy, manages lifetime of Uno counterpart.

@interface uObjC_PROXY (uObjC_Lifetime) <uObjC_InterfaceProxy> @end
@implementation uObjC_PROXY (uObjC_Lifetime)

- (instancetype)uObjC_initWithObject:(uObject *)object
{
    self = [super init];
    if (self) {
        uRetainObject(object);
        unoObject_ = object;
    }
    return self;
}

- (uObject *)uObjC_objectForType:(uType *)type
{
    return uCast<uObject *>(unoObject_, type);
}

- (void) dealloc
{
    uReleaseObject(unoObject_);
    [super dealloc];
}
@end
