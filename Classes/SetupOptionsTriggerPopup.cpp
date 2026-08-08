
#include "SetupOptionsTriggerPopup.h"

SetupOptionsTriggerPopup::~SetupOptionsTriggerPopup() {
    this->cleanup();
}

SetupOptionsTriggerPopup::~SetupOptionsTriggerPopup() {
    this->cleanup();
}

SetupOptionsTriggerPopup::~SetupOptionsTriggerPopup() {
    this->cleanup();
}

void SetupOptionsTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupOptionsTriggerPopup::init(GameOptionsTrigger*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupOptionsTriggerPopup::create(GameOptionsTrigger*, cocos2d::CCArray*) {
    SetupOptionsTriggerPopup* ret = new SetupOptionsTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupOptionsTriggerPopup::addOption(int, std::string) {
    // TODO: Implement
}

