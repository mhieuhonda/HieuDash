// ============================================================
// StarInfoPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef STARINFOPOPUP_H_
#define STARINFOPOPUP_H_

#include "cocos2d.h"
#include <string>

class StarInfoPopup {
public:
    virtual ~StarInfoPopup();
    virtual ~StarInfoPopup();
    virtual ~StarInfoPopup();

    void keyBackClicked();
    void createFromString(std::string);
    void createFromStringMoons(std::string);
    void init(int, int, int, int, int, int, int, int, int, bool);
    void create(int, int, int, int, int, int, int, int, int, bool);
    void onClose(cocos2d::CCObject*);

};

#endif // STARINFOPOPUP_H_
