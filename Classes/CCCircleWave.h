
#ifndef CCCIRCLEWAVE_H_
#define CCCIRCLEWAVE_H_

#include "cocos2d.h"

class CCCircleWave {
public:
    virtual ~CCCircleWave();

    void setPosition(cocos2d::CCPoint const&);
    void followObject(cocos2d::CCNode*, bool);
    void updatePosition(float);
    void updateTweenAction(float, char const*);
    void removeMeAndCleanup();
    void draw();
    void init(float, float, float, bool, bool);
    void create(float, float, float, bool);
    void create(float, float, float, bool, bool);
    void baseSetup(float);

protected:
    cocos2d::CCPoint m_position;

};

#endif // CCCIRCLEWAVE_H_
