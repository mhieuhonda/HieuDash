#ifndef HIEUDASH_CCSCROLLLAYEREXTDELEGATE_H_
#define HIEUDASH_CCSCROLLLAYEREXTDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCScrollLayerExtDelegate : public cocos2d::CCObject {
public:
    virtual ~CCScrollLayerExtDelegate() {}
    CCScrollLayerExtDelegate();
    void scrollViewWillBeginDecelerating(CCScrollLayerExt*);
    void scrollViewDidEndDecelerating(CCScrollLayerExt*);
    void scrollViewDidEndMoving(CCScrollLayerExt*);
    void scrollViewTouchBegin(CCScrollLayerExt*);
    void scrollViewTouchEnd(CCScrollLayerExt*);
    void scrollViewTouchMoving(CCScrollLayerExt*);
};

#endif // HIEUDASH_CCSCROLLLAYEREXTDELEGATE_H_
