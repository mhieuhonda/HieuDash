// ============================================================
// CCSpritePlus.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CCSPRITEPLUS_H_
#define CCSPRITEPLUS_H_

#include "cocos2d.h"

class CCSpritePlus {
public:
    virtual ~CCSpritePlus();
    virtual ~CCSpritePlus();
    virtual ~CCSpritePlus();

    void stopFollow();
    void addFollower(cocos2d::CCNode*);
    void getFollower();
    void setPosition(cocos2d::CCPoint const&);
    void setRotation(float);
    void followSprite(CCSpritePlus*);
    void setRotationX(float);
    void setRotationY(float);
    void removeFollower(cocos2d::CCNode*);
    void initWithTexture(cocos2d::CCTexture2D*);
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void initWithSpriteFrameName(char const*);
    void createWithSpriteFrameName(char const*);
    void setFlipX(bool);
    void setFlipY(bool);
    void setScale(float);
    void setScaleX(float);
    void setScaleY(float);

};

#endif // CCSPRITEPLUS_H_
