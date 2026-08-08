// ============================================================
// ChallengesPage.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CHALLENGESPAGE_H_
#define CHALLENGESPAGE_H_

#include "cocos2d.h"

class ChallengesPage {
public:
    virtual ~ChallengesPage();
    virtual ~ChallengesPage();
    virtual ~ChallengesPage();

    void updateDots();
    void updateTimers(float);
    void exitNodeAtSlot(int, float);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void currencyWillExit(CurrencyRewardLayer*);
    void tryGetChallenges();
    void createChallengeNode(int, bool, float, bool);
    void challengeStatusFailed();
    void challengeStatusFinished();
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onClose(cocos2d::CCObject*);
    void claimItem(ChallengeNode*, GJChallengeItem*, cocos2d::CCPoint);

};

#endif // CHALLENGESPAGE_H_
