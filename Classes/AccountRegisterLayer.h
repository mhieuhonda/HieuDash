#ifndef HIEUDASH_ACCOUNTREGISTERLAYER_H_
#define HIEUDASH_ACCOUNTREGISTERLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account registration UI

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class AccountRegisterLayer : public FLAlertLayer {
public:
    AccountRegisterLayer();

    CCTextInputNode* m_pUsernameInput;
    CCTextInputNode* m_pPasswordInput;
    CCTextInputNode* m_pEmailInput;
    GJAccountRegisterDelegate* m_pDelegate;
    bool m_bRegistering;

    static AccountRegisterLayer* create(GJAccountRegisterDelegate*);
    bool init(GJAccountRegisterDelegate*);
    void onRegister(cocos2d::CCObject*);
    void registerAccount(std::string, std::string, std::string);
    void onClose(cocos2d::CCObject*);

    ~AccountRegisterLayer();
};

#endif // HIEUDASH_ACCOUNTREGISTERLAYER_H_
