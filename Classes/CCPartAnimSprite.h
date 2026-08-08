
#ifndef CCPARTANIMSPRITE_H_
#define CCPARTANIMSPRITE_H_

#include "cocos2d.h"
#include <string>

class CCPartAnimSprite {
public:
    virtual ~CCPartAnimSprite();

    int countParts();
    void setOpacity(unsigned char);
    void displayFrame();
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void tweenToFrame(cocos2d::CCSpriteFrame*, float);
    void tweenSpriteTo(SpriteDescription*, float);
    std::string getSpriteForKey(char const*);
    void setDisplayFrame(cocos2d::CCSpriteFrame*);
    void transformSprite(SpriteDescription*);
    void initWithAnimDesc(char const*, cocos2d::CCTexture2D*, bool);
    bool isFrameDisplayed(cocos2d::CCSpriteFrame*);
    void changeTextureOfID(char const*, char const*);
    CCPartAnimSprite* createWithAnimDesc(char const*, cocos2d::CCTexture2D*, bool);
    void dirtify();
    void setColor(cocos2d::_ccColor3B);
    void setFlipX(bool);
    void setFlipY(bool);
    void setScale(float);
    void setScaleX(float);
    void setScaleY(float);

protected:
    cocos2d::_ccColor3B m_color;
    float m_scale;
    float m_scaleX;
    float m_scaleY;
    std::string m_spriteForKey;

};

#endif // CCPARTANIMSPRITE_H_
