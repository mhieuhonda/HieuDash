// ============================================================
// CCFadeOutBLTiles.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeOutBLTiles.h"

namespace cocos2d {

CCFadeOutBLTiles::~CCFadeOutBLTiles() {
    // 0xac7904
    this->cleanup();
}

CCFadeOutBLTiles::~CCFadeOutBLTiles() {
    // 0xac78f0
    this->cleanup();
}

CCFadeOutBLTiles::~CCFadeOutBLTiles() {
    // 0xac78f0
    this->cleanup();
}

void CCFadeOutBLTiles::create(float, cocos2d::CCSize const&) {
    // 0xac90b8
    CCFadeOutBLTiles* ret = new CCFadeOutBLTiles();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeOutBLTiles::testFunc(cocos2d::CCSize const&, float) {
    // 0xac7d58
    // TODO: Implement
}

} // namespace cocos2d
