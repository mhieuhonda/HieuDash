
#include "CustomizeObjectSettingsPopup.h"

CustomizeObjectSettingsPopup::~CustomizeObjectSettingsPopup() {
    this->cleanup();
}

CustomizeObjectSettingsPopup::~CustomizeObjectSettingsPopup() {
    this->cleanup();
}

CustomizeObjectSettingsPopup::~CustomizeObjectSettingsPopup() {
    this->cleanup();
}

void CustomizeObjectSettingsPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void CustomizeObjectSettingsPopup::init(GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CustomizeObjectSettingsPopup::create(GameObject*, cocos2d::CCArray*, CustomizeObjectLayer*) {
    CustomizeObjectSettingsPopup* ret = new CustomizeObjectSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CustomizeObjectSettingsPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

