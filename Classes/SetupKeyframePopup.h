
#ifndef SETUPKEYFRAMEPOPUP_H_
#define SETUPKEYFRAMEPOPUP_H_

#include "cocos2d.h"

class SetupKeyframePopup {
public:
    virtual ~SetupKeyframePopup();

    void onTimeMode(cocos2d::CCObject*);
    void onCustomButton(cocos2d::CCObject*);
    void valueDidChange(int, float);
    void refreshPreviewArt();
    void updateTimeModeButtons();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*);
    void create(KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPKEYFRAMEPOPUP_H_
