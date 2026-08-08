// ============================================================
// SetupSFXPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPSFXPOPUP_H_
#define SETUPSFXPOPUP_H_

#include "cocos2d.h"

class SetupSFXPopup {
public:
    virtual ~SetupSFXPopup();
    virtual ~SetupSFXPopup();
    virtual ~SetupSFXPopup();

    void onBrowseSFX(cocos2d::CCObject*);
    void pageChanged();
    void onPlusButton(cocos2d::CCObject*);
    void updateLength();
    void getActiveSFXID();
    void valueDidChange(int, float);
    void createSFXWidget();
    void overridePlaySFX(SFXInfoObject*);
    void sfxBrowserClosed(SFXBrowser*);
    void sfxObjectSelected(SFXInfoObject*);
    void init(SFXTriggerGameObject*, cocos2d::CCArray*);
    void create(SFXTriggerGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

protected:
    int m_activeSFXID;

};

#endif // SETUPSFXPOPUP_H_
