// ============================================================
// SetupTimeWarpPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupTimeWarpPopup.h"

SetupTimeWarpPopup::~SetupTimeWarpPopup() {
    // 0x9aaeb4
    this->cleanup();
}

SetupTimeWarpPopup::~SetupTimeWarpPopup() {
    // 0x9aae48
    this->cleanup();
}

SetupTimeWarpPopup::~SetupTimeWarpPopup() {
    // 0x9aae48
    this->cleanup();
}

void SetupTimeWarpPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x9ab770
    // TODO: Implement
}

void SetupTimeWarpPopup::updateTimeWarp() {
    // 0x9ab6fc
    // TODO: Implement
}

void SetupTimeWarpPopup::updateTimeWarpLabel() {
    // 0x9aafc0
    // TODO: Implement
}

void SetupTimeWarpPopup::determineStartValues() {
    // 0x9aaee0
    // TODO: Implement
}

void SetupTimeWarpPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9ab00c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupTimeWarpPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x9ab504
    SetupTimeWarpPopup* ret = new SetupTimeWarpPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupTimeWarpPopup::onClose(cocos2d::CCObject*) {
    // 0x9aafbc
    // TODO: Implement
}

