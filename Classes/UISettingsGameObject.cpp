// ============================================================
// UISettingsGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UISettingsGameObject.h"

UISettingsGameObject::~UISettingsGameObject() {
    // 0x74a048
    this->cleanup();
}

UISettingsGameObject::~UISettingsGameObject() {
    // 0x74a024
    this->cleanup();
}

UISettingsGameObject::~UISettingsGameObject() {
    // 0x74a024
    this->cleanup();
}

void UISettingsGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x784ddc
    // Save to file/storage
    // TODO: Implement saving
}

void UISettingsGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x75e154
    // TODO: Implement
}

void UISettingsGameObject::init() {
    // 0x75b5ac
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UISettingsGameObject::create() {
    // 0x7688b4
    UISettingsGameObject* ret = new UISettingsGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

