// ============================================================
// SetupObjectOptions2Popup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupObjectOptions2Popup.h"

SetupObjectOptions2Popup::~SetupObjectOptions2Popup() {
    // 0x974d10
    this->cleanup();
}

SetupObjectOptions2Popup::~SetupObjectOptions2Popup() {
    // 0x974ca4
    this->cleanup();
}

SetupObjectOptions2Popup::~SetupObjectOptions2Popup() {
    // 0x974ca4
    this->cleanup();
}

void SetupObjectOptions2Popup::onPlusButton(cocos2d::CCObject*) {
    // 0x97cfb8
    // TODO: Implement
}

void SetupObjectOptions2Popup::init(GameObject*, cocos2d::CCArray*) {
    // 0x97c23c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupObjectOptions2Popup::create(GameObject*, cocos2d::CCArray*) {
    // 0x97c980
    SetupObjectOptions2Popup* ret = new SetupObjectOptions2Popup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

