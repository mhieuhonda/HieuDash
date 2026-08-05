#ifndef HIEUDASH_SECRETLAYER_H_
#define HIEUDASH_SECRETLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Promo code redemption layer

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class SecretLayer : public FLAlertLayer {
public:
    SecretLayer();

    CCTextInputNode* m_pCodeInput;
    bool m_bRedeeming;

    static SecretLayer* create();
    bool init();
    void onRedeem(cocos2d::CCObject*);
    void redeemCode(std::string);
    void onClose(cocos2d::CCObject*);

    ~SecretLayer();
};

#endif // HIEUDASH_SECRETLAYER_H_
