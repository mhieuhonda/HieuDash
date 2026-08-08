
#include "GauntletLayer.h"

GauntletLayer::~GauntletLayer() {
    this->cleanup();
}

GauntletLayer::~GauntletLayer() {
    this->cleanup();
}

GauntletLayer::~GauntletLayer() {
    this->cleanup();
}

void GauntletLayer::setupGauntlet(cocos2d::CCArray*) {
    // TODO: Implement
}

void GauntletLayer::keyBackClicked() {
    // TODO: Implement
}

void GauntletLayer::loadLevelsFailed(char const*, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GauntletLayer::unlockActiveItem() {
    // TODO: Implement
}

void GauntletLayer::loadLevelsFinished(cocos2d::CCArray*, char const*, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void GauntletLayer::init(GauntletType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GauntletLayer::scene(GauntletType) {
    // TODO: Implement
}

void GauntletLayer::create(GauntletType) {
    GauntletLayer* ret = new GauntletLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GauntletLayer::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void GauntletLayer::onLevel(cocos2d::CCObject*) {
    // TODO: Implement
}

