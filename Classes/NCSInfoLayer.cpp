
#include "NCSInfoLayer.h"

NCSInfoLayer::~NCSInfoLayer() {
    this->cleanup();
}

NCSInfoLayer::~NCSInfoLayer() {
    this->cleanup();
}

NCSInfoLayer::~NCSInfoLayer() {
    this->cleanup();
}

void NCSInfoLayer::onNCSUsage(cocos2d::CCObject*) {
    // TODO: Implement
}

void NCSInfoLayer::keyBackClicked() {
    // TODO: Implement
}

void NCSInfoLayer::init(CustomSongLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NCSInfoLayer::onNCS(cocos2d::CCObject*) {
    // TODO: Implement
}

void NCSInfoLayer::create(CustomSongLayer*) {
    NCSInfoLayer* ret = new NCSInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void NCSInfoLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void NCSInfoLayer::onNCSIO(cocos2d::CCObject*) {
    // TODO: Implement
}

void NCSInfoLayer::onLibrary(cocos2d::CCObject*) {
    // TODO: Implement
}

