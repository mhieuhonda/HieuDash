#ifndef _LEVELDOWNLOADDELEGATE_H_
#define _LEVELDOWNLOADDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelDownloadDelegate {
public:
    LevelDownloadDelegate();
    levelDownloadFailed(int);
    levelDownloadFinished(GJGameLevel*);
};

#endif // _LEVELDOWNLOADDELEGATE_H_
