// ============================================================
// CCAnimation.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCANIMATION_H_
#define COCOS2D_CCANIMATION_H_

#include "cocos2d.h"

namespace cocos2d {

class CCAnimation {
public:
    CCAnimation();
    CCAnimation();

    virtual ~CCAnimation();
    virtual ~CCAnimation();
    virtual ~CCAnimation();

    void getDuration();
    void copyWithZone(cocos2d::CCZone*);
    void addSpriteFrame(cocos2d::CCSpriteFrame*);
    void initWithSpriteFrames(cocos2d::CCArray*, float);
    void createWithSpriteFrames(cocos2d::CCArray*, float);
    void initWithAnimationFrames(cocos2d::CCArray*, float, unsigned int);
    void addSpriteFrameWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void addSpriteFrameWithFileName(char const*);
    void init();
    void create(cocos2d::CCArray*, float, unsigned int);
    void create();

};

} // namespace cocos2d

#endif // COCOS2D_CCANIMATION_H_
