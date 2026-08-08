// ============================================================
// SetupForceBlockPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupForceBlockPopup.h"

SetupForceBlockPopup::~SetupForceBlockPopup() {
    // 0xa43a8c
    this->cleanup();
}

SetupForceBlockPopup::~SetupForceBlockPopup() {
    // 0xa43264
    this->cleanup();
}

SetupForceBlockPopup::~SetupForceBlockPopup() {
    // 0xa43264
    this->cleanup();
}

void SetupForceBlockPopup::valueDidChange(int, float) {
    // 0xa43fc8
    // TODO: Implement
}

void SetupForceBlockPopup::init(ForceBlockGameObject*, cocos2d::CCArray*) {
    // 0xa50a50
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupForceBlockPopup::create(ForceBlockGameObject*, cocos2d::CCArray*) {
    // 0xa51320
    SetupForceBlockPopup* ret = new SetupForceBlockPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

