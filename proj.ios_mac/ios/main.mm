// main.mm - iOS entry point for the Cocos2d-x 2.2.3 build.
//
// Mirrors the standard cocos2d-x 2.2.3 proj.ios_mac template:
//   1. Instantiate the C++ AppDelegate (this also sets it as the
//      CCApplication singleton via its base-class constructor).
//   2. Hand control to UIKit via UIApplicationMain, with AppController
//      (defined in AppController.mm) as the application delegate.
// AppController then creates the EAGLView + RootViewController and calls
// CCApplication::sharedApplication()->applicationDidFinishLaunching(),
// which is where the game loads sprite frames, preloads audio, and runs
// the first scene.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#include "AppDelegate.h"

int main(int argc, char *argv[]) {
    @autoreleasepool {
        // The AppDelegate is intentionally leaked: it must live for the
        // entire process lifetime. CCApplication's constructor registers
        // `this` as the shared singleton.
        AppDelegate *pAppDelegate = new AppDelegate();
        (void)pAppDelegate;
        return UIApplicationMain(argc, argv, nil, @"AppController");
    }
}
