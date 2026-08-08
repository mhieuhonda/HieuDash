
#ifndef SETUPCAMERAEDGEPOPUP_H_
#define SETUPCAMERAEDGEPOPUP_H_

#include "cocos2d.h"

class SetupCameraEdgePopup {
public:
    virtual ~SetupCameraEdgePopup();

    void textChanged(CCTextInputNode*);
    void onCameraEdge(cocos2d::CCObject*);
    void onUnlockEdge(cocos2d::CCObject*);
    void updateTargetID();
    void onTargetIDArrow(cocos2d::CCObject*);
    void determineStartValues();
    void updateTextInputLabel();
    void init(CameraTriggerGameObject*, cocos2d::CCArray*);
    void create(CameraTriggerGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPCAMERAEDGEPOPUP_H_
