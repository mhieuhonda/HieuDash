
#include "StarInfoPopup.h"

StarInfoPopup::~StarInfoPopup() {
    this->cleanup();
}

StarInfoPopup::~StarInfoPopup() {
    this->cleanup();
}

StarInfoPopup::~StarInfoPopup() {
    this->cleanup();
}

void StarInfoPopup::keyBackClicked() {
    // TODO: Implement
}

void StarInfoPopup::createFromString(std::string) {
    // TODO: Implement
}

void StarInfoPopup::createFromStringMoons(std::string) {
    // TODO: Implement
}

void StarInfoPopup::init(int, int, int, int, int, int, int, int, int, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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
    // TODO: Implement
}

