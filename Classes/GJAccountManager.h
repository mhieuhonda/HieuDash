#ifndef HIEUDASH_GJACCOUNTMANAGER_H_
#define HIEUDASH_GJACCOUNTMANAGER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account session state manager

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountManager : public cocos2d::CCObject {
public:
    GJAccountManager();

    int m_nAccountID;
    std::string m_sUserName;
    std::string m_sPassword;
    std::string m_sGJP;
    int m_nPlayerIcon;
    bool m_bLoggedIn;
    GJAccountDelegate* m_pDelegate;

    static GJAccountManager* sharedState();
    bool init();
    void dataLoaded(DS_Dictionary*);
    void encodeDataTo(DS_Dictionary*);
    void loginAccount(std::string, std::string);
    void logoutAccount();
    bool isLoggedIn();
    int getAccountID();
    std::string getUserName();
    void setAccountID(int);
    void setUserName(std::string);
    void setPassword(std::string);

    ~GJAccountManager();
};

#endif // HIEUDASH_GJACCOUNTMANAGER_H_
