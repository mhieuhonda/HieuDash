#ifndef HIEUDASH_MENUGAMELAYER_H_
#define HIEUDASH_MENUGAMELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class MenuGameLayer : public cocos2d::CCLayer {
public:
    MenuGameLayer();
    static MenuGameLayer* create();
    bool init();
    void tryJump();
    void update(float);
    ~MenuGameLayer();
};

#endif // HIEUDASH_MENUGAMELAYER_H_
