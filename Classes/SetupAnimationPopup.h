// ============================================================
// SetupAnimationPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPANIMATIONPOPUP_H_
#define SETUPANIMATIONPOPUP_H_

#include "cocos2d.h"

class SetupAnimationPopup {
public:
    virtual ~SetupAnimationPopup();
    virtual ~SetupAnimationPopup();
    virtual ~SetupAnimationPopup();

    void textChanged(CCTextInputNode*);
    void updateTargetID();
    void onTargetIDArrow(cocos2d::CCObject*);
    void updateAnimationID();
    void onAnimationIDArrow(cocos2d::CCObject*);
    void determineStartValues();
    void updateTextInputLabel();
    void updateAnimationTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPANIMATIONPOPUP_H_
