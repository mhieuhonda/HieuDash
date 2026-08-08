// ============================================================
// GJPFollowCommandLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJPFOLLOWCOMMANDLAYER_H_
#define GJPFOLLOWCOMMANDLAYER_H_

#include "cocos2d.h"

class GJPFollowCommandLayer {
public:
    virtual ~GJPFollowCommandLayer();
    virtual ~GJPFollowCommandLayer();
    virtual ~GJPFollowCommandLayer();

    void updateXMod();
    void updateYMod();
    void textChanged(CCTextInputNode*);
    void sliderChanged(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void updateMaxSpeed();
    void onUpdateGroupID(cocos2d::CCObject*);
    void updateXModLabel();
    void updateYModLabel();
    void sliderXModChanged(cocos2d::CCObject*);
    void sliderYModChanged(cocos2d::CCObject*);
    void updateOffsetLabel();
    void updatePlayerOffset();
    void updateMaxSpeedLabel();
    void updateTargetGroupID();
    void determineStartValues();
    void updateTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // GJPFOLLOWCOMMANDLAYER_H_
