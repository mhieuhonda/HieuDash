
#include "EndPortalObject.h"

EndPortalObject::~EndPortalObject() {
    this->cleanup();
}

EndPortalObject::~EndPortalObject() {
    this->cleanup();
}

EndPortalObject::~EndPortalObject() {
    this->cleanup();
}

void EndPortalObject::setVisible(bool) {
    // TODO: Set m_visible
}

void EndPortalObject::getSpawnPos() {
    // TODO: Implement
}

void EndPortalObject::setPosition(cocos2d::CCPoint const&) {
    // TODO: Set m_position
}

void EndPortalObject::updateColors(cocos2d::_ccColor3B) {
    // TODO: Implement
}

void EndPortalObject::updateEndPos(bool) {
    // TODO: Implement
}

void EndPortalObject::triggerObject(GJBaseGameLayer*) {
    // TODO: Implement
}

void EndPortalObject::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EndPortalObject::create() {
    EndPortalObject* ret = new EndPortalObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

