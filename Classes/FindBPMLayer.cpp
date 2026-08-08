// ============================================================
// FindBPMLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FindBPMLayer.h"

FindBPMLayer::~FindBPMLayer() {
    // 0x5bf5a4
    this->cleanup();
}

FindBPMLayer::~FindBPMLayer() {
    // 0x5bf548
    this->cleanup();
}

FindBPMLayer::~FindBPMLayer() {
    // 0x5bf548
    this->cleanup();
}

void FindBPMLayer::calculateBPM() {
    // 0x5c1cd0
    // TODO: Implement
}

void FindBPMLayer::registerTouch() {
    // 0x5c1d0c
    // TODO: Implement
}

void FindBPMLayer::recordingDidStop() {
    // 0x5bf198
    // TODO: Implement
}

void FindBPMLayer::init(int) {
    // 0x5c1a30
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FindBPMLayer::create(int) {
    // 0x5c1b84
    FindBPMLayer* ret = new FindBPMLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FindBPMLayer::onInfo(cocos2d::CCObject*) {
    // 0x5bf114
    // TODO: Implement
}

void FindBPMLayer::onClose(cocos2d::CCObject*) {
    // 0x5bf200
    // TODO: Implement
}

void FindBPMLayer::onRecord(cocos2d::CCObject*) {
    // 0x5c08d0
    // TODO: Implement
}

void FindBPMLayer::playMusic() {
    // 0x5bf85c
    // TODO: Implement
}

