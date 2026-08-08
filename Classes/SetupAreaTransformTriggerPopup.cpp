// ============================================================
// SetupAreaTransformTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaTransformTriggerPopup.h"

SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup() {
    // 0xa08d18
    this->cleanup();
}

SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup() {
    // 0xa08a54
    this->cleanup();
}

SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup() {
    // 0xa08a54
    this->cleanup();
}

void SetupAreaTransformTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0c6fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaTransformTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0d1e8
    SetupAreaTransformTriggerPopup* ret = new SetupAreaTransformTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

