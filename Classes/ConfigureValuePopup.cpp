// ============================================================
// ConfigureValuePopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ConfigureValuePopup.h"

ConfigureValuePopup::~ConfigureValuePopup() {
    // 0x90c4e4
    this->cleanup();
}

ConfigureValuePopup::~ConfigureValuePopup() {
    // 0x90c488
    this->cleanup();
}

ConfigureValuePopup::~ConfigureValuePopup() {
    // 0x90c488
    this->cleanup();
}

void ConfigureValuePopup::textChanged(CCTextInputNode*) {
    // 0x90c510
    // TODO: Implement
}

void ConfigureValuePopup::sliderChanged(cocos2d::CCObject*) {
    // 0x90d8d4
    // TODO: Implement
}

void ConfigureValuePopup::keyBackClicked() {
    // 0x90c478
    // TODO: Implement
}

void ConfigureValuePopup::textInputClosed(CCTextInputNode*) {
    // 0x90c3cc
    // TODO: Implement
}

void ConfigureValuePopup::addInfoAlertButton(std::string, std::string) {
    // 0x90c71c
    // TODO: Implement
}

void ConfigureValuePopup::updateTextInputLabel() {
    // 0x90c94c
    // TODO: Implement
}

void ConfigureValuePopup::init(ConfigureValuePopupDelegate*, float, float, float, std::string, std::string, int) {
    // 0x90cb2c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ConfigureValuePopup::create(ConfigureValuePopupDelegate*, float, float, float, std::string, std::string, int) {
    // 0x90d604
    ConfigureValuePopup* ret = new ConfigureValuePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ConfigureValuePopup::onArrow(cocos2d::CCObject*) {
    // 0x90d918
    // TODO: Implement
}

void ConfigureValuePopup::onClose(cocos2d::CCObject*) {
    // 0x90c3f0
    // TODO: Implement
}

