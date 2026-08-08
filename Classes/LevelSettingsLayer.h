
#ifndef LEVELSETTINGSLAYER_H_
#define LEVELSETTINGSLAYER_H_

#include "cocos2d.h"
#include <string>

class LevelSettingsLayer {
public:
    virtual ~LevelSettingsLayer();

    void onLiveEdit(cocos2d::CCObject*);
    void onSettings(cocos2d::CCObject*);
    void showPicker(ColorAction*);
    void textChanged(CCTextInputNode*);
    void onSelectFont(cocos2d::CCObject*);
    void onSelectMode(cocos2d::CCObject*);
    void onShowPicker(cocos2d::CCObject*);
    void onSelectSpeed(cocos2d::CCObject*);
    void keyBackClicked();
    void onGameplayMode(cocos2d::CCObject*);
    void onOptionToggle(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void selectArtClosed(SelectArtLayer*);
    void textInputClosed(CCTextInputNode*);
    void colorSelectClosed(cocos2d::CCNode*);
    void updateColorSprite(ColorChannelSprite*);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void updateColorSprites();
    void selectSettingClosed(SelectSettingLayer*);
    void updateGameplayModeButtons();
    void registerWithTouchDispatcher();
    void init(LevelSettingsObject*, LevelEditorLayer*);
    void onCol(cocos2d::CCObject*);
    void create(LevelSettingsObject*, LevelEditorLayer*);
    void onGArt(cocos2d::CCObject*);
    void onMode(cocos2d::CCObject*);
    void onBGArt(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onFGArt(cocos2d::CCObject*);
    void onSpeed(cocos2d::CCObject*);
    void onDisable(cocos2d::CCObject*);

};

#endif // LEVELSETTINGSLAYER_H_
