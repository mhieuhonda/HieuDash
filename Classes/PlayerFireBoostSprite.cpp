// ============================================================
// PlayerFireBoostSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PlayerFireBoostSprite.h"

PlayerFireBoostSprite::~PlayerFireBoostSprite() {
    // 0x620f24
    this->cleanup();
}

PlayerFireBoostSprite::~PlayerFireBoostSprite() {
    // 0x620f00
    this->cleanup();
}

PlayerFireBoostSprite::~PlayerFireBoostSprite() {
    // 0x620f00
    this->cleanup();
}

void PlayerFireBoostSprite::animateFireIn() {
    // 0x62e6b4
    // TODO: Implement
}

void PlayerFireBoostSprite::animateFireOut() {
    // 0x62e728
    // TODO: Implement
}

void PlayerFireBoostSprite::loopFireAnimation() {
    // 0x620ba8
    // TODO: Implement
}

void PlayerFireBoostSprite::init() {
    // 0x620e6c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PlayerFireBoostSprite::create() {
    // 0x62e610
    PlayerFireBoostSprite* ret = new PlayerFireBoostSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

