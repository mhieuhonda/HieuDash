// ============================================================
// ConfigureHSVWidget.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ConfigureHSVWidget.h"

ConfigureHSVWidget::~ConfigureHSVWidget() {
    // 0x8e0804
    this->cleanup();
}

ConfigureHSVWidget::~ConfigureHSVWidget() {
    // 0x8e07c0
    this->cleanup();
}

ConfigureHSVWidget::~ConfigureHSVWidget() {
    // 0x8e07c0
    this->cleanup();
}

void ConfigureHSVWidget::onResetHSV(cocos2d::CCObject*) {
    // 0x8e1798
    // TODO: Implement
}

void ConfigureHSVWidget::textChanged(CCTextInputNode*) {
    // 0x8e0d34
    // TODO: Implement
}

void ConfigureHSVWidget::updateLabels() {
    // 0x8e0fbc
    // TODO: Implement
}

void ConfigureHSVWidget::sliderChanged(cocos2d::CCObject*) {
    // 0x8e15b0
    // TODO: Implement
}

void ConfigureHSVWidget::updateSliders() {
    // 0x8e0c0c
    // TODO: Implement
}

void ConfigureHSVWidget::onToggleSConst(cocos2d::CCObject*) {
    // 0x8e16c8
    // TODO: Implement
}

void ConfigureHSVWidget::onToggleVConst(cocos2d::CCObject*) {
    // 0x8e1730
    // TODO: Implement
}

void ConfigureHSVWidget::textInputClosed(CCTextInputNode*) {
    // 0x8e071c
    // TODO: Implement
}

void ConfigureHSVWidget::textInputOpened(CCTextInputNode*) {
    // 0x8e0710
    // TODO: Implement
}

void ConfigureHSVWidget::createTextInputNode(cocos2d::CCPoint, int) {
    // 0x8e0828
    // TODO: Implement
}

void ConfigureHSVWidget::init(cocos2d::_ccHSVValue, bool, bool) {
    // 0x8e180c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ConfigureHSVWidget::create(cocos2d::_ccHSVValue, bool, bool) {
    // 0x8e21ac
    ConfigureHSVWidget* ret = new ConfigureHSVWidget();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ConfigureHSVWidget::getHSV(GameObject*, cocos2d::CCArray*, int) {
    // 0x8e2778
    // TODO: Implement
}

void ConfigureHSVWidget::onClose() {
    // 0x8e0b04
    // TODO: Implement
}

