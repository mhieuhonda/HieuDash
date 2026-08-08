
#ifndef SETUPTOUCHTOGGLEPOPUP_H_
#define SETUPTOUCHTOGGLEPOPUP_H_

#include "cocos2d.h"

class SetupTouchTogglePopup {
public:
    virtual ~SetupTouchTogglePopup();

    void onHoldMode(cocos2d::CCObject*);
    void onTouchMode(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void onControlMode(cocos2d::CCObject*);
    void updateTargetID();
    void onDualTouchMode(cocos2d::CCObject*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void determineStartValues();
    void updateTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPTOUCHTOGGLEPOPUP_H_
