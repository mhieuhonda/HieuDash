// ============================================================
// CCMouseDispatcher.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMOUSEDISPATCHER_H_
#define COCOS2D_CCMOUSEDISPATCHER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMouseDispatcher {
public:
    CCMouseDispatcher();
    CCMouseDispatcher();

    virtual ~CCMouseDispatcher();
    virtual ~CCMouseDispatcher();
    virtual ~CCMouseDispatcher();

    void addDelegate(cocos2d::CCMouseDelegate*);
    void removeDelegate(cocos2d::CCMouseDelegate*);
    void forceAddDelegate(cocos2d::CCMouseDelegate*);
    void dispatchScrollMSG(float, float);
    void forceRemoveDelegate(cocos2d::CCMouseDelegate*);

};

} // namespace cocos2d

#endif // COCOS2D_CCMOUSEDISPATCHER_H_
