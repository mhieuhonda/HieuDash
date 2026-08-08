
#include "SetupCoinLayer.h"

SetupCoinLayer::~SetupCoinLayer() {
    this->cleanup();
}

void SetupCoinLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupCoinLayer::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupCoinLayer* ret = new SetupCoinLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

