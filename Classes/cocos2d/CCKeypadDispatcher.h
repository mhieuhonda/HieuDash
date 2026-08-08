// ============================================================
// CCKeypadDispatcher.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCKEYPADDISPATCHER_H_
#define COCOS2D_CCKEYPADDISPATCHER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCKeypadDispatcher {
public:
    CCKeypadDispatcher();
    CCKeypadDispatcher();

    virtual ~CCKeypadDispatcher();
    virtual ~CCKeypadDispatcher();
    virtual ~CCKeypadDispatcher();

    void addDelegate(cocos2d::CCKeypadDelegate*);
    void removeDelegate(cocos2d::CCKeypadDelegate*);
    void forceAddDelegate(cocos2d::CCKeypadDelegate*);
    void dispatchKeypadMSG(cocos2d::ccKeypadMSGType);
    void forceRemoveDelegate(cocos2d::CCKeypadDelegate*);

};

} // namespace cocos2d

#endif // COCOS2D_CCKEYPADDISPATCHER_H_
