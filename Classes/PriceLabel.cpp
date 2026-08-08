// ============================================================
// PriceLabel.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PriceLabel.h"

PriceLabel::~PriceLabel() {
    // 0x58dda8
    this->cleanup();
}

PriceLabel::~PriceLabel() {
    // 0x58dd94
    this->cleanup();
}

PriceLabel::~PriceLabel() {
    // 0x58dd94
    this->cleanup();
}

void PriceLabel::setOpacity(float) {
    // 0x58e13c
    // TODO: Implement
}

void PriceLabel::init(int) {
    // 0x58df34
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PriceLabel::create(int) {
    // 0x58e050
    PriceLabel* ret = new PriceLabel();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PriceLabel::setColor(cocos2d::_ccColor3B) {
    // 0x58e0e8
    // TODO: Set m_color
}

void PriceLabel::setPrice(int) {
    // 0x58dddc
    // TODO: Implement
}

