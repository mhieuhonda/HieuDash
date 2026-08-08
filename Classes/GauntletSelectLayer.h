// ============================================================
// GauntletSelectLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GAUNTLETSELECTLAYER_H_
#define GAUNTLETSELECTLAYER_H_

#include "cocos2d.h"

class GauntletSelectLayer {
public:
    virtual ~GauntletSelectLayer();
    virtual ~GauntletSelectLayer();
    virtual ~GauntletSelectLayer();

    void unblockPlay();
    void updateArrows();
    void keyBackClicked();
    void setupGauntlets();
    void loadLevelsFailed(char const*, int);
    void loadLevelsFinished(cocos2d::CCArray*, char const*, int);
    void showUnlockGauntlet();
    void playUnlockAnimation();
    void unlockAnimationStep2();
    void unlockAnimationStep3();
    void rewardedVideoFinished();
    void unlockAnimationFinished();
    void scrollLayerScrolledToPage(BoomScrollLayer*, int);
    void scrollLayerWillScrollToPage(BoomScrollLayer*, int);
    void init(int);
    void scene(int);
    void create(int);
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onInfo(cocos2d::CCObject*);
    void onNext(cocos2d::CCObject*);
    void onPlay(cocos2d::CCObject*);
    void onPrev(cocos2d::CCObject*);
    void goToPage(int, bool);
    void onRefresh(cocos2d::CCObject*);

};

#endif // GAUNTLETSELECTLAYER_H_
