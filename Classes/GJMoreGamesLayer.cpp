// ============================================================
// GJMoreGamesLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJMoreGamesLayer.h"

GJMoreGamesLayer::~GJMoreGamesLayer() {
    // 0x7d93d4
    this->cleanup();
}

GJMoreGamesLayer::~GJMoreGamesLayer() {
    // 0x7d91a8
    this->cleanup();
}

GJMoreGamesLayer::~GJMoreGamesLayer() {
    // 0x7d91a8
    this->cleanup();
}

void GJMoreGamesLayer::customSetup() {
    // 0x7d9de8
    // TODO: Implement
}

void GJMoreGamesLayer::getMoreGamesList() {
    // 0x7d9734
    // TODO: Implement
}

void GJMoreGamesLayer::create() {
    // 0x7d9400
    GJMoreGamesLayer* ret = new GJMoreGamesLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

