
#include "SetIDPopup.h"

SetIDPopup::~SetIDPopup() {
    this->cleanup();
}

SetIDPopup::~SetIDPopup() {
    this->cleanup();
}

SetIDPopup::~SetIDPopup() {
    this->cleanup();
}

void SetIDPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetIDPopup::onResetValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetIDPopup::valueChanged() {
    // TODO: Implement
}

void SetIDPopup::onItemIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetIDPopup::keyBackClicked() {
    // TODO: Implement
}

void SetIDPopup::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void SetIDPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetIDPopup::init(int, int, int, std::string, std::string, bool, int, float, bool, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetIDPopup::show() {
    // TODO: Implement
}

void SetIDPopup::create(int, int, int, std::string, std::string, bool, int, float, bool, bool) {
    SetIDPopup* ret = new SetIDPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetIDPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetIDPopup::onCancel(cocos2d::CCObject*) {
    // TODO: Implement
}

