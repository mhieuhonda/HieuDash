// ============================================================
// VideoOptionsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef VIDEOOPTIONSLAYER_H_
#define VIDEOOPTIONSLAYER_H_

#include "cocos2d.h"
#include <string>

class VideoOptionsLayer {
public:
    virtual ~VideoOptionsLayer();
    virtual ~VideoOptionsLayer();
    virtual ~VideoOptionsLayer();

    void onAdvanced(cocos2d::CCObject*);
    void reloadMenu();
    void onBorderless(cocos2d::CCObject*);
    void onFullscreen(cocos2d::CCObject*);
    void keyBackClicked();
    void onBorderlessFix(cocos2d::CCObject*);
    void onResolutionNext(cocos2d::CCObject*);
    void onResolutionPrev(cocos2d::CCObject*);
    void toggleResolution();
    void updateResolution(int);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float, bool, cocos2d::CCArray*);
    void onTextureQualityNext(cocos2d::CCObject*);
    void onTextureQualityPrev(cocos2d::CCObject*);
    void updateTextureQuality(int);
    void init();
    void create();
    void onInfo(cocos2d::CCObject*);
    void onApply(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // VIDEOOPTIONSLAYER_H_
