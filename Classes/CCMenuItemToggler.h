#ifndef _CCMENUITEMTOGGLER_H_
#define _CCMENUITEMTOGGLER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCMenuItemToggler {
public:
    CCMenuItemToggler();
    activate();
    activeItem();
    create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    getIsActive();
    getNormalButton();
    getSelectedButton();
    init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    normalTouch();
    selected();
    selectedTouch();
    setEnabled(bool);
    toggle(bool);
    unselected();
    ~CCMenuItemToggler();
};

#endif // _CCMENUITEMTOGGLER_H_
