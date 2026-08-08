// ============================================================
// CCMenu.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCMENU_H_
#define COCOS2D_CCMENU_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMenu {
public:
    virtual ~CCMenu();
    virtual ~CCMenu();
    virtual ~CCMenu();

    void setEnabled(bool);
    void removeChild(cocos2d::CCNode*, bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void itemForTouch(cocos2d::CCTouch*);
    void itemForTouch(cocos2d::CCTouch*, bool);
    void initWithArray(cocos2d::CCArray*);
    void createWithItem(cocos2d::CCMenuItem*);
    void createWithArray(cocos2d::CCArray*);
    void createWithItems(cocos2d::CCMenuItem*, std::__va_list);
    void alignItemsInRows(unsigned int, std::__va_list);
    void alignItemsInRows(unsigned int, ...);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void isOpacityModifyRGB();
    void setHandlerPriority(int);
    void alignItemsInColumns(unsigned int, std::__va_list);
    void alignItemsInColumns(unsigned int, ...);
    void setOpacityModifyRGB(bool);
    void alignItemsVertically();
    void giveMenuTouchPriority();
    void alignItemsHorizontally();
    void alignItemsInRowsWithArray(cocos2d::CCArray*);
    void registerWithTouchDispatcher();
    void alignItemsInColumnsWithArray(cocos2d::CCArray*);
    void alignItemsVerticallyWithPadding(float);
    void alignItemsHorizontallyWithPadding(float);
    void init();
    void create(cocos2d::CCMenuItem*, ...);
    void create();
    void onExit();
    void addChild(cocos2d::CCNode*);
    void addChild(cocos2d::CCNode*, int);
    void addChild(cocos2d::CCNode*, int, int);
    void isEnabled();

protected:
    bool m_enabled;

};

} // namespace cocos2d

#endif // COCOS2D_CCMENU_H_
