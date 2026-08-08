// ============================================================
// CreatorLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CREATORLAYER_H_
#define CREATORLAYER_H_

#include "cocos2d.h"

class CreatorLayer {
public:
    virtual ~CreatorLayer();
    virtual ~CreatorLayer();
    virtual ~CreatorLayer();

    void onMapPacks(cocos2d::CCObject*);
    void onMyLevels(cocos2d::CCObject*);
    void onTopLists(cocos2d::CCObject*);
    void onChallenge(cocos2d::CCObject*);
    void onGauntlets(cocos2d::CCObject*);
    void dialogClosed(DialogLayer*);
    void onDailyLevel(cocos2d::CCObject*);
    void onEventLevel(cocos2d::CCObject*);
    void onFameLevels(cocos2d::CCObject*);
    void onMultiplayer(cocos2d::CCObject*);
    void onSavedLevels(cocos2d::CCObject*);
    void onSecretVault(cocos2d::CCObject*);
    void onWeeklyLevel(cocos2d::CCObject*);
    void keyBackClicked();
    void onAdventureMap(cocos2d::CCObject*);
    void onLeaderboards(cocos2d::CCObject*);
    void onOnlineLevels(cocos2d::CCObject*);
    void onTreasureRoom(cocos2d::CCObject*);
    void sceneWillResume();
    void onFeaturedLevels(cocos2d::CCObject*);
    void checkQuestsStatus();
    void onOnlyFullVersion(cocos2d::CCObject*);
    void canPlayOnlineLevels();
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onPaths(cocos2d::CCObject*);

};

#endif // CREATORLAYER_H_
