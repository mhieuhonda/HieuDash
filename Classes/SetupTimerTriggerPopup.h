
#ifndef SETUPTIMERTRIGGERPOPUP_H_
#define SETUPTIMERTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupTimerTriggerPopup {
public:
    virtual ~SetupTimerTriggerPopup();

    void init(TimerTriggerGameObject*, cocos2d::CCArray*);
    void create(TimerTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPTIMERTRIGGERPOPUP_H_
