// ============================================================
// SetupTransformPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTransformPopup.h"

SetupTransformPopup::~SetupTransformPopup() {
    // 0x9a8890
    this->cleanup();
}

SetupTransformPopup::~SetupTransformPopup() {
    // 0x9a8824
    this->cleanup();
}

SetupTransformPopup::~SetupTransformPopup() {
    // 0x9a8824
    this->cleanup();
}

void SetupTransformPopup::init(TransformTriggerGameObject*, cocos2d::CCArray*) {
    // 0x9a891c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTransformPopup::create(TransformTriggerGameObject*, cocos2d::CCArray*) {
    // 0x9a9558
    SetupTransformPopup* ret = new SetupTransformPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

