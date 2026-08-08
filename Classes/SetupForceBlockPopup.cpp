
#include "SetupForceBlockPopup.h"

SetupForceBlockPopup::~SetupForceBlockPopup() {
    this->cleanup();
}

SetupForceBlockPopup::~SetupForceBlockPopup() {
    this->cleanup();
}

SetupForceBlockPopup::~SetupForceBlockPopup() {
    this->cleanup();
}

void SetupForceBlockPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupForceBlockPopup::init(ForceBlockGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

