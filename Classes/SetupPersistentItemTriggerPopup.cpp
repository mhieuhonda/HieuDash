// ============================================================
// SetupPersistentItemTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupPersistentItemTriggerPopup.h"

SetupPersistentItemTriggerPopup::~SetupPersistentItemTriggerPopup() {
    // 0xa4373c
    this->cleanup();
}

SetupPersistentItemTriggerPopup::~SetupPersistentItemTriggerPopup() {
    // 0xa42fd4
    this->cleanup();
}

SetupPersistentItemTriggerPopup::~SetupPersistentItemTriggerPopup() {
    // 0xa42fd4
    this->cleanup();
}

void SetupPersistentItemTriggerPopup::init(ItemTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa4ec5c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPersistentItemTriggerPopup::create(ItemTriggerGameObject*, cocos2d::CCArray*) {
    // 0xa4f408
    SetupPersistentItemTriggerPopup* ret = new SetupPersistentItemTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

