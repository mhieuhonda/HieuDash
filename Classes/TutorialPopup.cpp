
#include "TutorialPopup.h"

TutorialPopup::~TutorialPopup() {
    this->cleanup();
}

void TutorialPopup::animateMenu() {
    // Stub - not yet implemented
}

void TutorialPopup::closeTutorial(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void TutorialPopup::keyBackClicked() {
    // Stub - not yet implemented
}

void TutorialPopup::registerForCallback(void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCNode*) {
    // Stub - not yet implemented
}

void TutorialPopup::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void TutorialPopup::show() {
    // Display operation - stub
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

