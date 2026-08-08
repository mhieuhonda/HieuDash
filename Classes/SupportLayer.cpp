
#include "SupportLayer.h"

SupportLayer::~SupportLayer() {
    this->cleanup();
}

SupportLayer::~SupportLayer() {
    this->cleanup();
}

SupportLayer::~SupportLayer() {
    this->cleanup();
}

void SupportLayer::customSetup() {
    // TODO: Implement
}

void SupportLayer::onGetReward(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::onLowDetail(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::onClosePopup(UploadActionPopup*) {
    // TODO: Implement
}

void SupportLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // TODO: Implement
}

void SupportLayer::onRequestAccess(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::sendSupportMail() {
    // TODO: Implement
}

void SupportLayer::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*) {
    // TODO: Implement
}

void SupportLayer::uploadActionFailed(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void SupportLayer::uploadActionFinished(int, int) {
    // Load from file/storage
    // TODO: Implement loading
}

void SupportLayer::onSFX(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::onTOS(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::create() {
    SupportLayer* ret = new SupportLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SupportLayer::onEmail(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::onLinks(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::onRobTop(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::exitLayer() {
    // TODO: Implement
}

void SupportLayer::onCocos2d(cocos2d::CCObject*) {
    // TODO: Implement
}

void SupportLayer::onPrivacy(cocos2d::CCObject*) {
    // TODO: Implement
}

