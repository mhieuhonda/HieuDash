// ============================================================
// SelectEventLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SelectEventLayer.h"

SelectEventLayer::~SelectEventLayer() {
    // 0xa53dd4
    this->cleanup();
}

SelectEventLayer::~SelectEventLayer() {
    // 0xa53c38
    this->cleanup();
}

SelectEventLayer::~SelectEventLayer() {
    // 0xa53c38
    this->cleanup();
}

void SelectEventLayer::nextPosition() {
    // 0xa44a84
    // TODO: Implement
}

void SelectEventLayer::keyBackClicked() {
    // 0xa42cb8
    // TODO: Implement
}

void SelectEventLayer::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // 0xa53e54
    // TODO: Implement
}

void SelectEventLayer::init(SetupEventLinkPopup*, std::set<int, std::less<int>, std::allocator<int> >&) {
    // 0xa54b18
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectEventLayer::create(SetupEventLinkPopup*, std::set<int, std::less<int>, std::allocator<int> >&) {
    // 0xa57d6c
    SelectEventLayer* ret = new SelectEventLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectEventLayer::onInfo(cocos2d::CCObject*) {
    // 0xa580c4
    // TODO: Implement
}

void SelectEventLayer::onClose(cocos2d::CCObject*) {
    // 0xa54358
    // TODO: Implement
}

void SelectEventLayer::addToggle(int, std::string) {
    // 0xa54398
    // TODO: Implement
}

