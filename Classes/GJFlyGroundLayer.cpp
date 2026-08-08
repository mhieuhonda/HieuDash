
#include "GJFlyGroundLayer.h"

GJFlyGroundLayer::~GJFlyGroundLayer() {
    this->cleanup();
}

GJFlyGroundLayer::~GJFlyGroundLayer() {
    this->cleanup();
}

GJFlyGroundLayer::~GJFlyGroundLayer() {
    this->cleanup();
}

void GJFlyGroundLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

