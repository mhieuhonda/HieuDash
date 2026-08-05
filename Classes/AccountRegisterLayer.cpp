#include "AccountRegisterLayer.h"

AccountRegisterLayer::AccountRegisterLayer()
    : m_pUsernameInput(nullptr)
    , m_pPasswordInput(nullptr)
    , m_pEmailInput(nullptr)
    , m_pDelegate(nullptr)
    , m_bRegistering(false) {}

AccountRegisterLayer* AccountRegisterLayer::create(GJAccountRegisterDelegate* delegate) {
    AccountRegisterLayer* ret = new AccountRegisterLayer();
    if (ret && ret->init(delegate)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool AccountRegisterLayer::init(GJAccountRegisterDelegate* delegate) {
    m_pDelegate = delegate;
    return true;
}

void AccountRegisterLayer::onRegister(cocos2d::CCObject* sender) {}
void AccountRegisterLayer::registerAccount(std::string user, std::string pass, std::string email) {}
void AccountRegisterLayer::onClose(cocos2d::CCObject* sender) {}

AccountRegisterLayer::~AccountRegisterLayer() {}
