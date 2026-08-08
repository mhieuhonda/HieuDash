
#ifndef SETUPTIMERCONTROLTRIGGERPOPUP_H_
#define SETUPTIMERCONTROLTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupTimerControlTriggerPopup {
public:
    virtual ~SetupTimerControlTriggerPopup();

    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(TimerTriggerGameObject*, cocos2d::CCArray*);
    void create(TimerTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPTIMERCONTROLTRIGGERPOPUP_H_
