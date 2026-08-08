// ============================================================
// TutorialPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TutorialPopup.h"

TutorialPopup::~TutorialPopup() {
    // 0x6005c4
    this->cleanup();
}

TutorialPopup::~TutorialPopup() {
    // 0x6004b8
    this->cleanup();
}

TutorialPopup::~TutorialPopup() {
    // 0x6004b8
    this->cleanup();
}

void TutorialPopup::animateMenu() {
    // 0x600448
    // TODO: Implement
}

void TutorialPopup::closeTutorial(cocos2d::CCObject*) {
    // 0x600360
    // TODO: Implement
}

void TutorialPopup::keyBackClicked() {
    // 0x6003e0
    // TODO: Implement
}

void TutorialPopup::registerForCallback(void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCNode*) {
    // 0x600a54
    // TODO: Implement
}

void TutorialPopup::init(std::string) {
    // 0x6005f0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TutorialPopup::show() {
    // 0x6003f0
    // TODO: Implement
}

void TutorialPopup::create(std::string) {
    // 0x600830
    TutorialPopup* ret = new TutorialPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

