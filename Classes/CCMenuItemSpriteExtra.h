#ifndef _CCMENUITEMSPRITEEXTRA_H_
#define _CCMENUITEMSPRITEEXTRA_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCMenuItemSpriteExtra {
public:
    CCMenuItemSpriteExtra();
    activate();
    create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    getClickSound();
    getDarkenClick();
    getOriginalScale();
    getScaleVar();
    getShouldAnimate();
    getVolume();
    init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    selected();
    setClickSound(char const*);
    setDarkenClick(bool);
    setOriginalScale(float);
    setScaleVar(float);
    setShouldAnimate(bool);
    setSizeMult(float);
    setVolume(float);
    unselected();
    ~CCMenuItemSpriteExtra();
};

#endif // _CCMENUITEMSPRITEEXTRA_H_
