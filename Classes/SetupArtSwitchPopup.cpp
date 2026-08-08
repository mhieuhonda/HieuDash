
#include "SetupArtSwitchPopup.h"

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    this->cleanup();
}

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    this->cleanup();
}

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    this->cleanup();
}

void SetupArtSwitchPopup::selectArtClosed(SelectArtLayer*) {
    // TODO: Implement
}

void SetupArtSwitchPopup::init(ArtTriggerGameObject*, cocos2d::CCArray*, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupArtSwitchPopup::onArt(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupArtSwitchPopup::create(ArtTriggerGameObject*, cocos2d::CCArray*, int) {
    SetupArtSwitchPopup* ret = new SetupArtSwitchPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

