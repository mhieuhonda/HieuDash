#ifndef HIEUDASH_LISTCELL_H_
#define HIEUDASH_LISTCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ListCell : public cocos2d::CCNode {
public:
    ListCell(char const*, float, float);
    void draw();
    bool init();
    void loadFromObject(cocos2d::CCObject*, int, int, int);
    void updateBGColor(int);
    ~ListCell();
};

#endif // HIEUDASH_LISTCELL_H_
