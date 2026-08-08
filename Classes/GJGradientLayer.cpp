
#include "GJGradientLayer.h"

GJGradientLayer::~GJGradientLayer() {
    this->cleanup();
}

GJGradientLayer::~GJGradientLayer() {
    this->cleanup();
}

GJGradientLayer::~GJGradientLayer() {
    this->cleanup();
}

void GJGradientLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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

