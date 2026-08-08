
#include "WorldLevelPage.h"

WorldLevelPage::~WorldLevelPage() {
    this->cleanup();
}

WorldLevelPage::~WorldLevelPage() {
    this->cleanup();
}

WorldLevelPage::~WorldLevelPage() {
    this->cleanup();
}

void WorldLevelPage::keyBackClicked() {
    // TODO: Implement
}

void WorldLevelPage::init(GJGameLevel*, GJWorldNode*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void WorldLevelPage::show() {
    // TODO: Implement
}

void WorldLevelPage::create(GJGameLevel*, GJWorldNode*) {
    WorldLevelPage* ret = new WorldLevelPage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void WorldLevelPage::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void WorldLevelPage::onPlay(cocos2d::CCObject*) {
    // TODO: Implement
}

void WorldLevelPage::onSong(cocos2d::CCObject*) {
    // TODO: Implement
}

void WorldLevelPage::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

