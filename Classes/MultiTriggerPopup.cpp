
#include "MultiTriggerPopup.h"

MultiTriggerPopup::~MultiTriggerPopup() {
    this->cleanup();
}

void MultiTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void MultiTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    MultiTriggerPopup* ret = new MultiTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

