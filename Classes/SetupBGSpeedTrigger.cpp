// ============================================================
// SetupBGSpeedTrigger.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupBGSpeedTrigger.h"

SetupBGSpeedTrigger::~SetupBGSpeedTrigger() {
    // 0xa1f108
    this->cleanup();
}

SetupBGSpeedTrigger::~SetupBGSpeedTrigger() {
    // 0xa1f070
    this->cleanup();
}

SetupBGSpeedTrigger::~SetupBGSpeedTrigger() {
    // 0xa1f070
    this->cleanup();
}

void SetupBGSpeedTrigger::init(EffectGameObject*, cocos2d::CCArray*, int) {
    // 0xa21538
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupBGSpeedTrigger::create(EffectGameObject*, cocos2d::CCArray*, int) {
    // 0xa21bf0
    SetupBGSpeedTrigger* ret = new SetupBGSpeedTrigger();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

