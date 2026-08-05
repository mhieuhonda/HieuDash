#ifndef HIEUDASH_STATSLAYER_H_
#define HIEUDASH_STATSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class StatsLayer : public cocos2d::CCLayer {
public:
    StatsLayer();
    StatsLayer* create();
    void customSetup();
    ~StatsLayer();
};

#endif // HIEUDASH_STATSLAYER_H_
