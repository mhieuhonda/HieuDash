// ============================================================
// SetupCameraRotatePopup2.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCameraRotatePopup2.h"

SetupCameraRotatePopup2::~SetupCameraRotatePopup2() {
    // 0x9ab8d0
    this->cleanup();
}

SetupCameraRotatePopup2::~SetupCameraRotatePopup2() {
    // 0x9ab838
    this->cleanup();
}

SetupCameraRotatePopup2::~SetupCameraRotatePopup2() {
    // 0x9ab838
    this->cleanup();
}

void SetupCameraRotatePopup2::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9adc10
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraRotatePopup2::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9ae330
    SetupCameraRotatePopup2* ret = new SetupCameraRotatePopup2();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

