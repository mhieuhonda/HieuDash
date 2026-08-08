// ============================================================
// AccountLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AccountLayer.h"

AccountLayer::~AccountLayer() {
    // 0x84a1ac
    this->cleanup();
}

AccountLayer::~AccountLayer() {
    // 0x84a0b0
    this->cleanup();
}

AccountLayer::~AccountLayer() {
    // 0x84a0b0
    this->cleanup();
}

void AccountLayer::onRegister(cocos2d::CCObject*) {
    // 0x84a1d8
    // TODO: Implement
}

void AccountLayer::updatePage(bool) {
    // 0x84b1b0
    // TODO: Implement
}

void AccountLayer::customSetup() {
    // 0x84b700
    // TODO: Implement
}

void AccountLayer::layerHidden() {
    // 0x84cbbc
    // TODO: Implement
}

void AccountLayer::hideLoadingUI() {
    // 0x84c02c
    // Load from file/storage
    // TODO: Implement loading
}

void AccountLayer::showLoadingUI() {
    // 0x84bea0
    // Load from file/storage
    // TODO: Implement loading
}

void AccountLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x84bf94
    // TODO: Implement
}

void AccountLayer::syncAccountFailed(BackupAccountError, int) {
    // 0x84c82c
    // TODO: Implement
}

void AccountLayer::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint) {
    // 0x84af34
    // TODO: Implement
}

void AccountLayer::backupAccountFailed(BackupAccountError, int) {
    // 0x84c25c
    // TODO: Implement
}

void AccountLayer::syncAccountFinished() {
    // 0x84c638
    // TODO: Implement
}

void AccountLayer::accountStatusChanged() {
    // 0x84be44
    // TODO: Implement
}

void AccountLayer::backupAccountFinished() {
    // 0x84c068
    // TODO: Implement
}

void AccountLayer::create() {
    // 0x84ad3c
    AccountLayer* ret = new AccountLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void AccountLayer::doSync() {
    // 0x84bf38
    // TODO: Implement
}

void AccountLayer::onHelp(cocos2d::CCObject*) {
    // 0x84a52c
    // TODO: Implement
}

void AccountLayer::onMore(cocos2d::CCObject*) {
    // 0x84ca50
    // TODO: Implement
}

void AccountLayer::onSync(cocos2d::CCObject*) {
    // 0x84a85c
    // TODO: Implement
}

void AccountLayer::onLogin(cocos2d::CCObject*) {
    // 0x84a2f4
    // TODO: Implement
}

void AccountLayer::doBackup() {
    // 0x84bedc
    // TODO: Implement
}

void AccountLayer::onBackup(cocos2d::CCObject*) {
    // 0x84aa70
    // TODO: Implement
}

void AccountLayer::toggleUI(bool) {
    // 0x84be54
    // TODO: Implement
}

void AccountLayer::exitLayer() {
    // 0x84ca48
    // TODO: Implement
}

