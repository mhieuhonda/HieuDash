
#include "NCSInfoLayer.h"

NCSInfoLayer::~NCSInfoLayer() {
    this->cleanup();
}

void NCSInfoLayer::onNCSUsage(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void NCSInfoLayer::keyBackClicked() {
    // Stub - not yet implemented
}

void NCSInfoLayer::init(CustomSongLayer*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void NCSInfoLayer::onNCS(cocos2d::CCObject*) {
    // Stub - not yet implemented
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
    // Stub - not yet implemented
}

void NCSInfoLayer::onNCSIO(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void NCSInfoLayer::onLibrary(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

