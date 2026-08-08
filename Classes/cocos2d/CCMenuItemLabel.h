// ============================================================
// CCMenuItemLabel.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMENUITEMLABEL_H_
#define COCOS2D_CCMENUITEMLABEL_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenuItemLabel {
public:
    virtual ~CCMenuItemLabel();
    virtual ~CCMenuItemLabel();
    virtual ~CCMenuItemLabel();

    void setEnabled(bool);
    void unselected();
    void initWithLabel(cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void getDisabledColor();
    void setDisabledColor(cocos2d::_ccColor3B const&);
    void create(cocos2d::CCNode*);
    void create(cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void activate();
    void getLabel();
    void selected();
    void setLabel(cocos2d::CCNode*);
    void setString(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCMENUITEMLABEL_H_
