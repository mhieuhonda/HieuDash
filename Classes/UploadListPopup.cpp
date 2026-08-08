
#include "UploadListPopup.h"

UploadListPopup::~UploadListPopup() {
    this->cleanup();
}

UploadListPopup::~UploadListPopup() {
    this->cleanup();
}

UploadListPopup::~UploadListPopup() {
    this->cleanup();
}

void UploadListPopup::keyBackClicked() {
    // TODO: Implement
}

void UploadListPopup::onReturnToList(cocos2d::CCObject*) {
    // TODO: Implement
}

void UploadListPopup::listUploadFailed(GJLevelList*, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void UploadListPopup::listUploadFinished(GJLevelList*) {
    // Load from file/storage
    // TODO: Implement loading
}

void UploadListPopup::init(GJLevelList*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UploadListPopup::show() {
    // TODO: Implement
}

void UploadListPopup::create(GJLevelList*) {
    UploadListPopup* ret = new UploadListPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UploadListPopup::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void UploadListPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

