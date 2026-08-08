
#include "SetFolderPopup.h"

SetFolderPopup::~SetFolderPopup() {
    this->cleanup();
}

SetFolderPopup::~SetFolderPopup() {
    this->cleanup();
}

SetFolderPopup::~SetFolderPopup() {
    this->cleanup();
}

void SetFolderPopup::valueChanged() {
    // TODO: Implement
}

void SetFolderPopup::onSetFolderName(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetFolderPopup::setTextPopupClosed(SetTextPopup*, std::string) {
    // TODO: Implement
}

void SetFolderPopup::init(int, bool, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetFolderPopup::create(int, bool, std::string) {
    SetFolderPopup* ret = new SetFolderPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

