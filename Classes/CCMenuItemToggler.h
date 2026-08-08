// ============================================================
// CCMenuItemToggler.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CCMENUITEMTOGGLER_H_
#define CCMENUITEMTOGGLER_H_

#include "cocos2d.h"

class CCMenuItemToggler {
public:
    virtual ~CCMenuItemToggler();
    virtual ~CCMenuItemToggler();
    virtual ~CCMenuItemToggler();

    void activeItem();
    void setEnabled(bool);
    void unselected();
    void normalTouch(cocos2d::CCObject*);
    void setSizeMult(float);
    void selectedTouch(cocos2d::CCObject*);
    void init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void toggle(bool);
    void activate();
    void selected();

};

#endif // CCMENUITEMTOGGLER_H_
