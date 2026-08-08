
#include "GJSpiderSprite.h"

GJSpiderSprite::~GJSpiderSprite() {
    this->cleanup();
}

void GJSpiderSprite::init(int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

