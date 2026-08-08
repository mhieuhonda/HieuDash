// ============================================================
// OBB2D.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "OBB2D.h"

OBB2D::~OBB2D() {
    // 0x58d30c
    this->cleanup();
}

OBB2D::~OBB2D() {
    // 0x58d2f8
    this->cleanup();
}

OBB2D::~OBB2D() {
    // 0x58d2f8
    this->cleanup();
}

void OBB2D::computeAxes() {
    // 0x58d340
    // TODO: Implement
}

void OBB2D::orderCorners() {
    // 0x58d44c
    // TODO: Implement
}

void OBB2D::overlaps1Way(OBB2D*) {
    // 0x58da54
    // TODO: Implement
}

void OBB2D::getBoundingRect() {
    // 0x58dc94
    // TODO: Implement
}

void OBB2D::calculateWithCenter(cocos2d::CCPoint, float, float, float) {
    // 0x58d670
    // TODO: Implement
}

void OBB2D::init(cocos2d::CCPoint, float, float, float) {
    // 0x58d83c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void OBB2D::create(cocos2d::CCPoint, float, float, float) {
    // 0x58d8e4
    OBB2D* ret = new OBB2D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void OBB2D::overlaps(OBB2D*) {
    // 0x58dc50
    // TODO: Implement
}

