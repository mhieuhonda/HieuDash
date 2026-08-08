#ifndef __APP_DELEGATE_H__
#define __APP_DELEGATE_H__

#include "cocos2d.h"

/**
 * @brief The main application delegate for GeometryDash (HieuDash decompilation).
 *
 * Sets up the Cocos2d-x director, design resolution, and loads the
 * initial MenuLayer scene on launch.  Mirrors the original APK's
 * AppDelegate compiled from the reverse-engineered source.
 */
class AppDelegate : public cocos2d::CCApplication
{
public:
    AppDelegate();
    virtual ~AppDelegate();

    /**
     * @brief Called once the OS has finished launching the application.
     *
     * Configures the CCDirector (FPS, projection, design resolution),
     * then replaces the running scene with MenuLayer.
     *
     * @return true on success, false to abort startup.
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @brief Called when the app transitions to the background
     *        (e.g. user presses Home or switches apps).
     *
     * Pauses the CCDirector animation and stops all scheduled timers
     * so the OS can reclaim CPU/GPU time.
     */
    virtual void applicationDidEnterBackground();

    /**
     * @brief Called when the app returns to the foreground.
     *
     * Resumes the CCDirector animation so rendering continues.
     */
    virtual void applicationWillEnterForeground();
};

#endif // __APP_DELEGATE_H__
