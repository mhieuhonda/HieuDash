#ifndef _BOOMLISTLAYER_H_
#define _BOOMLISTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class BoomListLayer {
public:
    BoomListLayer();
    create(BoomListView*, char const*);
    init(BoomListView*, char const*);
    ~BoomListLayer();
};

#endif // _BOOMLISTLAYER_H_
