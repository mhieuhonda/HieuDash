// ============================================================
// GJRateLevelLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJRATELEVELLAYER_H_
#define GJRATELEVELLAYER_H_

#include "cocos2d.h"
#include <string>

class GJRateLevelLayer {
public:
    virtual ~GJRateLevelLayer();
    virtual ~GJRateLevelLayer();
    virtual ~GJRateLevelLayer();

    void onClosePopup(UploadActionPopup*);
    void selectRating(cocos2d::CCObject*);
    void onToggleCoins(cocos2d::CCObject*);
    void setupRateInfo(std::string);
    void getStarsButton(int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float);
    void keyBackClicked();
    void onCustomButton(cocos2d::CCObject*);
    void rateInfoFailed(int, int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void createStatPillar(int, int, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, cocos2d::CCPoint, std::string);
    void rateInfoFinished(int, std::string);
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void init(GJGameLevel*);
    void create(GJGameLevel*);
    void onRate(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onFeature(cocos2d::CCObject*);

};

#endif // GJRATELEVELLAYER_H_
