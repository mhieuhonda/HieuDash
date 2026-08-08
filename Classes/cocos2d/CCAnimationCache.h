// ============================================================
// CCAnimationCache.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCANIMATIONCACHE_H_
#define COCOS2D_CCANIMATIONCACHE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCAnimationCache {
public:
    CCAnimationCache();
    CCAnimationCache();

    virtual ~CCAnimationCache();
    virtual ~CCAnimationCache();
    virtual ~CCAnimationCache();

    void addAnimation(cocos2d::CCAnimation*, char const*);
    void parseVersion1(cocos2d::CCDictionary*);
    void parseVersion2(cocos2d::CCDictionary*);
    void animationByName(char const*);
    void sharedAnimationCache();
    void addAnimationsWithFile(char const*);
    void removeAnimationByName(char const*);
    void purgeSharedAnimationCache();
    void addAnimationsWithDictionary(cocos2d::CCDictionary*, char const*);
    void init();

};

} // namespace cocos2d

#endif // COCOS2D_CCANIMATIONCACHE_H_
