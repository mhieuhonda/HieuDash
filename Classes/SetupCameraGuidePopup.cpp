// ============================================================
// SetupCameraGuidePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCameraGuidePopup.h"

SetupCameraGuidePopup::~SetupCameraGuidePopup() {
    // 0xa437c8
    this->cleanup();
}

SetupCameraGuidePopup::~SetupCameraGuidePopup() {
    // 0xa43040
    this->cleanup();
}

SetupCameraGuidePopup::~SetupCameraGuidePopup() {
    // 0xa43040
    this->cleanup();
}

void SetupCameraGuidePopup::init(CameraTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa500e8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraGuidePopup::create(CameraTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa5085c
    SetupCameraGuidePopup* ret = new SetupCameraGuidePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

