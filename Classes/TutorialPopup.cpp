
#include "TutorialPopup.h"

TutorialPopup::~TutorialPopup() {
    this->cleanup();
}

TutorialPopup::~TutorialPopup() {
    this->cleanup();
}

TutorialPopup::~TutorialPopup() {
    this->cleanup();
}

void TutorialPopup::animateMenu() {
    // TODO: Implement
}

void TutorialPopup::closeTutorial(cocos2d::CCObject*) {
    // TODO: Implement
}

void TutorialPopup::keyBackClicked() {
    // TODO: Implement
}

void TutorialPopup::registerForCallback(void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCNode*) {
    // TODO: Implement
}

void TutorialPopup::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TutorialPopup::show() {
    // TODO: Implement
}

void TutorialPopup::create(std::string) {
    TutorialPopup* ret = new TutorialPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

