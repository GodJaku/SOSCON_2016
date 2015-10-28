#pragma once

#include <Foundation/Foundation.h>

struct uObject;

@protocol Uno_Reference <NSObject>
@property (nonatomic) uObject *unoObject;
- (id)initWithUnoObject:(uObject *)object;
@end


/// Holds a strong reference to a Uno object, it's released on dealloc.
@interface Uno_StrongReference : NSObject <Uno_Reference, NSCopying>
- (id)initWithUnoObject:(uObject *)object NS_DESIGNATED_INITIALIZER;
@end


/// Holds a (nullable) weak reference to a Uno object.
@interface Uno_WeakReference : NSObject <Uno_Reference, NSCopying>
- (id)initWithUnoObject:(uObject *)object NS_DESIGNATED_INITIALIZER;
@end


/// Holds a naked pointer to a Uno object.
@interface Uno_UnsafeReference : NSObject <Uno_Reference, NSCopying>
- (id)initWithUnoObject:(uObject *)object NS_DESIGNATED_INITIALIZER;
@end
