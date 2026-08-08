
#ifndef GROUPCOMMANDOBJECT2_H_
#define GROUPCOMMANDOBJECT2_H_

#include "cocos2d.h"

class GroupCommandObject2 {
public:
    GroupCommandObject2(GroupCommandObject2 const&);
    GroupCommandObject2();
    GroupCommandObject2(GroupCommandObject2 const&);
    GroupCommandObject2();

    void resetDelta(bool);
    void updateAction(int, float);
    void runMoveCommand(cocos2d::CCPoint, double, int, double, bool, bool, bool, bool, double, double);
    void runFollowCommand(double, double, double);
    void runRotateCommand(double, double, int, double, bool, int);
    void updateEffectAction(float, int);
    void runTransformCommand(double, int, double);
    void stepTransformCommand(float, bool, bool);
    void runPlayerFollowCommand(double, double, int, double, double);
    void step(float);
    void reset();

};

#endif // GROUPCOMMANDOBJECT2_H_
