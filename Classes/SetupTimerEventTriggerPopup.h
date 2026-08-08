
#ifndef SETUPTIMEREVENTTRIGGERPOPUP_H_
#define SETUPTIMEREVENTTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupTimerEventTriggerPopup {
public:
    virtual ~SetupTimerEventTriggerPopup();

    void init(TimerTriggerGameObject*, cocos2d::CCArray*);
    void create(TimerTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPTIMEREVENTTRIGGERPOPUP_H_
