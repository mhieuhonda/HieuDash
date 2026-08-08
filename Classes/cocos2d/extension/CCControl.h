// ============================================================
// CCControl.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROL_H_
#define COCOS2D_EXTENSION_CCCONTROL_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControl {
public:
    CCControl();
    CCControl();

    virtual ~CCControl();
    virtual ~CCControl();
    virtual ~CCControl();

    void isSelected();
    void setEnabled(bool);
    void needsLayout();
    void setSelected(bool);
    void isHighlighted();
    void isTouchInside(cocos2d::CCTouch*);
    void setHighlighted(bool);
    void getTouchLocation(cocos2d::CCTouch*);
    void hasVisibleParents();
    void isOpacityModifyRGB();
    void setOpacityModifyRGB(bool);
    void addHandleOfControlEvent(int, unsigned int);
    void getHandleOfControlEvent(unsigned int);
    void removeHandleOfControlEvent(unsigned int);
    void dispatchListforControlEvent(unsigned int);
    void registerWithTouchDispatcher();
    void sendActionsForControlEvents(unsigned int);
    void addTargetWithActionForControlEvent(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);
    void addTargetWithActionForControlEvents(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);
    void removeTargetWithActionForControlEvent(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);
    void removeTargetWithActionForControlEvents(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);
    void init();
    void create();
    void onExit();
    void onEnter();
    void isEnabled();

protected:
    bool m_enabled;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROL_H_
