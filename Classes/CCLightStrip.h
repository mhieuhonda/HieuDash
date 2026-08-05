#ifndef HIEUDASH_CCLIGHTSTRIP_H_
#define HIEUDASH_CCLIGHTSTRIP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCLightStrip : public cocos2d::CCNode {
public:
    CCLightStrip();
    CCLightStrip* create(float, float, float, float, float);
    void draw();
    int getColor();
    int getHeight();
    int getOpacity();
    int getWidth();
    bool init(float, float, float, float, float);
    void setColor(cocos2d::_ccColor3B);
    void setHeight(float);
    void setOpacity(float);
    void setWidth(float);
    void updateTweenAction(float, char const*);
    ~CCLightStrip();
};

#endif // HIEUDASH_CCLIGHTSTRIP_H_
