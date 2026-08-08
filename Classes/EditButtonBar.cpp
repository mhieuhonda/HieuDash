
#include "EditButtonBar.h"

EditButtonBar::~EditButtonBar() {
    this->cleanup();
}

EditButtonBar::~EditButtonBar() {
    this->cleanup();
}

EditButtonBar::~EditButtonBar() {
    this->cleanup();
}

void EditButtonBar::reloadItems(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void EditButtonBar::loadFromItems(cocos2d::CCArray*, int, int, bool) {
    // Load from file/storage
    // TODO: Implement loading
}

void EditButtonBar::init(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EditButtonBar::create(cocos2d::CCArray*, cocos2d::CCPoint, int, bool, int, int) {
    EditButtonBar* ret = new EditButtonBar();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void EditButtonBar::onLeft(cocos2d::CCObject*) {
    // TODO: Implement
}

void EditButtonBar::getPage() {
    // TODO: Implement
}

void EditButtonBar::onRight(cocos2d::CCObject*) {
    // TODO: Implement
}

void EditButtonBar::goToPage(int) {
    // TODO: Implement
}

