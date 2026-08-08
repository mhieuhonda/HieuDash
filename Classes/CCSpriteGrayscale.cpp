
#include "CCSpriteGrayscale.h"

CCSpriteGrayscale::~CCSpriteGrayscale() {
    this->cleanup();
}

CCSpriteGrayscale::~CCSpriteGrayscale() {
    this->cleanup();
}

CCSpriteGrayscale::~CCSpriteGrayscale() {
    this->cleanup();
}

void CCSpriteGrayscale::shaderBody() {
    // TODO: Implement
}

void CCSpriteGrayscale::getShaderName() {
    // TODO: Implement
}

void CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D*) {
    // TODO: Implement
}

void CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) {
    // TODO: Implement
}

void CCSpriteGrayscale::createWithSpriteFrame(cocos2d::CCSpriteFrame*) {
    // TODO: Implement
}

void CCSpriteGrayscale::createWithSpriteFrameName(std::string const&) {
    // TODO: Implement
}

void CCSpriteGrayscale::create(std::string const&) {
    CCSpriteGrayscale* ret = new CCSpriteGrayscale();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpriteGrayscale::create(std::string const&, cocos2d::CCRect const&) {
    CCSpriteGrayscale* ret = new CCSpriteGrayscale();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

