// ============================================================
// ShareLevelLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ShareLevelLayer.h"

ShareLevelLayer::~ShareLevelLayer() {
    // 0x6e3428
    this->cleanup();
}

ShareLevelLayer::~ShareLevelLayer() {
    // 0x6e3344
    this->cleanup();
}

ShareLevelLayer::~ShareLevelLayer() {
    // 0x6e3344
    this->cleanup();
}

void ShareLevelLayer::onSettings(cocos2d::CCObject*) {
    // 0x6e6678
    // TODO: Implement
}

void ShareLevelLayer::setupStars() {
    // 0x6e3e0c
    // TODO: Implement
}

void ShareLevelLayer::selectRating(cocos2d::CCObject*) {
    // 0x6e34e4
    // TODO: Implement
}

void ShareLevelLayer::getStarsButton(int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float) {
    // 0x6e3d50
    // TODO: Implement
}

void ShareLevelLayer::keyBackClicked() {
    // 0x6e32d4
    // TODO: Implement
}

void ShareLevelLayer::init(GJGameLevel*) {
    // 0x6e419c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShareLevelLayer::create(GJGameLevel*) {
    // 0x6e4fc4
    ShareLevelLayer* ret = new ShareLevelLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShareLevelLayer::onClose(cocos2d::CCObject*) {
    // 0x6e3294
    // TODO: Implement
}

void ShareLevelLayer::onShare(cocos2d::CCObject*) {
    // 0x6e57e0
    // TODO: Implement
}

