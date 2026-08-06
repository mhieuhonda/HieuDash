#ifndef HIEUDASH_CCCIRCLEWAVE_H_
#define HIEUDASH_CCCIRCLEWAVE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCCircleWave : public cocos2d::CCNode {
public:
    CCCircleWave();
    void baseSetup(float);
    static CCCircleWave* create(float, float, float, bool);
    void draw();
    void followObject(cocos2d::CCNode*);
    int getCircleMode();
    int getColor();
    int getLineWidth();
    int getOpacity();
    int getOpacityMod();
    int getRadius();
    int getWidth();
    bool init(float, float, float, bool);
    void setCircleMode(CircleMode);
    void setColor(cocos2d::_ccColor3B);
    void setLineWidth(int);
    void setOpacity(float);
    void setOpacityMod(float);
    void setPosition(cocos2d::CCPoint);
    void setRadius(float);
    void setWidth(float);
    void updatePosition();
    void updateTweenAction(float, char const*);
    ~CCCircleWave();
};

#endif // HIEUDASH_CCCIRCLEWAVE_H_
