
#include "FindBPMLayer.h"

FindBPMLayer::~FindBPMLayer() {
    this->cleanup();
}

FindBPMLayer::~FindBPMLayer() {
    this->cleanup();
}

FindBPMLayer::~FindBPMLayer() {
    this->cleanup();
}

void FindBPMLayer::calculateBPM() {
    // TODO: Implement
}

void FindBPMLayer::registerTouch() {
    // TODO: Implement
}

void FindBPMLayer::recordingDidStop() {
    // TODO: Implement
}

void FindBPMLayer::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FindBPMLayer::create(int) {
    FindBPMLayer* ret = new FindBPMLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FindBPMLayer::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void FindBPMLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void FindBPMLayer::onRecord(cocos2d::CCObject*) {
    // TODO: Implement
}

void FindBPMLayer::playMusic() {
    // TODO: Implement
}

