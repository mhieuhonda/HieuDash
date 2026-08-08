
#include "SelectArtLayer.h"

SelectArtLayer::~SelectArtLayer() {
    this->cleanup();
}

SelectArtLayer::~SelectArtLayer() {
    this->cleanup();
}

SelectArtLayer::~SelectArtLayer() {
    this->cleanup();
}

void SelectArtLayer::keyBackClicked() {
    // TODO: Implement
}

void SelectArtLayer::onSelectCustom(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectArtLayer::updateSelectedCustom(int) {
    // TODO: Implement
}

void SelectArtLayer::init(SelectArtType, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectArtLayer::create(SelectArtType, int) {
    SelectArtLayer* ret = new SelectArtLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectArtLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectArtLayer::selectArt(cocos2d::CCObject*) {
    // TODO: Implement
}

