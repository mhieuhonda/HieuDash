
#ifndef GJACCOUNTMANAGER_H_
#define GJACCOUNTMANAGER_H_

#include "cocos2d.h"
#include <string>

class GJAccountManager : public GManager {
public:
    virtual ~GJAccountManager();

    void dataLoaded(DS_Dictionary*);
    void firstSetup();
    void handleItND(cocos2d::CCNode*, void*);
    bool isDLActive(char const*);
    void getDLObject(char const*);
    GJAccountManager* sharedState();
    void syncAccount(std::string);
    void encodeDataTo(DS_Dictionary*);
    void loginAccount(std::string, std::string);
    void addDLToActive(char const*);
    void addDLToActive(char const*, cocos2d::CCObject*);
    void backupAccount(std::string);
    void linkToAccount(std::string, std::string, int, int);
    void getShaPassword(std::string);
    void handleItDelayed(bool, std::string, std::string, GJHttpType);
    void registerAccount(std::string, std::string, std::string);
    void getAccountSyncURL();
    void unlinkFromAccount();
    void ProcessHttpRequest(std::string, std::string, std::string, GJHttpType);
    void removeDLFromActive(char const*);
    void getAccountBackupURL();
    void updateAccountSettings(int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    void onSyncAccountCompleted(std::string, std::string);
    void onLoginAccountCompleted(std::string, std::string);
    void onBackupAccountCompleted(std::string, std::string);
    void onRegisterAccountCompleted(std::string, std::string);
    void onGetAccountSyncURLCompleted(std::string, std::string);
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetAccountBackupURLCompleted(std::string, std::string);
    void onUpdateAccountSettingsCompleted(std::string, std::string);
    bool init();
    void handleIt(bool, std::string, std::string, GJHttpType);

protected:
    int m_accountID;
    std::string m_playerName;
    std::string m_shaPassword;
    std::string m_udid;
    int m_userID;

};

#endif // GJACCOUNTMANAGER_H_
