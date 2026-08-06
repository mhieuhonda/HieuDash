// AppController.mm - iOS application delegate implementation for Hieu Dash.
//
// Bridges UIKit lifecycle events to the C++ cocos2d-x 2.2.3 CCApplication
// singleton. This is the standard pattern used by every cocos2d-x 2.2.3
// iOS app: UIApplicationMain instantiates AppController, which creates the
// UIWindow + EAGLView + RootViewController and calls
// CCApplication::run() -> applicationDidFinishLaunching().

#import "AppController.h"
#import "RootViewController.h"
#import "EAGLView.h"

#import "cocos2d.h"
#import "AppDelegate.h"
#import "platform/ios/CCEGLView_ios.h"

@implementation AppController

@synthesize window;
@synthesize viewController;

#pragma mark -
#pragma mark Application lifecycle

// -application:didFinishLaunchingWithOptions: is the iOS entry point.
// CCApplication::sharedApplication() returns the AppDelegate instance
// created in main.mm (via `new AppDelegate()`). We tell it the window,
// view controller, and EAGLView so the C++ side can render into them.
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // The C++ AppDelegate must have been instantiated before this is
    // called. main.mm creates it as a global so it lives for the whole
    // process lifetime.
    cocos2d::CCApplication *app = cocos2d::CCApplication::sharedApplication();

    // Create the main window.
    CGRect rect = [[UIScreen mainScreen] bounds];
    window = [[UIWindow alloc] initWithFrame:rect];

    // Create the RootViewController that hosts the EAGLView.
    RootViewController *rvc = [[RootViewController alloc] initWithNibName:nil bundle:nil];
    rvc.wantsFullScreenLayout = YES;
    rvc.title = @"Hieu Dash";

    // Create the EAGLView and add it to the view controller's view.
    EAGLView *__glView = [EAGLView viewWithFrame:rect
                                     pixelFormat:kEAGLColorFormatRGB565
                                     depthFormat:GL_DEPTH_COMPONENT24
                              preserveBackbuffer:NO
                                      sharegroup:nil
                                   multiSampling:NO
                                 numberOfSamples:0];
    [rvc.view addSubview:__glView];

    // Hook the CCEGLView up to the cocos2d-x director.
    cocos2d::CCEGLView *eglView = cocos2d::CCEGLView::sharedOpenGLView();
    eglView->setEAGLView(__glView);

    // Set the orientation.
    [rvc setLandscape:YES];

    // Wrap the RootViewController in a UINavigationController so that
    // modal pickers / mail composers presented by the game have a parent
    // to present from.
    viewController = [[UINavigationController alloc] initWithRootViewController:rvc];
    viewController.navigationBarHidden = YES;

    // Make the window visible.
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];

    // Set animation interval to 60 FPS.
    [[CCDirector sharedDirector] setAnimationInterval:1.0 / 60.0];

    // Tell the C++ AppDelegate the app has finished launching - this is
    // where it loads sprite frames, preloads audio, and runs the first
    // scene (LoadingLayer).
    app->applicationDidFinishLaunching();

    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    cocos2d::CCApplication::sharedApplication()->applicationWillResignActive();
    [[CCDirector sharedDirector] pause];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    cocos2d::CCApplication::sharedApplication()->applicationDidBecomeActive();
    [[CCDirector sharedDirector] startAnimation];
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    cocos2d::CCApplication::sharedApplication()->applicationDidEnterBackground();
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    cocos2d::CCApplication::sharedApplication()->applicationWillEnterForeground();
}

- (void)applicationWillTerminate:(UIApplication *)application {
    [[CCDirector sharedDirector] end];
}

#pragma mark -
#pragma mark Memory management

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application {
    [[CCDirector sharedDirector] purgeCachedData];
}

- (void)dealloc {
    [window release];
    [viewController release];
    [super dealloc];
}

@end
