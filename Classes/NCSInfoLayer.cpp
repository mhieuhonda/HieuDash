// ============================================================
// NCSInfoLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "NCSInfoLayer.h"

NCSInfoLayer::~NCSInfoLayer() {
    // 0x83a990
    this->cleanup();
}

NCSInfoLayer::~NCSInfoLayer() {
    // 0x83a880
    this->cleanup();
}

NCSInfoLayer::~NCSInfoLayer() {
    // 0x83a880
    this->cleanup();
}

void NCSInfoLayer::onNCSUsage(cocos2d::CCObject*) {
    // 0x83af4c
    // TODO: Implement
}

void NCSInfoLayer::keyBackClicked() {
    // 0x83e9d0
    // TODO: Implement
}

void NCSInfoLayer::init(CustomSongLayer*) {
    // 0x83e194
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NCSInfoLayer::onNCS(cocos2d::CCObject*) {
    // 0x83aefc
    // TODO: Implement
}

void NCSInfoLayer::create(CustomSongLayer*) {
    // 0x83e85c
    NCSInfoLayer* ret = new NCSInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void NCSInfoLayer::onClose(cocos2d::CCObject*) {
    // 0x83e990
    // TODO: Implement
}

void NCSInfoLayer::onNCSIO(cocos2d::CCObject*) {
    // 0x83af24
    // TODO: Implement
}

void NCSInfoLayer::onLibrary(cocos2d::CCObject*) {
    // 0x83acf0
    // TODO: Implement
}

