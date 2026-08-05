#ifndef _SONGCELL_H_
#define _SONGCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SongCell {
public:
    SongCell(char const*, float, float);
    draw();
    init();
    loadFromObject(SongObject*);
    onClick();
    updateBGColor(int);
    ~SongCell();
};

#endif // _SONGCELL_H_
