// ============================================================
// EditTriggersPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EditTriggersPopup.h"

EditTriggersPopup::~EditTriggersPopup() {
    // 0x8c2178
    this->cleanup();
}

EditTriggersPopup::~EditTriggersPopup() {
    // 0x8c210c
    this->cleanup();
}

EditTriggersPopup::~EditTriggersPopup() {
    // 0x8c210c
    this->cleanup();
}

void EditTriggersPopup::determineStartValues() {
    // 0x8c25bc
    // TODO: Implement
}

void EditTriggersPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8c7374
    bool ret = cocos2d::CCLayer::init() if "cocos2d::CCLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditTriggersPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x8c76d4
    EditTriggersPopup* ret = new EditTriggersPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void EditTriggersPopup::onClose(cocos2d::CCObject*) {
    // 0x8c25c0
    // TODO: Implement
}

