// ============================================================
// OptionsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef OPTIONSLAYER_H_
#define OPTIONSLAYER_H_

#include "cocos2d.h"
#include <string>

class OptionsLayer : public cocos2d::CCLayer {
public:
    virtual ~OptionsLayer();
    virtual ~OptionsLayer();
    virtual ~OptionsLayer();

    void customSetup();
    void layerHidden();
    void onMenuMusic(cocos2d::CCObject*);
    void onProgressBar(cocos2d::CCObject*);
    void onSecretVault(cocos2d::CCObject*);
    void onSoundtracks(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onRecordReplays(cocos2d::CCObject*);
    void tryEnableRecord();
    void sfxSliderChanged(cocos2d::CCObject*);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void musicSliderChanged(cocos2d::CCObject*);
    void create();
    void onHelp(cocos2d::CCObject*);
    void onRate(cocos2d::CCObject*);
    void onVideo(cocos2d::CCObject*);
    void exitLayer();
    void onAccount(cocos2d::CCObject*);
    void onOptions(cocos2d::CCObject*);
    void onSupport(cocos2d::CCObject*);

};

#endif // OPTIONSLAYER_H_
