
#ifndef CCSPRITEWITHHUE_H_
#define CCSPRITEWITHHUE_H_

#include "cocos2d.h"
#include <string>

class CCSpriteWithHue {
public:
    virtual ~CCSpriteWithHue();

    void initShader();
    void shaderBody();
    void updateColor();
    void setLuminance(float);
    std::string getShaderName();
    void setHueDegrees(float);
    void initWithTexture(cocos2d::CCTexture2D*);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    void setEvenLuminance(float);
    CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D*);
    CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    void updateColorMatrix();
    void setCustomLuminance(float, float, float);
    void getUniformLocations();
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void setupDefaultSettings();
    CCSpriteWithHue* createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    CCSpriteWithHue* createWithSpriteFrameName(std::string const&);
    void draw();
    void create(std::string const&);
    void create(std::string const&, cocos2d::CCRect const&);
    void getHue();
    void setHue(float);
    void getAlpha();
    void updateHue(float);

protected:
    std::string m_shaderName;

};

#endif // CCSPRITEWITHHUE_H_
