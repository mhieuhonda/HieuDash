
#include "GJPromoPopup.h"

GJPromoPopup::~GJPromoPopup() {
    this->cleanup();
}

void GJPromoPopup::keyBackClicked() {
    // Stub - not yet implemented
}

void GJPromoPopup::registerWithTouchDispatcher() {
    // Stub - not yet implemented
}

void GJPromoPopup::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void GJPromoPopup::show() {
    // Display operation - stub
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
    // Stub - not yet implemented
}

void GJPromoPopup::onClose(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

