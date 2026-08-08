// ============================================================
// SongInfoLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongInfoLayer.h"

SongInfoLayer::~SongInfoLayer() {
    // 0x7de27c
    this->cleanup();
}

SongInfoLayer::~SongInfoLayer() {
    // 0x7de074
    this->cleanup();
}

SongInfoLayer::~SongInfoLayer() {
    // 0x7de074
    this->cleanup();
}

void SongInfoLayer::onDownload(cocos2d::CCObject*) {
    // 0x7ddf78
    // Load from file/storage
    // TODO: Implement loading
}

void SongInfoLayer::onMenuMusic(cocos2d::CCObject*) {
    // 0x7de624
    // TODO: Implement
}

void SongInfoLayer::keyBackClicked() {
    // 0x7ddf68
    // TODO: Implement
}

void SongInfoLayer::onPracticeMusic(cocos2d::CCObject*) {
    // 0x7de6bc
    // TODO: Implement
}

void SongInfoLayer::showCustomMusicUnlockInfo() {
    // 0x7de2a8
    // TODO: Implement
}

void SongInfoLayer::init(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string, int) {
    // 0x7dee30
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongInfoLayer::onFB(cocos2d::CCObject*) {
    // 0x7de008
    // TODO: Implement
}

void SongInfoLayer::onNG(cocos2d::CCObject*) {
    // 0x7ddfa8
    // TODO: Implement
}

void SongInfoLayer::onYT(cocos2d::CCObject*) {
    // 0x7ddfd8
    // TODO: Implement
}

void SongInfoLayer::onBPM(cocos2d::CCObject*) {
    // 0x7de038
    // TODO: Implement
}

void SongInfoLayer::create(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string, int) {
    // 0x7dff44
    SongInfoLayer* ret = new SongInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoLayer::create(int) {
    // 0x7e0568
    SongInfoLayer* ret = new SongInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoLayer::onClose(cocos2d::CCObject*) {
    // 0x7ddf28
    // TODO: Implement
}

