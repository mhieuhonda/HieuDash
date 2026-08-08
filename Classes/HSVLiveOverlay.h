// ============================================================
// HSVLiveOverlay.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef HSVLIVEOVERLAY_H_
#define HSVLIVEOVERLAY_H_

#include "cocos2d.h"

class HSVLiveOverlay {
public:
    virtual ~HSVLiveOverlay();
    virtual ~HSVLiveOverlay();
    virtual ~HSVLiveOverlay();

    void hsvChanged(ConfigureHSVWidget*);
    void onSelectTab(cocos2d::CCObject*);
    void keyBackClicked();
    void toggleControls(bool);
    void createHSVWidget(int);
    void closeColorSelect(cocos2d::CCObject*);
    void determineStartValues();
    void init(GameObject*, cocos2d::CCArray*);
    void show();
    void create(GameObject*, cocos2d::CCArray*);

};

#endif // HSVLIVEOVERLAY_H_
