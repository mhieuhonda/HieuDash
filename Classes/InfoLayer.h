#ifndef _INFOLAYER_H_
#define _INFOLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class InfoLayer {
public:
    InfoLayer();
    create(GJGameLevel*);
    init(GJGameLevel*);
    keyBackClicked();
    onClose();
    onMore();
    setupLevelInfo();
    ~InfoLayer();
};

#endif // _INFOLAYER_H_
