
#include "UploadPopup.h"

UploadPopup::~UploadPopup() {
    this->cleanup();
}

UploadPopup::~UploadPopup() {
    this->cleanup();
}

UploadPopup::~UploadPopup() {
    this->cleanup();
}

void UploadPopup::keyBackClicked() {
    // TODO: Implement
}

void UploadPopup::onReturnToLevel(cocos2d::CCObject*) {
    // TODO: Implement
}

void UploadPopup::levelUploadFailed(GJGameLevel*) {
    // Load from file/storage
    // TODO: Implement loading
}

void UploadPopup::levelUploadFinished(GJGameLevel*) {
    // Load from file/storage
    // TODO: Implement loading
}

void UploadPopup::init(GJGameLevel*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UploadPopup::show() {
    // TODO: Implement
}

void UploadPopup::create(GJGameLevel*) {
    UploadPopup* ret = new UploadPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UploadPopup::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void UploadPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

