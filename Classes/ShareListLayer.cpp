// ============================================================
// ShareListLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ShareListLayer.h"

ShareListLayer::~ShareListLayer() {
    // 0xa7241c
    this->cleanup();
}

ShareListLayer::~ShareListLayer() {
    // 0xa723a0
    this->cleanup();
}

ShareListLayer::~ShareListLayer() {
    // 0xa723a0
    this->cleanup();
}

void ShareListLayer::onUnlisted(cocos2d::CCObject*) {
    // 0xa793b4
    // TODO: Implement
}

void ShareListLayer::keyBackClicked() {
    // 0xa72078
    // TODO: Implement
}

void ShareListLayer::updateUnlistedF() {
    // 0xa792bc
    // TODO: Implement
}

void ShareListLayer::init(GJLevelList*) {
    // 0xa79420
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShareListLayer::create(GJLevelList*) {
    // 0xa7a7ec
    ShareListLayer* ret = new ShareListLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShareListLayer::onInfo(cocos2d::CCObject*) {
    // 0xa7294c
    // TODO: Implement
}

void ShareListLayer::onClose(cocos2d::CCObject*) {
    // 0xa72038
    // TODO: Implement
}

void ShareListLayer::onShare(cocos2d::CCObject*) {
    // 0xa7b0d4
    // TODO: Implement
}

