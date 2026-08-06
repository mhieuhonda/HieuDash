#ifndef HIEUDASH_BOOMLISTLAYER_H_
#define HIEUDASH_BOOMLISTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class BoomListLayer : public cocos2d::CCLayer {
public:
    BoomListLayer();
    static BoomListLayer* create(BoomListView*, char const*);
    bool init(BoomListView*, char const*);
    ~BoomListLayer();
};

#endif // HIEUDASH_BOOMLISTLAYER_H_
