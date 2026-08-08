
#include "SetupKeyframeAnimPopup.h"

SetupKeyframeAnimPopup::~SetupKeyframeAnimPopup() {
    this->cleanup();
}

void SetupKeyframeAnimPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupKeyframeAnimPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupKeyframeAnimPopup* ret = new SetupKeyframeAnimPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

