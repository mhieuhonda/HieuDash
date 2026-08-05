#ifndef HIEUDASH_CCANIMATEDSPRITE_H_
#define HIEUDASH_CCANIMATEDSPRITE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    CCAnimatedSprite();
    void animationFinished(char const*);
    void animationFinishedO(cocos2d::CCObject*);
    void cleanupSprite();
    void createWithType(char const*);
    int getActiveSpriteMode();
    int getAnimManager();
    int getAnimatedSprite();
    int getDefaultAnimation();
    int getDelegate();
    int getNormalSprite();
    int getSprite();
    bool initWithType(char const*);
    void loadType(char const*);
    void setAnimatedSprite(CCPartAnimSprite*);
    void setDefaultAnimation(std::string);
    void setDelegate(AnimatedSpriteDelegate*);
    void setNormalSprite(cocos2d::CCSprite*);
    void setOpacity(unsigned char);
    void setSprite(cocos2d::CCSprite*);
    void switchToMode(spriteMode);
    ~CCAnimatedSprite();
};

#endif // HIEUDASH_CCANIMATEDSPRITE_H_
