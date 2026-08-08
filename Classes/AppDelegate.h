// ============================================================
// AppDelegate.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef APPDELEGATE_H_
#define APPDELEGATE_H_

#include "cocos2d.h"

class AppDelegate {
public:
    virtual ~AppDelegate();
    virtual ~AppDelegate();
    virtual ~AppDelegate();

    void checkSound();
    void pauseSound();
    void resumeSound();
    void setupGLView();
    void trySaveGame(bool);
    void platformShutdown();
    void hideLoadingCircle();
    void loadingIsFinished();
    void showLoadingCircle(bool, bool, bool);
    void willSwitchToScene(cocos2d::CCScene*);
    void setIdleTimerDisabled(bool);
    void applicationWillBecomeActive();
    void applicationWillResignActive();
    void applicationDidEnterBackground();
    void applicationDidFinishLaunching();
    void applicationWillEnterForeground();
    void get();
    void bgScale();
    void musicTest();
    void pauseGame();

};

#endif // APPDELEGATE_H_
