// ============================================================
// CCLightFlash.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CCLIGHTFLASH_H_
#define CCLIGHTFLASH_H_

#include "cocos2d.h"

class CCLightFlash {
public:
    virtual ~CCLightFlash();
    virtual ~CCLightFlash();
    virtual ~CCLightFlash();

    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
    void cleanupFlash();
    void removeLights();
    void fadeAndRemove();
    void init();
    void create();
    void showFlash();

};

#endif // CCLIGHTFLASH_H_
