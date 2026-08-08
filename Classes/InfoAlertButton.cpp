
#include "InfoAlertButton.h"

InfoAlertButton::~InfoAlertButton() {
    this->cleanup();
}

void InfoAlertButton::init(std::string, std::string, float) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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
    // Stub - not yet implemented
}

