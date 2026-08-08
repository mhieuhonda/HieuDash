
#include "GJSpiderSprite.h"

GJSpiderSprite::~GJSpiderSprite() {
    this->cleanup();
}

GJSpiderSprite::~GJSpiderSprite() {
    this->cleanup();
}

GJSpiderSprite::~GJSpiderSprite() {
    this->cleanup();
}

void GJSpiderSprite::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSpiderSprite::create(int) {
    GJSpiderSprite* ret = new GJSpiderSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

