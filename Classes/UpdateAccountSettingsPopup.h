// ============================================================
// UpdateAccountSettingsPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef UPDATEACCOUNTSETTINGSPOPUP_H_
#define UPDATEACCOUNTSETTINGSPOPUP_H_

#include "cocos2d.h"
#include <string>

class UpdateAccountSettingsPopup {
public:
    virtual ~UpdateAccountSettingsPopup();
    virtual ~UpdateAccountSettingsPopup();
    virtual ~UpdateAccountSettingsPopup();

    void keyBackClicked();
    void updateSettingsFailed();
    void updateSettingsFinished();
    void init(GJAccountSettingsLayer*, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    void create(GJAccountSettingsLayer*, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    void onClose(cocos2d::CCObject*);

};

#endif // UPDATEACCOUNTSETTINGSPOPUP_H_
