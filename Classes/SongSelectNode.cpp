// ============================================================
// SongSelectNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongSelectNode.h"

SongSelectNode::~SongSelectNode() {
    // 0x83b018
    this->cleanup();
}

SongSelectNode::~SongSelectNode() {
    // 0x83afac
    this->cleanup();
}

SongSelectNode::~SongSelectNode() {
    // 0x83afac
    this->cleanup();
}

void SongSelectNode::onSongMode(cocos2d::CCObject*) {
    // 0x83edc8
    // TODO: Implement
}

void SongSelectNode::onSongMode(int) {
    // 0x83ec40
    // TODO: Implement
}

void SongSelectNode::selectSong(int) {
    // 0x83eb58
    // TODO: Implement
}

void SongSelectNode::audioPrevious(cocos2d::CCObject*) {
    // 0x83eb94
    // TODO: Implement
}

void SongSelectNode::songIDChanged(int) {
    // 0x83a788
    // TODO: Implement
}

void SongSelectNode::FLAlert_Clicked(FLAlertLayer*, bool) {
    // 0x83f87c
    // TODO: Implement
}

void SongSelectNode::getActiveSongID() {
    // 0x83a7a0
    // TODO: Implement
}

void SongSelectNode::getSongFileName() {
    // 0x83be7c
    // TODO: Implement
}

void SongSelectNode::getLevelSettings() {
    // 0x83a7b0
    // TODO: Implement
}

void SongSelectNode::onOpenCustomSong(cocos2d::CCObject*) {
    // 0x83f830
    // TODO: Implement
}

void SongSelectNode::updateAudioLabel() {
    // 0x83e9e0
    // TODO: Implement
}

void SongSelectNode::showCustomSongSelect() {
    // 0x83f7f8
    // TODO: Implement
}

void SongSelectNode::customSongLayerClosed() {
    // 0x83f7e8
    // TODO: Implement
}

void SongSelectNode::updateWidgetVisibility() {
    // 0x83eba8
    // TODO: Implement
}

void SongSelectNode::init(int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool) {
    // 0x83edfc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongSelectNode::create(int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool) {
    // 0x83f690
    SongSelectNode* ret = new SongSelectNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongSelectNode::audioNext(cocos2d::CCObject*) {
    // 0x83eb7c
    // TODO: Implement
}

