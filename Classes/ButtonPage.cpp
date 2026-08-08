
#include "ButtonPage.h"

ButtonPage::~ButtonPage() {
    this->cleanup();
}

void ButtonPage::init(cocos2d::CCArray*, cocos2d::CCPoint, int, float) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void ButtonPage::create(cocos2d::CCArray*, cocos2d::CCPoint, int, float) {
    ButtonPage* ret = new ButtonPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

