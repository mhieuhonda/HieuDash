// ============================================================
// GJPromoPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJPromoPopup.h"

GJPromoPopup::~GJPromoPopup() {
    // 0x8c447c
    this->cleanup();
}

GJPromoPopup::~GJPromoPopup() {
    // 0x8c4384
    this->cleanup();
}

GJPromoPopup::~GJPromoPopup() {
    // 0x8c4384
    this->cleanup();
}

void GJPromoPopup::keyBackClicked() {
    // 0x8c3a8c
    // TODO: Implement
}

void GJPromoPopup::registerWithTouchDispatcher() {
    // 0x8c3090
    // TODO: Implement
}

void GJPromoPopup::init(std::string) {
    // 0x8d986c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPromoPopup::show() {
    // 0x8c3d30
    // TODO: Implement
}

void GJPromoPopup::create(std::string) {
    // 0x8d9adc
    GJPromoPopup* ret = new GJPromoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPromoPopup::onExit() {
    // 0x8c39f8
    // TODO: Implement
}

void GJPromoPopup::onClose(cocos2d::CCObject*) {
    // 0x8c3a20
    // TODO: Implement
}

