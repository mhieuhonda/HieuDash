#ifndef _COLOREDSECTION_H_
#define _COLOREDSECTION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ColoredSection {
public:
    ColoredSection();
    create(cocos2d::_ccColor3B, int, int);
    getCol();
    getEndPos();
    getStartPos();
    init(cocos2d::_ccColor3B, int, int);
    setCol(cocos2d::_ccColor3B);
    setEndPos(int);
    setStartPos(int);
    ~ColoredSection();
};

#endif // _COLOREDSECTION_H_
