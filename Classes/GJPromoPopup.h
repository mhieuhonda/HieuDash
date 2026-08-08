// ============================================================
// GJPromoPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJPROMOPOPUP_H_
#define GJPROMOPOPUP_H_

#include "cocos2d.h"
#include <string>

class GJPromoPopup {
public:
    virtual ~GJPromoPopup();
    virtual ~GJPromoPopup();
    virtual ~GJPromoPopup();

    void keyBackClicked();
    void registerWithTouchDispatcher();
    void init(std::string);
    void show();
    void create(std::string);
    void onExit();
    void onClose(cocos2d::CCObject*);

};

#endif // GJPROMOPOPUP_H_
