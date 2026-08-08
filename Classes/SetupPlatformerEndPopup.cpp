// ============================================================
// SetupPlatformerEndPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupPlatformerEndPopup.h"

SetupPlatformerEndPopup::~SetupPlatformerEndPopup() {
    // 0x96e078
    this->cleanup();
}

SetupPlatformerEndPopup::~SetupPlatformerEndPopup() {
    // 0x96dfe0
    this->cleanup();
}

SetupPlatformerEndPopup::~SetupPlatformerEndPopup() {
    // 0x96dfe0
    this->cleanup();
}

void SetupPlatformerEndPopup::init(EndTriggerGameObject*, cocos2d::CCArray*) {
    // 0x96f2a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPlatformerEndPopup::create(EndTriggerGameObject*, cocos2d::CCArray*) {
    // 0x96fa60
    SetupPlatformerEndPopup* ret = new SetupPlatformerEndPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

