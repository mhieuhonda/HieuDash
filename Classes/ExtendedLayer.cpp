
#include "ExtendedLayer.h"

ExtendedLayer::~ExtendedLayer() {
    this->cleanup();
}

ExtendedLayer::~ExtendedLayer() {
    this->cleanup();
}

ExtendedLayer::~ExtendedLayer() {
    this->cleanup();
}

void ExtendedLayer::setPosition(cocos2d::CCPoint const&) {
    // TODO: Set m_position
}

void ExtendedLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ExtendedLayer::create() {
    ExtendedLayer* ret = new ExtendedLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

