// ============================================================
// OptionsScrollLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "OptionsScrollLayer.h"

OptionsScrollLayer::~OptionsScrollLayer() {
    // 0xa59fbc
    this->cleanup();
}

OptionsScrollLayer::~OptionsScrollLayer() {
    // 0xa59f0c
    this->cleanup();
}

OptionsScrollLayer::~OptionsScrollLayer() {
    // 0xa59f0c
    this->cleanup();
}

void OptionsScrollLayer::keyBackClicked() {
    // 0xa5a12c
    // TODO: Implement
}

void OptionsScrollLayer::getRelevantObjects(cocos2d::CCArray*) {
    // 0xa5c404
    // TODO: Implement
}

void OptionsScrollLayer::cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*) {
    // 0xa5c9cc
    // TODO: Implement
}

void OptionsScrollLayer::registerWithTouchDispatcher() {
    // 0xa5a174
    // TODO: Implement
}

void OptionsScrollLayer::init(cocos2d::CCArray*, bool, int) {
    // 0xa5c61c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void OptionsScrollLayer::create(cocos2d::CCArray*, bool, int) {
    // 0xa5c7c0
    OptionsScrollLayer* ret = new OptionsScrollLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void OptionsScrollLayer::onClose(cocos2d::CCObject*) {
    // 0xa5a094
    // TODO: Implement
}

void OptionsScrollLayer::setupList(cocos2d::CCArray*) {
    // 0xa5c498
    // TODO: Implement
}

