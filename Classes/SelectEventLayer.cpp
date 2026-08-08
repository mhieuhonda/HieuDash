
#include "SelectEventLayer.h"

SelectEventLayer::~SelectEventLayer() {
    this->cleanup();
}

SelectEventLayer::~SelectEventLayer() {
    this->cleanup();
}

SelectEventLayer::~SelectEventLayer() {
    this->cleanup();
}

void SelectEventLayer::nextPosition() {
    // TODO: Implement
}

void SelectEventLayer::keyBackClicked() {
    // TODO: Implement
}

void SelectEventLayer::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectEventLayer::init(SetupEventLinkPopup*, std::set<int, std::less<int>, std::allocator<int> >&) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectEventLayer::create(SetupEventLinkPopup*, std::set<int, std::less<int>, std::allocator<int> >&) {
    SelectEventLayer* ret = new SelectEventLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectEventLayer::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectEventLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SelectEventLayer::addToggle(int, std::string) {
    // TODO: Implement
}

