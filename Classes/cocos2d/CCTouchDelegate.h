// ============================================================
// CCTouchDelegate.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTOUCHDELEGATE_H_
#define COCOS2D_CCTOUCHDELEGATE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTouchDelegate {
public:
    virtual ~CCTouchDelegate();
    virtual ~CCTouchDelegate();
    virtual ~CCTouchDelegate();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*);
    void getPreviousPriority();
    void setPreviousPriority(int);

};

} // namespace cocos2d

#endif // COCOS2D_CCTOUCHDELEGATE_H_
