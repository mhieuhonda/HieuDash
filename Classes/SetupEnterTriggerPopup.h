
#ifndef SETUPENTERTRIGGERPOPUP_H_
#define SETUPENTERTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupEnterTriggerPopup {
public:
    virtual ~SetupEnterTriggerPopup();

    void onEnterType(cocos2d::CCObject*);
    void determineStartValues();
    void init(EnterEffectObject*, cocos2d::CCArray*);
    void create(EnterEffectObject*, cocos2d::CCArray*);

};

#endif // SETUPENTERTRIGGERPOPUP_H_
