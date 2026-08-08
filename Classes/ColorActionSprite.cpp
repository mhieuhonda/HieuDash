// ============================================================
// ColorActionSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ColorActionSprite.h"

ColorActionSprite::~ColorActionSprite() {
    // 0x8a264c
    this->cleanup();
}

ColorActionSprite::~ColorActionSprite() {
    // 0x8a2638
    this->cleanup();
}

ColorActionSprite::~ColorActionSprite() {
    // 0x8a2638
    this->cleanup();
}

void ColorActionSprite::init() {
    // 0x8bf3f8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ColorActionSprite::create() {
    // 0x8bf448
    ColorActionSprite* ret = new ColorActionSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

