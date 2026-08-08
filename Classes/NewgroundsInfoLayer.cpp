
#include "NewgroundsInfoLayer.h"

NewgroundsInfoLayer::~NewgroundsInfoLayer() {
    this->cleanup();
}

NewgroundsInfoLayer::~NewgroundsInfoLayer() {
    this->cleanup();
}

NewgroundsInfoLayer::~NewgroundsInfoLayer() {
    this->cleanup();
}

void NewgroundsInfoLayer::onSupporter(cocos2d::CCObject*) {
    // TODO: Implement
}

void NewgroundsInfoLayer::onGuidelines(cocos2d::CCObject*) {
    // TODO: Implement
}

void NewgroundsInfoLayer::onNewgrounds(cocos2d::CCObject*) {
    // TODO: Implement
}

void NewgroundsInfoLayer::keyBackClicked() {
    // TODO: Implement
}

void NewgroundsInfoLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void NewgroundsInfoLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NewgroundsInfoLayer::create() {
    NewgroundsInfoLayer* ret = new NewgroundsInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void NewgroundsInfoLayer::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void NewgroundsInfoLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void NewgroundsInfoLayer::onArtists(cocos2d::CCObject*) {
    // TODO: Implement
}

void NewgroundsInfoLayer::onChanges(cocos2d::CCObject*) {
    // TODO: Implement
}

