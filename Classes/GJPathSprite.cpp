// ============================================================
// GJPathSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJPathSprite.h"

GJPathSprite::~GJPathSprite() {
    // 0xa6cd78
    this->cleanup();
}

GJPathSprite::~GJPathSprite() {
    // 0xa6cd54
    this->cleanup();
}

GJPathSprite::~GJPathSprite() {
    // 0xa6cd54
    this->cleanup();
}

void GJPathSprite::updateState() {
    // 0xa6ee74
    // TODO: Implement
}

void GJPathSprite::addRankLabel(int) {
    // 0xa6e460
    // TODO: Implement
}

void GJPathSprite::addShardSprite() {
    // 0xa6e5e4
    // TODO: Implement
}

void GJPathSprite::changeToLockedArt() {
    // 0xa6dc24
    // TODO: Implement
}

void GJPathSprite::init(int) {
    // 0xa6da4c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJPathSprite::create(int) {
    // 0xa6db70
    GJPathSprite* ret = new GJPathSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

