
#include "SelectPremadeLayer.h"

SelectPremadeLayer::~SelectPremadeLayer() {
    this->cleanup();
}

SelectPremadeLayer::~SelectPremadeLayer() {
    this->cleanup();
}

SelectPremadeLayer::~SelectPremadeLayer() {
    this->cleanup();
}

void SelectPremadeLayer::keyBackClicked() {
    // TODO: Implement
}

void SelectPremadeLayer::onSelectPremade(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectPremadeLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectPremadeLayer::create() {
    SelectPremadeLayer* ret = new SelectPremadeLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectPremadeLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

