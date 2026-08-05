#include "AccountLoginLayer.h"

AccountLoginLayer::AccountLoginLayer()
    : m_pUsernameInput(nullptr)
    , m_pPasswordInput(nullptr)
    , m_pDelegate(nullptr)
    , m_bLoggingIn(false) {}

AccountLoginLayer* AccountLoginLayer::create(GJAccountLoginDelegate* delegate) {
    AccountLoginLayer* ret = new AccountLoginLayer();
    if (ret && ret->init(delegate)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool AccountLoginLayer::init(GJAccountLoginDelegate* delegate) {
    m_pDelegate = delegate;
    return true;
}

void AccountLoginLayer::onLogin(cocos2d::CCObject* sender) {}
void AccountLoginLayer::loginAccount(std::string user, std::string pass) {}
void AccountLoginLayer::onClose(cocos2d::CCObject* sender) {}

AccountLoginLayer::~AccountLoginLayer() {}
