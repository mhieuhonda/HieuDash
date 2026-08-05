#ifndef _STATSCELL_H_
#define _STATSCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class StatsCell {
public:
    StatsCell(char const*, float, float);
    draw();
    getTitleFromKey(char const*);
    init();
    loadFromObject(StatsObject*);
    updateBGColor(int);
    ~StatsCell();
};

#endif // _STATSCELL_H_
