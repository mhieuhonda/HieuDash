// ============================================================
// SetupEnterTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupEnterTriggerPopup.h"

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    // 0x8c2210
    this->cleanup();
}

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    // 0x8c21a4
    this->cleanup();
}

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    // 0x8c21a4
    this->cleanup();
}

void SetupEnterTriggerPopup::onEnterType(cocos2d::CCObject*) {
    // 0x8c2864
    // TODO: Implement
}

void SetupEnterTriggerPopup::determineStartValues() {
    // 0x8c25c4
    // TODO: Implement
}

void SetupEnterTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0x8c78c8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEnterTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0x8c7fec
    SetupEnterTriggerPopup* ret = new SetupEnterTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

