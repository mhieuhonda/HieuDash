// ============================================================
// RateStarsLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef RATESTARSLAYER_H_
#define RATESTARSLAYER_H_

#include "cocos2d.h"

class RateStarsLayer {
public:
    virtual ~RateStarsLayer();
    virtual ~RateStarsLayer();
    virtual ~RateStarsLayer();

    void onClosePopup(UploadActionPopup*);
    void selectRating(cocos2d::CCObject*);
    void onToggleCoins(cocos2d::CCObject*);
    void getStarsButton(int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float);
    void keyBackClicked();
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void init(int, bool, bool);
    void create(int, bool, bool);
    void onRate(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onFeature(cocos2d::CCObject*);

};

#endif // RATESTARSLAYER_H_
