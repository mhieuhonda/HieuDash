
#include "StarInfoPopup.h"

StarInfoPopup::~StarInfoPopup() {
    this->cleanup();
}

void StarInfoPopup::keyBackClicked() {
    // Stub - not yet implemented
}

StarInfoPopup* StarInfoPopup::createFromString(std::string) {
    return nullptr;
}

StarInfoPopup* StarInfoPopup::createFromStringMoons(std::string) {
    return nullptr;
}

void StarInfoPopup::init(int, int, int, int, int, int, int, int, int, bool) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void StarInfoPopup::create(int, int, int, int, int, int, int, int, int, bool) {
    StarInfoPopup* ret = new StarInfoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void StarInfoPopup::onClose(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

