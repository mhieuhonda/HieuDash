
#include "BonusDropdown.h"

BonusDropdown::~BonusDropdown() {
    this->cleanup();
}

BonusDropdown::~BonusDropdown() {
    this->cleanup();
}

BonusDropdown::~BonusDropdown() {
    this->cleanup();
}

void BonusDropdown::init(std::string, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void BonusDropdown::show() {
    // TODO: Implement
}

void BonusDropdown::create(std::string, int) {
    BonusDropdown* ret = new BonusDropdown();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

