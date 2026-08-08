
#ifndef CCLIGHTFLASH_H_
#define CCLIGHTFLASH_H_

#include "cocos2d.h"

class CCLightFlash {
public:
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
