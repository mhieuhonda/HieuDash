// ============================================================
// ItemInfoPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef ITEMINFOPOPUP_H_
#define ITEMINFOPOPUP_H_

#include "cocos2d.h"

class ItemInfoPopup {
public:
    virtual ~ItemInfoPopup();
    virtual ~ItemInfoPopup();
    virtual ~ItemInfoPopup();

    void keyBackClicked();
    void nameForUnlockType(int, UnlockType);
    void isUnlockedByDefault(int, UnlockType);
    void init(int, UnlockType);
    void create(int, UnlockType);
    void onClose(cocos2d::CCObject*);
    void onCredit(cocos2d::CCObject*);

};

#endif // ITEMINFOPOPUP_H_
