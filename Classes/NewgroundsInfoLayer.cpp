// ============================================================
// NewgroundsInfoLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "NewgroundsInfoLayer.h"

NewgroundsInfoLayer::~NewgroundsInfoLayer() {
    // 0x83aa0c
    this->cleanup();
}

NewgroundsInfoLayer::~NewgroundsInfoLayer() {
    // 0x83a8dc
    this->cleanup();
}

NewgroundsInfoLayer::~NewgroundsInfoLayer() {
    // 0x83a8dc
    this->cleanup();
}

void NewgroundsInfoLayer::onSupporter(cocos2d::CCObject*) {
    // 0x83aeac
    // TODO: Implement
}

void NewgroundsInfoLayer::onGuidelines(cocos2d::CCObject*) {
    // 0x83aed4
    // TODO: Implement
}

void NewgroundsInfoLayer::onNewgrounds(cocos2d::CCObject*) {
    // 0x83ae84
    // TODO: Implement
}

void NewgroundsInfoLayer::keyBackClicked() {
    // 0x83a778
    // TODO: Implement
}

void NewgroundsInfoLayer::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x83b980
    // TODO: Implement
}

void NewgroundsInfoLayer::init() {
    // 0x83b124
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void NewgroundsInfoLayer::create() {
    // 0x83e068
    NewgroundsInfoLayer* ret = new NewgroundsInfoLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void NewgroundsInfoLayer::onInfo(cocos2d::CCObject*) {
    // 0x83bb18
    // TODO: Implement
}

void NewgroundsInfoLayer::onClose(cocos2d::CCObject*) {
    // 0x83a738
    // TODO: Implement
}

void NewgroundsInfoLayer::onArtists(cocos2d::CCObject*) {
    // 0x83af74
    // TODO: Implement
}

void NewgroundsInfoLayer::onChanges(cocos2d::CCObject*) {
    // 0x83bc34
    // TODO: Implement
}

