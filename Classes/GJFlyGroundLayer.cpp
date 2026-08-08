
#include "GJFlyGroundLayer.h"

GJFlyGroundLayer::~GJFlyGroundLayer() {
    this->cleanup();
}

bool GJFlyGroundLayer::init() {
    bool ret = cocos2d::CCLayer::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJFlyGroundLayer::create() {
    GJFlyGroundLayer* ret = new GJFlyGroundLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

