
#include "SongOptionsLayer.h"

SongOptionsLayer::~SongOptionsLayer() {
    this->cleanup();
}

SongOptionsLayer::~SongOptionsLayer() {
    this->cleanup();
}

SongOptionsLayer::~SongOptionsLayer() {
    this->cleanup();
}

void SongOptionsLayer::onPlayback(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongOptionsLayer::keyBackClicked() {
    // TODO: Implement
}

void SongOptionsLayer::onSongPersistent(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongOptionsLayer::updatePlaybackBtn() {
    // TODO: Implement
}

void SongOptionsLayer::init(CustomSongDelegate*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongOptionsLayer::create(CustomSongDelegate*) {
    SongOptionsLayer* ret = new SongOptionsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongOptionsLayer::onInfo(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongOptionsLayer::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongOptionsLayer::onFadeIn(cocos2d::CCObject*) {
    // TODO: Implement
}

void SongOptionsLayer::onFadeOut(cocos2d::CCObject*) {
    // TODO: Implement
}

