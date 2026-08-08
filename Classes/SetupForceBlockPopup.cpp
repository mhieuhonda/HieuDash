
#include "SetupForceBlockPopup.h"

SetupForceBlockPopup::~SetupForceBlockPopup() {
    this->cleanup();
}

void SetupForceBlockPopup::valueDidChange(int, float) {
    // Stub - not yet implemented
}

void SetupForceBlockPopup::init(ForceBlockGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupForceBlockPopup::create(ForceBlockGameObject*, cocos2d::CCArray*) {
    SetupForceBlockPopup* ret = new SetupForceBlockPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

