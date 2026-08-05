#include "PlayerCheckpoint.h"

PlayerCheckpoint::PlayerCheckpoint()
    : m_obPlayerPos(cocos2d::CCPointZero)
    , m_fPlayerYVel(0.0f)
    , m_fPlayerRotation(0.0f)
    , m_bPlayerGravity(false)
    , m_bFlyMode(false)
    , m_bMiniMode(false)
    , m_bCanJump(false)
    , m_fPlayerSpeed(0.0f)
    , m_nGameMode(0)
    , m_bUpsideDown(false)
    , m_bDead(false) {}

PlayerCheckpoint* PlayerCheckpoint::create() {
    PlayerCheckpoint* ret = new PlayerCheckpoint();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool PlayerCheckpoint::init() { return true; }
cocos2d::CCPoint PlayerCheckpoint::getPlayerPos() { return m_obPlayerPos; }
float PlayerCheckpoint::getPlayerYVel() { return m_fPlayerYVel; }
bool PlayerCheckpoint::getGravityFlipped() { return m_bPlayerGravity; }
bool PlayerCheckpoint::getFlyMode() { return m_bFlyMode; }
bool PlayerCheckpoint::getMiniMode() { return m_bMiniMode; }

PlayerCheckpoint::~PlayerCheckpoint() {}
