
#include "CCSpriteGrayscale.h"

CCSpriteGrayscale::~CCSpriteGrayscale() {
    this->cleanup();
}

void CCSpriteGrayscale::shaderBody() {
    // Stub - not yet implemented
}

std::string CCSpriteGrayscale::getShaderName() {
    return "";
}

CCSpriteGrayscale* CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D*) {
    return nullptr;
}

CCSpriteGrayscale* CCSpriteGrayscale::createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) {
    return nullptr;
}

CCSpriteGrayscale* CCSpriteGrayscale::createWithSpriteFrame(cocos2d::CCSpriteFrame*) {
    return nullptr;
}

CCSpriteGrayscale* CCSpriteGrayscale::createWithSpriteFrameName(std::string const&) {
    return nullptr;
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

