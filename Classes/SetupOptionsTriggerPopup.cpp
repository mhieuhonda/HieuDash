// ============================================================
// SetupOptionsTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupOptionsTriggerPopup.h"

SetupOptionsTriggerPopup::~SetupOptionsTriggerPopup() {
    // 0x9e21e0
    this->cleanup();
}

SetupOptionsTriggerPopup::~SetupOptionsTriggerPopup() {
    // 0x9e2174
    this->cleanup();
}

SetupOptionsTriggerPopup::~SetupOptionsTriggerPopup() {
    // 0x9e2174
    this->cleanup();
}

void SetupOptionsTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0x9e226c
    // TODO: Implement
}

void SetupOptionsTriggerPopup::init(GameOptionsTrigger*, cocos2d::CCArray*) {
    // 0x9e267c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupOptionsTriggerPopup::create(GameOptionsTrigger*, cocos2d::CCArray*) {
    // 0x9e3208
    SetupOptionsTriggerPopup* ret = new SetupOptionsTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupOptionsTriggerPopup::addOption(int, std::string) {
    // 0x9e233c
    // TODO: Implement
}

