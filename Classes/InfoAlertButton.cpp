// ============================================================
// InfoAlertButton.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "InfoAlertButton.h"

InfoAlertButton::~InfoAlertButton() {
    // 0x8e6090
    this->cleanup();
}

InfoAlertButton::~InfoAlertButton() {
    // 0x8e5f70
    this->cleanup();
}

InfoAlertButton::~InfoAlertButton() {
    // 0x8e5f70
    this->cleanup();
}

void InfoAlertButton::init(std::string, std::string, float) {
    // 0x8e62f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void InfoAlertButton::create(std::string, std::string, float) {
    // 0x8e6394
    InfoAlertButton* ret = new InfoAlertButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void InfoAlertButton::activate() {
    // 0x8e61b8
    // TODO: Implement
}

