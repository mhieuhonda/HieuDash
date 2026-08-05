#ifndef HIEUDASH_ACCOUNTHELPLAYER_H_
#define HIEUDASH_ACCOUNTHELPLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account help layer

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class AccountHelpLayer : public FLAlertLayer {
public:
    AccountHelpLayer();

    static AccountHelpLayer* create();
    bool init();
    void onClose(cocos2d::CCObject*);

    ~AccountHelpLayer();
};

#endif // HIEUDASH_ACCOUNTHELPLAYER_H_
