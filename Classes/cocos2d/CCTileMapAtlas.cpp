// ============================================================
// CCTileMapAtlas.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTileMapAtlas.h"

namespace cocos2d {

CCTileMapAtlas::CCTileMapAtlas() {
    // 0xb3ddbc
}

CCTileMapAtlas::CCTileMapAtlas() {
    // 0xb3ddbc
}

CCTileMapAtlas::~CCTileMapAtlas() {
    // 0xb3dd98
    this->cleanup();
}

CCTileMapAtlas::~CCTileMapAtlas() {
    // 0xb3dd40
    this->cleanup();
}

CCTileMapAtlas::~CCTileMapAtlas() {
    // 0xb3dd40
    this->cleanup();
}

void CCTileMapAtlas::getTGAInfo() {
    // 0xb3dd38
    // TODO: Implement
}

void CCTileMapAtlas::releaseMap() {
    // 0xb3de08
    // TODO: Implement
}

void CCTileMapAtlas::setTGAInfo(cocos2d::sImageTGA*) {
    // 0xb3dd30
    // TODO: Implement
}

void CCTileMapAtlas::loadTGAfile(char const*) {
    // 0xb3deb8
    // Load from file/storage
    // TODO: Implement loading
}

void CCTileMapAtlas::initWithTileFile(char const*, char const*, int, int) {
    // 0xb3df84
    // TODO: Implement
}

void CCTileMapAtlas::updateAtlasValues() {
    // 0xb3e54c
    // TODO: Implement
}

void CCTileMapAtlas::updateAtlasValueAt(cocos2d::CCPoint const&, cocos2d::_ccColor3B const&, unsigned int) {
    // 0xb3e178
    // TODO: Implement
}

void CCTileMapAtlas::calculateItemsToRender() {
    // 0xb3de44
    // TODO: Implement
}

void CCTileMapAtlas::create(char const*, char const*, int, int) {
    // 0xb3e090
    CCTileMapAtlas* ret = new CCTileMapAtlas();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTileMapAtlas::tileAt(cocos2d::CCPoint const&) {
    // 0xb3e124
    // TODO: Implement
}

void CCTileMapAtlas::setTile(cocos2d::_ccColor3B const&, cocos2d::CCPoint const&) {
    // 0xb3e3f0
    // TODO: Implement
}

} // namespace cocos2d
