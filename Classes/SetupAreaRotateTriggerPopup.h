
#ifndef SETUPAREAROTATETRIGGERPOPUP_H_
#define SETUPAREAROTATETRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupAreaRotateTriggerPopup {
public:
    virtual ~SetupAreaRotateTriggerPopup();

    void init(EnterEffectObject*, cocos2d::CCArray*);
    void create(EnterEffectObject*, cocos2d::CCArray*);

};

#endif // SETUPAREAROTATETRIGGERPOPUP_H_
