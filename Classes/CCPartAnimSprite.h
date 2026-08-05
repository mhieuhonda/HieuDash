#ifndef _CCPARTANIMSPRITE_H_
#define _CCPARTANIMSPRITE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCPartAnimSprite {
public:
    CCPartAnimSprite();
    changeTextureOfID(cocos2d::CCString*, cocos2d::CCString*);
    countParts();
    createWithAnimDesc(cocos2d::CCString*, cocos2d::CCTexture2D*);
    dirtify();
    displayFrame();
    getSpriteContainer();
    getSpriteForKey(cocos2d::CCString*);
    initWithAnimDesc(cocos2d::CCString*, cocos2d::CCTexture2D*);
    isFrameDisplayed(cocos2d::CCSpriteFrame*);
    setBlendFunc(cocos2d::_ccBlendFunc);
    setColor(cocos2d::_ccColor3B);
    setDisplayFrame(cocos2d::CCSpriteFrame*);
    setFlipX(bool);
    setFlipY(bool);
    setScale(float);
    setScaleX(float);
    setScaleY(float);
    transformSprite(frameValues);
    ~CCPartAnimSprite();
};

#endif // _CCPARTANIMSPRITE_H_
