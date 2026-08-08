
#include "CommunityCreditsPage.h"

CommunityCreditsPage::~CommunityCreditsPage() {
    this->cleanup();
}

CommunityCreditsPage::~CommunityCreditsPage() {
    this->cleanup();
}

CommunityCreditsPage::~CommunityCreditsPage() {
    this->cleanup();
}

void CommunityCreditsPage::onSwitchPage(cocos2d::CCObject*) {
    // TODO: Implement
}

void CommunityCreditsPage::keyBackClicked() {
    // TODO: Implement
}

void CommunityCreditsPage::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void CommunityCreditsPage::registerWithTouchDispatcher() {
    // TODO: Implement
}

void CommunityCreditsPage::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CommunityCreditsPage::show() {
    // TODO: Implement
}

void CommunityCreditsPage::create() {
    CommunityCreditsPage* ret = new CommunityCreditsPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CommunityCreditsPage::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void CommunityCreditsPage::goToPage(int) {
    // TODO: Implement
}

