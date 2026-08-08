
#include "SetupCoinLayer.h"

SetupCoinLayer::~SetupCoinLayer() {
    this->cleanup();
}

SetupCoinLayer::~SetupCoinLayer() {
    this->cleanup();
}

SetupCoinLayer::~SetupCoinLayer() {
    this->cleanup();
}

void SetupCoinLayer::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

