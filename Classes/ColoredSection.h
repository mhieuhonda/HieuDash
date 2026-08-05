#ifndef HIEUDASH_COLOREDSECTION_H_
#define HIEUDASH_COLOREDSECTION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ColoredSection : public cocos2d::CCLayerColor {
public:
    ColoredSection();
    ColoredSection* create(cocos2d::_ccColor3B, int, int);
    int getCol();
    int getEndPos();
    cocos2d::CCPoint getStartPos();
    bool init(cocos2d::_ccColor3B, int, int);
    void setCol(cocos2d::_ccColor3B);
    void setEndPos(int);
    void setStartPos(int);
    ~ColoredSection();
};

#endif // HIEUDASH_COLOREDSECTION_H_
