// ============================================================
// GJChestSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJChestSprite.h"

GJChestSprite::~GJChestSprite() {
    // 0x934930
    this->cleanup();
}

GJChestSprite::~GJChestSprite() {
    // 0x93490c
    this->cleanup();
}

GJChestSprite::~GJChestSprite() {
    // 0x93490c
    this->cleanup();
}

void GJChestSprite::setOpacity(unsigned char) {
    // 0x93a530
    // TODO: Implement
}

void GJChestSprite::switchToState(ChestSpriteState, bool) {
    // 0x936c44
    // TODO: Implement
}

void GJChestSprite::init(int) {
    // 0x937c24
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJChestSprite::create(int) {
    // 0x937c8c
    GJChestSprite* ret = new GJChestSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJChestSprite::setColor(cocos2d::_ccColor3B const&) {
    // 0x93a430
    // TODO: Set m_color
}

