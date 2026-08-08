
#include "SearchButton.h"

SearchButton::~SearchButton() {
    this->cleanup();
}

SearchButton::~SearchButton() {
    this->cleanup();
}

SearchButton::~SearchButton() {
    this->cleanup();
}

void SearchButton::init(char const*, char const*, float, char const*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SearchButton::create(char const*, char const*, float, char const*) {
    SearchButton* ret = new SearchButton();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

