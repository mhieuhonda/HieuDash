// ============================================================
// SetupKeyframeAnimPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupKeyframeAnimPopup.h"

SetupKeyframeAnimPopup::~SetupKeyframeAnimPopup() {
    // 0xa3a174
    this->cleanup();
}

SetupKeyframeAnimPopup::~SetupKeyframeAnimPopup() {
    // 0xa3a108
    this->cleanup();
}

SetupKeyframeAnimPopup::~SetupKeyframeAnimPopup() {
    // 0xa3a108
    this->cleanup();
}

void SetupKeyframeAnimPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa3a3bc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupKeyframeAnimPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa3afc0
    SetupKeyframeAnimPopup* ret = new SetupKeyframeAnimPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

