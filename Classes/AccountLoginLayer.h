#ifndef HIEUDASH_ACCOUNTLOGINLAYER_H_
#define HIEUDASH_ACCOUNTLOGINLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account login UI

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class AccountLoginLayer : public FLAlertLayer {
public:
    AccountLoginLayer();

    CCTextInputNode* m_pUsernameInput;
    CCTextInputNode* m_pPasswordInput;
    GJAccountLoginDelegate* m_pDelegate;
    bool m_bLoggingIn;

    static AccountLoginLayer* create(GJAccountLoginDelegate*);
    bool init(GJAccountLoginDelegate*);
    void onLogin(cocos2d::CCObject*);
    void loginAccount(std::string, std::string);
    void onClose(cocos2d::CCObject*);

    ~AccountLoginLayer();
};

#endif // HIEUDASH_ACCOUNTLOGINLAYER_H_
