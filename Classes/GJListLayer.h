#ifndef HIEUDASH_GJLISTLAYER_H_
#define HIEUDASH_GJLISTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJListLayer : public cocos2d::CCLayer {
public:
    GJListLayer();
    static GJListLayer* create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float);
    bool init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float);
    ~GJListLayer();
};

#endif // HIEUDASH_GJLISTLAYER_H_
