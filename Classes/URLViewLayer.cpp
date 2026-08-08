
#include "URLViewLayer.h"

URLViewLayer::~URLViewLayer() {
    this->cleanup();
}

URLViewLayer::~URLViewLayer() {
    this->cleanup();
}

URLViewLayer::~URLViewLayer() {
    this->cleanup();
}

void URLViewLayer::init(std::string, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void URLViewLayer::create(std::string, cocos2d::CCArray*) {
    URLViewLayer* ret = new URLViewLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

