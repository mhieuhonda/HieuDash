
#include "ExplodeItemSprite.h"

ExplodeItemSprite::~ExplodeItemSprite() {
    this->cleanup();
}

ExplodeItemSprite::~ExplodeItemSprite() {
    this->cleanup();
}

ExplodeItemSprite::~ExplodeItemSprite() {
    this->cleanup();
}

void ExplodeItemSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ExplodeItemSprite::create() {
    ExplodeItemSprite* ret = new ExplodeItemSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

