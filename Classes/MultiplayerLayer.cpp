// ============================================================
// MultiplayerLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "MultiplayerLayer.h"

MultiplayerLayer::~MultiplayerLayer() {
    // 0x9b0970
    this->cleanup();
}

MultiplayerLayer::~MultiplayerLayer() {
    // 0x9b092c
    this->cleanup();
}

MultiplayerLayer::~MultiplayerLayer() {
    // 0x9b092c
    this->cleanup();
}

void MultiplayerLayer::keyBackClicked() {
    // 0x9b0a70
    // TODO: Implement
}

void MultiplayerLayer::init() {
    // 0x9b0a80
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void MultiplayerLayer::scene() {
    // 0x9b0b38
    // TODO: Implement
}

void MultiplayerLayer::create() {
    // 0x9b0a84
    MultiplayerLayer* ret = new MultiplayerLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void MultiplayerLayer::onBack(cocos2d::CCObject*) {
    // 0x9b0a2c
    // TODO: Implement
}

void MultiplayerLayer::onBtn1(cocos2d::CCObject*) {
    // 0x9b099c
    // TODO: Implement
}

void MultiplayerLayer::onBtn2(cocos2d::CCObject*) {
    // 0x9b09e4
    // TODO: Implement
}

