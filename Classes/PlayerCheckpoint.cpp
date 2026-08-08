
#include "PlayerCheckpoint.h"

PlayerCheckpoint::~PlayerCheckpoint() {
    this->cleanup();
}

bool PlayerCheckpoint::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void PlayerCheckpoint::create() {
    PlayerCheckpoint* ret = new PlayerCheckpoint();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

