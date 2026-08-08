
#ifndef SETUPPORTALPOPUP_H_
#define SETUPPORTALPOPUP_H_

#include "cocos2d.h"

class SetupPortalPopup {
public:
    virtual ~SetupPortalPopup();

    void onUnboundMode(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void keyBackClicked();
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

#endif // SETUPPORTALPOPUP_H_
