#ifndef _SHARELEVELLAYER_H_
#define _SHARELEVELLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ShareLevelLayer {
public:
    ShareLevelLayer();
    create(GJGameLevel*);
    init(GJGameLevel*);
    keyBackClicked();
    onClose();
    onShare();
    ~ShareLevelLayer();
};

#endif // _SHARELEVELLAYER_H_
