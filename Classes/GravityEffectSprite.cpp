// ============================================================
// GravityEffectSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GravityEffectSprite.h"

GravityEffectSprite::~GravityEffectSprite() {
    // 0x5c9324
    this->cleanup();
}

GravityEffectSprite::~GravityEffectSprite() {
    // 0x5c9300
    this->cleanup();
}

GravityEffectSprite::~GravityEffectSprite() {
    // 0x5c9300
    this->cleanup();
}

void GravityEffectSprite::updateSpritesColor(cocos2d::_ccColor3B) {
    // 0x5d2ed0
    // TODO: Implement
}

void GravityEffectSprite::draw() {
    // 0x5c8678
    // Render/draw logic
    // TODO: Implement rendering
}

void GravityEffectSprite::init() {
    // 0x5e5cb0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GravityEffectSprite::create() {
    // 0x5e5f20
    GravityEffectSprite* ret = new GravityEffectSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

