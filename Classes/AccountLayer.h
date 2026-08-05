#ifndef HIEUDASH_ACCOUNTLAYER_H_
#define HIEUDASH_ACCOUNTLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account management layer

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "GJDropDownLayer.h"

class AccountLayer : public GJDropDownLayer {
public:
    AccountLayer();

    GJAccountManager* m_pAccountManager;
    bool m_bLoggedIn;
    cocos2d::CCSprite* m_pProfileIcon;

    static AccountLayer* create();
    bool init();
    void onLogin(cocos2d::CCObject*);
    void onRegister(cocos2d::CCObject*);
    void onHelp(cocos2d::CCObject*);
    void onLogout(cocos2d::CCObject*);
    void onSecret(cocos2d::CCObject*);
    void updateProfile();
    void updateLoginState();

    ~AccountLayer();
};

#endif // HIEUDASH_ACCOUNTLAYER_H_
