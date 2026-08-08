// ============================================================
// RewardUnlockLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef REWARDUNLOCKLAYER_H_
#define REWARDUNLOCKLAYER_H_

#include "cocos2d.h"

class RewardUnlockLayer {
public:
    virtual ~RewardUnlockLayer();
    virtual ~RewardUnlockLayer();
    virtual ~RewardUnlockLayer();

    void playDropSound();
    void keyBackClicked();
    void readyToCollect(GJRewardItem*);
    void playLabelEffect(int, int, cocos2d::CCSprite*, cocos2d::CCPoint, float);
    void showCloseButton();
    void currencyWillExit(CurrencyRewardLayer*);
    void playRewardEffect();
    void connectionTimeout();
    void showCollectReward(GJRewardItem*);
    void labelEnterFinishedO(cocos2d::CCObject*);
    void init(int, RewardsPage*);
    void step2();
    void step3();
    void create(int, RewardsPage*);
    void onClose(cocos2d::CCObject*);

};

#endif // REWARDUNLOCKLAYER_H_
