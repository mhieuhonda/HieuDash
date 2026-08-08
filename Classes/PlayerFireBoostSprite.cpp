
#include "PlayerFireBoostSprite.h"

PlayerFireBoostSprite::~PlayerFireBoostSprite() {
    this->cleanup();
}

PlayerFireBoostSprite::~PlayerFireBoostSprite() {
    this->cleanup();
}

PlayerFireBoostSprite::~PlayerFireBoostSprite() {
    this->cleanup();
}

void PlayerFireBoostSprite::animateFireIn() {
    // TODO: Implement
}

void PlayerFireBoostSprite::animateFireOut() {
    // TODO: Implement
}

void PlayerFireBoostSprite::loopFireAnimation() {
    // TODO: Implement
}

void PlayerFireBoostSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PlayerFireBoostSprite::create() {
    PlayerFireBoostSprite* ret = new PlayerFireBoostSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

