#ifndef _CCANIMATEDSPRITE_H_
#define _CCANIMATEDSPRITE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCAnimatedSprite {
public:
    CCAnimatedSprite();
    animationFinished(char const*);
    animationFinishedO(cocos2d::CCObject*);
    cleanupSprite();
    createWithType(char const*);
    getActiveSpriteMode();
    getAnimManager();
    getAnimatedSprite();
    getDefaultAnimation();
    getDelegate();
    getNormalSprite();
    getSprite();
    initWithType(char const*);
    loadType(char const*);
    setAnimatedSprite(CCPartAnimSprite*);
    setDefaultAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setDelegate(AnimatedSpriteDelegate*);
    setNormalSprite(cocos2d::CCSprite*);
    setOpacity(unsigned char);
    setSprite(cocos2d::CCSprite*);
    switchToMode(spriteMode);
    ~CCAnimatedSprite();
};

#endif // _CCANIMATEDSPRITE_H_
