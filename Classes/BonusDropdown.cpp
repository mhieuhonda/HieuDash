// ============================================================
// BonusDropdown.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "BonusDropdown.h"

BonusDropdown::~BonusDropdown() {
    // 0x56b4bc
    this->cleanup();
}

BonusDropdown::~BonusDropdown() {
    // 0x56b4a8
    this->cleanup();
}

BonusDropdown::~BonusDropdown() {
    // 0x56b4a8
    this->cleanup();
}

void BonusDropdown::init(std::string, int) {
    // 0x56b4f0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void BonusDropdown::show() {
    // 0x56b98c
    // TODO: Implement
}

void BonusDropdown::create(std::string, int) {
    // 0x56b7e0
    BonusDropdown* ret = new BonusDropdown();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

