#ifndef HIEUDASH_SONGSLAYER_H_
#define HIEUDASH_SONGSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SongsLayer : public cocos2d::CCLayer {
public:
    SongsLayer();
    static SongsLayer* create();
    void customSetup();
    ~SongsLayer();
};

#endif // HIEUDASH_SONGSLAYER_H_
