// ============================================================
// CCMenuItem.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCMENUITEM_H_
#define COCOS2D_CCMENUITEM_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenuItem {
public:
    virtual ~CCMenuItem();
    virtual ~CCMenuItem();
    virtual ~CCMenuItem();

    void isSelected();
    void setEnabled(bool);
    void unselected();
    void initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void registerScriptTapHandler(int);
    void unregisterScriptTapHandler();
    void rect();
    void create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void create();
    void activate();
    void selected();
    void isEnabled();
    void setTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));

protected:
    bool m_enabled;

};

} // namespace cocos2d

#endif // COCOS2D_CCMENUITEM_H_
