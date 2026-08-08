// ============================================================
// CCLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCLAYER_H_
#define COCOS2D_CCLAYER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLayer {
public:
    CCLayer();
    CCLayer();

    virtual ~CCLayer();
    virtual ~CCLayer();
    virtual ~CCLayer();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getTouchMode();
    void setTouchMode(cocos2d::ccTouchesMode);
    void didAccelerate(cocos2d::CCAcceleration*);
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*);
    void isMouseEnabled();
    void isTouchEnabled();
    void keyBackClicked();
    void keyMenuClicked();
    void isKeypadEnabled();
    void setMouseEnabled(bool);
    void setTouchEnabled(bool);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getTouchPriority();
    void setKeypadEnabled(bool);
    void setTouchPriority(int);
    void isKeyboardEnabled();
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*);
    void setKeyboardEnabled(bool);
    void getPreviousPriority();
    void setPreviousPriority(int);
    void isAccelerometerEnabled();
    void setAccelerometerEnabled(bool);
    void excuteScriptTouchHandler(int, cocos2d::CCSet*);
    void excuteScriptTouchHandler(int, cocos2d::CCTouch*);
    void setAccelerometerInterval(double);
    void onEnterTransitionDidFinish();
    void registerScriptTouchHandler(int, bool, int, bool);
    void registerScriptKeypadHandler(int);
    void registerWithTouchDispatcher();
    void unregisterScriptTouchHandler();
    void unregisterScriptKeypadHandler();
    void registerScriptAccelerateHandler(int);
    void unregisterScriptAccelerateHandler();
    void init();
    void create();
    void onExit();
    void keyDown(cocos2d::enumKeyCodes, double);
    void onEnter();

};

} // namespace cocos2d

#endif // COCOS2D_CCLAYER_H_
