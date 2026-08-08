// ============================================================
// CCTouchDispatcher.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTOUCHDISPATCHER_H_
#define COCOS2D_CCTOUCHDISPATCHER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTouchDispatcher {
public:
    virtual ~CCTouchDispatcher();
    virtual ~CCTouchDispatcher();
    virtual ~CCTouchDispatcher();

    void findHandler(cocos2d::CCTouchDelegate*);
    void findHandler(cocos2d::CCArray*, cocos2d::CCTouchDelegate*);
    void setPriority(int, cocos2d::CCTouchDelegate*);
    void touchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*);
    void touchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*);
    void touchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*);
    void removeDelegate(cocos2d::CCTouchDelegate*);
    void forceAddHandler(cocos2d::CCTouchHandler*, cocos2d::CCArray*);
    void isDispatchEvents();
    void isUsingForcePrio();
    void touchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*);
    void rearrangeHandlers(cocos2d::CCArray*);
    void registerForcePrio(cocos2d::CCObject*, int);
    void setDispatchEvents(bool);
    void decrementForcePrio(int);
    void incrementForcePrio(int);
    void removeAllDelegates();
    void addStandardDelegate(cocos2d::CCTouchDelegate*, int);
    void addTargetedDelegate(cocos2d::CCTouchDelegate*, int, bool);
    void forceRemoveDelegate(cocos2d::CCTouchDelegate*);
    void unregisterForcePrio(cocos2d::CCObject*);
    void addPrioTargetedDelegate(cocos2d::CCTouchDelegate*, int, bool);
    void forceRemoveAllDelegates();
    void init();
    void touches(cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int);

};

} // namespace cocos2d

#endif // COCOS2D_CCTOUCHDISPATCHER_H_
