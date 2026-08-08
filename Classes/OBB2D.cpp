
#include "OBB2D.h"

OBB2D::~OBB2D() {
    this->cleanup();
}

OBB2D::~OBB2D() {
    this->cleanup();
}

OBB2D::~OBB2D() {
    this->cleanup();
}

void OBB2D::computeAxes() {
    // TODO: Implement
}

void OBB2D::orderCorners() {
    // TODO: Implement
}

void OBB2D::overlaps1Way(OBB2D*) {
    // TODO: Implement
}

void OBB2D::getBoundingRect() {
    // TODO: Implement
}

void OBB2D::calculateWithCenter(cocos2d::CCPoint, float, float, float) {
    // TODO: Implement
}

void OBB2D::init(cocos2d::CCPoint, float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void OBB2D::create(cocos2d::CCPoint, float, float, float) {
    OBB2D* ret = new OBB2D();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void OBB2D::overlaps(OBB2D*) {
    // TODO: Implement
}

