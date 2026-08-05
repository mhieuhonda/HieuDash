#ifndef _MENUGAMELAYER_H_
#define _MENUGAMELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class MenuGameLayer {
public:
    MenuGameLayer();
    create();
    init();
    tryJump();
    update(float);
    ~MenuGameLayer();
};

#endif // _MENUGAMELAYER_H_
