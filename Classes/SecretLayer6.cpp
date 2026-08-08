// ============================================================
// SecretLayer6.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SecretLayer6.h"

SecretLayer6::~SecretLayer6() {
    // 0xa8fd60
    this->cleanup();
}

SecretLayer6::~SecretLayer6() {
    // 0xa8fca4
    this->cleanup();
}

SecretLayer6::~SecretLayer6() {
    // 0xa8fca4
    this->cleanup();
}

void SecretLayer6::startGame01() {
    // 0xa9486c
    // TODO: Implement
}

void SecretLayer6::keyBackClicked() {
    // 0xa8fe3c
    // TODO: Implement
}

void SecretLayer6::init() {
    // 0xa96e28
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SecretLayer6::scene() {
    // 0xa972d0
    // TODO: Implement
}

void SecretLayer6::create() {
    // 0xa9721c
    SecretLayer6* ret = new SecretLayer6();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SecretLayer6::onBack(cocos2d::CCObject*) {
    // 0xa8fdec
    // TODO: Implement
}

