
#include "SetupObjectTogglePopup.h"

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
    this->cleanup();
}

void SetupObjectTogglePopup::valueDidChange(int, float) {
    // Stub - not yet implemented
}

void SetupObjectTogglePopup::init(EffectGameObject*, cocos2d::CCArray*, bool) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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
    // Stub - not yet implemented
}

