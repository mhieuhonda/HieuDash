#ifndef HIEUDASH_MENULAYER_H_
#define HIEUDASH_MENULAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class MenuLayer : public cocos2d::CCLayer {
public:
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    MenuLayer();
    void endGame();
    bool init();
    void keyBackClicked();
    void node();
    // v0.7 fix: menu_selector callbacks MUST take CCObject* (SEL_MenuHandler
    // signature) - MSVC with /permissive- rejects the cast from
    // void(T::*)() to void(T::*)(CCObject*) even though GCC -fpermissive
    // silently accepts it. Adding the parameter fixes Windows builds.
    void onAchievements(cocos2d::CCObject* sender = nullptr);
    void onCreator(cocos2d::CCObject* sender = nullptr);
    void onGameCenter(cocos2d::CCObject* sender = nullptr);
    void onGarage(cocos2d::CCObject* sender = nullptr);
    void onMoreGames(cocos2d::CCObject* sender = nullptr);
    void onOptions(cocos2d::CCObject* sender = nullptr);
    void onPlay(cocos2d::CCObject* sender = nullptr);
    void onRobTop(cocos2d::CCObject* sender = nullptr);
    void onStats(cocos2d::CCObject* sender = nullptr);
    static cocos2d::CCScene* scene();
    void showGCQuestion();
    ~MenuLayer();
};

#endif // HIEUDASH_MENULAYER_H_
