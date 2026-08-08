// ============================================================
// GJPathPage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJPathPage.h"

GJPathPage::~GJPathPage() {
    // 0xa6cb38
    this->cleanup();
}

GJPathPage::~GJPathPage() {
    // 0xa6ca54
    this->cleanup();
}

GJPathPage::~GJPathPage() {
    // 0xa6ca54
    this->cleanup();
}

void GJPathPage::onIconInfo(cocos2d::CCObject*) {
    // 0xa6d254
    // TODO: Implement
}

void GJPathPage::keyBackClicked() {
    // 0xa6da3c
    // TODO: Implement
}

void GJPathPage::onActivatePath(cocos2d::CCObject*) {
    // 0xa6cd30
    // TODO: Implement
}

void GJPathPage::didPurchaseItem(GJStoreItem*) {
    // 0xa6e454
    // TODO: Implement
}

void GJPathPage::playUnlockAnimation() {
    // 0xa6df10
    // TODO: Implement
}

void GJPathPage::unlockAnimationStep2() {
    // 0xa6d588
    // TODO: Implement
}

void GJPathPage::unlockAnimationStep3() {
    // 0xa6e8cc
    // TODO: Implement
}

void GJPathPage::showCantAffordMessage(GJStoreItem*) {
    // 0xa71804
    // TODO: Implement
}

void GJPathPage::unlockAnimationFinished() {
    // 0xa710c8
    // TODO: Implement
}

void GJPathPage::registerWithTouchDispatcher() {
    // 0xa6ccf8
    // TODO: Implement
}

void GJPathPage::init(int, GJPathsLayer*) {
    // 0xa6f530
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPathPage::show() {
    // 0xa6d0b4
    // TODO: Implement
}

void GJPathPage::create(int, GJPathsLayer*) {
    // 0xa70f88
    GJPathPage* ret = new GJPathPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPathPage::onBack(cocos2d::CCObject*) {
    // 0xa6d9b4
    // TODO: Implement
}

void GJPathPage::onUnlock(cocos2d::CCObject*) {
    // 0xa71e58
    // TODO: Implement
}

