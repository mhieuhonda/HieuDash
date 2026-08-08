
#include "SetTargetIDLayer.h"

SetTargetIDLayer::~SetTargetIDLayer() {
    this->cleanup();
}

SetTargetIDLayer::~SetTargetIDLayer() {
    this->cleanup();
}

SetTargetIDLayer::~SetTargetIDLayer() {
    this->cleanup();
}

void SetTargetIDLayer::valueDidChange(int, float) {
    // TODO: Implement
}

void SetTargetIDLayer::determineStartValues() {
    // TODO: Implement
}

void SetTargetIDLayer::init(EffectGameObject*, cocos2d::CCArray*, std::string, std::string, int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetTargetIDLayer::create(EffectGameObject*, cocos2d::CCArray*, std::string, std::string, int, int, int) {
    SetTargetIDLayer* ret = new SetTargetIDLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

