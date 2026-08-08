// ============================================================
// SetupAreaTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaTriggerPopup.h"

SetupAreaTriggerPopup::~SetupAreaTriggerPopup() {
    // 0xa08dc8
    this->cleanup();
}

SetupAreaTriggerPopup::~SetupAreaTriggerPopup() {
    // 0xa08c80
    this->cleanup();
}

SetupAreaTriggerPopup::~SetupAreaTriggerPopup() {
    // 0xa08c80
    this->cleanup();
}

void SetupAreaTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0f9c4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa10144
    SetupAreaTriggerPopup* ret = new SetupAreaTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

