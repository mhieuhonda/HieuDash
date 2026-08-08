// ============================================================
// SetupCameraModePopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPCAMERAMODEPOPUP_H_
#define SETUPCAMERAMODEPOPUP_H_

#include "cocos2d.h"

class SetupCameraModePopup {
public:
    virtual ~SetupCameraModePopup();
    virtual ~SetupCameraModePopup();
    virtual ~SetupCameraModePopup();

    void onUnboundMode(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void updateCameraEasing();
    void updateCameraPadding();
    void determineStartValues();
    void onEditCameraSettings(cocos2d::CCObject*);
    void updateItemVisibility();
    void updateCameraEasingLabel();
    void updateCameraPaddingLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPCAMERAMODEPOPUP_H_
