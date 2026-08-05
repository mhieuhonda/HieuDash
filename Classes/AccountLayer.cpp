#include "AccountLayer.h"

AccountLayer::AccountLayer()
    : m_pAccountManager(nullptr)
    , m_bLoggedIn(false)
    , m_pProfileIcon(nullptr) {}

AccountLayer* AccountLayer::create() {
    AccountLayer* ret = new AccountLayer();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool AccountLayer::init() { return GJDropDownLayer::init("Account"); }
void AccountLayer::onLogin(cocos2d::CCObject* sender) {}
void AccountLayer::onRegister(cocos2d::CCObject* sender) {}
void AccountLayer::onHelp(cocos2d::CCObject* sender) {}
void AccountLayer::onLogout(cocos2d::CCObject* sender) {}
void AccountLayer::onSecret(cocos2d::CCObject* sender) {}
void AccountLayer::updateProfile() {}
void AccountLayer::updateLoginState() {}

AccountLayer::~AccountLayer() {}
