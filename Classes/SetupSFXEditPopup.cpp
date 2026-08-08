
#include "SetupSFXEditPopup.h"

SetupSFXEditPopup::~SetupSFXEditPopup() {
    this->cleanup();
}

SetupSFXEditPopup::~SetupSFXEditPopup() {
    this->cleanup();
}

SetupSFXEditPopup::~SetupSFXEditPopup() {
    this->cleanup();
}

void SetupSFXEditPopup::init(SFXTriggerGameObject*, cocos2d::CCArray*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSFXEditPopup::create(SFXTriggerGameObject*, cocos2d::CCArray*, bool) {
    SetupSFXEditPopup* ret = new SetupSFXEditPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

