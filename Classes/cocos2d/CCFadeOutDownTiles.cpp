// ============================================================
// CCFadeOutDownTiles.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeOutDownTiles.h"

namespace cocos2d {

CCFadeOutDownTiles::~CCFadeOutDownTiles() {
    // 0xac78bc
    this->cleanup();
}

CCFadeOutDownTiles::~CCFadeOutDownTiles() {
    // 0xac78a8
    this->cleanup();
}

CCFadeOutDownTiles::~CCFadeOutDownTiles() {
    // 0xac78a8
    this->cleanup();
}

void CCFadeOutDownTiles::create(float, cocos2d::CCSize const&) {
    // 0xac9230
    CCFadeOutDownTiles* ret = new CCFadeOutDownTiles();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeOutDownTiles::testFunc(cocos2d::CCSize const&, float) {
    // 0xac7ea8
    // TODO: Implement
}

} // namespace cocos2d
