
#include "SetupPlayerControlPopup.h"

SetupPlayerControlPopup::~SetupPlayerControlPopup() {
    this->cleanup();
}

SetupPlayerControlPopup::~SetupPlayerControlPopup() {
    this->cleanup();
}

SetupPlayerControlPopup::~SetupPlayerControlPopup() {
    this->cleanup();
}

void SetupPlayerControlPopup::init(PlayerControlGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupPlayerControlPopup::create(PlayerControlGameObject*, cocos2d::CCArray*) {
    SetupPlayerControlPopup* ret = new SetupPlayerControlPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

