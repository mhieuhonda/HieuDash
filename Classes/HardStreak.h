
#ifndef HARDSTREAK_H_
#define HARDSTREAK_H_

#include "cocos2d.h"

class HardStreak : public cocos2d::CCNode {
public:
    virtual ~HardStreak();

    void firstSetup();
    void stopStroke();
    void resumeStroke();
    void updateStroke(float);
    void clearAboveXPos(float);
    void normalizeAngle(double);
    void clearBehindXPos(float);
    HardStreak* createDuplicate();
    void quadCornerOffset(cocos2d::CCPoint, cocos2d::CCPoint, float);
    void scheduleAutoUpdate();
    bool init();
    void reset();
    void create();
    void addPoint(cocos2d::CCPoint);

};

#endif // HARDSTREAK_H_
