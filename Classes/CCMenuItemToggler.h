#ifndef HIEUDASH_CCMENUITEMTOGGLER_H_
#define HIEUDASH_CCMENUITEMTOGGLER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCMenuItemToggler : public cocos2d::CCMenuItemSprite {
public:
    CCMenuItemToggler();
    void activate();
    void activeItem();
    create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    bool getIsActive();
    int getNormalButton();
    int getSelectedButton();
    init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void normalTouch();
    void selected();
    void selectedTouch();
    void setEnabled(bool);
    void toggle(bool);
    void unselected();
    ~CCMenuItemToggler();
};

#endif // HIEUDASH_CCMENUITEMTOGGLER_H_
