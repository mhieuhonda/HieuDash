#ifndef _CCLIGHTSTRIP_H_
#define _CCLIGHTSTRIP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCLightStrip {
public:
    CCLightStrip();
    create(float, float, float, float, float);
    draw();
    getColor();
    getHeight();
    getOpacity();
    getWidth();
    init(float, float, float, float, float);
    setColor(cocos2d::_ccColor3B);
    setHeight(float);
    setOpacity(float);
    setWidth(float);
    updateTweenAction(float, char const*);
    ~CCLightStrip();
};

#endif // _CCLIGHTSTRIP_H_
