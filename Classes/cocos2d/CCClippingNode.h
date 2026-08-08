// ============================================================
// CCClippingNode.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCCLIPPINGNODE_H_
#define COCOS2D_CCCLIPPINGNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCClippingNode {
public:
    CCClippingNode();
    CCClippingNode();

    virtual ~CCClippingNode();
    virtual ~CCClippingNode();
    virtual ~CCClippingNode();

    void setStencil(cocos2d::CCNode*);
    void setInverted(bool);
    void setAlphaThreshold(float);
    void onExitTransitionDidStart();
    void onEnterTransitionDidFinish();
    void init(cocos2d::CCNode*);
    void init();
    void visit();
    void create(cocos2d::CCNode*);
    void create();
    void onExit();
    void onEnter();
    void getStencil()) const;
    void isInverted()) const;
    void getAlphaThreshold()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCCLIPPINGNODE_H_
