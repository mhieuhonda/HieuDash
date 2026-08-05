#ifndef _SPINOR_H_
#define _SPINOR_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class Spinor {
public:
    Spinor(float);
    Spinor(float, float);
    angle();
    slerp(Spinor const&, Spinor const&, float);
};

#endif // _SPINOR_H_
