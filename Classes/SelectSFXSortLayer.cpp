
#include "SelectSFXSortLayer.h"

SelectSFXSortLayer::~SelectSFXSortLayer() {
    this->cleanup();
}

SelectSFXSortLayer::~SelectSFXSortLayer() {
    this->cleanup();
}

SelectSFXSortLayer::~SelectSFXSortLayer() {
    this->cleanup();
}

void SelectSFXSortLayer::keyBackClicked() {
    // TODO: Implement
}

void SelectSFXSortLayer::init(AudioSortType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectSFXSortLayer::create(AudioSortType) {
    SelectSFXSortLayer* ret = new SelectSFXSortLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectSFXSortLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectSFXSortLayer::onSelect(cocos2d::CCObject*) {
    // TODO: Implement
}

