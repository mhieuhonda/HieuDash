#ifndef HIEUDASH_LEVELPAGE_H_
#define HIEUDASH_LEVELPAGE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelPage : public cocos2d::CCNode {
public:
    LevelPage();
    LevelPage* create(GJGameLevel*);
    bool init(GJGameLevel*);
    void onPlay();
    ~LevelPage();
};

#endif // HIEUDASH_LEVELPAGE_H_
