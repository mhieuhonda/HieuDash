#ifndef _CCCOUNTDOWN_H_
#define _CCCOUNTDOWN_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCCountdown {
public:
    CCCountdown();
    create();
    init();
    lapFinished();
    setOpacity(unsigned char);
    startTimerWithSeconds(float, void (cocos2d::CCObject::*)(), cocos2d::CCNode*);
    ~CCCountdown();
};

#endif // _CCCOUNTDOWN_H_
