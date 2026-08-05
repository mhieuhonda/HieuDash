#ifndef HIEUDASH_PLAYERCHECKPOINT_H_
#define HIEUDASH_PLAYERCHECKPOINT_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Practice mode player state snapshot

#include "cocos2d.h"
#include "HieuDashEnums.h"

class PlayerCheckpoint : public cocos2d::CCObject {
public:
    PlayerCheckpoint();

    cocos2d::CCPoint m_obPlayerPos;
    float m_fPlayerYVel;
    float m_fPlayerRotation;
    bool m_bPlayerGravity;
    bool m_bFlyMode;
    bool m_bMiniMode;
    bool m_bCanJump;
    float m_fPlayerSpeed;
    int m_nGameMode;
    bool m_bUpsideDown;
    bool m_bDead;

    static PlayerCheckpoint* create();
    bool init();
    cocos2d::CCPoint getPlayerPos();
    float getPlayerYVel();
    bool getGravityFlipped();
    bool getFlyMode();
    bool getMiniMode();

    ~PlayerCheckpoint();
};

#endif // HIEUDASH_PLAYERCHECKPOINT_H_
