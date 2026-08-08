
#include "FLAlertLayer.h"

FLAlertLayer::~FLAlertLayer() {
    this->cleanup();
}

FLAlertLayer::~FLAlertLayer() {
    this->cleanup();
}

FLAlertLayer::~FLAlertLayer() {
    this->cleanup();
}

void FLAlertLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void FLAlertLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void FLAlertLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void FLAlertLayer::keyBackClicked() {
    // TODO: Implement
}

void FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void FLAlertLayer::incrementForcePrio() {
    // TODO: Implement
}

void FLAlertLayer::registerWithTouchDispatcher() {
    // TODO: Implement
}

void FLAlertLayer::init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FLAlertLayer::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FLAlertLayer::show() {
    // TODO: Implement
}

void FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*) {
    FLAlertLayer* ret = new FLAlertLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) {
    FLAlertLayer* ret = new FLAlertLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float) {
    FLAlertLayer* ret = new FLAlertLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void FLAlertLayer::onBtn1(cocos2d::CCObject*) {
    // TODO: Implement
}

void FLAlertLayer::onBtn2(cocos2d::CCObject*) {
    // TODO: Implement
}

void FLAlertLayer::keyDown(cocos2d::enumKeyCodes, double) {
    // TODO: Implement
}

void FLAlertLayer::onEnter() {
    // TODO: Implement
}

