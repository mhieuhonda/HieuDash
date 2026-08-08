// ============================================================
// SetupGravityTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupGravityTriggerPopup.h"

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    // 0xa21e58
    this->cleanup();
}

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    // 0xa21dec
    this->cleanup();
}

SetupGravityTriggerPopup::~SetupGravityTriggerPopup() {
    // 0xa21dec
    this->cleanup();
}

void SetupGravityTriggerPopup::valueDidChange(int, float) {
    // 0xa21e84
    // TODO: Implement
}

void SetupGravityTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa21f30
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupGravityTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa235f8
    SetupGravityTriggerPopup* ret = new SetupGravityTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

