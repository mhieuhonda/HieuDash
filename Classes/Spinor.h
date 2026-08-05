#ifndef HIEUDASH_SPINOR_H_
#define HIEUDASH_SPINOR_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class Spinor : public cocos2d::CCNode {
public:
    Spinor(float);
    Spinor(float, float);
    void angle();
    void slerp(Spinor const&, Spinor const&, float);
};

#endif // HIEUDASH_SPINOR_H_
