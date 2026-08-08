// ============================================================
// SelectListIconLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SelectListIconLayer.h"

SelectListIconLayer::~SelectListIconLayer() {
    // 0xa72374
    this->cleanup();
}

SelectListIconLayer::~SelectListIconLayer() {
    // 0xa722f8
    this->cleanup();
}

SelectListIconLayer::~SelectListIconLayer() {
    // 0xa722f8
    this->cleanup();
}

void SelectListIconLayer::keyBackClicked() {
    // 0xa72028
    // TODO: Implement
}

void SelectListIconLayer::init(int) {
    // 0xa78bf4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SelectListIconLayer::create(int) {
    // 0xa79160
    SelectListIconLayer* ret = new SelectListIconLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SelectListIconLayer::onClose(cocos2d::CCObject*) {
    // 0xa71fcc
    // TODO: Implement
}

void SelectListIconLayer::onSelect(cocos2d::CCObject*) {
    // 0xa72524
    // TODO: Implement
}

