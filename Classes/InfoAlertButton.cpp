
#include "InfoAlertButton.h"

InfoAlertButton::~InfoAlertButton() {
    this->cleanup();
}

InfoAlertButton::~InfoAlertButton() {
    this->cleanup();
}

InfoAlertButton::~InfoAlertButton() {
    this->cleanup();
}

void InfoAlertButton::init(std::string, std::string, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void InfoAlertButton::create(std::string, std::string, float) {
    InfoAlertButton* ret = new InfoAlertButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void InfoAlertButton::activate() {
    // TODO: Implement
}

