// ============================================================
// SetIDPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETIDPOPUP_H_
#define SETIDPOPUP_H_

#include "cocos2d.h"
#include <string>

class SetIDPopup {
public:
    virtual ~SetIDPopup();
    virtual ~SetIDPopup();
    virtual ~SetIDPopup();

    void textChanged(CCTextInputNode*);
    void onResetValue(cocos2d::CCObject*);
    void valueChanged();
    void onItemIDArrow(cocos2d::CCObject*);
    void keyBackClicked();
    void textInputClosed(CCTextInputNode*);
    void updateTextInputLabel();
    void init(int, int, int, std::string, std::string, bool, int, float, bool, bool);
    void show();
    void create(int, int, int, std::string, std::string, bool, int, float, bool, bool);
    void onClose(cocos2d::CCObject*);
    void onCancel(cocos2d::CCObject*);

};

#endif // SETIDPOPUP_H_
