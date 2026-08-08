
#include "GJSearchObject.h"

GJSearchObject::~GJSearchObject() {
    this->cleanup();
}

GJSearchObject::~GJSearchObject() {
    this->cleanup();
}

GJSearchObject::~GJSearchObject() {
    this->cleanup();
}

void GJSearchObject::getSearchKey(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int) {
    // TODO: Implement
}

void GJSearchObject::createFromKey(char const*) {
    // TODO: Implement
}

void GJSearchObject::getPageObject(int) {
    // TODO: Implement
}

void GJSearchObject::getNextPageKey() {
    // TODO: Implement
}

void GJSearchObject::getNextPageObject() {
    // TODO: Implement
}

void GJSearchObject::getPrevPageObject() {
    // TODO: Implement
}

void GJSearchObject::isLevelSearchObject() {
    // TODO: Implement
}

void GJSearchObject::init(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJSearchObject::create(SearchType) {
    GJSearchObject* ret = new GJSearchObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSearchObject::create(SearchType, std::string) {
    GJSearchObject* ret = new GJSearchObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSearchObject::create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int) {
    GJSearchObject* ret = new GJSearchObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJSearchObject::getKey() {
    // TODO: Implement
}

