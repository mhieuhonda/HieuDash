#ifndef _CREATEMENUITEM_H_
#define _CREATEMENUITEM_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CreateMenuItem {
public:
    CreateMenuItem();
    create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    getObjectFrame();
    init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    setObjectFrame(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    ~CreateMenuItem();
};

#endif // _CREATEMENUITEM_H_
