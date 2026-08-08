// ============================================================
// GJFollowCommandLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJFOLLOWCOMMANDLAYER_H_
#define GJFOLLOWCOMMANDLAYER_H_

#include "cocos2d.h"

class GJFollowCommandLayer {
public:
    virtual ~GJFollowCommandLayer();
    virtual ~GJFollowCommandLayer();
    virtual ~GJFollowCommandLayer();

    void updateXMod();
    void updateYMod();
    void textChanged(CCTextInputNode*);
    void sliderChanged(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void onUpdateGroupID(cocos2d::CCObject*);
    void updateXModLabel();
    void updateYModLabel();
    void onUpdateGroupID2(cocos2d::CCObject*);
    void sliderXModChanged(cocos2d::CCObject*);
    void sliderYModChanged(cocos2d::CCObject*);
    void updateTargetGroupID();
    void determineStartValues();
    void updateTargetGroupID2();
    void updateTextInputLabel();
    void updateTextInputLabel2();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // GJFOLLOWCOMMANDLAYER_H_
