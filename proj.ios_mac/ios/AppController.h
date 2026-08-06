// AppController.h - iOS application delegate for Hieu Dash.
//
// Mirrors the standard cocos2d-x 2.2.3 iOS template: the AppController
// owns the EAGLView + RootViewController and forwards lifecycle events to
// the C++ CCApplication singleton (which AppDelegate subclasses).

#import <UIKit/UIKit.h>

@class EAGLView;
@interface AppController : NSObject <UIApplicationDelegate, UIAccelerometerDelegate> {
    UIWindow *window;
    UINavigationController *viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) UINavigationController *viewController;

@end
