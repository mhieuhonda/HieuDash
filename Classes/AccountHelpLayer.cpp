#include "AccountHelpLayer.h"

AccountHelpLayer::AccountHelpLayer() {}

AccountHelpLayer* AccountHelpLayer::create() {
    AccountHelpLayer* ret = new AccountHelpLayer();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool AccountHelpLayer::init() { return true; }
void AccountHelpLayer::onClose(cocos2d::CCObject* sender) {}

AccountHelpLayer::~AccountHelpLayer() {}
