#ifndef _CCCIRCLEWAVE_H_
#define _CCCIRCLEWAVE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCCircleWave {
public:
    CCCircleWave();
    baseSetup(float);
    create(float, float, float, bool);
    draw();
    followObject(cocos2d::CCNode*);
    getCircleMode();
    getColor();
    getLineWidth();
    getOpacity();
    getOpacityMod();
    getPosition();
    getRadius();
    getWidth();
    init(float, float, float, bool);
    setCircleMode(CircleMode);
    setColor(cocos2d::_ccColor3B);
    setLineWidth(int);
    setOpacity(float);
    setOpacityMod(float);
    setPosition(cocos2d::CCPoint);
    setRadius(float);
    setWidth(float);
    updatePosition();
    updateTweenAction(float, char const*);
    ~CCCircleWave();
};

#endif // _CCCIRCLEWAVE_H_
