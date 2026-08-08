
#include "PromoInterstitial.h"

PromoInterstitial::~PromoInterstitial() {
    this->cleanup();
}

PromoInterstitial::~PromoInterstitial() {
    this->cleanup();
}

PromoInterstitial::~PromoInterstitial() {
    this->cleanup();
}

void PromoInterstitial::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void PromoInterstitial::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void PromoInterstitial::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void PromoInterstitial::keyBackClicked() {
    // TODO: Implement
}

void PromoInterstitial::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void PromoInterstitial::init(bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PromoInterstitial::show() {
    // TODO: Implement
}

void PromoInterstitial::setup() {
    // TODO: Implement
}

void PromoInterstitial::create(bool) {
    PromoInterstitial* ret = new PromoInterstitial();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PromoInterstitial::onClick(cocos2d::CCObject*) {
    // TODO: Implement
}

void PromoInterstitial::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

