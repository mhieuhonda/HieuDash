#ifndef HIEUDASH_SONGCELL_H_
#define HIEUDASH_SONGCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SongCell : public cocos2d::CCNode {
public:
    SongCell(char const*, float, float);
    void draw();
    bool init();
    void loadFromObject(SongObject*);
    void onClick();
    void updateBGColor(int);
    ~SongCell();
};

#endif // HIEUDASH_SONGCELL_H_
