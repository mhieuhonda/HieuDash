// ============================================================
// CCSpriteWithHue.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CCSPRITEWITHHUE_H_
#define CCSPRITEWITHHUE_H_

#include "cocos2d.h"
#include <string>

class CCSpriteWithHue {
public:
    virtual ~CCSpriteWithHue();
    virtual ~CCSpriteWithHue();
    virtual ~CCSpriteWithHue();

    void initShader();
    void shaderBody();
    void updateColor();
    void setLuminance(float);
    void getShaderName();
    void setHueDegrees(float);
    void initWithTexture(cocos2d::CCTexture2D*);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    void setEvenLuminance(float);
    void createWithTexture(cocos2d::CCTexture2D*);
    void createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    void updateColorMatrix();
    void setCustomLuminance(float, float, float);
    void getUniformLocations();
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void setupDefaultSettings();
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void createWithSpriteFrameName(std::string const&);
    void draw();
    void create(std::string const&);
    void create(std::string const&, cocos2d::CCRect const&);
    void getHue();
    void setHue(float);
    void getAlpha();
    void updateHue(float);

};

#endif // CCSPRITEWITHHUE_H_
