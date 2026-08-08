
#include "OBB2D.h"

OBB2D::~OBB2D() {
    this->cleanup();
}

void OBB2D::computeAxes() {
    // Stub - not yet implemented
}

void OBB2D::orderCorners() {
    // Stub - not yet implemented
}

void OBB2D::overlaps1Way(OBB2D*) {
    // Stub - not yet implemented
}

void OBB2D::getBoundingRect() {
    // Stub - not yet implemented
}

void OBB2D::calculateWithCenter(cocos2d::CCPoint, float, float, float) {
    // Stub - not yet implemented
}

void OBB2D::init(cocos2d::CCPoint, float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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
    // Stub - not yet implemented
}

