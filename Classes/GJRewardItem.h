#ifndef HIEUDASH_GJREWARDITEM_H_
#define HIEUDASH_GJREWARDITEM_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Treasure chest rewards

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJRewardItem : public cocos2d::CCObject {
public:
    GJRewardItem();

    int m_nRewardType;
    int m_nItemID;
    int m_nStars;
    int m_nDiamonds;
    int m_nSecretCoins;
    int m_nUserCoins;
    int m_nOrbs;
    int m_nSpecialRewardItem;
    bool m_bClaimed;

    static GJRewardItem* create();
    bool init();
    int getRewardType();
    int getItemID();
    bool isClaimed();

    ~GJRewardItem();
};

#endif // HIEUDASH_GJREWARDITEM_H_
