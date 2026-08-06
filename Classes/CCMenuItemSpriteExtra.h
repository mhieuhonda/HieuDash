#ifndef HIEUDASH_CCMENUITEMSPRITEEXTRA_H_
#define HIEUDASH_CCMENUITEMSPRITEEXTRA_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
    CCMenuItemSpriteExtra();
    void activate();
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    int getClickSound();
    int getDarkenClick();
    int getOriginalScale();
    int getScaleVar();
    int getShouldAnimate();
    int getVolume();
    bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void selected();
    void setClickSound(char const*);
    void setDarkenClick(bool);
    void setOriginalScale(float);
    void setScaleVar(float);
    void setShouldAnimate(bool);
    void setSizeMult(float);
    void setVolume(float);
    void unselected();
    ~CCMenuItemSpriteExtra();
};

#endif // HIEUDASH_CCMENUITEMSPRITEEXTRA_H_
