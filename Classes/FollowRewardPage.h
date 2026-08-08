// ============================================================
// FollowRewardPage.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FOLLOWREWARDPAGE_H_
#define FOLLOWREWARDPAGE_H_

#include "cocos2d.h"

class FollowRewardPage {
public:
    virtual ~FollowRewardPage();
    virtual ~FollowRewardPage();
    virtual ~FollowRewardPage();

    void updateRate();
    void onSpecialItem(cocos2d::CCObject*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onRewardedVideo(cocos2d::CCObject*);
    void switchToOpenedState(CCMenuItemSpriteExtra*);
    void rewardedVideoFinished();
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onClose(cocos2d::CCObject*);

};

#endif // FOLLOWREWARDPAGE_H_
