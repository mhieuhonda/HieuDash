
#include "SetupObjectTogglePopup.h"

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    this->cleanup();
}

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    this->cleanup();
}

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    this->cleanup();
}

void SetupObjectTogglePopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupObjectTogglePopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupObjectTogglePopup::create(EffectGameObject*, cocos2d::CCArray*, bool) {
    SetupObjectTogglePopup* ret = new SetupObjectTogglePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupObjectTogglePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

