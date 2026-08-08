// ============================================================
// CCTargetedTouchHandler.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTARGETEDTOUCHHANDLER_H_
#define COCOS2D_CCTARGETEDTOUCHHANDLER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTargetedTouchHandler {
public:
    virtual ~CCTargetedTouchHandler();
    virtual ~CCTargetedTouchHandler();
    virtual ~CCTargetedTouchHandler();

    void initWithDelegate(cocos2d::CCTouchDelegate*, int, bool);
    void getClaimedTouches();
    void isSwallowsTouches();
    void setSwallowsTouches(bool);
    void handlerWithDelegate(cocos2d::CCTouchDelegate*, int, bool);

};

} // namespace cocos2d

#endif // COCOS2D_CCTARGETEDTOUCHHANDLER_H_
