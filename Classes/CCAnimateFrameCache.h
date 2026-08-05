#ifndef _CCANIMATEFRAMECACHE_H_
#define _CCANIMATEFRAMECACHE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCAnimateFrameCache {
public:
    CCAnimateFrameCache();
    addCustomSpriteFramesWithFile(char const*);
    addDict(DS_Dictionary*, char const*);
    addDict(cocos2d::CCDictionary*, char const*);
    addSpriteFramesWithFile(char const*);
    init();
    purgeSharedSpriteFrameCache();
    removeSpriteFrames();
    sharedSpriteFrameCache();
    spriteFrameByName(char const*);
    ~CCAnimateFrameCache();
};

#endif // _CCANIMATEFRAMECACHE_H_
