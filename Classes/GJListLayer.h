#ifndef _GJLISTLAYER_H_
#define _GJLISTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GJListLayer {
public:
    GJListLayer();
    create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float);
    init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float);
    ~GJListLayer();
};

#endif // _GJLISTLAYER_H_
