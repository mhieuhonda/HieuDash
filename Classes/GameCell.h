#ifndef HIEUDASH_GAMECELL_H_
#define HIEUDASH_GAMECELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameCell : public cocos2d::CCNode {
public:
    GameCell(char const*, float, float);
    void draw();
    bool init();
    void loadFromString(std::string);
    void onTouch();
    void updateBGColor(int);
    ~GameCell();
};

#endif // HIEUDASH_GAMECELL_H_
