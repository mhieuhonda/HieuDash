
#include "GJSmartBlockPreviewSprite.h"

GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite() {
    this->cleanup();
}

GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite() {
    this->cleanup();
}

GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite() {
    this->cleanup();
}

void GJSmartBlockPreviewSprite::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSmartBlockPreviewSprite::visit() {
    // TODO: Implement
}

void GJSmartBlockPreviewSprite::create() {
    GJSmartBlockPreviewSprite* ret = new GJSmartBlockPreviewSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

