// ============================================================
// DailyLevelNode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef DAILYLEVELNODE_H_
#define DAILYLEVELNODE_H_

#include "cocos2d.h"
#include <string>

class DailyLevelNode {
public:
    virtual ~DailyLevelNode();
    virtual ~DailyLevelNode();
    virtual ~DailyLevelNode();

    void onSkipLevel(cocos2d::CCObject*);
    void onClaimReward(cocos2d::CCObject*);
    void showSkipButton();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void updateTimeLabel(std::string);
    void init(GJGameLevel*, DailyLevelPage*, bool);
    void create(GJGameLevel*, DailyLevelPage*, bool);

};

#endif // DAILYLEVELNODE_H_
