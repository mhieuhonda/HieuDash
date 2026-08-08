// ============================================================
// CCAnimateFrameCache.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CCANIMATEFRAMECACHE_H_
#define CCANIMATEFRAMECACHE_H_

#include "cocos2d.h"

class CCAnimateFrameCache {
public:
    virtual ~CCAnimateFrameCache();
    virtual ~CCAnimateFrameCache();
    virtual ~CCAnimateFrameCache();

    void spriteFrameByName(char const*);
    void removeSpriteFrames();
    void sharedSpriteFrameCache();
    void addSpriteFramesWithFile(char const*);
    void purgeSharedSpriteFrameCache();
    void addCustomSpriteFramesWithFile(char const*);
    void init();
    void addDict(DS_Dictionary*, char const*);
    void addDict(cocos2d::CCDictionary*, char const*);

};

#endif // CCANIMATEFRAMECACHE_H_
