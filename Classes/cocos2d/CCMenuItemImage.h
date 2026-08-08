// ============================================================
// CCMenuItemImage.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMENUITEMIMAGE_H_
#define COCOS2D_CCMENUITEMIMAGE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenuItemImage {
public:
    virtual ~CCMenuItemImage();
    virtual ~CCMenuItemImage();
    virtual ~CCMenuItemImage();

    void initWithNormalImage(char const*, char const*, char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void setNormalSpriteFrame(cocos2d::CCSpriteFrame*);
    void setDisabledSpriteFrame(cocos2d::CCSpriteFrame*);
    void setSelectedSpriteFrame(cocos2d::CCSpriteFrame*);
    void init();
    void create(char const*, char const*);
    void create(char const*, char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create(char const*, char const*, char const*);
    void create(char const*, char const*, char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create();

};

} // namespace cocos2d

#endif // COCOS2D_CCMENUITEMIMAGE_H_
