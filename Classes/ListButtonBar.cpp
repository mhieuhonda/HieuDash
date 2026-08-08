
#include "ListButtonBar.h"

ListButtonBar::~ListButtonBar() {
    this->cleanup();
}

void ListButtonBar::init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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
    // Stub - not yet implemented
}

void ListButtonBar::getPage() {
    // Stub - not yet implemented
}

void ListButtonBar::onRight(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void ListButtonBar::goToPage(int) {
    // Stub - not yet implemented
}

