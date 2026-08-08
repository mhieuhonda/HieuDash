
#ifndef SETUPOBJECTTOGGLEPOPUP_H_
#define SETUPOBJECTTOGGLEPOPUP_H_

#include "cocos2d.h"

class SetupObjectTogglePopup {
public:
    virtual ~SetupObjectTogglePopup();

    void valueDidChange(int, float);
    void init(EffectGameObject*, cocos2d::CCArray*, bool);
    void create(EffectGameObject*, cocos2d::CCArray*, bool);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPOBJECTTOGGLEPOPUP_H_
