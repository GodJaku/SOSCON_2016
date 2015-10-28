#import <UIKit/UIKit.h>
@interface UIControlCallback : NSObject { }
- (void) callback:(id)sender:(UIEvent*) uiEvent;
@property (readonly) SEL callbackSelector;
@end