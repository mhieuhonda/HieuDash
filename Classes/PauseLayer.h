// ============================================================
// PauseLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PAUSELAYER_H_
#define PAUSELAYER_H_

#include "cocos2d.h"
#include <string>

class PauseLayer : public cocos2d::CCLayer {
public:
    virtual ~PauseLayer();
    virtual ~PauseLayer();
    virtual ~PauseLayer();

    void onSettings(cocos2d::CCObject*);
    void customSetup();
    void onNormalMode(cocos2d::CCObject*);
    void onRestartFull(cocos2d::CCObject*);
    void tryShowBanner(float);
    void keyBackClicked() override;
    void onPracticeMode(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onRecordReplays(cocos2d::CCObject*);
    void sfxSliderChanged(cocos2d::CCObject*);
    void setupProgressBars();
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void musicSliderChanged(cocos2d::CCObject*);
    void init(bool) override;
    void keyUp(cocos2d::enumKeyCodes, double);
    void create(bool);
    void goEdit();
    void onEdit(cocos2d::CCObject*);
    void onHelp(cocos2d::CCObject*);
    void onQuit(cocos2d::CCObject*);
    void onTime(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void tryQuit(cocos2d::CCObject*);
    void onReplay(cocos2d::CCObject*);
    void onResume(cocos2d::CCObject*);
    void onRestart(cocos2d::CCObject*);
    void onTryEdit(cocos2d::CCObject*);

};

#endif // PAUSELAYER_H_
