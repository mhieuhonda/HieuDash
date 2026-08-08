// ============================================================
// BoomScrollLayerDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef BOOMSCROLLLAYERDELEGATE_H_
#define BOOMSCROLLLAYERDELEGATE_H_

#include "cocos2d.h"

class BoomScrollLayerDelegate {
public:
    void scrollLayerMoved(cocos2d::CCPoint);
    void scrollLayerScrolledToPage(BoomScrollLayer*, int);
    void scrollLayerScrollingStarted(BoomScrollLayer*);
    void scrollLayerWillScrollToPage(BoomScrollLayer*, int);

};

#endif // BOOMSCROLLLAYERDELEGATE_H_
