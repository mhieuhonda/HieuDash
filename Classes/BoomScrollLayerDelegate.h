#ifndef HIEUDASH_BOOMSCROLLLAYERDELEGATE_H_
#define HIEUDASH_BOOMSCROLLLAYERDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class BoomScrollLayerDelegate : public cocos2d::CCObject {
public:
    virtual ~BoomScrollLayerDelegate() {}
    BoomScrollLayerDelegate();
    void scrollLayerMoved(cocos2d::CCPoint);
    void scrollLayerScrolledToPage(BoomScrollLayer*, int);
    void scrollLayerScrollingStarted(BoomScrollLayer*);
};

#endif // HIEUDASH_BOOMSCROLLLAYERDELEGATE_H_
