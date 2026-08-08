// ============================================================
// AccountHelpLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef ACCOUNTHELPLAYER_H_
#define ACCOUNTHELPLAYER_H_

#include "cocos2d.h"

class AccountHelpLayer {
public:
    virtual ~AccountHelpLayer();
    virtual ~AccountHelpLayer();
    virtual ~AccountHelpLayer();

    void updatePage();
    void customSetup();
    void layerHidden();
    void verifyUnlink();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onAccountManagement(cocos2d::CCObject*);
    void accountStatusChanged();
    void create();
    void doUnlink();
    void onUnlink(cocos2d::CCObject*);
    void exitLayer();
    void onReLogin(cocos2d::CCObject*);

};

#endif // ACCOUNTHELPLAYER_H_
