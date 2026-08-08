// ============================================================
// SearchButton.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SearchButton.h"

SearchButton::~SearchButton() {
    // 0x6cd300
    this->cleanup();
}

SearchButton::~SearchButton() {
    // 0x6cd2dc
    this->cleanup();
}

SearchButton::~SearchButton() {
    // 0x6cd2dc
    this->cleanup();
}

void SearchButton::init(char const*, char const*, float, char const*) {
    // 0x6d100c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SearchButton::create(char const*, char const*, float, char const*) {
    // 0x6d127c
    SearchButton* ret = new SearchButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

