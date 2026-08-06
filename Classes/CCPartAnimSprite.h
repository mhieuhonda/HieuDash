#ifndef HIEUDASH_CCPARTANIMSPRITE_H_
#define HIEUDASH_CCPARTANIMSPRITE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    CCPartAnimSprite();
    void changeTextureOfID(cocos2d::CCString*, cocos2d::CCString*);
    void countParts();
    void createWithAnimDesc(cocos2d::CCString*, cocos2d::CCTexture2D*);
    void dirtify();
    int getSpriteContainer();
    int getSpriteForKey(cocos2d::CCString*);
    bool initWithAnimDesc(cocos2d::CCString*, cocos2d::CCTexture2D*);
    bool isFrameDisplayed(cocos2d::CCSpriteFrame*);
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void setColor(cocos2d::_ccColor3B);
    void setDisplayFrame(cocos2d::CCSpriteFrame*);
    void setFlipX(bool);
    void setFlipY(bool);
    void setScale(float);
    void setScaleX(float);
    void setScaleY(float);
    void transformSprite(frameValues);
    ~CCPartAnimSprite();
};

#endif // HIEUDASH_CCPARTANIMSPRITE_H_
