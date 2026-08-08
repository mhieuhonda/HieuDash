
#ifndef CCMENUITEMSPRITEEXTRA_H_
#define CCMENUITEMSPRITEEXTRA_H_

#include "cocos2d.h"

class CCMenuItemSpriteExtra {
public:
    virtual ~CCMenuItemSpriteExtra();

    void unselected();
    void setSizeMult(float);
    void useAnimationType(MenuAnimationType);
    void init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void activate();
    void selected();

};

#endif // CCMENUITEMSPRITEEXTRA_H_
