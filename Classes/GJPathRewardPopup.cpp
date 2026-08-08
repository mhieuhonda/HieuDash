
#include "GJPathRewardPopup.h"

GJPathRewardPopup::~GJPathRewardPopup() {
    this->cleanup();
}

GJPathRewardPopup::~GJPathRewardPopup() {
    this->cleanup();
}

GJPathRewardPopup::~GJPathRewardPopup() {
    this->cleanup();
}

void GJPathRewardPopup::closePopup() {
    // TODO: Implement
}

void GJPathRewardPopup::keyBackClicked() {
    // TODO: Implement
}

void GJPathRewardPopup::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPathRewardPopup::create(int) {
    GJPathRewardPopup* ret = new GJPathRewardPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJPathRewardPopup::onClaim(cocos2d::CCObject*) {
    // TODO: Implement
}

