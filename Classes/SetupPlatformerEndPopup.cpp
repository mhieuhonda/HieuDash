
#include "SetupPlatformerEndPopup.h"

SetupPlatformerEndPopup::~SetupPlatformerEndPopup() {
    this->cleanup();
}

SetupPlatformerEndPopup::~SetupPlatformerEndPopup() {
    this->cleanup();
}

SetupPlatformerEndPopup::~SetupPlatformerEndPopup() {
    this->cleanup();
}

void SetupPlatformerEndPopup::init(EndTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPlatformerEndPopup::create(EndTriggerGameObject*, cocos2d::CCArray*) {
    SetupPlatformerEndPopup* ret = new SetupPlatformerEndPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

