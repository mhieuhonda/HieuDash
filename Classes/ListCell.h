#ifndef _LISTCELL_H_
#define _LISTCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ListCell {
public:
    ListCell(char const*, float, float);
    draw();
    init();
    loadFromObject(cocos2d::CCObject*, int, int, int);
    updateBGColor(int);
    ~ListCell();
};

#endif // _LISTCELL_H_
