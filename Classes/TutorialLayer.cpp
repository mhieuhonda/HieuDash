
#include "TutorialLayer.h"

TutorialLayer::~TutorialLayer() {
    this->cleanup();
}

TutorialLayer::~TutorialLayer() {
    this->cleanup();
}

TutorialLayer::~TutorialLayer() {
    this->cleanup();
}

void TutorialLayer::keyBackClicked() {
    // TODO: Implement
}

void TutorialLayer::removeTutorialTexture() {
    // TODO: Implement
}

void TutorialLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TutorialLayer::create() {
    TutorialLayer* ret = new TutorialLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void TutorialLayer::onNext(cocos2d::CCObject*) {
    // TODO: Implement
}

void TutorialLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void TutorialLayer::loadPage(int) {
    // Load from file/storage
    // TODO: Implement loading
}

