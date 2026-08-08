// ============================================================
// LikeItemLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "LikeItemLayer.h"

LikeItemLayer::~LikeItemLayer() {
    // 0x7ea6d0
    this->cleanup();
}

LikeItemLayer::~LikeItemLayer() {
    // 0x7ea67c
    this->cleanup();
}

LikeItemLayer::~LikeItemLayer() {
    // 0x7ea67c
    this->cleanup();
}

void LikeItemLayer::triggerLike(bool) {
    // 0x7eac30
    // TODO: Implement
}

void LikeItemLayer::keyBackClicked() {
    // 0x7ea66c
    // TODO: Implement
}

void LikeItemLayer::init(LikeItemType, int, int) {
    // 0x7ea6fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LikeItemLayer::create(LikeItemType, int, int) {
    // 0x7eaaf8
    LikeItemLayer* ret = new LikeItemLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void LikeItemLayer::onLike(cocos2d::CCObject*) {
    // 0x7eac90
    // TODO: Implement
}

void LikeItemLayer::onClose(cocos2d::CCObject*) {
    // 0x7ea62c
    // TODO: Implement
}

void LikeItemLayer::onDislike(cocos2d::CCObject*) {
    // 0x7eac98
    // TODO: Implement
}

