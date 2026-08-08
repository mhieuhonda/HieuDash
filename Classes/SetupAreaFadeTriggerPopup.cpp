// ============================================================
// SetupAreaFadeTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaFadeTriggerPopup.h"

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    // 0xa08d70
    this->cleanup();
}

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    // 0xa08b2c
    this->cleanup();
}

SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup() {
    // 0xa08b2c
    this->cleanup();
}

void SetupAreaFadeTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0df2c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaFadeTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0e86c
    SetupAreaFadeTriggerPopup* ret = new SetupAreaFadeTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

