
#include "ListButtonBar.h"

ListButtonBar::~ListButtonBar() {
    this->cleanup();
}

ListButtonBar::~ListButtonBar() {
    this->cleanup();
}

ListButtonBar::~ListButtonBar() {
    this->cleanup();
}

void ListButtonBar::init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ListButtonBar::create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int) {
    ListButtonBar* ret = new ListButtonBar();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ListButtonBar::onLeft(cocos2d::CCObject*) {
    // TODO: Implement
}

void ListButtonBar::getPage() {
    // TODO: Implement
}

void ListButtonBar::onRight(cocos2d::CCObject*) {
    // TODO: Implement
}

void ListButtonBar::goToPage(int) {
    // TODO: Implement
}

