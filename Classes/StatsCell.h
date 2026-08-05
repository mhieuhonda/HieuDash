#ifndef HIEUDASH_STATSCELL_H_
#define HIEUDASH_STATSCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class StatsCell : public cocos2d::CCNode {
public:
    StatsCell(char const*, float, float);
    void draw();
    int getTitleFromKey(char const*);
    bool init();
    void loadFromObject(StatsObject*);
    void updateBGColor(int);
    ~StatsCell();
};

#endif // HIEUDASH_STATSCELL_H_
