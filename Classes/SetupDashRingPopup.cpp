
#include "SetupDashRingPopup.h"

SetupDashRingPopup::~SetupDashRingPopup() {
    this->cleanup();
}

void SetupDashRingPopup::init(DashRingObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupDashRingPopup::create(DashRingObject*, cocos2d::CCArray*) {
    SetupDashRingPopup* ret = new SetupDashRingPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

