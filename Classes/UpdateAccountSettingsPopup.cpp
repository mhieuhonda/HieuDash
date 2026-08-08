
#include "UpdateAccountSettingsPopup.h"

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
    this->cleanup();
}

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
    this->cleanup();
}

UpdateAccountSettingsPopup::~UpdateAccountSettingsPopup() {
    this->cleanup();
}

void UpdateAccountSettingsPopup::keyBackClicked() {
    // TODO: Implement
}

void UpdateAccountSettingsPopup::updateSettingsFailed() {
    // TODO: Implement
}

void UpdateAccountSettingsPopup::updateSettingsFinished() {
    // TODO: Implement
}

void UpdateAccountSettingsPopup::init(GJAccountSettingsLayer*, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UpdateAccountSettingsPopup::create(GJAccountSettingsLayer*, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string) {
    UpdateAccountSettingsPopup* ret = new UpdateAccountSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UpdateAccountSettingsPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

