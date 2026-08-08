
#include "SetTextPopup.h"

SetTextPopup::~SetTextPopup() {
    this->cleanup();
}

SetTextPopup::~SetTextPopup() {
    this->cleanup();
}

SetTextPopup::~SetTextPopup() {
    this->cleanup();
}

void SetTextPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetTextPopup::onResetValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetTextPopup::keyBackClicked() {
    // TODO: Implement
}

void SetTextPopup::textInputClosed(CCTextInputNode*) {
    // TODO: Implement
}

void SetTextPopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetTextPopup::init(std::string, std::string, int, std::string, std::string, bool, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetTextPopup::show() {
    // TODO: Implement
}

void SetTextPopup::create(std::string, std::string, int, std::string, std::string, bool, float) {
    SetTextPopup* ret = new SetTextPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetTextPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetTextPopup::onCancel(cocos2d::CCObject*) {
    // TODO: Implement
}

