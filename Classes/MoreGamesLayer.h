#ifndef _MOREGAMESLAYER_H_
#define _MOREGAMESLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class MoreGamesLayer {
public:
    MoreGamesLayer();
    create();
    customSetup();
    updateListBGColor(cocos2d::_ccColor3B);
    ~MoreGamesLayer();
};

#endif // _MOREGAMESLAYER_H_
