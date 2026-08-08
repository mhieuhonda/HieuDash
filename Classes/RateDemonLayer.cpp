// ============================================================
// RateDemonLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "RateDemonLayer.h"

RateDemonLayer::~RateDemonLayer() {
    // 0x933af8
    this->cleanup();
}

RateDemonLayer::~RateDemonLayer() {
    // 0x933a4c
    this->cleanup();
}

RateDemonLayer::~RateDemonLayer() {
    // 0x933a4c
    this->cleanup();
}

void RateDemonLayer::onClosePopup(UploadActionPopup*) {
    // 0x933c48
    // TODO: Implement
}

void RateDemonLayer::selectRating(cocos2d::CCObject*) {
    // 0x933b24
    // TODO: Implement
}

void RateDemonLayer::keyBackClicked() {
    // 0x933a3c
    // TODO: Implement
}

void RateDemonLayer::uploadActionFailed(int, int) {
    // 0x933c94
    // Load from file/storage
    // TODO: Implement loading
}

void RateDemonLayer::uploadActionFinished(int, int) {
    // 0x933f38
    // Load from file/storage
    // TODO: Implement loading
}

void RateDemonLayer::init(int) {
    // 0x934058
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void RateDemonLayer::create(int) {
    // 0x934490
    RateDemonLayer* ret = new RateDemonLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void RateDemonLayer::onRate(cocos2d::CCObject*) {
    // 0x933dc0
    // TODO: Implement
}

void RateDemonLayer::onClose(cocos2d::CCObject*) {
    // 0x9339e8
    // TODO: Implement
}

