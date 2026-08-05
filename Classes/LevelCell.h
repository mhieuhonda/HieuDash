#ifndef HIEUDASH_LEVELCELL_H_
#define HIEUDASH_LEVELCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelCell : public cocos2d::CCNode {
public:
    LevelCell(char const*, float, float);
    void draw();
    bool init();
    void loadCustomLevelCell();
    void loadFromLevel(GJGameLevel*);
    void loadLocalLevelCell();
    void onClick();
    void updateBGColor(int);
    ~LevelCell();
};

#endif // HIEUDASH_LEVELCELL_H_
