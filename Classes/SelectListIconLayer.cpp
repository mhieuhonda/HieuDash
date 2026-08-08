
#include "SelectListIconLayer.h"

SelectListIconLayer::~SelectListIconLayer() {
    this->cleanup();
}

SelectListIconLayer::~SelectListIconLayer() {
    this->cleanup();
}

SelectListIconLayer::~SelectListIconLayer() {
    this->cleanup();
}

void SelectListIconLayer::keyBackClicked() {
    // TODO: Implement
}

void SelectListIconLayer::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectListIconLayer::create(int) {
    SelectListIconLayer* ret = new SelectListIconLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectListIconLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectListIconLayer::onSelect(cocos2d::CCObject*) {
    // TODO: Implement
}

