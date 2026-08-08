// ============================================================
// SetupReverbPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupReverbPopup.h"

SetupReverbPopup::~SetupReverbPopup() {
    // 0xa3d810
    this->cleanup();
}

SetupReverbPopup::~SetupReverbPopup() {
    // 0xa3d720
    this->cleanup();
}

SetupReverbPopup::~SetupReverbPopup() {
    // 0xa3d720
    this->cleanup();
}

void SetupReverbPopup::updateReverbLabel() {
    // 0xa3f27c
    // TODO: Implement
}

void SetupReverbPopup::init(SFXTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa3f3b0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupReverbPopup::create(SFXTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa3fb10
    SetupReverbPopup* ret = new SetupReverbPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupReverbPopup::onPlay(cocos2d::CCObject*) {
    // 0xa3d9e4
    // TODO: Implement
}

void SetupReverbPopup::onClose(cocos2d::CCObject*) {
    // 0xa3da88
    // TODO: Implement
}

void SetupReverbPopup::onReverb(cocos2d::CCObject*) {
    // 0xa3fd04
    // TODO: Implement
}

