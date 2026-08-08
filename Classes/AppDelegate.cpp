#include "AppDelegate.h"
#include "MenuLayer.h"

#include "cocos2d.h"
#include "CCApplication.h"
#include "CCDirector.h"
#include "CCEGLView.h"

// ---------------------------------------------------------------------------
// Construction / Destruction
// ---------------------------------------------------------------------------

AppDelegate::AppDelegate()
{
}

AppDelegate::~AppDelegate()
{
}

// ---------------------------------------------------------------------------
// applicationDidFinishLaunching
// ---------------------------------------------------------------------------

bool AppDelegate::applicationDidFinishLaunching()
{
    // Retrieve the shared director
    cocos2d::CCDirector *pDirector = cocos2d::CCDirector::sharedDirector();
    cocos2d::CCEGLView   *pEGLView = cocos2d::CCEGLView::sharedOpenGLView();

    pDirector->setOpenGLView(pEGLView);

    // Display FPS counter in debug builds
    pDirector->setDisplayStats(true);

    // 60 FPS — the original game targets a fixed 1/60 timestep
    pDirector->setAnimationInterval(1.0 / 60.0);

    // Design resolution matches the original APK's logical viewport.
    // kResolutionExactFit stretches to fill — this is what the shipped
    // build uses so that UI elements stay pixel-perfect on every device.
    cocos2d::CCSize designResolutionSize = cocos2d::CCSizeMake(480, 320);

    pEGLView->setDesignResolutionSize(
        designResolutionSize.width,
        designResolutionSize.height,
        kResolutionExactFit
    );

    // Turn on high-DPI retina support where available
    pDirector->enableRetinaDisplay(true);

    // ---- Create and run the first scene --------------------------------
    // The original app always starts at the main menu (MenuLayer).
    cocos2d::CCScene *pScene = MenuLayer::scene();
    pDirector->runWithScene(pScene);

    return true;
}

// ---------------------------------------------------------------------------
// applicationDidEnterBackground
// ---------------------------------------------------------------------------

void AppDelegate::applicationDidEnterBackground()
{
    cocos2d::CCDirector::sharedDirector()->stopAnimation();

    // If FMOD is active we pause it here to avoid background audio
#ifdef USE_FMOD
    // FMODManager::sharedManager()->pauseAll();  // Stub: hook up
#endif
}

// ---------------------------------------------------------------------------
// applicationWillEnterForeground
// ---------------------------------------------------------------------------

void AppDelegate::applicationWillEnterForeground()
{
    cocos2d::CCDirector::sharedDirector()->startAnimation();

#ifdef USE_FMOD
    // FMODManager::sharedManager()->resumeAll();  // Stub: hook up
#endif
}
