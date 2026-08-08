// ============================================================
// GauntletSprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GauntletSprite.h"

GauntletSprite::~GauntletSprite() {
    // 0x91d608
    this->cleanup();
}

GauntletSprite::~GauntletSprite() {
    // 0x91d5f4
    this->cleanup();
}

GauntletSprite::~GauntletSprite() {
    // 0x91d5f4
    this->cleanup();
}

void GauntletSprite::colorForType(GauntletType) {
    // 0x91da84
    // TODO: Implement
}

void GauntletSprite::addLockedSprite() {
    // 0x91daa4
    // TODO: Implement
}

void GauntletSprite::addNormalSprite() {
    // 0x91d8f8
    // TODO: Implement
}

void GauntletSprite::luminanceForType(GauntletType) {
    // 0x91da5c
    // TODO: Implement
}

void GauntletSprite::toggleLockedSprite(bool) {
    // 0x91dd90
    // TODO: Implement
}

void GauntletSprite::init(GauntletType, bool) {
    // 0x91e1fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GauntletSprite::create(GauntletType, bool) {
    // 0x91e2ac
    GauntletSprite* ret = new GauntletSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

