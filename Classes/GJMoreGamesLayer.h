#ifndef HIEUDASH_GJMOREGAMESLAYER_H_
#define HIEUDASH_GJMOREGAMESLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJMoreGamesLayer : public cocos2d::CCLayer {
public:
    GJMoreGamesLayer();
    static GJMoreGamesLayer* create();
    void customSetup();
    ~GJMoreGamesLayer();
};

#endif // HIEUDASH_GJMOREGAMESLAYER_H_
