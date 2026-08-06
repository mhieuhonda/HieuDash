#ifndef HIEUDASH_EXTENDEDLAYER_H_
#define HIEUDASH_EXTENDEDLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ExtendedLayer : public cocos2d::CCLayer {
public:
    ExtendedLayer();
    static ExtendedLayer* create();
    int getDelegate();
    bool init();
    void setDelegate(BoomScrollLayerDelegate*);
    void setPosition(cocos2d::CCPoint const&);
    ~ExtendedLayer();
};

#endif // HIEUDASH_EXTENDEDLAYER_H_
