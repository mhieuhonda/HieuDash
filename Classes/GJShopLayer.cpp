// ============================================================
// GJShopLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJShopLayer.h"

GJShopLayer::~GJShopLayer() {
    // 0x92a95c
    this->cleanup();
}

GJShopLayer::~GJShopLayer() {
    // 0x92a818
    this->cleanup();
}

GJShopLayer::~GJShopLayer() {
    // 0x92a818
    this->cleanup();
}

void GJShopLayer::onPlushies(cocos2d::CCObject*) {
    // 0x92a448
    // TODO: Implement
}

void GJShopLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x92f940
    // TODO: Implement
}

void GJShopLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x92a458
    // TODO: Implement
}

void GJShopLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x92a44c
    // TODO: Implement
}

void GJShopLayer::dialogClosed(DialogLayer*) {
    // 0x92bf4c
    // TODO: Implement
}

void GJShopLayer::onSelectItem(cocos2d::CCObject*) {
    // 0x931020
    // TODO: Implement
}

void GJShopLayer::keyBackClicked() {
    // 0x92b5fc
    // TODO: Implement
}

void GJShopLayer::didPurchaseItem(GJStoreItem*) {
    // 0x92ab5c
    // TODO: Implement
}

void GJShopLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x92a464
    // TODO: Implement
}

void GJShopLayer::exitVideoAdItems() {
    // 0x92c234
    // TODO: Implement
}

void GJShopLayer::showReactMessage() {
    // 0x92c350
    // TODO: Implement
}

void GJShopLayer::onCommunityCredits(cocos2d::CCObject*) {
    // 0x92a538
    // TODO: Implement
}

void GJShopLayer::rewardedVideoFinished() {
    // 0x92a4d8
    // TODO: Implement
}

void GJShopLayer::showCantAffordMessage(GJStoreItem*) {
    // 0x9309cc
    // TODO: Implement
}

void GJShopLayer::updateCurrencyCounter() {
    // 0x92a568
    // TODO: Implement
}

void GJShopLayer::registerWithTouchDispatcher() {
    // 0x92a59c
    // TODO: Implement
}

void GJShopLayer::init(ShopType) {
    // 0x92dd70
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJShopLayer::scene(ShopType) {
    // 0x92f664
    // TODO: Implement
}

void GJShopLayer::create(ShopType) {
    // 0x92f554
    GJShopLayer* ret = new GJShopLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJShopLayer::onBack(cocos2d::CCObject*) {
    // 0x92b3d8
    // TODO: Implement
}

void GJShopLayer::onExit() {
    // 0x92a988
    // TODO: Implement
}

void GJShopLayer::onVideoAd(cocos2d::CCObject*) {
    // 0x92c1e4
    // TODO: Implement
}

