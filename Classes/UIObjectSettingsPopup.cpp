
#include "UIObjectSettingsPopup.h"

UIObjectSettingsPopup::~UIObjectSettingsPopup() {
    this->cleanup();
}

UIObjectSettingsPopup::~UIObjectSettingsPopup() {
    this->cleanup();
}

UIObjectSettingsPopup::~UIObjectSettingsPopup() {
    this->cleanup();
}

void UIObjectSettingsPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void UIObjectSettingsPopup::init(UISettingsGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UIObjectSettingsPopup::create(UISettingsGameObject*, cocos2d::CCArray*) {
    UIObjectSettingsPopup* ret = new UIObjectSettingsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

