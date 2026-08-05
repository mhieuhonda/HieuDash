#ifndef HIEUDASH_CCALERTCIRCLE_H_
#define HIEUDASH_CCALERTCIRCLE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCAlertCircle : public cocos2d::CCNode {
public:
    CCAlertCircle();
    CCAlertCircle* create();
    void draw();
    int getCircle();
    bool init();
    ~CCAlertCircle();
};

#endif // HIEUDASH_CCALERTCIRCLE_H_
