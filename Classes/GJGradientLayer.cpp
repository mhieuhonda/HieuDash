
#include "GJGradientLayer.h"

GJGradientLayer::~GJGradientLayer() {
    this->cleanup();
}

bool GJGradientLayer::init() {
    bool ret = cocos2d::CCLayer::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJGradientLayer::create() {
    GJGradientLayer* ret = new GJGradientLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

