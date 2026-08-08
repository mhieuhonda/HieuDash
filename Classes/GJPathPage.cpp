
#include "GJPathPage.h"

GJPathPage::~GJPathPage() {
    this->cleanup();
}

GJPathPage::~GJPathPage() {
    this->cleanup();
}

GJPathPage::~GJPathPage() {
    this->cleanup();
}

void GJPathPage::onIconInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJPathPage::keyBackClicked() {
    // TODO: Implement
}

void GJPathPage::onActivatePath(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJPathPage::didPurchaseItem(GJStoreItem*) {
    // TODO: Implement
}

void GJPathPage::playUnlockAnimation() {
    // TODO: Implement
}

void GJPathPage::unlockAnimationStep2() {
    // TODO: Implement
}

void GJPathPage::unlockAnimationStep3() {
    // TODO: Implement
}

void GJPathPage::showCantAffordMessage(GJStoreItem*) {
    // TODO: Implement
}

void GJPathPage::unlockAnimationFinished() {
    // TODO: Implement
}

void GJPathPage::registerWithTouchDispatcher() {
    // TODO: Implement
}

void GJPathPage::init(int, GJPathsLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPathPage::show() {
    // TODO: Implement
}

void GJPathPage::create(int, GJPathsLayer*) {
    GJPathPage* ret = new GJPathPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPathPage::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJPathPage::onUnlock(cocos2d::CCObject*) {
    // TODO: Implement
}

