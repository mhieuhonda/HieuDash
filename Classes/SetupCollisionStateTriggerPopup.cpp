// ============================================================
// SetupCollisionStateTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCollisionStateTriggerPopup.h"

SetupCollisionStateTriggerPopup::~SetupCollisionStateTriggerPopup() {
    // 0x94f5f8
    this->cleanup();
}

SetupCollisionStateTriggerPopup::~SetupCollisionStateTriggerPopup() {
    // 0x94f4d4
    this->cleanup();
}

SetupCollisionStateTriggerPopup::~SetupCollisionStateTriggerPopup() {
    // 0x94f4d4
    this->cleanup();
}

void SetupCollisionStateTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x952428
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCollisionStateTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x952964
    SetupCollisionStateTriggerPopup* ret = new SetupCollisionStateTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

