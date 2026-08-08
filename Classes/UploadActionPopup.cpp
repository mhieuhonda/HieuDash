
#include "UploadActionPopup.h"

UploadActionPopup::~UploadActionPopup() {
    this->cleanup();
}

UploadActionPopup::~UploadActionPopup() {
    this->cleanup();
}

UploadActionPopup::~UploadActionPopup() {
    this->cleanup();
}

void UploadActionPopup::closePopup() {
    // TODO: Implement
}

void UploadActionPopup::keyBackClicked() {
    // TODO: Implement
}

void UploadActionPopup::showFailMessage(std::string) {
    // TODO: Implement
}

void UploadActionPopup::showSuccessMessage(std::string) {
    // TODO: Implement
}

void UploadActionPopup::init(UploadPopupDelegate*, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UploadActionPopup::create(UploadPopupDelegate*, std::string) {
    UploadActionPopup* ret = new UploadActionPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UploadActionPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

