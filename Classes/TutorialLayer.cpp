// ============================================================
// TutorialLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TutorialLayer.h"

TutorialLayer::~TutorialLayer() {
    // 0x7da554
    this->cleanup();
}

TutorialLayer::~TutorialLayer() {
    // 0x7da500
    this->cleanup();
}

TutorialLayer::~TutorialLayer() {
    // 0x7da500
    this->cleanup();
}

void TutorialLayer::keyBackClicked() {
    // 0x7da618
    // TODO: Implement
}

void TutorialLayer::removeTutorialTexture() {
    // 0x7da580
    // TODO: Implement
}

void TutorialLayer::init() {
    // 0x7dabb8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TutorialLayer::create() {
    // 0x7db088
    TutorialLayer* ret = new TutorialLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void TutorialLayer::onNext(cocos2d::CCObject*) {
    // 0x7db19c
    // TODO: Implement
}

void TutorialLayer::onClose(cocos2d::CCObject*) {
    // 0x7da5bc
    // TODO: Implement
}

void TutorialLayer::loadPage(int) {
    // 0x7da628
    // Load from file/storage
    // TODO: Implement loading
}

