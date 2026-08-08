// ============================================================
// HSVLiveOverlay.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "HSVLiveOverlay.h"

HSVLiveOverlay::~HSVLiveOverlay() {
    // 0xa23910
    this->cleanup();
}

HSVLiveOverlay::~HSVLiveOverlay() {
    // 0xa23860
    this->cleanup();
}

HSVLiveOverlay::~HSVLiveOverlay() {
    // 0xa23860
    this->cleanup();
}

void HSVLiveOverlay::hsvChanged(ConfigureHSVWidget*) {
    // 0xa23984
    // TODO: Implement
}

void HSVLiveOverlay::onSelectTab(cocos2d::CCObject*) {
    // 0xa242c8
    // TODO: Implement
}

void HSVLiveOverlay::keyBackClicked() {
    // 0xa23850
    // TODO: Implement
}

void HSVLiveOverlay::toggleControls(bool) {
    // 0xa24314
    // TODO: Implement
}

void HSVLiveOverlay::createHSVWidget(int) {
    // 0xa23b74
    // TODO: Implement
}

void HSVLiveOverlay::closeColorSelect(cocos2d::CCObject*) {
    // 0xa237ec
    // TODO: Implement
}

void HSVLiveOverlay::determineStartValues() {
    // 0xa23aa8
    // TODO: Implement
}

void HSVLiveOverlay::init(GameObject*, cocos2d::CCArray*) {
    // 0xa23d04
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void HSVLiveOverlay::show() {
    // 0xa2393c
    // TODO: Implement
}

void HSVLiveOverlay::create(GameObject*, cocos2d::CCArray*) {
    // 0xa2417c
    HSVLiveOverlay* ret = new HSVLiveOverlay();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

