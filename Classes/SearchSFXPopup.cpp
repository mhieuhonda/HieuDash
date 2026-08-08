
#include "SearchSFXPopup.h"

SearchSFXPopup::~SearchSFXPopup() {
    this->cleanup();
}

void SearchSFXPopup::onSearchFolders(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

void SearchSFXPopup::init(std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

