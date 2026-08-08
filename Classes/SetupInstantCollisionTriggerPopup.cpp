// ============================================================
// SetupInstantCollisionTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupInstantCollisionTriggerPopup.h"

SetupInstantCollisionTriggerPopup::~SetupInstantCollisionTriggerPopup() {
    // 0x94f56c
    this->cleanup();
}

SetupInstantCollisionTriggerPopup::~SetupInstantCollisionTriggerPopup() {
    // 0x94f468
    this->cleanup();
}

SetupInstantCollisionTriggerPopup::~SetupInstantCollisionTriggerPopup() {
    // 0x94f468
    this->cleanup();
}

void SetupInstantCollisionTriggerPopup::valueDidChange(int, float) {
    // 0x9523e4
    // TODO: Implement
}

void SetupInstantCollisionTriggerPopup::updateSpecialNodes() {
    // 0x951f4c
    // TODO: Implement
}

void SetupInstantCollisionTriggerPopup::updateDefaultTriggerValues() {
    // 0x952404
    // TODO: Implement
}

void SetupInstantCollisionTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x951430
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupInstantCollisionTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x951d58
    SetupInstantCollisionTriggerPopup* ret = new SetupInstantCollisionTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

