#ifndef HIEUDASH_GJACCOUNTLOGINDELEGATE_H_
#define HIEUDASH_GJACCOUNTLOGINDELEGATE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Account login callback delegate

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJAccountLoginDelegate {
public:
    virtual ~GJAccountLoginDelegate() {}
    virtual void onLoginSuccess() {}
    virtual void onLoginFailed(AccountError) {}
};

#endif // HIEUDASH_GJACCOUNTLOGINDELEGATE_H_
