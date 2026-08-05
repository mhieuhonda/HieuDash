#include "SecretLayer.h"

SecretLayer::SecretLayer()
    : m_pCodeInput(nullptr)
    , m_bRedeeming(false) {}

SecretLayer* SecretLayer::create() {
    SecretLayer* ret = new SecretLayer();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool SecretLayer::init() { return true; }
void SecretLayer::onRedeem(cocos2d::CCObject* sender) {}
void SecretLayer::redeemCode(std::string code) {}
void SecretLayer::onClose(cocos2d::CCObject* sender) {}

SecretLayer::~SecretLayer() {}
