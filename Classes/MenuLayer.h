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
    void onAchievements();
    void onCreator();
    void onGameCenter();
    void onGarage();
    void onMoreGames();
    void onOptions();
    void onPlay();
    void onRobTop();
    void onStats();
    static cocos2d::CCScene* scene();
    void showGCQuestion();
    ~MenuLayer();
};

#endif // HIEUDASH_MENULAYER_H_
