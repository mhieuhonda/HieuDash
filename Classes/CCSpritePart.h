#ifndef HIEUDASH_CCSPRITEPART_H_
#define HIEUDASH_CCSPRITEPART_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCSpritePart : public cocos2d::CCSprite {
public:
    int getBeingUsed();
    void hideInactive();
    void setBeingUsed(float);
};

#endif // HIEUDASH_CCSPRITEPART_H_
