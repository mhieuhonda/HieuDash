// ============================================================
// SFXSearchResult.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SFXSearchResult.h"

SFXSearchResult::~SFXSearchResult() {
    // 0x826f70
    this->cleanup();
}

SFXSearchResult::~SFXSearchResult() {
    // 0x826f2c
    this->cleanup();
}

SFXSearchResult::~SFXSearchResult() {
    // 0x826f2c
    this->cleanup();
}

void SFXSearchResult::updateObjects(AudioSortType) {
    // 0x83230c
    // TODO: Implement
}

void SFXSearchResult::getActiveFolder() {
    // 0x82ee50
    // TODO: Implement
}

void SFXSearchResult::getSelectedPage(int, int) {
    // 0x82ee58
    // TODO: Implement
}

void SFXSearchResult::setActiveFolder(SFXFolderObject*) {
    // 0x82edf4
    // TODO: Set m_activeFolder
}

void SFXSearchResult::init(int) {
    // 0x82ecdc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SFXSearchResult::create(int) {
    // 0x82ed18
    SFXSearchResult* ret = new SFXSearchResult();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

