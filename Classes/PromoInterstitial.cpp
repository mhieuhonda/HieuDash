// ============================================================
// PromoInterstitial.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PromoInterstitial.h"

PromoInterstitial::~PromoInterstitial() {
    // 0x7eaeb4
    this->cleanup();
}

PromoInterstitial::~PromoInterstitial() {
    // 0x7eadbc
    this->cleanup();
}

PromoInterstitial::~PromoInterstitial() {
    // 0x7eadbc
    this->cleanup();
}

void PromoInterstitial::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x7eaee0
    // TODO: Implement
}

void PromoInterstitial::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x7eafa8
    // TODO: Implement
}

void PromoInterstitial::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x7eb08c
    // TODO: Implement
}

void PromoInterstitial::keyBackClicked() {
    // 0x7ead3c
    // TODO: Implement
}

void PromoInterstitial::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x7eb024
    // TODO: Implement
}

void PromoInterstitial::init(bool) {
    // 0x7eb37c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PromoInterstitial::show() {
    // 0x7eaca0
    // TODO: Implement
}

void PromoInterstitial::setup() {
    // 0x7eb0f4
    // TODO: Implement
}

void PromoInterstitial::create(bool) {
    // 0x7eb3dc
    PromoInterstitial* ret = new PromoInterstitial();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PromoInterstitial::onClick(cocos2d::CCObject*) {
    // 0x7ead78
    // TODO: Implement
}

void PromoInterstitial::onClose(cocos2d::CCObject*) {
    // 0x7eaccc
    // TODO: Implement
}

