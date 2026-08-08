
#include "SecretLayer6.h"

SecretLayer6::~SecretLayer6() {
    this->cleanup();
}

SecretLayer6::~SecretLayer6() {
    this->cleanup();
}

SecretLayer6::~SecretLayer6() {
    this->cleanup();
}

void SecretLayer6::startGame01() {
    // TODO: Implement
}

void SecretLayer6::keyBackClicked() {
    // TODO: Implement
}

void SecretLayer6::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SecretLayer6::scene() {
    // TODO: Implement
}

void SecretLayer6::create() {
    SecretLayer6* ret = new SecretLayer6();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SecretLayer6::onBack(cocos2d::CCObject*) {
    // TODO: Implement
}

