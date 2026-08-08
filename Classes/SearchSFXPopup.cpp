
#include "SearchSFXPopup.h"

SearchSFXPopup::~SearchSFXPopup() {
    this->cleanup();
}

SearchSFXPopup::~SearchSFXPopup() {
    this->cleanup();
}

SearchSFXPopup::~SearchSFXPopup() {
    this->cleanup();
}

void SearchSFXPopup::onSearchFolders(cocos2d::CCObject*) {
    // TODO: Implement
}

void SearchSFXPopup::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SearchSFXPopup::create(std::string) {
    SearchSFXPopup* ret = new SearchSFXPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

