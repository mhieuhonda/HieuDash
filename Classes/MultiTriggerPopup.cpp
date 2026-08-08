// ============================================================
// MultiTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "MultiTriggerPopup.h"

MultiTriggerPopup::~MultiTriggerPopup() {
    // 0xa43598
    this->cleanup();
}

MultiTriggerPopup::~MultiTriggerPopup() {
    // 0xa42e90
    this->cleanup();
}

MultiTriggerPopup::~MultiTriggerPopup() {
    // 0xa42e90
    this->cleanup();
}

void MultiTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa46e58
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void MultiTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0xa47274
    MultiTriggerPopup* ret = new MultiTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

