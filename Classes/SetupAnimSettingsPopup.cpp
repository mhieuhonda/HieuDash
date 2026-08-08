
#include "SetupAnimSettingsPopup.h"

SetupAnimSettingsPopup::~SetupAnimSettingsPopup() {
    this->cleanup();
}

SetupAnimSettingsPopup::~SetupAnimSettingsPopup() {
    this->cleanup();
}

SetupAnimSettingsPopup::~SetupAnimSettingsPopup() {
    this->cleanup();
}

void SetupAnimSettingsPopup::updateAnimSettings() {
    // TODO: Implement
}

void SetupAnimSettingsPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAnimSettingsPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupAnimSettingsPopup* ret = new SetupAnimSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupAnimSettingsPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

