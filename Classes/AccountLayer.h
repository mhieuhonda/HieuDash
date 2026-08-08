// ============================================================
// AccountLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ACCOUNTLAYER_H_
#define ACCOUNTLAYER_H_

#include "cocos2d.h"
#include <string>

class AccountLayer : public cocos2d::CCLayer {
public:
    virtual ~AccountLayer();
    virtual ~AccountLayer();
    virtual ~AccountLayer();

    void onRegister(cocos2d::CCObject*);
    void updatePage(bool);
    void customSetup();
    void layerHidden();
    void hideLoadingUI();
    void showLoadingUI();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void syncAccountFailed(BackupAccountError, int);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void backupAccountFailed(BackupAccountError, int);
    void syncAccountFinished();
    void accountStatusChanged();
    void backupAccountFinished();
    void create();
    void doSync();
    void onHelp(cocos2d::CCObject*);
    void onMore(cocos2d::CCObject*);
    void onSync(cocos2d::CCObject*);
    void onLogin(cocos2d::CCObject*);
    void doBackup();
    void onBackup(cocos2d::CCObject*);
    void toggleUI(bool);
    void exitLayer();

};

#endif // ACCOUNTLAYER_H_
