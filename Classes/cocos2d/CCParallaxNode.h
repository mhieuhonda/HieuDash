// ============================================================
// CCParallaxNode.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPARALLAXNODE_H_
#define COCOS2D_CCPARALLAXNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCParallaxNode {
public:
    CCParallaxNode();
    CCParallaxNode();

    virtual ~CCParallaxNode();
    virtual ~CCParallaxNode();
    virtual ~CCParallaxNode();

    void removeChild(cocos2d::CCNode*, bool);
    void absolutePosition();
    void removeAllChildrenWithCleanup(bool);
    void visit();
    void create();
    void addChild(cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&, cocos2d::CCPoint const&);
    void addChild(cocos2d::CCNode*, unsigned int, int);

};

} // namespace cocos2d

#endif // COCOS2D_CCPARALLAXNODE_H_
