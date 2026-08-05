#ifndef HIEUDASH_CCLIGHTFLASH_H_
#define HIEUDASH_CCLIGHTFLASH_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCLightFlash : public cocos2d::CCNode {
public:
    CCLightFlash();
    void cleanupFlash();
    CCLightFlash* create();
    void fadeAndRemove();
    int getFlashP();
    int getFlashZ();
    bool init();
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
    void removeLights();
    void setFlashP(cocos2d::CCNode*);
    void setFlashZ(int);
    void showFlash();
    ~CCLightFlash();
};

#endif // HIEUDASH_CCLIGHTFLASH_H_
