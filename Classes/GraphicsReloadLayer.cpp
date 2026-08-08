
#include "GraphicsReloadLayer.h"

GraphicsReloadLayer::~GraphicsReloadLayer() {
    this->cleanup();
}

GraphicsReloadLayer::~GraphicsReloadLayer() {
    this->cleanup();
}

GraphicsReloadLayer::~GraphicsReloadLayer() {
    this->cleanup();
}

void GraphicsReloadLayer::performReload() {
    // Load from file/storage
    // TODO: Implement loading
}

void GraphicsReloadLayer::init(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GraphicsReloadLayer::scene(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool) {
    // TODO: Implement
}

void GraphicsReloadLayer::create(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool) {
    GraphicsReloadLayer* ret = new GraphicsReloadLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

