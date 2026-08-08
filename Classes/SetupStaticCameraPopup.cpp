// ============================================================
// SetupStaticCameraPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupStaticCameraPopup.h"

SetupStaticCameraPopup::~SetupStaticCameraPopup() {
    // 0x96ac84
    this->cleanup();
}

SetupStaticCameraPopup::~SetupStaticCameraPopup() {
    // 0x96ac18
    this->cleanup();
}

SetupStaticCameraPopup::~SetupStaticCameraPopup() {
    // 0x96ac18
    this->cleanup();
}

void SetupStaticCameraPopup::updateState() {
    // 0x96ad10
    // TODO: Implement
}

void SetupStaticCameraPopup::valueDidChange(int, float) {
    // 0x96ad80
    // TODO: Implement
}

void SetupStaticCameraPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x96ab78
    // TODO: Implement
}

void SetupStaticCameraPopup::init(CameraTriggerGameObject*, cocos2d::CCArray*) {
    // 0x96ad98
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupStaticCameraPopup::create(CameraTriggerGameObject*, cocos2d::CCArray*) {
    // 0x96b990
    SetupStaticCameraPopup* ret = new SetupStaticCameraPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

