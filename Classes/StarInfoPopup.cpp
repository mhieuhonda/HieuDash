// ============================================================
// StarInfoPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "StarInfoPopup.h"

StarInfoPopup::~StarInfoPopup() {
    // 0x8f7a10
    this->cleanup();
}

StarInfoPopup::~StarInfoPopup() {
    // 0x8f7968
    this->cleanup();
}

StarInfoPopup::~StarInfoPopup() {
    // 0x8f7968
    this->cleanup();
}

void StarInfoPopup::keyBackClicked() {
    // 0x8f7958
    // TODO: Implement
}

void StarInfoPopup::createFromString(std::string) {
    // 0x901408
    // TODO: Implement
}

void StarInfoPopup::createFromStringMoons(std::string) {
    // 0x9011f0
    // TODO: Implement
}

void StarInfoPopup::init(int, int, int, int, int, int, int, int, int, bool) {
    // 0x900450
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void StarInfoPopup::create(int, int, int, int, int, int, int, int, int, bool) {
    // 0x900e48
    StarInfoPopup* ret = new StarInfoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void StarInfoPopup::onClose(cocos2d::CCObject*) {
    // 0x8f7918
    // TODO: Implement
}

