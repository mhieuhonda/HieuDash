#ifndef HIEUDASH_CREATEMENUITEM_H_
#define HIEUDASH_CREATEMENUITEM_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CreateMenuItem : public cocos2d::CCMenuItemSprite {
public:
    CreateMenuItem();
    create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    int getObjectFrame();
    init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void setObjectFrame(std::string);
    ~CreateMenuItem();
};

#endif // HIEUDASH_CREATEMENUITEM_H_
