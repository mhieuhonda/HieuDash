#ifndef _LEVELUPDATEDELEGATE_H_
#define _LEVELUPDATEDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelUpdateDelegate {
public:
    LevelUpdateDelegate();
    levelUpdateFailed(int);
    levelUpdateFinished(GJGameLevel*, UpdateResponse);
};

#endif // _LEVELUPDATEDELEGATE_H_
