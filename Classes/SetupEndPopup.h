// ============================================================
// SetupEndPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPENDPOPUP_H_
#define SETUPENDPOPUP_H_

#include "cocos2d.h"

class SetupEndPopup {
public:
    virtual ~SetupEndPopup();
    virtual ~SetupEndPopup();
    virtual ~SetupEndPopup();

    void onReversed(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
    void onMultiActivate(cocos2d::CCObject*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void determineStartValues();
    void updateTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void onLockY(cocos2d::CCObject*);

};

#endif // SETUPENDPOPUP_H_
