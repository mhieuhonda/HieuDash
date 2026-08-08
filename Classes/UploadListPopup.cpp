// ============================================================
// UploadListPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UploadListPopup.h"

UploadListPopup::~UploadListPopup() {
    // 0xa724f8
    this->cleanup();
}

UploadListPopup::~UploadListPopup() {
    // 0xa72448
    this->cleanup();
}

UploadListPopup::~UploadListPopup() {
    // 0xa72448
    this->cleanup();
}

void UploadListPopup::keyBackClicked() {
    // 0xa720c8
    // TODO: Implement
}

void UploadListPopup::onReturnToList(cocos2d::CCObject*) {
    // 0xa77ac8
    // TODO: Implement
}

void UploadListPopup::listUploadFailed(GJLevelList*, int) {
    // 0xa73c6c
    // Load from file/storage
    // TODO: Implement loading
}

void UploadListPopup::listUploadFinished(GJLevelList*) {
    // 0xa7356c
    // Load from file/storage
    // TODO: Implement loading
}

void UploadListPopup::init(GJLevelList*) {
    // 0xa7aa74
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UploadListPopup::show() {
    // 0xa720d4
    // TODO: Implement
}

void UploadListPopup::create(GJLevelList*) {
    // 0xa7afb0
    UploadListPopup* ret = new UploadListPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void UploadListPopup::onBack(cocos2d::CCObject*) {
    // 0xa7217c
    // TODO: Implement
}

void UploadListPopup::onClose(cocos2d::CCObject*) {
    // 0xa72088
    // TODO: Implement
}

