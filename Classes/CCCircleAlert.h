#ifndef HIEUDASH_CCCIRCLEALERT_H_
#define HIEUDASH_CCCIRCLEALERT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCCircleAlert : public cocos2d::CCNode {
public:
    CCCircleAlert();
    CCCircleAlert* create(float, float, float);
    bool init(float, float, float);
    ~CCCircleAlert();
};

#endif // HIEUDASH_CCCIRCLEALERT_H_
