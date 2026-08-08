// ============================================================
// CCFadeOutTRTiles.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCFadeOutTRTiles.h"

namespace cocos2d {

CCFadeOutTRTiles::~CCFadeOutTRTiles() {
    // 0xac782c
    this->cleanup();
}

CCFadeOutTRTiles::~CCFadeOutTRTiles() {
    // 0xac7818
    this->cleanup();
}

CCFadeOutTRTiles::~CCFadeOutTRTiles() {
    // 0xac7818
    this->cleanup();
}

void CCFadeOutTRTiles::turnOnTile(cocos2d::CCPoint const&) {
    // 0xac8e80
    // TODO: Implement
}

void CCFadeOutTRTiles::turnOffTile(cocos2d::CCPoint const&) {
    // 0xac8eec
    // TODO: Implement
}

void CCFadeOutTRTiles::transformTile(cocos2d::CCPoint const&, float) {
    // 0xac7ac0
    // TODO: Implement
}

void CCFadeOutTRTiles::create(float, cocos2d::CCSize const&) {
    // 0xac8dc4
    CCFadeOutTRTiles* ret = new CCFadeOutTRTiles();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCFadeOutTRTiles::update(float) {
    // 0xac8f40
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCFadeOutTRTiles::testFunc(cocos2d::CCSize const&, float) {
    // 0xac7ca8
    // TODO: Implement
}

} // namespace cocos2d
