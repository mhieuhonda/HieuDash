// ============================================================
// CCFadeOutUpTiles.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeOutUpTiles.h"

namespace cocos2d {

CCFadeOutUpTiles::~CCFadeOutUpTiles() {
    // 0xac7874
    this->cleanup();
}

CCFadeOutUpTiles::~CCFadeOutUpTiles() {
    // 0xac7860
    this->cleanup();
}

CCFadeOutUpTiles::~CCFadeOutUpTiles() {
    // 0xac7860
    this->cleanup();
}

void CCFadeOutUpTiles::transformTile(cocos2d::CCPoint const&, float) {
    // 0xac7bd0
    // TODO: Implement
}

void CCFadeOutUpTiles::create(float, cocos2d::CCSize const&) {
    // 0xac9174
    CCFadeOutUpTiles* ret = new CCFadeOutUpTiles();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeOutUpTiles::testFunc(cocos2d::CCSize const&, float) {
    // 0xac7e08
    // TODO: Implement
}

} // namespace cocos2d
