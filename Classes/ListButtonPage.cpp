
#include "ListButtonPage.h"

ListButtonPage::~ListButtonPage() {
    this->cleanup();
}

void ListButtonPage::init(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

