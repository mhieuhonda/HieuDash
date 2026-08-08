
#include "ConfigureValuePopup.h"

ConfigureValuePopup::~ConfigureValuePopup() {
    this->cleanup();
}

ConfigureValuePopup::~ConfigureValuePopup() {
    this->cleanup();
}

ConfigureValuePopup::~ConfigureValuePopup() {
    this->cleanup();
}

void ConfigureValuePopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void ConfigureValuePopup::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void ConfigureValuePopup::keyBackClicked() {
    // TODO: Implement
}

void ConfigureValuePopup::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void ConfigureValuePopup::addInfoAlertButton(std::string, std::string) {
    // TODO: Implement
}

void ConfigureValuePopup::updateTextInputLabel() {
    // TODO: Implement
}

void ConfigureValuePopup::init(ConfigureValuePopupDelegate*, float, float, float, std::string, std::string, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ConfigureValuePopup::create(ConfigureValuePopupDelegate*, float, float, float, std::string, std::string, int) {
    ConfigureValuePopup* ret = new ConfigureValuePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ConfigureValuePopup::onArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void ConfigureValuePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

