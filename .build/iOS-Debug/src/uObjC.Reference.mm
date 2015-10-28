#include <Uno/Uno.h>
#include <uObjC.Reference.h>


@implementation Uno_StrongReference

@synthesize unoObject = _unoObject;

- (id)initWithUnoObject:(uObject *)object
{
    self = [super init];

    if (self) {
        uRetainObject(object);
        _unoObject = object;
    }

    return self;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
    Uno_StrongReference *newRef = [[[self class] allocWithZone:zone] init];

    uRetainObject(_unoObject);
    newRef->_unoObject = _unoObject;
    return newRef;
}

- (uObject *)unoObject
{
    // Auto-released

    uRetainObject(_unoObject);
    uAutoReleaseObject(_unoObject);

    return _unoObject;
}

- (void)setUnoObject:(uObject *)object
{
    uRetainObject(object);
    uAutoReleaseObject(_unoObject);

    _unoObject = object;
}

- (void)dealloc
{
    uReleaseObject(_unoObject);
    _unoObject = NULL;

    [super dealloc];
}
@end


@implementation Uno_WeakReference
{
    @protected
    uWeakObject *_weakObject;
}

@synthesize unoObject = _unoObject;

- (id)initWithUnoObject:(uObject *)object
{
    self = [super init];
    if (self) {
        _weakObject = NULL;
        uStoreWeakObject(&_weakObject, object);
    }
    return self;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
    Uno_WeakReference *newRef = [[[self class] allocWithZone:zone] init];

    newRef->_weakObject = NULL;

    uObject *object = uLoadWeakObject(_weakObject);
    uStoreWeakObject(&newRef->_weakObject, object);

    return newRef;
}

- (uObject *)unoObject
{
    // Auto-released
    return uLoadWeakObject(_weakObject);
}

- (void)setUnoObject:(uObject *)object
{
    uStoreWeakObject(&_weakObject, object);
}

- (void)dealloc
{
    uStoreWeakObject(&_weakObject, NULL);
    [super dealloc];
}
@end


@implementation Uno_UnsafeReference

@synthesize unoObject = _unoObject;

- (id)initWithUnoObject:(uObject *)object
{
    self = [super init];
    if (self)
        _unoObject = object;
    return self;
}

- (instancetype)copyWithZone:(NSZone *)zone
{
    Uno_UnsafeReference *newRef = [[[self class] allocWithZone:zone] init];
    newRef->_unoObject = _unoObject;
    return newRef;
}
@end
