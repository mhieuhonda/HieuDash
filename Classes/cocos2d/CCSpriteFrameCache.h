// ============================================================
// CCSpriteFrameCache.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSPRITEFRAMECACHE_H_
#define COCOS2D_CCSPRITEFRAMECACHE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSpriteFrameCache {
public:
    virtual ~CCSpriteFrameCache();
    virtual ~CCSpriteFrameCache();
    virtual ~CCSpriteFrameCache();

    void addSpriteFrame(cocos2d::CCSpriteFrame*, char const*);
    void spriteFrameByName(char const*);
    void removeSpriteFrames();
    void sharedSpriteFrameCache();
    void addSpriteFramesWithFile(char const*);
    void addSpriteFramesWithFile(char const*, cocos2d::CCTexture2D*);
    void addSpriteFramesWithFile(char const*, char const*);
    void removeSpriteFrameByName(char const*);
    void removeUnusedSpriteFrames();
    void removeSpriteFramesFromFile(char const*);
    void purgeSharedSpriteFrameCache();
    void addSpriteFramesWithDictionary(cocos2d::CCDictionary*, cocos2d::CCTexture2D*);
    void removeSpriteFramesFromTexture(cocos2d::CCTexture2D*);
    void removeSpriteFramesFromDictionary(cocos2d::CCDictionary*);
    void init();

};

} // namespace cocos2d

#endif // COCOS2D_CCSPRITEFRAMECACHE_H_
