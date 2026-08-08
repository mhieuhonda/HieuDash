// ============================================================
// GJSearchObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJSearchObject.h"

GJSearchObject::~GJSearchObject() {
    // 0x6ee930
    this->cleanup();
}

GJSearchObject::~GJSearchObject() {
    // 0x6ee7c0
    this->cleanup();
}

GJSearchObject::~GJSearchObject() {
    // 0x6ee7c0
    this->cleanup();
}

void GJSearchObject::getSearchKey(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int) {
    // 0x7165c0
    // TODO: Implement
}

void GJSearchObject::createFromKey(char const*) {
    // 0x7156cc
    // TODO: Implement
}

void GJSearchObject::getPageObject(int) {
    // 0x7162cc
    // TODO: Implement
}

void GJSearchObject::getNextPageKey() {
    // 0x7169ac
    // TODO: Implement
}

void GJSearchObject::getNextPageObject() {
    // 0x716598
    // TODO: Implement
}

void GJSearchObject::getPrevPageObject() {
    // 0x7165a4
    // TODO: Implement
}

void GJSearchObject::isLevelSearchObject() {
    // 0x716c68
    // TODO: Implement
}

void GJSearchObject::init(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int) {
    // 0x71522c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSearchObject::create(SearchType) {
    // 0x715db8
    GJSearchObject* ret = new GJSearchObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSearchObject::create(SearchType, std::string) {
    // 0x716048
    GJSearchObject* ret = new GJSearchObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSearchObject::create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int) {
    // 0x715320
    GJSearchObject* ret = new GJSearchObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSearchObject::getKey() {
    // 0x7166f4
    // TODO: Implement
}

