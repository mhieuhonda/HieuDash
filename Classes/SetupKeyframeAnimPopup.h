
#ifndef SETUPKEYFRAMEANIMPOPUP_H_
#define SETUPKEYFRAMEANIMPOPUP_H_

#include "cocos2d.h"

class SetupKeyframeAnimPopup {
public:
    virtual ~SetupKeyframeAnimPopup();

    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPKEYFRAMEANIMPOPUP_H_
