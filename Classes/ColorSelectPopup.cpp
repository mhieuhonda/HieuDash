// ============================================================
// ColorSelectPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ColorSelectPopup.h"

ColorSelectPopup::~ColorSelectPopup() {
    // 0x73b688
    this->cleanup();
}

ColorSelectPopup::~ColorSelectPopup() {
    // 0x73b5cc
    this->cleanup();
}

ColorSelectPopup::~ColorSelectPopup() {
    // 0x73b5cc
    this->cleanup();
}

void ColorSelectPopup::colorToHex(cocos2d::_ccColor3B) {
    // 0x7400d0
    // TODO: Implement
}

void ColorSelectPopup::hexToColor(std::string) {
    // 0x740ab4
    // TODO: Implement
}

void ColorSelectPopup::selectColor(cocos2d::_ccColor3B) {
    // 0x73c3e4
    // TODO: Implement
}

void ColorSelectPopup::textChanged(CCTextInputNode*) {
    // 0x742058
    // TODO: Implement
}

void ColorSelectPopup::onTintGround(cocos2d::CCObject*) {
    // 0x73bc0c
    // TODO: Implement
}

void ColorSelectPopup::getColorValue() {
    // 0x73c744
    // TODO: Implement
}

void ColorSelectPopup::onCopyOpacity(cocos2d::CCObject*) {
    // 0x73be84
    // TODO: Implement
}

void ColorSelectPopup::sliderChanged(cocos2d::CCObject*) {
    // 0x73c238
    // TODO: Implement
}

void ColorSelectPopup::updateHSVMode() {
    // 0x73caf0
    // TODO: Implement
}

void ColorSelectPopup::updateOpacity() {
    // 0x73c000
    // TODO: Implement
}

void ColorSelectPopup::keyBackClicked() {
    // 0x7400c0
    // TODO: Implement
}

void ColorSelectPopup::onPlayerColor1(cocos2d::CCObject*) {
    // 0x73bc88
    // TODO: Implement
}

void ColorSelectPopup::onPlayerColor2(cocos2d::CCObject*) {
    // 0x73bd34
    // TODO: Implement
}

void ColorSelectPopup::updateDurLabel() {
    // 0x73c088
    // TODO: Implement
}

void ColorSelectPopup::updateDuration() {
    // 0x73bf8c
    // TODO: Implement
}

void ColorSelectPopup::updateHSVValue() {
    // 0x73fe40
    // TODO: Implement
}

void ColorSelectPopup::onHSVLegacyMode(cocos2d::CCObject*) {
    // 0x73bf10
    // TODO: Implement
}

void ColorSelectPopup::onToggleHSVMode(cocos2d::CCObject*) {
    // 0x73fe04
    // TODO: Implement
}

void ColorSelectPopup::updateCopyColor() {
    // 0x73cc08
    // TODO: Implement
}

void ColorSelectPopup::closeColorSelect(cocos2d::CCObject*) {
    // 0x73ff28
    // TODO: Implement
}

void ColorSelectPopup::onToggleTintMode(cocos2d::CCObject*) {
    // 0x73bdec
    // TODO: Implement
}

void ColorSelectPopup::updateColorValue() {
    // 0x73c328
    // TODO: Implement
}

void ColorSelectPopup::colorSelectClosed(GJSpecialColorSelect*, int) {
    // 0x73ccc8
    // TODO: Implement
}

void ColorSelectPopup::colorValueChanged(cocos2d::_ccColor3B) {
    // 0x7407fc
    // TODO: Implement
}

void ColorSelectPopup::onUpdateCopyColor(cocos2d::CCObject*) {
    // 0x73fd8c
    // TODO: Implement
}

void ColorSelectPopup::updateColorLabels() {
    // 0x74046c
    // TODO: Implement
}

void ColorSelectPopup::updateOpacityLabel() {
    // 0x73c1ec
    // TODO: Implement
}

void ColorSelectPopup::onUpdateCustomColor(cocos2d::CCObject*) {
    // 0x73ca70
    // TODO: Implement
}

void ColorSelectPopup::determineStartValues() {
    // 0x73b6b4
    // TODO: Implement
}

void ColorSelectPopup::onSelectSpecialColor(cocos2d::CCObject*) {
    // 0x73bb64
    // TODO: Implement
}

void ColorSelectPopup::updateCustomColorIdx() {
    // 0x73c814
    // TODO: Implement
}

void ColorSelectPopup::updateTextInputLabel() {
    // 0x73c894
    // TODO: Implement
}

void ColorSelectPopup::updateCopyColorTextInputLabel() {
    // 0x73d02c
    // TODO: Implement
}

void ColorSelectPopup::init(EffectGameObject*, cocos2d::CCArray*, ColorAction*) {
    // 0x73d208
    bool ret = cocos2d::CCLayer::init() if "cocos2d::CCLayer" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ColorSelectPopup::show() {
    // 0x73c7b8
    // TODO: Implement
}

void ColorSelectPopup::create(cocos2d::_ccColor3B) {
    // 0x73fd48
    ColorSelectPopup* ret = new ColorSelectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorSelectPopup::create(ColorAction*) {
    // 0x73fd38
    ColorSelectPopup* ret = new ColorSelectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorSelectPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x73fd30
    ColorSelectPopup* ret = new ColorSelectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorSelectPopup::create(EffectGameObject*, cocos2d::CCArray*, ColorAction*) {
    // 0x73faa8
    ColorSelectPopup* ret = new ColorSelectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorSelectPopup::onCopy(cocos2d::CCObject*) {
    // 0x73c774
    // TODO: Implement
}

void ColorSelectPopup::onPaste(cocos2d::CCObject*) {
    // 0x73c410
    // TODO: Implement
}

void ColorSelectPopup::onDefault(cocos2d::CCObject*) {
    // 0x73c458
    // TODO: Implement
}

