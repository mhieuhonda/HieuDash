// ============================================================
// SetupSFXEditPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupSFXEditPopup.h"

SetupSFXEditPopup::~SetupSFXEditPopup() {
    // 0xa3d7e4
    this->cleanup();
}

SetupSFXEditPopup::~SetupSFXEditPopup() {
    // 0xa3d6b4
    this->cleanup();
}

SetupSFXEditPopup::~SetupSFXEditPopup() {
    // 0xa3d6b4
    this->cleanup();
}

void SetupSFXEditPopup::init(SFXTriggerGameObject*, cocos2d::CCArray*, bool) {
    // 0xa419a8
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSFXEditPopup::create(SFXTriggerGameObject*, cocos2d::CCArray*, bool) {
    // 0xa428c8
    SetupSFXEditPopup* ret = new SetupSFXEditPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

