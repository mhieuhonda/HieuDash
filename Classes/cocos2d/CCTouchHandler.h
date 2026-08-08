// ============================================================
// CCTouchHandler.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTOUCHHANDLER_H_
#define COCOS2D_CCTOUCHHANDLER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTouchHandler {
public:
    virtual ~CCTouchHandler();
    virtual ~CCTouchHandler();
    virtual ~CCTouchHandler();

    void getDelegate();
    void getPriority();
    void setDelegate(cocos2d::CCTouchDelegate*);
    void setPriority(int);
    void initWithDelegate(cocos2d::CCTouchDelegate*, int);
    void getEnabledSelectors();
    void handlerWithDelegate(cocos2d::CCTouchDelegate*, int);
    void setEnalbedSelectors(int);

};

} // namespace cocos2d

#endif // COCOS2D_CCTOUCHHANDLER_H_
