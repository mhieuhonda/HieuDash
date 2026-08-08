
#ifndef SETUPAREATRANSFORMTRIGGERPOPUP_H_
#define SETUPAREATRANSFORMTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupAreaTransformTriggerPopup {
public:
    virtual ~SetupAreaTransformTriggerPopup();

    void init(EnterEffectObject*, cocos2d::CCArray*);
    void create(EnterEffectObject*, cocos2d::CCArray*);

};

#endif // SETUPAREATRANSFORMTRIGGERPOPUP_H_
