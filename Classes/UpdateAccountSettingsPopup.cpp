// ============================================================
// UpdateAccountSettingsPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UpdateAccountSettingsPopup.h"

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
    // 0x8c2f74
    this->cleanup();
}

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
    // 0x8c2ed0
    this->cleanup();
}

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
    // 0x8c2ed0
    this->cleanup();
}

void UpdateAccountSettingsPopup::keyBackClicked() {
    // 0x8de208
    // TODO: Implement
}

void UpdateAccountSettingsPopup::updateSettingsFailed() {
    // 0x8c5310
    // TODO: Implement
}

void UpdateAccountSettingsPopup::updateSettingsFinished() {
    // 0x8c5478
    // TODO: Implement
}

void UpdateAccountSettingsPopup::init(GJAccountSettingsLayer*, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string) {
    // 0x8ca100
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UpdateAccountSettingsPopup::create(GJAccountSettingsLayer*, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string) {
    // 0x8caa10
    UpdateAccountSettingsPopup* ret = new UpdateAccountSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UpdateAccountSettingsPopup::onClose(cocos2d::CCObject*) {
    // 0x8de1a0
    // TODO: Implement
}

