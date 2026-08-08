
#include "SetupArtSwitchPopup.h"

SetupArtSwitchPopup::~SetupArtSwitchPopup() {
    this->cleanup();
}

void SetupArtSwitchPopup::selectArtClosed(SelectArtLayer*) {
    // Stub - not yet implemented
}

void SetupArtSwitchPopup::init(ArtTriggerGameObject*, cocos2d::CCArray*, int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupArtSwitchPopup::onArt(cocos2d::CCObject*) {
    // Stub - not yet implemented
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

