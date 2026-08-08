// ============================================================
// FRequestProfilePage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FRequestProfilePage.h"

FRequestProfilePage::~FRequestProfilePage() {
    // 0x8f4614
    this->cleanup();
}

FRequestProfilePage::~FRequestProfilePage() {
    // 0x8f44d0
    this->cleanup();
}

FRequestProfilePage::~FRequestProfilePage() {
    // 0x8f44d0
    this->cleanup();
}

void FRequestProfilePage::onNextPage(cocos2d::CCObject*) {
    // 0x8f6330
    // TODO: Implement
}

void FRequestProfilePage::onPrevPage(cocos2d::CCObject*) {
    // 0x8f633c
    // TODO: Implement
}

void FRequestProfilePage::untoggleAll() {
    // 0x8f4de0
    // TODO: Implement
}

void FRequestProfilePage::onClosePopup(UploadActionPopup*) {
    // 0x8f441c
    // TODO: Implement
}

void FRequestProfilePage::setupPageInfo(std::string, char const*) {
    // 0x8f6408
    // TODO: Implement
}

void FRequestProfilePage::deleteSelected() {
    // 0x8f4b5c
    // TODO: Implement
}

void FRequestProfilePage::keyBackClicked() {
    // 0x8f6300
    // TODO: Implement
}

void FRequestProfilePage::onSentRequests(cocos2d::CCObject*) {
    // 0x8f6198
    // TODO: Implement
}

void FRequestProfilePage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x8f4d8c
    // TODO: Implement
}

void FRequestProfilePage::onDeleteSelected(cocos2d::CCObject*) {
    // 0x8f4910
    // TODO: Implement
}

void FRequestProfilePage::updatePageArrows() {
    // 0x8f6348
    // TODO: Implement
}

void FRequestProfilePage::updateLevelsLabel() {
    // 0x8f6404
    // TODO: Implement
}

void FRequestProfilePage::onToggleAllObjects(cocos2d::CCObject*) {
    // 0x8f434c
    // TODO: Implement
}

void FRequestProfilePage::uploadActionFailed(int, int) {
    // 0x8f4640
    // Load from file/storage
    // TODO: Implement loading
}

void FRequestProfilePage::forceReloadRequests(bool) {
    // 0x8f6310
    // Load from file/storage
    // TODO: Implement loading
}

void FRequestProfilePage::loadFRequestsFailed(char const*, GJErrorCode) {
    // 0x8f4f68
    // Load from file/storage
    // TODO: Implement loading
}

void FRequestProfilePage::setupCommentsBrowser(cocos2d::CCArray*) {
    // 0x8f5030
    // TODO: Implement
}

void FRequestProfilePage::uploadActionFinished(int, int) {
    // 0x8f4744
    // Load from file/storage
    // TODO: Implement loading
}

void FRequestProfilePage::loadFRequestsFinished(cocos2d::CCArray*, char const*) {
    // 0x8f51f4
    // Load from file/storage
    // TODO: Implement loading
}

void FRequestProfilePage::registerWithTouchDispatcher() {
    // 0x8f43e4
    // TODO: Implement
}

void FRequestProfilePage::init(bool) {
    // 0x8f55d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FRequestProfilePage::create(bool) {
    // 0x8f6024
    FRequestProfilePage* ret = new FRequestProfilePage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FRequestProfilePage::onClose(cocos2d::CCObject*) {
    // 0x8f6230
    // TODO: Implement
}

void FRequestProfilePage::loadPage(int) {
    // 0x8f5280
    // Load from file/storage
    // TODO: Implement loading
}

void FRequestProfilePage::onUpdate(cocos2d::CCObject*) {
    // 0x8f446c
    // TODO: Implement
}

void FRequestProfilePage::isCorrect(char const*) {
    // 0x8f4e48
    // TODO: Implement
}

