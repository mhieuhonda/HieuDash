// ============================================================
// CCControlSwitch.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLSWITCH_H_
#define COCOS2D_EXTENSION_CCCONTROLSWITCH_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlSwitch {
public:
    CCControlSwitch();
    CCControlSwitch();

    virtual ~CCControlSwitch();
    virtual ~CCControlSwitch();
    virtual ~CCControlSwitch();

    void setEnabled(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void locationFromTouch(cocos2d::CCTouch*);
    void initWithMaskSprite(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*);
    void initWithMaskSprite(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCLabelTTF*, cocos2d::CCLabelTTF*);
    void setOn(bool);
    void setOn(bool, bool);
    void create(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*);
    void create(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCLabelTTF*, cocos2d::CCLabelTTF*);

protected:
    bool m_enabled;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLSWITCH_H_
