#ifndef _LEVELPAGE_H_
#define _LEVELPAGE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelPage {
public:
    LevelPage();
    create(GJGameLevel*);
    init(GJGameLevel*);
    onPlay();
    ~LevelPage();
};

#endif // _LEVELPAGE_H_
