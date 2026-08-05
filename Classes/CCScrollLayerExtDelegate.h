#ifndef _CCSCROLLLAYEREXTDELEGATE_H_
#define _CCSCROLLLAYEREXTDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCScrollLayerExtDelegate {
public:
    CCScrollLayerExtDelegate();
    scrllViewWillBeginDecelerating(CCScrollLayerExt*);
    scrollViewDidEndDecelerating(CCScrollLayerExt*);
    scrollViewDidEndMoving(CCScrollLayerExt*);
    scrollViewTouchBegin(CCScrollLayerExt*);
    scrollViewTouchEnd(CCScrollLayerExt*);
    scrollViewTouchMoving(CCScrollLayerExt*);
};

#endif // _CCSCROLLLAYEREXTDELEGATE_H_
