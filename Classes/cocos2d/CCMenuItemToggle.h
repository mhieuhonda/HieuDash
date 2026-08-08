// ============================================================
// CCMenuItemToggle.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMENUITEMTOGGLE_H_
#define COCOS2D_CCMENUITEMTOGGLE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenuItemToggle {
public:
    virtual ~CCMenuItemToggle();
    virtual ~CCMenuItemToggle();
    virtual ~CCMenuItemToggle();

    void addSubItem(cocos2d::CCMenuItem*);
    void setEnabled(bool);
    void unselected();
    void getSubItems();
    void setSubItems(cocos2d::CCArray*);
    void initWithItem(cocos2d::CCMenuItem*);
    void selectedItem();
    void initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenuItem*, std::__va_list);
    void createWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenuItem*, ...);
    void createWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCArray*);
    void getSelectedIndex();
    void setSelectedIndex(unsigned int);
    void create(cocos2d::CCMenuItem*);
    void create();
    void activate();
    void selected();

};

} // namespace cocos2d

#endif // COCOS2D_CCMENUITEMTOGGLE_H_
