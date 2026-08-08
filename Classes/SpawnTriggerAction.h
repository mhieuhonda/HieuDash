
#ifndef SPAWNTRIGGERACTION_H_
#define SPAWNTRIGGERACTION_H_

#include "cocos2d.h"

class SpawnTriggerAction : public cocos2d::CCObject {
public:
    static SpawnTriggerAction* create();
    void isFinished();
    void step(float);

};

#endif // SPAWNTRIGGERACTION_H_
