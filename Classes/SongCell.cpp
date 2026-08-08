// ============================================================
// SongCell.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongCell.h"

SongCell* SongCell::create() {
    SongCell* ret = new SongCell();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

SongCell::SongCell(char const*, float, float) {
    // 0x614eec
}

SongCell::SongCell(char const*, float, float) {
    // 0x614eec
}

SongCell::~SongCell() {
    // 0x608c58
    this->cleanup();
}

SongCell::~SongCell() {
    // 0x608c14
    this->cleanup();
}

SongCell::~SongCell() {
    // 0x608c14
    this->cleanup();
}

void SongCell::updateBGColor(int) {
    // 0x615448
    // TODO: Implement
}

void SongCell::loadFromObject(SongObject*) {
    // 0x614f60
    // Load from file/storage
    // TODO: Implement loading
}

void SongCell::draw() {
    // 0x6095a8
    // Render/draw logic
    // TODO: Implement rendering
}

void SongCell::init() {
    // 0x608908
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongCell::onClick(cocos2d::CCObject*) {
    // 0x60a904
    // TODO: Implement
}

