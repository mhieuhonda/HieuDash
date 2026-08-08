
#include "SongInfoLayer.h"

SongInfoLayer::~SongInfoLayer() {
    this->cleanup();
}

SongInfoLayer::~SongInfoLayer() {
    this->cleanup();
}

SongInfoLayer::~SongInfoLayer() {
    this->cleanup();
}

void SongInfoLayer::onDownload(cocos2d::CCObject*) {
    // Load from file/storage
    // TODO: Implement loading
}

void SongInfoLayer::onMenuMusic(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongInfoLayer::keyBackClicked() {
    // TODO: Implement
}

void SongInfoLayer::onPracticeMusic(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongInfoLayer::showCustomMusicUnlockInfo() {
    // TODO: Implement
}

void SongInfoLayer::init(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongInfoLayer::onFB(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongInfoLayer::onNG(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongInfoLayer::onYT(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongInfoLayer::onBPM(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongInfoLayer::create(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string, int) {
    SongInfoLayer* ret = new SongInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoLayer::create(int) {
    SongInfoLayer* ret = new SongInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

