
#ifndef CREATEMENUITEM_H_
#define CREATEMENUITEM_H_

#include "cocos2d.h"

class CreateMenuItem {
public:
    virtual ~CreateMenuItem();

    void init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));

};

#endif // CREATEMENUITEM_H_
