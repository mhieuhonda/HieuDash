
#include "SetupObjectControlPopup.h"

SetupObjectControlPopup::~SetupObjectControlPopup() {
    this->cleanup();
}

SetupObjectControlPopup::~SetupObjectControlPopup() {
    this->cleanup();
}

SetupObjectControlPopup::~SetupObjectControlPopup() {
    this->cleanup();
}

void SetupObjectControlPopup::init(ObjectControlGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupObjectControlPopup::create(ObjectControlGameObject*, cocos2d::CCArray*) {
    SetupObjectControlPopup* ret = new SetupObjectControlPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

