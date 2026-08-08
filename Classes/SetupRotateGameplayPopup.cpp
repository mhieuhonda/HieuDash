// ============================================================
// SetupRotateGameplayPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupRotateGameplayPopup.h"

SetupRotateGameplayPopup::~SetupRotateGameplayPopup() {
    // 0x9ef3cc
    this->cleanup();
}

SetupRotateGameplayPopup::~SetupRotateGameplayPopup() {
    // 0x9ef360
    this->cleanup();
}

SetupRotateGameplayPopup::~SetupRotateGameplayPopup() {
    // 0x9ef360
    this->cleanup();
}

void SetupRotateGameplayPopup::onPlusButton(cocos2d::CCObject*) {
    // 0x9f1014
    // TODO: Implement
}

void SetupRotateGameplayPopup::valueDidChange(int, float) {
    // 0x9ef4f8
    // TODO: Implement
}

void SetupRotateGameplayPopup::init(RotateGameplayGameObject*, cocos2d::CCArray*) {
    // 0x9ef538
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRotateGameplayPopup::create(RotateGameplayGameObject*, cocos2d::CCArray*) {
    // 0x9f01b0
    SetupRotateGameplayPopup* ret = new SetupRotateGameplayPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

