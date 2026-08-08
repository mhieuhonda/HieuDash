// ============================================================
// ColorChannelSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ColorChannelSprite.h"

ColorChannelSprite::~ColorChannelSprite() {
    // 0x8a26a4
    this->cleanup();
}

ColorChannelSprite::~ColorChannelSprite() {
    // 0x8a2680
    this->cleanup();
}

ColorChannelSprite::~ColorChannelSprite() {
    // 0x8a2680
    this->cleanup();
}

void ColorChannelSprite::updateValues(ColorAction*) {
    // 0x8a3620
    // TODO: Implement
}

void ColorChannelSprite::updateOpacity(float) {
    // 0x8a3360
    // TODO: Implement
}

void ColorChannelSprite::updateBlending(bool) {
    // 0x8a34e8
    // TODO: Implement
}

void ColorChannelSprite::updateCopyLabel(int, bool) {
    // 0x8a3190
    // TODO: Implement
}

void ColorChannelSprite::init() {
    // 0x8a24d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ColorChannelSprite::create() {
    // 0x8a30e8
    ColorChannelSprite* ret = new ColorChannelSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

