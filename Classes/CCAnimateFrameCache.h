#ifndef HIEUDASH_CCANIMATEFRAMECACHE_H_
#define HIEUDASH_CCANIMATEFRAMECACHE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCAnimateFrameCache : public cocos2d::CCObject {
public:
    CCAnimateFrameCache();
    void addCustomSpriteFramesWithFile(char const*);
    void addDict(DS_Dictionary*, char const*);
    void addDict(cocos2d::CCDictionary*, char const*);
    void addSpriteFramesWithFile(char const*);
    bool init();
    void purgeSharedSpriteFrameCache();
    void removeSpriteFrames();
    void sharedSpriteFrameCache();
    void spriteFrameByName(char const*);
    ~CCAnimateFrameCache();
};

#endif // HIEUDASH_CCANIMATEFRAMECACHE_H_
