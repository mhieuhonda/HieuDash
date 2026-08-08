// ============================================================
// CCCountdown.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CCCOUNTDOWN_H_
#define CCCOUNTDOWN_H_

#include "cocos2d.h"

class CCCountdown : public cocos2d::CCLabelTTF {
public:
    virtual ~CCCountdown();
    virtual ~CCCountdown();
    virtual ~CCCountdown();

    void setOpacity(unsigned char);
    void lapFinished();
    void startTimerWithSeconds(float, void (cocos2d::CCObject::*)(), cocos2d::CCNode*);
    void init() override;
    void create();

};

#endif // CCCOUNTDOWN_H_
