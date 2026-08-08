// ============================================================
// CCMenuItemSprite.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMENUITEMSPRITE_H_
#define COCOS2D_CCMENUITEMSPRITE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenuItemSprite {
public:
    virtual ~CCMenuItemSprite();
    virtual ~CCMenuItemSprite();
    virtual ~CCMenuItemSprite();

    void setEnabled(bool);
    void unselected();
    void getNormalImage();
    void setNormalImage(cocos2d::CCNode*);
    void getDisabledImage();
    void getSelectedImage();
    void setDisabledImage(cocos2d::CCNode*);
    void setSelectedImage(cocos2d::CCNode*);
    void initWithNormalSprite(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void updateImagesVisibility();
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*);
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void selected();

};

} // namespace cocos2d

#endif // COCOS2D_CCMENUITEMSPRITE_H_
