
#include "PriceLabel.h"

PriceLabel::~PriceLabel() {
    this->cleanup();
}

PriceLabel::~PriceLabel() {
    this->cleanup();
}

PriceLabel::~PriceLabel() {
    this->cleanup();
}

void PriceLabel::setOpacity(float) {
    // TODO: Implement
}

void PriceLabel::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void PriceLabel::create(int) {
    PriceLabel* ret = new PriceLabel();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PriceLabel::setColor(cocos2d::_ccColor3B) {
    // TODO: Set m_color
}

void PriceLabel::setPrice(int) {
    // TODO: Implement
}

