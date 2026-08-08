
#include "SetupEnterTriggerPopup.h"

SetupEnterTriggerPopup::~SetupEnterTriggerPopup() {
    this->cleanup();
}

void SetupEnterTriggerPopup::onEnterType(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void SetupEnterTriggerPopup::determineStartValues() {
    // Stub - not yet implemented
}

void SetupEnterTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

