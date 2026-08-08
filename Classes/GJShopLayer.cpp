
#include "GJShopLayer.h"

GJShopLayer::~GJShopLayer() {
    this->cleanup();
}

GJShopLayer::~GJShopLayer() {
    this->cleanup();
}

GJShopLayer::~GJShopLayer() {
    this->cleanup();
}

void GJShopLayer::onPlushies(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJShopLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJShopLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJShopLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJShopLayer::dialogClosed(DialogLayer*) {
    // TODO: Implement
}

void GJShopLayer::onSelectItem(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJShopLayer::keyBackClicked() {
    // TODO: Implement
}

void GJShopLayer::didPurchaseItem(GJStoreItem*) {
    // TODO: Implement
}

void GJShopLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJShopLayer::exitVideoAdItems() {
    // TODO: Implement
}

void GJShopLayer::showReactMessage() {
    // TODO: Implement
}

void GJShopLayer::onCommunityCredits(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJShopLayer::rewardedVideoFinished() {
    // TODO: Implement
}

void GJShopLayer::showCantAffordMessage(GJStoreItem*) {
    // TODO: Implement
}

void GJShopLayer::updateCurrencyCounter() {
    // TODO: Implement
}

void GJShopLayer::registerWithTouchDispatcher() {
    // TODO: Implement
}

void GJShopLayer::init(ShopType) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJShopLayer::scene(ShopType) {
    // TODO: Implement
}

void GJShopLayer::create(ShopType) {
    GJShopLayer* ret = new GJShopLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJShopLayer::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJShopLayer::onExit() {
    // TODO: Implement
}

void GJShopLayer::onVideoAd(cocos2d::CCObject*) {
    // TODO: Implement
}

