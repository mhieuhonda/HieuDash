// ============================================================
// SearchSFXPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SearchSFXPopup.h"

SearchSFXPopup::~SearchSFXPopup() {
    // 0xa5cdc8
    this->cleanup();
}

SearchSFXPopup::~SearchSFXPopup() {
    // 0xa5cd6c
    this->cleanup();
}

SearchSFXPopup::~SearchSFXPopup() {
    // 0xa5cd6c
    this->cleanup();
}

void SearchSFXPopup::onSearchFolders(cocos2d::CCObject*) {
    // 0xa5cd18
    // TODO: Implement
}

void SearchSFXPopup::init(std::string) {
    // 0xa5f2b0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SearchSFXPopup::create(std::string) {
    // 0xa5f704
    SearchSFXPopup* ret = new SearchSFXPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

