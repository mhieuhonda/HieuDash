#ifndef HIEUDASH_CCCOUNTDOWN_H_
#define HIEUDASH_CCCOUNTDOWN_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCCountdown : public cocos2d::CCNode {
public:
    CCCountdown();
    CCCountdown* create();
    bool init();
    void lapFinished();
    void setOpacity(unsigned char);
    startTimerWithSeconds(float, void (cocos2d::CCObject::*)(), cocos2d::CCNode*);
    ~CCCountdown();
};

#endif // HIEUDASH_CCCOUNTDOWN_H_
