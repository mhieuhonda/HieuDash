// ============================================================
// GJColorSetupLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJCOLORSETUPLAYER_H_
#define GJCOLORSETUPLAYER_H_

#include "cocos2d.h"

class GJColorSetupLayer {
public:
    virtual ~GJColorSetupLayer();
    virtual ~GJColorSetupLayer();
    virtual ~GJColorSetupLayer();

    void keyBackClicked();
    void colorSelectClosed(cocos2d::CCNode*);
    void updateSpriteColor(ColorChannelSprite*, cocos2d::CCLabelBMFont*, int);
    void updateSpriteColors();
    void init(LevelSettingsObject*);
    void create(LevelSettingsObject*);
    void onPage(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onColor(cocos2d::CCObject*);
    void showPage(int);

};

#endif // GJCOLORSETUPLAYER_H_
