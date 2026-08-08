
#ifndef EDITTRIGGERSPOPUP_H_
#define EDITTRIGGERSPOPUP_H_

#include "cocos2d.h"

class EditTriggersPopup : public cocos2d::CCLayer {
public:
    virtual ~EditTriggersPopup();

    void determineStartValues();
    void init(EffectGameObject*, cocos2d::CCArray*) override;
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // EDITTRIGGERSPOPUP_H_
