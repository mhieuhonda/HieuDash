
#include "ShardsPage.h"

ShardsPage::~ShardsPage() {
    this->cleanup();
}

ShardsPage::~ShardsPage() {
    this->cleanup();
}

ShardsPage::~ShardsPage() {
    this->cleanup();
}

void ShardsPage::onIconInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShardsPage::onSwitchPage(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShardsPage::keyBackClicked() {
    // TODO: Implement
}

void ShardsPage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void ShardsPage::registerWithTouchDispatcher() {
    // TODO: Implement
}

void ShardsPage::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ShardsPage::show() {
    // TODO: Implement
}

void ShardsPage::create() {
    ShardsPage* ret = new ShardsPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ShardsPage::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void ShardsPage::goToPage(int) {
    // TODO: Implement
}

