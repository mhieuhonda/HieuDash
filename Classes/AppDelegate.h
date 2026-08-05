#ifndef HIEUDASH_APPDELEGATE_H_
#define HIEUDASH_APPDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AppDelegate : public cocos2d::CCApplication {
public:
    AppDelegate();
    virtual void applicationDidEnterBackground();
    virtual bool applicationDidFinishLaunching();
    virtual void applicationWillEnterForeground();
    void applicationWillResignActive();
    void checkSound();
    int get();
    bool getIsIOS();
    bool getLoadingFinished();
    bool getManagersLoaded();
    bool getPaused();
    cocos2d::CCNode* getScenePointer();
    void hideLoadingCircle();
    void loadingIsFinished();
    void pauseGame();
    void resumeSound();
    void setManagersLoaded(bool);
    void setPaused(bool);
    void setScenePointer(cocos2d::CCNode*);
    void showLoadingCircle(bool, bool, bool);
    void trySaveGame();
    void willSwitchToScene(cocos2d::CCScene*);
    ~AppDelegate();
};

#endif // HIEUDASH_APPDELEGATE_H_
