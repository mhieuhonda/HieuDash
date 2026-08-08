
#include "ListButtonPage.h"

ListButtonPage::~ListButtonPage() {
    this->cleanup();
}

ListButtonPage::~ListButtonPage() {
    this->cleanup();
}

ListButtonPage::~ListButtonPage() {
    this->cleanup();
}

void ListButtonPage::init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ListButtonPage::create(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float) {
    ListButtonPage* ret = new ListButtonPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

