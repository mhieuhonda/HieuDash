
#include "AccountHelpLayer.h"

AccountHelpLayer::~AccountHelpLayer() {
    this->cleanup();
}

AccountHelpLayer::~AccountHelpLayer() {
    this->cleanup();
}

AccountHelpLayer::~AccountHelpLayer() {
    this->cleanup();
}

void AccountHelpLayer::updatePage() {
    // TODO: Implement
}

void AccountHelpLayer::customSetup() {
    // TODO: Implement
}

void AccountHelpLayer::layerHidden() {
    // TODO: Implement
}

void AccountHelpLayer::verifyUnlink() {
    // TODO: Implement
}

void AccountHelpLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void AccountHelpLayer::onAccountManagement(cocos2d::CCObject*) {
    // TODO: Implement
}

void AccountHelpLayer::accountStatusChanged() {
    // TODO: Implement
}

void AccountHelpLayer::create() {
    AccountHelpLayer* ret = new AccountHelpLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void AccountHelpLayer::doUnlink() {
    // TODO: Implement
}

void AccountHelpLayer::onUnlink(cocos2d::CCObject*) {
    // TODO: Implement
}

void AccountHelpLayer::exitLayer() {
    // TODO: Implement
}

void AccountHelpLayer::onReLogin(cocos2d::CCObject*) {
    // TODO: Implement
}

