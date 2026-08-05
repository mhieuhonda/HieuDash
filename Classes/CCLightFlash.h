#ifndef _CCLIGHTFLASH_H_
#define _CCLIGHTFLASH_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCLightFlash {
public:
    CCLightFlash();
    cleanupFlash();
    create();
    fadeAndRemove();
    getFlashP();
    getFlashZ();
    init();
    playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
    removeLights();
    setFlashP(cocos2d::CCNode*);
    setFlashZ(int);
    showFlash();
    ~CCLightFlash();
};

#endif // _CCLIGHTFLASH_H_
