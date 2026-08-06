#ifndef HIEUDASH_MOREGAMESLAYER_H_
#define HIEUDASH_MOREGAMESLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class MoreGamesLayer : public cocos2d::CCLayer {
public:
    MoreGamesLayer();
    static MoreGamesLayer* create();
    void customSetup();
    void updateListBGColor(cocos2d::_ccColor3B);
    ~MoreGamesLayer();
};

#endif // HIEUDASH_MOREGAMESLAYER_H_
