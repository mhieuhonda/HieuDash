// ============================================================
// SetupAreaRotateTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAreaRotateTriggerPopup.h"

SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup() {
    // 0xa08d44
    this->cleanup();
}

SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup() {
    // 0xa08ac0
    this->cleanup();
}

SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup() {
    // 0xa08ac0
    this->cleanup();
}

void SetupAreaRotateTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0d3e4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaRotateTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    // 0xa0dd30
    SetupAreaRotateTriggerPopup* ret = new SetupAreaRotateTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

