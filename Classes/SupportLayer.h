#ifndef HIEUDASH_SUPPORTLAYER_H_
#define HIEUDASH_SUPPORTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SupportLayer : public cocos2d::CCLayer {
public:
    SupportLayer();
    static SupportLayer* create();
    void customSetup();
    void exitLayer();
    void onCocos2d();
    void onEmail();
    void onRobTop();
    ~SupportLayer();
};

#endif // HIEUDASH_SUPPORTLAYER_H_
