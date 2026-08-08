
#include "LevelPage.h"

LevelPage::~LevelPage() {
    this->cleanup();
}

LevelPage::~LevelPage() {
    this->cleanup();
}

LevelPage::~LevelPage() {
    this->cleanup();
}

void LevelPage::onTheTower(cocos2d::CCObject*) {
    // TODO: Implement
}

void LevelPage::onMoreGames(cocos2d::CCObject*) {
    // TODO: Implement
}

void LevelPage::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void LevelPage::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void LevelPage::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void LevelPage::dialogClosed(DialogLayer*) {
    // TODO: Implement
}

void LevelPage::onSecretDoor(cocos2d::CCObject*) {
    // TODO: Implement
}

void LevelPage::addSecretCoin() {
    // TODO: Implement
}

void LevelPage::addSecretDoor() {
    // TODO: Implement
}

void LevelPage::playCoinEffect() {
    // TODO: Implement
}

void LevelPage::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void LevelPage::updateDynamicPage(GJGameLevel*) {
    // TODO: Implement
}

void LevelPage::registerWithTouchDispatcher() {
    // TODO: Implement
}

void LevelPage::init(GJGameLevel*) {
    bool ret = cocos2d::CCLayer::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void LevelPage::create(GJGameLevel*) {
    LevelPage* ret = new LevelPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void LevelPage::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void LevelPage::onPlay(cocos2d::CCObject*) {
    // TODO: Implement
}

void LevelPage::playStep2() {
    // TODO: Implement
}

void LevelPage::playStep3() {
    // TODO: Implement
}

