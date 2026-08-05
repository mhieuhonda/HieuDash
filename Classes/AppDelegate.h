#ifndef _APPDELEGATE_H_
#define _APPDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class AppDelegate {
public:
    AppDelegate();
    applicationDidEnterBackground();
    applicationDidFinishLaunching();
    applicationWillEnterForeground();
    applicationWillResignActive();
    checkSound();
    get();
    getIsIOS();
    getLoadingFinished();
    getManagersLoaded();
    getPaused();
    getScenePointer();
    hideLoadingCircle();
    loadingIsFinished();
    pauseGame();
    resumeSound();
    setManagersLoaded(bool);
    setPaused(bool);
    setScenePointer(cocos2d::CCNode*);
    showLoadingCircle(bool, bool, bool);
    trySaveGame();
    willSwitchToScene(cocos2d::CCScene*);
    ~AppDelegate();
};

#endif // _APPDELEGATE_H_
