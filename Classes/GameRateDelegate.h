#ifndef HIEUDASH_GAMERATEDELEGATE_H_
#define HIEUDASH_GAMERATEDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameRateDelegate : public cocos2d::CCObject {
public:
    virtual ~GameRateDelegate() {}
    GameRateDelegate();
    void updateRate();
};

#endif // HIEUDASH_GAMERATEDELEGATE_H_
