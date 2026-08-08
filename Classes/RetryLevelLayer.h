// ============================================================
// RetryLevelLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef RETRYLEVELLAYER_H_
#define RETRYLEVELLAYER_H_

#include "cocos2d.h"

class RetryLevelLayer {
public:
    virtual ~RetryLevelLayer();
    virtual ~RetryLevelLayer();
    virtual ~RetryLevelLayer();

    void getEndText();
    void customSetup();
    void onEveryplay(cocos2d::CCObject*);
    void onFullVersion(cocos2d::CCObject*);
    void keyBackClicked();
    void onRewardedVideo(cocos2d::CCObject*);
    void enterAnimFinished();
    void setupLastProgress();
    void rewardedVideoFinished();
    void shouldOffsetRewardCurrency();
    void keyUp(cocos2d::enumKeyCodes, double);
    void create();
    void onMenu(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onReplay(cocos2d::CCObject*);
    void showLayer(bool);

};

#endif // RETRYLEVELLAYER_H_
