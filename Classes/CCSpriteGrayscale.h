// ============================================================
// CCSpriteGrayscale.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CCSPRITEGRAYSCALE_H_
#define CCSPRITEGRAYSCALE_H_

#include "cocos2d.h"
#include <string>

class CCSpriteGrayscale {
public:
    virtual ~CCSpriteGrayscale();
    virtual ~CCSpriteGrayscale();
    virtual ~CCSpriteGrayscale();

    void shaderBody();
    void getShaderName();
    void createWithTexture(cocos2d::CCTexture2D*);
    void createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void createWithSpriteFrameName(std::string const&);
    void create(std::string const&);
    void create(std::string const&, cocos2d::CCRect const&);

protected:
    std::string m_shaderName;

};

#endif // CCSPRITEGRAYSCALE_H_
