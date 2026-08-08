
#ifndef CCANIMATEFRAMECACHE_H_
#define CCANIMATEFRAMECACHE_H_

#include "cocos2d.h"

class CCAnimateFrameCache : public cocos2d::CCNode {
public:
    virtual ~CCAnimateFrameCache();

    void spriteFrameByName(char const*);
    void removeSpriteFrames();
    void sharedSpriteFrameCache();
    void addSpriteFramesWithFile(char const*);
    void purgeSharedSpriteFrameCache();
    void addCustomSpriteFramesWithFile(char const*);
    bool init();
    void addDict(DS_Dictionary*, char const*);
    void addDict(cocos2d::CCDictionary*, char const*);

};

#endif // CCANIMATEFRAMECACHE_H_
