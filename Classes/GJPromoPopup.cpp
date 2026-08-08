
#include "GJPromoPopup.h"

GJPromoPopup::~GJPromoPopup() {
    this->cleanup();
}

GJPromoPopup::~GJPromoPopup() {
    this->cleanup();
}

GJPromoPopup::~GJPromoPopup() {
    this->cleanup();
}

void GJPromoPopup::keyBackClicked() {
    // TODO: Implement
}

void GJPromoPopup::registerWithTouchDispatcher() {
    // TODO: Implement
}

void GJPromoPopup::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPromoPopup::show() {
    // TODO: Implement
}

void GJPromoPopup::create(std::string) {
    GJPromoPopup* ret = new GJPromoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPromoPopup::onExit() {
    // TODO: Implement
}

void GJPromoPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

