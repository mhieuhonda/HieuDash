// ============================================================
// CCTiledGrid3DAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTiledGrid3DAction.h"

namespace cocos2d {

CCTiledGrid3DAction::~CCTiledGrid3DAction() {
    // 0xab9a68
    this->cleanup();
}

CCTiledGrid3DAction::~CCTiledGrid3DAction() {
    // 0xab9a54
    this->cleanup();
}

CCTiledGrid3DAction::~CCTiledGrid3DAction() {
    // 0xab9a54
    this->cleanup();
}

void CCTiledGrid3DAction::originalTile(cocos2d::CCPoint const&) {
    // 0xab9ee0
    // TODO: Implement
}

void CCTiledGrid3DAction::tile(cocos2d::CCPoint const&) {
    // 0xab9e9c
    // TODO: Implement
}

void CCTiledGrid3DAction::create(float, cocos2d::CCSize const&) {
    // 0xab9f58
    CCTiledGrid3DAction* ret = new CCTiledGrid3DAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTiledGrid3DAction::getGrid() {
    // 0xab98a8
    // TODO: Implement
}

void CCTiledGrid3DAction::setTile(cocos2d::CCPoint const&, cocos2d::_ccQuad3 const&) {
    // 0xab9f24
    // TODO: Implement
}

} // namespace cocos2d
