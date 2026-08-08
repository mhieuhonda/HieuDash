// ============================================================
// SetupResetTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupResetTriggerPopup.h"

SetupResetTriggerPopup::~SetupResetTriggerPopup() {
    // 0xa43624
    this->cleanup();
}

SetupResetTriggerPopup::~SetupResetTriggerPopup() {
    // 0xa42efc
    this->cleanup();
}

SetupResetTriggerPopup::~SetupResetTriggerPopup() {
    // 0xa42efc
    this->cleanup();
}

void SetupResetTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa48568
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupResetTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa489b8
    SetupResetTriggerPopup* ret = new SetupResetTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

