
#include "SetupEnterTriggerPopup.h"

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    this->cleanup();
}

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    this->cleanup();
}

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    this->cleanup();
}

void SetupEnterTriggerPopup::onEnterType(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupEnterTriggerPopup::determineStartValues() {
    // TODO: Implement
}

void SetupEnterTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupEnterTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupEnterTriggerPopup* ret = new SetupEnterTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

