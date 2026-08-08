// ============================================================
// RewardsPage.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef REWARDSPAGE_H_
#define REWARDSPAGE_H_

#include "cocos2d.h"

class RewardsPage {
public:
    virtual ~RewardsPage();
    virtual ~RewardsPage();
    virtual ~RewardsPage();

    void onFreeStuff(cocos2d::CCObject*);
    void updateTimers(float);
    void tryGetRewards();
    void getRewardFrame(int, int);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void unlockLayerClosed(RewardUnlockLayer*);
    void rewardsStatusFailed();
    void rewardsStatusFinished(int);
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onClose(cocos2d::CCObject*);
    void onReward(cocos2d::CCObject*);

};

#endif // REWARDSPAGE_H_
