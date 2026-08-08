// ============================================================
// ColorSelectLiveOverlay.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ColorSelectLiveOverlay.h"

ColorSelectLiveOverlay::~ColorSelectLiveOverlay() {
    // 0x90a7e0
    this->cleanup();
}

ColorSelectLiveOverlay::~ColorSelectLiveOverlay() {
    // 0x90a72c
    this->cleanup();
}

ColorSelectLiveOverlay::~ColorSelectLiveOverlay() {
    // 0x90a72c
    this->cleanup();
}

void ColorSelectLiveOverlay::onSelectTab(cocos2d::CCObject*) {
    // 0x90c27c
    // TODO: Implement
}

void ColorSelectLiveOverlay::selectColor(cocos2d::_ccColor3B) {
    // 0x90adf8
    // TODO: Implement
}

void ColorSelectLiveOverlay::textChanged(CCTextInputNode*) {
    // 0x90b080
    // TODO: Implement
}

void ColorSelectLiveOverlay::getColorValue() {
    // 0x90b060
    // TODO: Implement
}

void ColorSelectLiveOverlay::sliderChanged(cocos2d::CCObject*) {
    // 0x90aba0
    // TODO: Implement
}

void ColorSelectLiveOverlay::updateOpacity() {
    // 0x90aaf0
    // TODO: Implement
}

void ColorSelectLiveOverlay::keyBackClicked() {
    // 0x90a71c
    // TODO: Implement
}

void ColorSelectLiveOverlay::toggleControls(bool) {
    // 0x90b088
    // TODO: Implement
}

void ColorSelectLiveOverlay::textInputClosed(CCTextInputNode*) {
    // 0x90b084
    // TODO: Implement
}

void ColorSelectLiveOverlay::closeColorSelect(cocos2d::CCObject*) {
    // 0x90a6b8
    // TODO: Implement
}

void ColorSelectLiveOverlay::createWithObject(EffectGameObject*) {
    // 0x90c264
    // TODO: Implement
}

void ColorSelectLiveOverlay::updateColorLabel() {
    // 0x90b0e8
    // TODO: Implement
}

void ColorSelectLiveOverlay::updateColorValue() {
    // 0x90ab40
    // TODO: Implement
}

void ColorSelectLiveOverlay::colorValueChanged(cocos2d::_ccColor3B) {
    // 0x90ab34
    // TODO: Implement
}

void ColorSelectLiveOverlay::createWithActions(ColorAction*, ColorAction*) {
    // 0x90c274
    // TODO: Implement
}

void ColorSelectLiveOverlay::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint) {
    // 0x90a8e4
    // TODO: Implement
}

void ColorSelectLiveOverlay::determineStartValues() {
    // 0x90a854
    // TODO: Implement
}

void ColorSelectLiveOverlay::init(ColorAction*, ColorAction*, EffectGameObject*) {
    // 0x90b308
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ColorSelectLiveOverlay::show() {
    // 0x90a80c
    // TODO: Implement
}

void ColorSelectLiveOverlay::create(ColorAction*, ColorAction*, EffectGameObject*) {
    // 0x90c0f4
    ColorSelectLiveOverlay* ret = new ColorSelectLiveOverlay();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

