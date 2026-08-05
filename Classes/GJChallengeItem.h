#ifndef HIEUDASH_GJCHALLENGEITEM_H_
#define HIEUDASH_GJCHALLENGEITEM_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Daily challenge tracking

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJChallengeItem : public cocos2d::CCObject {
public:
    GJChallengeItem();

    int m_nChallengeID;
    int m_nChallengeType;
    int m_nStars;
    int m_nDiamonds;
    int m_nSecretCoins;
    int m_nUserCoins;
    int m_nTarget;
    int m_nProgress;
    bool m_bCompleted;
    int m_nTimeLeft;

    static GJChallengeItem* create();
    bool init();
    int getChallengeID();
    int getChallengeType();
    bool isCompleted();

    ~GJChallengeItem();
};

#endif // HIEUDASH_GJCHALLENGEITEM_H_
